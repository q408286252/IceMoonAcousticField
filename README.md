IceMoon Acoustic Field (IMAF)Real-time, Low-Cost Acoustic Field Simulation for Dynamic Audio in Unreal Engine 5.6+⚠️ Dependency & Compilation WarningThis plugin relies on the author's internal utility library (IceMoonDataInterface) and other utility components. Therefore, external compilation is not supported, as the goal is to showcase the system design, core algorithms, and run-time performance optimization techniques.🚀 Core Value: Dynamic Acoustics for Runtime EnvironmentsTraditional baked acoustic solutions fail in dynamic scenes. IceMoon Acoustic Field (IMAF) provides a lightweight, dynamic, and integrated simulation system specifically designed to handle real-time changes in:Dynamic Sources: Character footsteps, projectiles, moving geometry.Moving Listeners: Player camera, VR headsets.Runtime Environment Changes: Destructible geometry and dynamic level components.IMAF prioritizes practical runtime performance and workflow simplicity over heavy acoustic middleware, focusing on the needs of real-world game production.✨ System Highlights✅ Low-Cost Dynamic Grid SystemMulti-LOD Sparse Grid: Uses 3 hierarchical grid layers with customizable multipliers (2x or 4x) for smooth or aggressive LOD transitions. Storage is sparse, allocating only for probed cells to minimize memory footprint.Z-Axis Clamping: Prevents acoustic contamination across floors by clamping the maximum cell height (Default: 4m).Adaptive Query & Probe:Async Probes: Sound-source driven sampling (AsyncFireProbes) using Fibonacci sphere distribution and asynchronous ray tracing (Static/Stationary geometry only).Multi-LOD Weighted Query: Combines all 3 LOD levels via weighted interpolation (50%/30%/20%) based on distance, time, and variance.Physical Material Mapping: Maps UE Physical Materials to custom data assets for per-surface Occlusion, Diffusion, and Dampening parameters.Adaptive State Machine: Optimizes CPU by switching update frequency based on source activity:Active (<3s): Per-frame update.Dormant (>10s): 1.0s interval update.🛠️ Installation & Setup (For Review/Audit)DependenciesUnreal Engine 5.5+C++ Project is required.Internal Dependencies (for full build): IceMoonDataInterface, IceMoonBlueprintGPUMathUtilitiesStepsClone this repository into your project's Plugins/ folder.Add the required dependency plugins (if available) to the appropriate locations.Regenerate Visual Studio project files and compile the module.🚀 Quick Start: How to Use the System1. Create Configuration AssetsAsset TypeDescriptionExample ContentMaterial Map (DA_IM_MaterialMap)Maps UE Physical Materials to acoustic properties.PM_Concrete: { Occlusion: 0.8, Diffusion: 0.3, ... }PM_Wood: { Occlusion: 0.5, Diffusion: 0.6, ... }Field Config (DA_IM_AcousticFieldConfig)Sets default reverb parameters and references the Material Map.(References Material Map; sets default Decay Time, etc.)2. Add the Acoustic Field ActorDrag the AIceMoonAcousticField Actor into the level and configure its spatial properties:ConfigAsset: Reference your created Field Config Asset.GridCellSize: Base size for LOD 0 (e.g., 200.0 cm).LodMultiplier: 2 (for interiors) or 4 (for exteriors).MaxCellHeightZ: Z-axis clamping height (e.g., 400.0 cm).bDebug: true to enable visualization of the grid and probes.3. Integrate with Sound Sources (Blueprints/C++)The system requires two steps: Firing Probes (Sampling the environment) and Querying (Getting parameters for audio).Blueprint Example (Character Footstep)1. GetAcousticFieldActor → AcousticField
2. GetSocketLocation "foot_l" → FootLocation

// --- Step 1: Fire Probes (Async) ---
3. AcousticField.AsyncFireProbes
    - Origin: FootLocation
    - NumTraces: 16 (sampling quality)
    - Radius: 2000.0 cm (sampling range)

// --- Step 2: Query Parameters (Smoothed) ---
4. AcousticField.QueryAcousticFieldSmooth
    - SourceObject: Self (to manage state)
    - SoundSlot: "FootL" (unique ID for the sound)
    - QueryLocation: FootLocation
    - SmoothSpeed: 3.0 s (Recommended for footsteps)
    → ReverbParameters (FIM_AudioReverbParameters)

5. Apply ReverbParameters to your Audio Component.
SmoothSpeed GuidelineUse Case3.0-5.0sDiscrete events (Footsteps, Impacts).0.5-1.0sContinuous loops (Engine sounds, Environmental loops).C++ ExampleC++// --- Firing Probes ---
AIceMoonAcousticField* Field = AIceMoonAcousticField::GetAcousticFieldActor(this);
if (Field) 
{
    FVector FootLocation = GetMesh()->GetSocketLocation(Foot);
    Field->AsyncFireProbes(FootLocation, 16, 2000.0f);
}

// --- Querying Parameters ---
FIM_AudioReverbParameters Reverb;
Field->QueryAcousticFieldSmooth(this, Foot, FootLocation, Reverb, 3.0f);

// Application logic follows...
ApplyReverbToFootstep(Reverb); 
📐 Core Concepts: Parameter CalculationThe system calculates various parameters based on probe hits, distance, and time:ParameterCalculation MethodPhysical MeaningWetEnclosure × Hit Rate × Uniformity × Wall EnhancementOverall Reverb StrengthDelay(Camera ↔ Reflection + Source ↔ Reflection) / Speed of SoundEarly Reflection Arrival Time (seconds)Decay$0.161 \times \text{Volume} / \text{Average Absorption}$RT60 Decay Time (seconds)DiffusionMaterial Scattering × 0.7 + Direction Variance × 0.3Surface Irregularity and Scattering🏎️ Performance ConsiderationsMemory UsagePer Cell: $\sim 140$ bytes (Sparse allocation).Medium Level (100m x 100m): $\sim 0.7-2.1$ MB.CPU Performance (Adaptive Tick + Query)Active State (Low Latency): Per-frame tick ($\sim 0.01$ms).Dormant State (Low Overhead): $1.0$ second interval update.Probe Firing: Asynchronous (non-blocking) on worker threads.Scalability SuggestionsScenarioGridCellSize (cm)LodMultiplierNumTracesTight Interior100216-24Open World40048-12📖 API ReferenceC++// Get the world singleton actor
AIceMoonAcousticField* GetAcousticFieldActor(UObject* WorldContextObject);

// Fire probes (Asynchronous, non-blocking)
void AsyncFireProbes(FVector Origin, int32 NumTraces = 16, float Radius = 2000.0f, ...);

// Smooth query (Recommended for footsteps/discrete events)
bool QueryAcousticFieldSmooth(
    UObject* SourceObject,
    FName SoundSlot,
    FVector QueryLocation,
    FIM_AudioReverbParameters& OutResponse,
    float SmoothSpeed = 3.0f
);
IceMoon Acoustic Field (IMAF)适用于 Unreal Engine 5.6+ 动态音频的实时、低成本声学场模拟系统⚠️ 依赖与编译警告本插件依赖于作者的个人内部库 (IceMoonDataInterface) 和其他实用组件。因此，本插件无法在外部环境中编译。 公开的主要目的是展示核心的声学场算法、系统设计和运行时性能优化技术，而非提供即插即用的发行版本。🚀 核心价值：为运行时环境设计的动态声学传统的烘焙声学方案无法有效响应运行时环境变化。IceMoon Acoustic Field (IMAF) 提供轻量级、动态、易集成的声学模拟系统，专门为以下场景设计，以处理实时变化：动态声源： 角色脚步、抛射物、动态物体。移动的听者： 玩家相机、VR 头戴设备。运行时环境变化： 可破坏几何体和动态关卡组件。IMAF 专注于实用的运行时性能和工作流简洁性，而非重量级声学中间件，以满足实际游戏项目对动态环境的声学需求。✨ 系统亮点✅ 低成本动态网格系统多 LOD 稀疏网格： 采用 3 层分层网格，可配置倍增器（2x 或 4x）实现平滑或激进的 LOD 过渡。存储稀疏化，仅分配有探针数据的单元格，最小化内存占用。Z 轴高度钳制： 通过钳制最大单元格高度（默认：4m），有效防止跨楼层声学污染。自适应查询与发射：异步探针发射： 由声源驱动采样（AsyncFireProbes），使用斐波那契球均匀分布，异步射线检测仅针对静态/固定几何体。多 LOD 加权查询： 结合 3 个 LOD 层级，通过加权插值（50%/30%/20%）基于距离、时间和方差进行组合。物理材质映射： 通过数据资产，将 UE 物理材质映射到定制的每表面遮蔽 (Occlusion)、扩散 (Diffusion) 和阻尼 (Dampening) 参数。自适应状态机： 根据声音活动状态自动调整更新频率，优化 CPU 开销：活跃 (<3s)：每帧更新。休眠 (>10s)：1.0s 间隔更新。🛠️ 安装与设置 (供审查/审计)依赖Unreal Engine 5.5+C++ 项目内部依赖 (用于完整构建)：IceMoonDataInterface、IceMoonBlueprintGPUMathUtilities步骤将此仓库克隆到您的项目 Plugins/ 文件夹中。将所需的依赖插件添加到相应位置（如果可用）。重新生成 Visual Studio 项目文件并编译模块。🚀 快速开始：如何使用系统1. 创建配置资产资产类型描述示例内容材质库 (DA_IM_MaterialMap)映射 UE 物理材质到声学属性。PM_Concrete: { 遮蔽: 0.8, 扩散: 0.3, ... }PM_Wood: { 遮蔽: 0.5, 扩散: 0.6, ... }声场配置 (DA_IM_AcousticFieldConfig)设置默认混响参数并引用材质库。(引用材质库；设置默认衰减时间等)2. 添加声场 Actor拖拽 AIceMoonAcousticField Actor 到关卡，并配置其空间属性：ConfigAsset： 引用您创建的声场配置资产。GridCellSize： LOD 0 的基础单元格尺寸（例如 200.0 cm）。LodMultiplier： 2（室内）或 4（室外）。MaxCellHeightZ： Z 轴钳制高度（例如 400.0 cm）。bDebug： true 启用网格和探针的可视化。3. 与声源集成 (蓝图/C++)系统需要两个步骤：发射探针（采样环境）和查询（获取音频参数）。蓝图示例 (角色脚步)1. GetAcousticFieldActor → AcousticField
2. GetSocketLocation "foot_l" → FootLocation

// --- 步骤 1: 异步发射探针 (Async) ---
3. AcousticField.AsyncFireProbes
    - Origin: FootLocation
    - NumTraces: 16 (采样质量)
    - Radius: 2000.0 cm (采样范围)

// --- 步骤 2: 平滑查询参数 (Smoothed) ---
4. AcousticField.QueryAcousticFieldSmooth
    - SourceObject: Self (用于管理状态)
    - SoundSlot: "FootL" (声音的唯一 ID)
    - QueryLocation: FootLocation
    - SmoothSpeed: 3.0 s (推荐用于脚步)
    → ReverbParameters (FIM_AudioReverbParameters)

5. 应用 ReverbParameters 到您的音频组件。
SmoothSpeed 指南使用场景3.0-5.0s离散事件（脚步、冲击）。0.5-1.0s连续循环（环境音、引擎声）。C++ 示例C++// --- 发射探针 ---
AIceMoonAcousticField* Field = AIceMoonAcousticField::GetAcousticFieldActor(this);
if (Field) 
{
    FVector FootLocation = GetMesh()->GetSocketLocation(Foot);
    Field->AsyncFireProbes(FootLocation, 16, 2000.0f);
}

// --- 查询参数 ---
FIM_AudioReverbParameters Reverb;
Field->QueryAcousticFieldSmooth(this, Foot, FootLocation, Reverb, 3.0f);

// 应用逻辑如下...
ApplyReverbToFootstep(Reverb); 
📐 核心概念：参数计算系统根据探针命中、距离和时间计算各种参数：参数计算方法物理意义Wet封闭度 × 命中率 × 均匀性 × 靠墙增强混响强度Delay(相机↔反射 + 声源↔反射) / 声速早期反射到达时间（秒）Decay$0.161 \times \text{体积} / \text{平均吸收}$RT60 衰减时间（秒）Diffusion材质散射 × 0.7 + 方向方差 × 0.3表面不规则性和散射🏎️ 性能考虑内存使用每单元格： $\sim 140$ 字节 (稀疏分配)。中等关卡 (100m x 100m)： $\sim 0.7-2.1$ MB。CPU 性能 (自适应 Tick + 查询)活跃状态 (低延迟)： 每帧 Tick ($\sim 0.01$ms)。休眠状态 (低开销)： $1.0$ 秒间隔更新。探针发射： 异步（非阻塞）工作线程。可扩展性建议场景GridCellSize (cm)LodMultiplierNumTraces狭窄室内100216-24开放世界40048-12📖 API 参考C++// 获取世界单例
AIceMoonAcousticField* GetAcousticFieldActor(UObject* WorldContextObject);

// 发射探针（异步，非阻塞）
void AsyncFireProbes(FVector Origin, int32 NumTraces = 16, float Radius = 2000.0f, ...);

// 平滑查询（推荐用于离散事件）
bool QueryAcousticFieldSmooth(
    UObject* SourceObject,
    FName SoundSlot,
    FVector QueryLocation,
    FIM_AudioReverbParameters& OutResponse,
    float SmoothSpeed = 3.0f
);
📜 许可证与维护本项目使用 BSD 3-Clause 许可 免费提供。本项目不接受任何功能请求或增强 Issues，相关 Issues 将被自动关闭。Issues 区严格用于报告引擎兼容性问题或关键 Bug。提交 PR 的贡献者，其名字将被加入插件的 Credits.md 文件中。如果您在商业项目中使用本插件，感谢您在游戏致谢名单中提及 IceMoon 贡献。Made with ❄️ by IceMoon | UE 5.6+ | BSD 3-Clause
