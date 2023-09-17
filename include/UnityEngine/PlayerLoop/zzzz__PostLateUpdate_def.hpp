#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace {
// Forward declare root types
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__PostLateUpdate__BatchModeUpdate;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__PostLateUpdate__ClearImmediateRenderers;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__PostLateUpdate__DirectorLateUpdate;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__PostLateUpdate__DirectorRenderImage;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__PostLateUpdate__EndGraphicsJobsAfterScriptLateUpdate;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__PostLateUpdate__EnlightenRuntimeUpdate;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__PostLateUpdate__ExecuteGameCenterCallbacks;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__PostLateUpdate__FinishFrameRendering;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__PostLateUpdate__GUIClearEvents;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__PostLateUpdate__GraphicsWarmupPreloadedShaders;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__PostLateUpdate__InputEndFrame;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__PostLateUpdate__MemoryFrameMaintenance;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__PostLateUpdate__ParticleSystemEndUpdateAll;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__PostLateUpdate__PhysicsSkinnedClothBeginUpdate;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__PostLateUpdate__PhysicsSkinnedClothFinishUpdate;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__PostLateUpdate__PlayerEmitCanvasGeometry;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__PostLateUpdate__PlayerSendFrameComplete;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__PostLateUpdate__PlayerSendFramePostPresent;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__PostLateUpdate__PlayerSendFrameStarted;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__PostLateUpdate__PlayerUpdateCanvases;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__PostLateUpdate__PresentAfterDraw;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__PostLateUpdate__ProcessWebSendMessages;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__PostLateUpdate__ProfilerEndFrame;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__PostLateUpdate__ProfilerSynchronizeStats;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__PostLateUpdate__ResetInputAxis;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__PostLateUpdate__ScriptRunDelayedDynamicFrameRate;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__PostLateUpdate__ShaderHandleErrors;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__PostLateUpdate__SortingGroupsUpdate;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__PostLateUpdate__ThreadedLoadingDebug;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__PostLateUpdate__TriggerEndOfFrameCallbacks;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateAllRenderers;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateAllSkinnedMeshes;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateAudio;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateCanvasRectTransform;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateCaptureScreenshot;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateCustomRenderTextures;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateLightProbeProxyVolumes;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateRectTransform;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateResolution;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateSubstance;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateVideo;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateVideoTextures;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__PostLateUpdate__VFXUpdate;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__PostLateUpdate__XRPostLateUpdate;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__PostLateUpdate__XRPostPresent;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__PostLateUpdate__XRPreEndFrame;
}
// Type: ::PlayerSendFrameStarted
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10497))
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate::PlayerSendFrameStarted
struct CORDL_TYPE ____UnityEngine__PlayerLoop__PostLateUpdate__PlayerSendFrameStarted : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__PlayerSendFrameStarted(____UnityEngine__PlayerLoop__PostLateUpdate__PlayerSendFrameStarted const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__PlayerSendFrameStarted(____UnityEngine__PlayerLoop__PostLateUpdate__PlayerSendFrameStarted&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__PlayerSendFrameStarted& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__PlayerSendFrameStarted const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__PlayerSendFrameStarted& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__PlayerSendFrameStarted&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__PostLateUpdate__PlayerSendFrameStarted(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::UpdateRectTransform
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10498))
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate::UpdateRectTransform
struct CORDL_TYPE ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateRectTransform : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateRectTransform(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateRectTransform const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateRectTransform(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateRectTransform&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateRectTransform& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateRectTransform const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateRectTransform& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateRectTransform&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateRectTransform(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::UpdateCanvasRectTransform
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10499))
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate::UpdateCanvasRectTransform
struct CORDL_TYPE ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateCanvasRectTransform : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateCanvasRectTransform(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateCanvasRectTransform const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateCanvasRectTransform(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateCanvasRectTransform&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateCanvasRectTransform& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateCanvasRectTransform const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateCanvasRectTransform& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateCanvasRectTransform&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateCanvasRectTransform(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::PlayerUpdateCanvases
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10500))
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate::PlayerUpdateCanvases
struct CORDL_TYPE ____UnityEngine__PlayerLoop__PostLateUpdate__PlayerUpdateCanvases : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__PlayerUpdateCanvases(____UnityEngine__PlayerLoop__PostLateUpdate__PlayerUpdateCanvases const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__PlayerUpdateCanvases(____UnityEngine__PlayerLoop__PostLateUpdate__PlayerUpdateCanvases&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__PlayerUpdateCanvases& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__PlayerUpdateCanvases const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__PlayerUpdateCanvases& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__PlayerUpdateCanvases&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__PostLateUpdate__PlayerUpdateCanvases(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::UpdateAudio
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10501))
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate::UpdateAudio
struct CORDL_TYPE ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateAudio : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateAudio(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateAudio const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateAudio(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateAudio&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateAudio& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateAudio const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateAudio& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateAudio&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateAudio(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::UpdateVideo
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10502))
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate::UpdateVideo
struct CORDL_TYPE ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateVideo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateVideo(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateVideo const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateVideo(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateVideo&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateVideo& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateVideo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateVideo& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateVideo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateVideo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::DirectorLateUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10503))
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate::DirectorLateUpdate
struct CORDL_TYPE ____UnityEngine__PlayerLoop__PostLateUpdate__DirectorLateUpdate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__DirectorLateUpdate(____UnityEngine__PlayerLoop__PostLateUpdate__DirectorLateUpdate const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__DirectorLateUpdate(____UnityEngine__PlayerLoop__PostLateUpdate__DirectorLateUpdate&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__DirectorLateUpdate& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__DirectorLateUpdate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__DirectorLateUpdate& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__DirectorLateUpdate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__PostLateUpdate__DirectorLateUpdate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::ScriptRunDelayedDynamicFrameRate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10504))
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate::ScriptRunDelayedDynamicFrameRate
struct CORDL_TYPE ____UnityEngine__PlayerLoop__PostLateUpdate__ScriptRunDelayedDynamicFrameRate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__ScriptRunDelayedDynamicFrameRate(____UnityEngine__PlayerLoop__PostLateUpdate__ScriptRunDelayedDynamicFrameRate const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__ScriptRunDelayedDynamicFrameRate(____UnityEngine__PlayerLoop__PostLateUpdate__ScriptRunDelayedDynamicFrameRate&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__ScriptRunDelayedDynamicFrameRate& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__ScriptRunDelayedDynamicFrameRate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__ScriptRunDelayedDynamicFrameRate& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__ScriptRunDelayedDynamicFrameRate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__PostLateUpdate__ScriptRunDelayedDynamicFrameRate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::VFXUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10505))
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate::VFXUpdate
struct CORDL_TYPE ____UnityEngine__PlayerLoop__PostLateUpdate__VFXUpdate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__VFXUpdate(____UnityEngine__PlayerLoop__PostLateUpdate__VFXUpdate const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__VFXUpdate(____UnityEngine__PlayerLoop__PostLateUpdate__VFXUpdate&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__VFXUpdate& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__VFXUpdate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__VFXUpdate& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__VFXUpdate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__PostLateUpdate__VFXUpdate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::ParticleSystemEndUpdateAll
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10506))
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate::ParticleSystemEndUpdateAll
struct CORDL_TYPE ____UnityEngine__PlayerLoop__PostLateUpdate__ParticleSystemEndUpdateAll : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__ParticleSystemEndUpdateAll(____UnityEngine__PlayerLoop__PostLateUpdate__ParticleSystemEndUpdateAll const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__ParticleSystemEndUpdateAll(____UnityEngine__PlayerLoop__PostLateUpdate__ParticleSystemEndUpdateAll&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__ParticleSystemEndUpdateAll& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__ParticleSystemEndUpdateAll const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__ParticleSystemEndUpdateAll& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__ParticleSystemEndUpdateAll&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__PostLateUpdate__ParticleSystemEndUpdateAll(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::EndGraphicsJobsAfterScriptLateUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10507))
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate::EndGraphicsJobsAfterScriptLateUpdate
struct CORDL_TYPE ____UnityEngine__PlayerLoop__PostLateUpdate__EndGraphicsJobsAfterScriptLateUpdate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__EndGraphicsJobsAfterScriptLateUpdate(____UnityEngine__PlayerLoop__PostLateUpdate__EndGraphicsJobsAfterScriptLateUpdate const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__EndGraphicsJobsAfterScriptLateUpdate(____UnityEngine__PlayerLoop__PostLateUpdate__EndGraphicsJobsAfterScriptLateUpdate&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__EndGraphicsJobsAfterScriptLateUpdate& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__EndGraphicsJobsAfterScriptLateUpdate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__EndGraphicsJobsAfterScriptLateUpdate& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__EndGraphicsJobsAfterScriptLateUpdate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__PostLateUpdate__EndGraphicsJobsAfterScriptLateUpdate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::UpdateSubstance
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10508))
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate::UpdateSubstance
struct CORDL_TYPE ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateSubstance : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateSubstance(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateSubstance const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateSubstance(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateSubstance&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateSubstance& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateSubstance const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateSubstance& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateSubstance&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateSubstance(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::UpdateCustomRenderTextures
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10509))
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate::UpdateCustomRenderTextures
struct CORDL_TYPE ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateCustomRenderTextures : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateCustomRenderTextures(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateCustomRenderTextures const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateCustomRenderTextures(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateCustomRenderTextures&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateCustomRenderTextures& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateCustomRenderTextures const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateCustomRenderTextures& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateCustomRenderTextures&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateCustomRenderTextures(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::XRPostLateUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10510))
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate::XRPostLateUpdate
struct CORDL_TYPE ____UnityEngine__PlayerLoop__PostLateUpdate__XRPostLateUpdate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__XRPostLateUpdate(____UnityEngine__PlayerLoop__PostLateUpdate__XRPostLateUpdate const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__XRPostLateUpdate(____UnityEngine__PlayerLoop__PostLateUpdate__XRPostLateUpdate&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__XRPostLateUpdate& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__XRPostLateUpdate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__XRPostLateUpdate& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__XRPostLateUpdate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__PostLateUpdate__XRPostLateUpdate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::UpdateAllRenderers
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10511))
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate::UpdateAllRenderers
struct CORDL_TYPE ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateAllRenderers : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateAllRenderers(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateAllRenderers const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateAllRenderers(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateAllRenderers&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateAllRenderers& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateAllRenderers const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateAllRenderers& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateAllRenderers&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateAllRenderers(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::UpdateLightProbeProxyVolumes
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10512))
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate::UpdateLightProbeProxyVolumes
struct CORDL_TYPE ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateLightProbeProxyVolumes : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateLightProbeProxyVolumes(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateLightProbeProxyVolumes const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateLightProbeProxyVolumes(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateLightProbeProxyVolumes&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateLightProbeProxyVolumes& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateLightProbeProxyVolumes const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateLightProbeProxyVolumes& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateLightProbeProxyVolumes&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateLightProbeProxyVolumes(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::EnlightenRuntimeUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10513))
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate::EnlightenRuntimeUpdate
struct CORDL_TYPE ____UnityEngine__PlayerLoop__PostLateUpdate__EnlightenRuntimeUpdate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__EnlightenRuntimeUpdate(____UnityEngine__PlayerLoop__PostLateUpdate__EnlightenRuntimeUpdate const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__EnlightenRuntimeUpdate(____UnityEngine__PlayerLoop__PostLateUpdate__EnlightenRuntimeUpdate&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__EnlightenRuntimeUpdate& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__EnlightenRuntimeUpdate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__EnlightenRuntimeUpdate& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__EnlightenRuntimeUpdate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__PostLateUpdate__EnlightenRuntimeUpdate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::UpdateAllSkinnedMeshes
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10514))
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate::UpdateAllSkinnedMeshes
struct CORDL_TYPE ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateAllSkinnedMeshes : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateAllSkinnedMeshes(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateAllSkinnedMeshes const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateAllSkinnedMeshes(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateAllSkinnedMeshes&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateAllSkinnedMeshes& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateAllSkinnedMeshes const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateAllSkinnedMeshes& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateAllSkinnedMeshes&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateAllSkinnedMeshes(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::ProcessWebSendMessages
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10515))
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate::ProcessWebSendMessages
struct CORDL_TYPE ____UnityEngine__PlayerLoop__PostLateUpdate__ProcessWebSendMessages : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__ProcessWebSendMessages(____UnityEngine__PlayerLoop__PostLateUpdate__ProcessWebSendMessages const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__ProcessWebSendMessages(____UnityEngine__PlayerLoop__PostLateUpdate__ProcessWebSendMessages&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__ProcessWebSendMessages& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__ProcessWebSendMessages const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__ProcessWebSendMessages& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__ProcessWebSendMessages&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__PostLateUpdate__ProcessWebSendMessages(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::SortingGroupsUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10516))
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate::SortingGroupsUpdate
struct CORDL_TYPE ____UnityEngine__PlayerLoop__PostLateUpdate__SortingGroupsUpdate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__SortingGroupsUpdate(____UnityEngine__PlayerLoop__PostLateUpdate__SortingGroupsUpdate const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__SortingGroupsUpdate(____UnityEngine__PlayerLoop__PostLateUpdate__SortingGroupsUpdate&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__SortingGroupsUpdate& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__SortingGroupsUpdate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__SortingGroupsUpdate& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__SortingGroupsUpdate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__PostLateUpdate__SortingGroupsUpdate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::UpdateVideoTextures
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10517))
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate::UpdateVideoTextures
struct CORDL_TYPE ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateVideoTextures : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateVideoTextures(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateVideoTextures const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateVideoTextures(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateVideoTextures&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateVideoTextures& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateVideoTextures const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateVideoTextures& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateVideoTextures&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateVideoTextures(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::DirectorRenderImage
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10518))
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate::DirectorRenderImage
struct CORDL_TYPE ____UnityEngine__PlayerLoop__PostLateUpdate__DirectorRenderImage : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__DirectorRenderImage(____UnityEngine__PlayerLoop__PostLateUpdate__DirectorRenderImage const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__DirectorRenderImage(____UnityEngine__PlayerLoop__PostLateUpdate__DirectorRenderImage&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__DirectorRenderImage& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__DirectorRenderImage const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__DirectorRenderImage& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__DirectorRenderImage&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__PostLateUpdate__DirectorRenderImage(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::PlayerEmitCanvasGeometry
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10519))
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate::PlayerEmitCanvasGeometry
struct CORDL_TYPE ____UnityEngine__PlayerLoop__PostLateUpdate__PlayerEmitCanvasGeometry : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__PlayerEmitCanvasGeometry(____UnityEngine__PlayerLoop__PostLateUpdate__PlayerEmitCanvasGeometry const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__PlayerEmitCanvasGeometry(____UnityEngine__PlayerLoop__PostLateUpdate__PlayerEmitCanvasGeometry&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__PlayerEmitCanvasGeometry& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__PlayerEmitCanvasGeometry const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__PlayerEmitCanvasGeometry& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__PlayerEmitCanvasGeometry&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__PostLateUpdate__PlayerEmitCanvasGeometry(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::FinishFrameRendering
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10520))
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate::FinishFrameRendering
struct CORDL_TYPE ____UnityEngine__PlayerLoop__PostLateUpdate__FinishFrameRendering : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__FinishFrameRendering(____UnityEngine__PlayerLoop__PostLateUpdate__FinishFrameRendering const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__FinishFrameRendering(____UnityEngine__PlayerLoop__PostLateUpdate__FinishFrameRendering&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__FinishFrameRendering& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__FinishFrameRendering const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__FinishFrameRendering& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__FinishFrameRendering&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__PostLateUpdate__FinishFrameRendering(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::BatchModeUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10521))
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate::BatchModeUpdate
struct CORDL_TYPE ____UnityEngine__PlayerLoop__PostLateUpdate__BatchModeUpdate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__BatchModeUpdate(____UnityEngine__PlayerLoop__PostLateUpdate__BatchModeUpdate const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__BatchModeUpdate(____UnityEngine__PlayerLoop__PostLateUpdate__BatchModeUpdate&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__BatchModeUpdate& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__BatchModeUpdate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__BatchModeUpdate& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__BatchModeUpdate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__PostLateUpdate__BatchModeUpdate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::PlayerSendFrameComplete
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10522))
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate::PlayerSendFrameComplete
struct CORDL_TYPE ____UnityEngine__PlayerLoop__PostLateUpdate__PlayerSendFrameComplete : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__PlayerSendFrameComplete(____UnityEngine__PlayerLoop__PostLateUpdate__PlayerSendFrameComplete const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__PlayerSendFrameComplete(____UnityEngine__PlayerLoop__PostLateUpdate__PlayerSendFrameComplete&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__PlayerSendFrameComplete& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__PlayerSendFrameComplete const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__PlayerSendFrameComplete& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__PlayerSendFrameComplete&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__PostLateUpdate__PlayerSendFrameComplete(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::UpdateCaptureScreenshot
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10523))
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate::UpdateCaptureScreenshot
struct CORDL_TYPE ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateCaptureScreenshot : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateCaptureScreenshot(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateCaptureScreenshot const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateCaptureScreenshot(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateCaptureScreenshot&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateCaptureScreenshot& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateCaptureScreenshot const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateCaptureScreenshot& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateCaptureScreenshot&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateCaptureScreenshot(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::PresentAfterDraw
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10524))
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate::PresentAfterDraw
struct CORDL_TYPE ____UnityEngine__PlayerLoop__PostLateUpdate__PresentAfterDraw : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__PresentAfterDraw(____UnityEngine__PlayerLoop__PostLateUpdate__PresentAfterDraw const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__PresentAfterDraw(____UnityEngine__PlayerLoop__PostLateUpdate__PresentAfterDraw&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__PresentAfterDraw& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__PresentAfterDraw const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__PresentAfterDraw& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__PresentAfterDraw&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__PostLateUpdate__PresentAfterDraw(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::ClearImmediateRenderers
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10525))
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate::ClearImmediateRenderers
struct CORDL_TYPE ____UnityEngine__PlayerLoop__PostLateUpdate__ClearImmediateRenderers : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__ClearImmediateRenderers(____UnityEngine__PlayerLoop__PostLateUpdate__ClearImmediateRenderers const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__ClearImmediateRenderers(____UnityEngine__PlayerLoop__PostLateUpdate__ClearImmediateRenderers&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__ClearImmediateRenderers& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__ClearImmediateRenderers const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__ClearImmediateRenderers& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__ClearImmediateRenderers&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__PostLateUpdate__ClearImmediateRenderers(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::XRPostPresent
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10526))
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate::XRPostPresent
struct CORDL_TYPE ____UnityEngine__PlayerLoop__PostLateUpdate__XRPostPresent : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__XRPostPresent(____UnityEngine__PlayerLoop__PostLateUpdate__XRPostPresent const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__XRPostPresent(____UnityEngine__PlayerLoop__PostLateUpdate__XRPostPresent&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__XRPostPresent& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__XRPostPresent const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__XRPostPresent& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__XRPostPresent&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__PostLateUpdate__XRPostPresent(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::UpdateResolution
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10527))
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate::UpdateResolution
struct CORDL_TYPE ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateResolution : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateResolution(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateResolution const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateResolution(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateResolution&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateResolution& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateResolution const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateResolution& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__UpdateResolution&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__PostLateUpdate__UpdateResolution(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::InputEndFrame
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10528))
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate::InputEndFrame
struct CORDL_TYPE ____UnityEngine__PlayerLoop__PostLateUpdate__InputEndFrame : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__InputEndFrame(____UnityEngine__PlayerLoop__PostLateUpdate__InputEndFrame const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__InputEndFrame(____UnityEngine__PlayerLoop__PostLateUpdate__InputEndFrame&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__InputEndFrame& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__InputEndFrame const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__InputEndFrame& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__InputEndFrame&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__PostLateUpdate__InputEndFrame(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::GUIClearEvents
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10529))
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate::GUIClearEvents
struct CORDL_TYPE ____UnityEngine__PlayerLoop__PostLateUpdate__GUIClearEvents : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__GUIClearEvents(____UnityEngine__PlayerLoop__PostLateUpdate__GUIClearEvents const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__GUIClearEvents(____UnityEngine__PlayerLoop__PostLateUpdate__GUIClearEvents&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__GUIClearEvents& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__GUIClearEvents const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__GUIClearEvents& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__GUIClearEvents&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__PostLateUpdate__GUIClearEvents(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::ShaderHandleErrors
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10530))
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate::ShaderHandleErrors
struct CORDL_TYPE ____UnityEngine__PlayerLoop__PostLateUpdate__ShaderHandleErrors : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__ShaderHandleErrors(____UnityEngine__PlayerLoop__PostLateUpdate__ShaderHandleErrors const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__ShaderHandleErrors(____UnityEngine__PlayerLoop__PostLateUpdate__ShaderHandleErrors&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__ShaderHandleErrors& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__ShaderHandleErrors const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__ShaderHandleErrors& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__ShaderHandleErrors&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__PostLateUpdate__ShaderHandleErrors(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::ResetInputAxis
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10531))
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate::ResetInputAxis
struct CORDL_TYPE ____UnityEngine__PlayerLoop__PostLateUpdate__ResetInputAxis : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__ResetInputAxis(____UnityEngine__PlayerLoop__PostLateUpdate__ResetInputAxis const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__ResetInputAxis(____UnityEngine__PlayerLoop__PostLateUpdate__ResetInputAxis&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__ResetInputAxis& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__ResetInputAxis const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__ResetInputAxis& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__ResetInputAxis&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__PostLateUpdate__ResetInputAxis(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::ThreadedLoadingDebug
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10532))
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate::ThreadedLoadingDebug
struct CORDL_TYPE ____UnityEngine__PlayerLoop__PostLateUpdate__ThreadedLoadingDebug : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__ThreadedLoadingDebug(____UnityEngine__PlayerLoop__PostLateUpdate__ThreadedLoadingDebug const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__ThreadedLoadingDebug(____UnityEngine__PlayerLoop__PostLateUpdate__ThreadedLoadingDebug&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__ThreadedLoadingDebug& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__ThreadedLoadingDebug const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__ThreadedLoadingDebug& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__ThreadedLoadingDebug&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__PostLateUpdate__ThreadedLoadingDebug(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::ProfilerSynchronizeStats
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10533))
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate::ProfilerSynchronizeStats
struct CORDL_TYPE ____UnityEngine__PlayerLoop__PostLateUpdate__ProfilerSynchronizeStats : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__ProfilerSynchronizeStats(____UnityEngine__PlayerLoop__PostLateUpdate__ProfilerSynchronizeStats const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__ProfilerSynchronizeStats(____UnityEngine__PlayerLoop__PostLateUpdate__ProfilerSynchronizeStats&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__ProfilerSynchronizeStats& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__ProfilerSynchronizeStats const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__ProfilerSynchronizeStats& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__ProfilerSynchronizeStats&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__PostLateUpdate__ProfilerSynchronizeStats(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::MemoryFrameMaintenance
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10534))
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate::MemoryFrameMaintenance
struct CORDL_TYPE ____UnityEngine__PlayerLoop__PostLateUpdate__MemoryFrameMaintenance : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__MemoryFrameMaintenance(____UnityEngine__PlayerLoop__PostLateUpdate__MemoryFrameMaintenance const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__MemoryFrameMaintenance(____UnityEngine__PlayerLoop__PostLateUpdate__MemoryFrameMaintenance&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__MemoryFrameMaintenance& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__MemoryFrameMaintenance const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__MemoryFrameMaintenance& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__MemoryFrameMaintenance&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__PostLateUpdate__MemoryFrameMaintenance(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::ExecuteGameCenterCallbacks
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10535))
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate::ExecuteGameCenterCallbacks
struct CORDL_TYPE ____UnityEngine__PlayerLoop__PostLateUpdate__ExecuteGameCenterCallbacks : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__ExecuteGameCenterCallbacks(____UnityEngine__PlayerLoop__PostLateUpdate__ExecuteGameCenterCallbacks const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__ExecuteGameCenterCallbacks(____UnityEngine__PlayerLoop__PostLateUpdate__ExecuteGameCenterCallbacks&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__ExecuteGameCenterCallbacks& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__ExecuteGameCenterCallbacks const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__ExecuteGameCenterCallbacks& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__ExecuteGameCenterCallbacks&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__PostLateUpdate__ExecuteGameCenterCallbacks(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::XRPreEndFrame
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10536))
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate::XRPreEndFrame
struct CORDL_TYPE ____UnityEngine__PlayerLoop__PostLateUpdate__XRPreEndFrame : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__XRPreEndFrame(____UnityEngine__PlayerLoop__PostLateUpdate__XRPreEndFrame const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__XRPreEndFrame(____UnityEngine__PlayerLoop__PostLateUpdate__XRPreEndFrame&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__XRPreEndFrame& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__XRPreEndFrame const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__XRPreEndFrame& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__XRPreEndFrame&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__PostLateUpdate__XRPreEndFrame(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::ProfilerEndFrame
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10537))
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate::ProfilerEndFrame
struct CORDL_TYPE ____UnityEngine__PlayerLoop__PostLateUpdate__ProfilerEndFrame : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__ProfilerEndFrame(____UnityEngine__PlayerLoop__PostLateUpdate__ProfilerEndFrame const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__ProfilerEndFrame(____UnityEngine__PlayerLoop__PostLateUpdate__ProfilerEndFrame&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__ProfilerEndFrame& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__ProfilerEndFrame const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__ProfilerEndFrame& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__ProfilerEndFrame&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__PostLateUpdate__ProfilerEndFrame(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::GraphicsWarmupPreloadedShaders
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10538))
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate::GraphicsWarmupPreloadedShaders
struct CORDL_TYPE ____UnityEngine__PlayerLoop__PostLateUpdate__GraphicsWarmupPreloadedShaders : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__GraphicsWarmupPreloadedShaders(____UnityEngine__PlayerLoop__PostLateUpdate__GraphicsWarmupPreloadedShaders const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__GraphicsWarmupPreloadedShaders(____UnityEngine__PlayerLoop__PostLateUpdate__GraphicsWarmupPreloadedShaders&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__GraphicsWarmupPreloadedShaders& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__GraphicsWarmupPreloadedShaders const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__GraphicsWarmupPreloadedShaders& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__GraphicsWarmupPreloadedShaders&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__PostLateUpdate__GraphicsWarmupPreloadedShaders(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::PlayerSendFramePostPresent
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10539))
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate::PlayerSendFramePostPresent
struct CORDL_TYPE ____UnityEngine__PlayerLoop__PostLateUpdate__PlayerSendFramePostPresent : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__PlayerSendFramePostPresent(____UnityEngine__PlayerLoop__PostLateUpdate__PlayerSendFramePostPresent const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__PlayerSendFramePostPresent(____UnityEngine__PlayerLoop__PostLateUpdate__PlayerSendFramePostPresent&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__PlayerSendFramePostPresent& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__PlayerSendFramePostPresent const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__PlayerSendFramePostPresent& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__PlayerSendFramePostPresent&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__PostLateUpdate__PlayerSendFramePostPresent(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::PhysicsSkinnedClothBeginUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10540))
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate::PhysicsSkinnedClothBeginUpdate
struct CORDL_TYPE ____UnityEngine__PlayerLoop__PostLateUpdate__PhysicsSkinnedClothBeginUpdate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__PhysicsSkinnedClothBeginUpdate(____UnityEngine__PlayerLoop__PostLateUpdate__PhysicsSkinnedClothBeginUpdate const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__PhysicsSkinnedClothBeginUpdate(____UnityEngine__PlayerLoop__PostLateUpdate__PhysicsSkinnedClothBeginUpdate&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__PhysicsSkinnedClothBeginUpdate& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__PhysicsSkinnedClothBeginUpdate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__PhysicsSkinnedClothBeginUpdate& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__PhysicsSkinnedClothBeginUpdate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__PostLateUpdate__PhysicsSkinnedClothBeginUpdate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::PhysicsSkinnedClothFinishUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10541))
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate::PhysicsSkinnedClothFinishUpdate
struct CORDL_TYPE ____UnityEngine__PlayerLoop__PostLateUpdate__PhysicsSkinnedClothFinishUpdate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__PhysicsSkinnedClothFinishUpdate(____UnityEngine__PlayerLoop__PostLateUpdate__PhysicsSkinnedClothFinishUpdate const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__PhysicsSkinnedClothFinishUpdate(____UnityEngine__PlayerLoop__PostLateUpdate__PhysicsSkinnedClothFinishUpdate&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__PhysicsSkinnedClothFinishUpdate& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__PhysicsSkinnedClothFinishUpdate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__PhysicsSkinnedClothFinishUpdate& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__PhysicsSkinnedClothFinishUpdate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__PostLateUpdate__PhysicsSkinnedClothFinishUpdate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::TriggerEndOfFrameCallbacks
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10542))
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate::TriggerEndOfFrameCallbacks
struct CORDL_TYPE ____UnityEngine__PlayerLoop__PostLateUpdate__TriggerEndOfFrameCallbacks : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__TriggerEndOfFrameCallbacks(____UnityEngine__PlayerLoop__PostLateUpdate__TriggerEndOfFrameCallbacks const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__TriggerEndOfFrameCallbacks(____UnityEngine__PlayerLoop__PostLateUpdate__TriggerEndOfFrameCallbacks&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__TriggerEndOfFrameCallbacks& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__TriggerEndOfFrameCallbacks const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__PostLateUpdate__TriggerEndOfFrameCallbacks& operator=(____UnityEngine__PlayerLoop__PostLateUpdate__TriggerEndOfFrameCallbacks&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__PostLateUpdate__TriggerEndOfFrameCallbacks(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: UnityEngine.PlayerLoop::PostLateUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10543))
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate
struct CORDL_TYPE PostLateUpdate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using TriggerEndOfFrameCallbacks = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__TriggerEndOfFrameCallbacks;

using PhysicsSkinnedClothFinishUpdate = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__PhysicsSkinnedClothFinishUpdate;

using PhysicsSkinnedClothBeginUpdate = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__PhysicsSkinnedClothBeginUpdate;

using PlayerSendFramePostPresent = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__PlayerSendFramePostPresent;

using GraphicsWarmupPreloadedShaders = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__GraphicsWarmupPreloadedShaders;

using ProfilerEndFrame = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__ProfilerEndFrame;

using XRPreEndFrame = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__XRPreEndFrame;

using ExecuteGameCenterCallbacks = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__ExecuteGameCenterCallbacks;

using MemoryFrameMaintenance = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__MemoryFrameMaintenance;

using ProfilerSynchronizeStats = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__ProfilerSynchronizeStats;

using ThreadedLoadingDebug = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__ThreadedLoadingDebug;

using ResetInputAxis = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__ResetInputAxis;

using ShaderHandleErrors = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__ShaderHandleErrors;

using GUIClearEvents = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__GUIClearEvents;

using InputEndFrame = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__InputEndFrame;

using UpdateResolution = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__UpdateResolution;

using XRPostPresent = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__XRPostPresent;

using ClearImmediateRenderers = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__ClearImmediateRenderers;

using PresentAfterDraw = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__PresentAfterDraw;

using UpdateCaptureScreenshot = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__UpdateCaptureScreenshot;

using PlayerSendFrameComplete = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__PlayerSendFrameComplete;

using BatchModeUpdate = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__BatchModeUpdate;

using FinishFrameRendering = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__FinishFrameRendering;

using PlayerEmitCanvasGeometry = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__PlayerEmitCanvasGeometry;

using DirectorRenderImage = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__DirectorRenderImage;

using UpdateVideoTextures = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__UpdateVideoTextures;

using SortingGroupsUpdate = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__SortingGroupsUpdate;

using ProcessWebSendMessages = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__ProcessWebSendMessages;

using UpdateAllSkinnedMeshes = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__UpdateAllSkinnedMeshes;

using EnlightenRuntimeUpdate = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__EnlightenRuntimeUpdate;

using UpdateLightProbeProxyVolumes = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__UpdateLightProbeProxyVolumes;

using UpdateAllRenderers = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__UpdateAllRenderers;

using XRPostLateUpdate = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__XRPostLateUpdate;

using UpdateCustomRenderTextures = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__UpdateCustomRenderTextures;

using UpdateSubstance = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__UpdateSubstance;

using EndGraphicsJobsAfterScriptLateUpdate = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__EndGraphicsJobsAfterScriptLateUpdate;

using ParticleSystemEndUpdateAll = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__ParticleSystemEndUpdateAll;

using VFXUpdate = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__VFXUpdate;

using ScriptRunDelayedDynamicFrameRate = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__ScriptRunDelayedDynamicFrameRate;

using DirectorLateUpdate = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__DirectorLateUpdate;

using UpdateVideo = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__UpdateVideo;

using UpdateAudio = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__UpdateAudio;

using PlayerUpdateCanvases = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__PlayerUpdateCanvases;

using UpdateCanvasRectTransform = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__UpdateCanvasRectTransform;

using UpdateRectTransform = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__UpdateRectTransform;

using PlayerSendFrameStarted = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__PlayerSendFrameStarted;


                    constexpr PostLateUpdate(PostLateUpdate const&) = default;
                    constexpr PostLateUpdate(PostLateUpdate&&) = default;
                    constexpr PostLateUpdate& operator=(PostLateUpdate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PostLateUpdate& operator=(PostLateUpdate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PostLateUpdate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate, "UnityEngine.PlayerLoop", "PostLateUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__BatchModeUpdate, "UnityEngine.PlayerLoop", "PostLateUpdate/BatchModeUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__ClearImmediateRenderers, "UnityEngine.PlayerLoop", "PostLateUpdate/ClearImmediateRenderers");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__DirectorLateUpdate, "UnityEngine.PlayerLoop", "PostLateUpdate/DirectorLateUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__DirectorRenderImage, "UnityEngine.PlayerLoop", "PostLateUpdate/DirectorRenderImage");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__EndGraphicsJobsAfterScriptLateUpdate, "UnityEngine.PlayerLoop", "PostLateUpdate/EndGraphicsJobsAfterScriptLateUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__EnlightenRuntimeUpdate, "UnityEngine.PlayerLoop", "PostLateUpdate/EnlightenRuntimeUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__ExecuteGameCenterCallbacks, "UnityEngine.PlayerLoop", "PostLateUpdate/ExecuteGameCenterCallbacks");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__FinishFrameRendering, "UnityEngine.PlayerLoop", "PostLateUpdate/FinishFrameRendering");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__GUIClearEvents, "UnityEngine.PlayerLoop", "PostLateUpdate/GUIClearEvents");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__GraphicsWarmupPreloadedShaders, "UnityEngine.PlayerLoop", "PostLateUpdate/GraphicsWarmupPreloadedShaders");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__InputEndFrame, "UnityEngine.PlayerLoop", "PostLateUpdate/InputEndFrame");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__MemoryFrameMaintenance, "UnityEngine.PlayerLoop", "PostLateUpdate/MemoryFrameMaintenance");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__ParticleSystemEndUpdateAll, "UnityEngine.PlayerLoop", "PostLateUpdate/ParticleSystemEndUpdateAll");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__PhysicsSkinnedClothBeginUpdate, "UnityEngine.PlayerLoop", "PostLateUpdate/PhysicsSkinnedClothBeginUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__PhysicsSkinnedClothFinishUpdate, "UnityEngine.PlayerLoop", "PostLateUpdate/PhysicsSkinnedClothFinishUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__PlayerEmitCanvasGeometry, "UnityEngine.PlayerLoop", "PostLateUpdate/PlayerEmitCanvasGeometry");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__PlayerSendFrameComplete, "UnityEngine.PlayerLoop", "PostLateUpdate/PlayerSendFrameComplete");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__PlayerSendFramePostPresent, "UnityEngine.PlayerLoop", "PostLateUpdate/PlayerSendFramePostPresent");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__PlayerSendFrameStarted, "UnityEngine.PlayerLoop", "PostLateUpdate/PlayerSendFrameStarted");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__PlayerUpdateCanvases, "UnityEngine.PlayerLoop", "PostLateUpdate/PlayerUpdateCanvases");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__PresentAfterDraw, "UnityEngine.PlayerLoop", "PostLateUpdate/PresentAfterDraw");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__ProcessWebSendMessages, "UnityEngine.PlayerLoop", "PostLateUpdate/ProcessWebSendMessages");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__ProfilerEndFrame, "UnityEngine.PlayerLoop", "PostLateUpdate/ProfilerEndFrame");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__ProfilerSynchronizeStats, "UnityEngine.PlayerLoop", "PostLateUpdate/ProfilerSynchronizeStats");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__ResetInputAxis, "UnityEngine.PlayerLoop", "PostLateUpdate/ResetInputAxis");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__ScriptRunDelayedDynamicFrameRate, "UnityEngine.PlayerLoop", "PostLateUpdate/ScriptRunDelayedDynamicFrameRate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__ShaderHandleErrors, "UnityEngine.PlayerLoop", "PostLateUpdate/ShaderHandleErrors");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__SortingGroupsUpdate, "UnityEngine.PlayerLoop", "PostLateUpdate/SortingGroupsUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__ThreadedLoadingDebug, "UnityEngine.PlayerLoop", "PostLateUpdate/ThreadedLoadingDebug");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__TriggerEndOfFrameCallbacks, "UnityEngine.PlayerLoop", "PostLateUpdate/TriggerEndOfFrameCallbacks");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__UpdateAllRenderers, "UnityEngine.PlayerLoop", "PostLateUpdate/UpdateAllRenderers");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__UpdateAllSkinnedMeshes, "UnityEngine.PlayerLoop", "PostLateUpdate/UpdateAllSkinnedMeshes");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__UpdateAudio, "UnityEngine.PlayerLoop", "PostLateUpdate/UpdateAudio");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__UpdateCanvasRectTransform, "UnityEngine.PlayerLoop", "PostLateUpdate/UpdateCanvasRectTransform");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__UpdateCaptureScreenshot, "UnityEngine.PlayerLoop", "PostLateUpdate/UpdateCaptureScreenshot");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__UpdateCustomRenderTextures, "UnityEngine.PlayerLoop", "PostLateUpdate/UpdateCustomRenderTextures");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__UpdateLightProbeProxyVolumes, "UnityEngine.PlayerLoop", "PostLateUpdate/UpdateLightProbeProxyVolumes");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__UpdateRectTransform, "UnityEngine.PlayerLoop", "PostLateUpdate/UpdateRectTransform");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__UpdateResolution, "UnityEngine.PlayerLoop", "PostLateUpdate/UpdateResolution");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__UpdateSubstance, "UnityEngine.PlayerLoop", "PostLateUpdate/UpdateSubstance");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__UpdateVideo, "UnityEngine.PlayerLoop", "PostLateUpdate/UpdateVideo");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__UpdateVideoTextures, "UnityEngine.PlayerLoop", "PostLateUpdate/UpdateVideoTextures");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__VFXUpdate, "UnityEngine.PlayerLoop", "PostLateUpdate/VFXUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__XRPostLateUpdate, "UnityEngine.PlayerLoop", "PostLateUpdate/XRPostLateUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__XRPostPresent, "UnityEngine.PlayerLoop", "PostLateUpdate/XRPostPresent");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__PostLateUpdate__XRPreEndFrame, "UnityEngine.PlayerLoop", "PostLateUpdate/XRPreEndFrame");
