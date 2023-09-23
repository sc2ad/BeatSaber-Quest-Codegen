#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
// Forward declare root types
namespace UnityEngine::PlayerLoop {
struct Initialization;
}
namespace UnityEngine::PlayerLoop {
struct UnityEngine__PlayerLoop__Initialization__AsyncUploadTimeSlicedUpdate;
}
namespace UnityEngine::PlayerLoop {
struct UnityEngine__PlayerLoop__Initialization__DirectorSampleTime;
}
namespace UnityEngine::PlayerLoop {
struct UnityEngine__PlayerLoop__Initialization__ProfilerStartFrame;
}
namespace UnityEngine::PlayerLoop {
struct UnityEngine__PlayerLoop__Initialization__SynchronizeInputs;
}
namespace UnityEngine::PlayerLoop {
struct UnityEngine__PlayerLoop__Initialization__SynchronizeState;
}
namespace UnityEngine::PlayerLoop {
struct UnityEngine__PlayerLoop__Initialization__UpdateCameraMotionVectors;
}
namespace UnityEngine::PlayerLoop {
struct UnityEngine__PlayerLoop__Initialization__XREarlyUpdate;
}
// Type: ::ProfilerStartFrame
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10413))
// CS Name: UnityEngine.PlayerLoop.Initialization::ProfilerStartFrame
struct CORDL_TYPE UnityEngine__PlayerLoop__Initialization__ProfilerStartFrame : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__PlayerLoop__Initialization__ProfilerStartFrame(UnityEngine__PlayerLoop__Initialization__ProfilerStartFrame const&) = default;
                    constexpr UnityEngine__PlayerLoop__Initialization__ProfilerStartFrame(UnityEngine__PlayerLoop__Initialization__ProfilerStartFrame&&) = default;
                    constexpr UnityEngine__PlayerLoop__Initialization__ProfilerStartFrame& operator=(UnityEngine__PlayerLoop__Initialization__ProfilerStartFrame const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__PlayerLoop__Initialization__ProfilerStartFrame& operator=(UnityEngine__PlayerLoop__Initialization__ProfilerStartFrame&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__PlayerLoop__Initialization__ProfilerStartFrame(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::UpdateCameraMotionVectors
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10414))
// CS Name: UnityEngine.PlayerLoop.Initialization::UpdateCameraMotionVectors
struct CORDL_TYPE UnityEngine__PlayerLoop__Initialization__UpdateCameraMotionVectors : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__PlayerLoop__Initialization__UpdateCameraMotionVectors(UnityEngine__PlayerLoop__Initialization__UpdateCameraMotionVectors const&) = default;
                    constexpr UnityEngine__PlayerLoop__Initialization__UpdateCameraMotionVectors(UnityEngine__PlayerLoop__Initialization__UpdateCameraMotionVectors&&) = default;
                    constexpr UnityEngine__PlayerLoop__Initialization__UpdateCameraMotionVectors& operator=(UnityEngine__PlayerLoop__Initialization__UpdateCameraMotionVectors const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__PlayerLoop__Initialization__UpdateCameraMotionVectors& operator=(UnityEngine__PlayerLoop__Initialization__UpdateCameraMotionVectors&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__PlayerLoop__Initialization__UpdateCameraMotionVectors(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::DirectorSampleTime
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10415))
// CS Name: UnityEngine.PlayerLoop.Initialization::DirectorSampleTime
struct CORDL_TYPE UnityEngine__PlayerLoop__Initialization__DirectorSampleTime : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__PlayerLoop__Initialization__DirectorSampleTime(UnityEngine__PlayerLoop__Initialization__DirectorSampleTime const&) = default;
                    constexpr UnityEngine__PlayerLoop__Initialization__DirectorSampleTime(UnityEngine__PlayerLoop__Initialization__DirectorSampleTime&&) = default;
                    constexpr UnityEngine__PlayerLoop__Initialization__DirectorSampleTime& operator=(UnityEngine__PlayerLoop__Initialization__DirectorSampleTime const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__PlayerLoop__Initialization__DirectorSampleTime& operator=(UnityEngine__PlayerLoop__Initialization__DirectorSampleTime&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__PlayerLoop__Initialization__DirectorSampleTime(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::AsyncUploadTimeSlicedUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10416))
// CS Name: UnityEngine.PlayerLoop.Initialization::AsyncUploadTimeSlicedUpdate
struct CORDL_TYPE UnityEngine__PlayerLoop__Initialization__AsyncUploadTimeSlicedUpdate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__PlayerLoop__Initialization__AsyncUploadTimeSlicedUpdate(UnityEngine__PlayerLoop__Initialization__AsyncUploadTimeSlicedUpdate const&) = default;
                    constexpr UnityEngine__PlayerLoop__Initialization__AsyncUploadTimeSlicedUpdate(UnityEngine__PlayerLoop__Initialization__AsyncUploadTimeSlicedUpdate&&) = default;
                    constexpr UnityEngine__PlayerLoop__Initialization__AsyncUploadTimeSlicedUpdate& operator=(UnityEngine__PlayerLoop__Initialization__AsyncUploadTimeSlicedUpdate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__PlayerLoop__Initialization__AsyncUploadTimeSlicedUpdate& operator=(UnityEngine__PlayerLoop__Initialization__AsyncUploadTimeSlicedUpdate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__PlayerLoop__Initialization__AsyncUploadTimeSlicedUpdate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::SynchronizeState
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10417))
// CS Name: UnityEngine.PlayerLoop.Initialization::SynchronizeState
struct CORDL_TYPE UnityEngine__PlayerLoop__Initialization__SynchronizeState : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__PlayerLoop__Initialization__SynchronizeState(UnityEngine__PlayerLoop__Initialization__SynchronizeState const&) = default;
                    constexpr UnityEngine__PlayerLoop__Initialization__SynchronizeState(UnityEngine__PlayerLoop__Initialization__SynchronizeState&&) = default;
                    constexpr UnityEngine__PlayerLoop__Initialization__SynchronizeState& operator=(UnityEngine__PlayerLoop__Initialization__SynchronizeState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__PlayerLoop__Initialization__SynchronizeState& operator=(UnityEngine__PlayerLoop__Initialization__SynchronizeState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__PlayerLoop__Initialization__SynchronizeState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::SynchronizeInputs
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10418))
// CS Name: UnityEngine.PlayerLoop.Initialization::SynchronizeInputs
struct CORDL_TYPE UnityEngine__PlayerLoop__Initialization__SynchronizeInputs : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__PlayerLoop__Initialization__SynchronizeInputs(UnityEngine__PlayerLoop__Initialization__SynchronizeInputs const&) = default;
                    constexpr UnityEngine__PlayerLoop__Initialization__SynchronizeInputs(UnityEngine__PlayerLoop__Initialization__SynchronizeInputs&&) = default;
                    constexpr UnityEngine__PlayerLoop__Initialization__SynchronizeInputs& operator=(UnityEngine__PlayerLoop__Initialization__SynchronizeInputs const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__PlayerLoop__Initialization__SynchronizeInputs& operator=(UnityEngine__PlayerLoop__Initialization__SynchronizeInputs&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__PlayerLoop__Initialization__SynchronizeInputs(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::XREarlyUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10419))
// CS Name: UnityEngine.PlayerLoop.Initialization::XREarlyUpdate
struct CORDL_TYPE UnityEngine__PlayerLoop__Initialization__XREarlyUpdate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__PlayerLoop__Initialization__XREarlyUpdate(UnityEngine__PlayerLoop__Initialization__XREarlyUpdate const&) = default;
                    constexpr UnityEngine__PlayerLoop__Initialization__XREarlyUpdate(UnityEngine__PlayerLoop__Initialization__XREarlyUpdate&&) = default;
                    constexpr UnityEngine__PlayerLoop__Initialization__XREarlyUpdate& operator=(UnityEngine__PlayerLoop__Initialization__XREarlyUpdate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__PlayerLoop__Initialization__XREarlyUpdate& operator=(UnityEngine__PlayerLoop__Initialization__XREarlyUpdate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__PlayerLoop__Initialization__XREarlyUpdate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: UnityEngine.PlayerLoop::Initialization
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10420))
// CS Name: UnityEngine.PlayerLoop.Initialization
struct CORDL_TYPE Initialization : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using XREarlyUpdate = UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__Initialization__XREarlyUpdate;

using SynchronizeInputs = UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__Initialization__SynchronizeInputs;

using SynchronizeState = UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__Initialization__SynchronizeState;

using AsyncUploadTimeSlicedUpdate = UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__Initialization__AsyncUploadTimeSlicedUpdate;

using DirectorSampleTime = UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__Initialization__DirectorSampleTime;

using UpdateCameraMotionVectors = UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__Initialization__UpdateCameraMotionVectors;

using ProfilerStartFrame = UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__Initialization__ProfilerStartFrame;


                    constexpr Initialization(Initialization const&) = default;
                    constexpr Initialization(Initialization&&) = default;
                    constexpr Initialization& operator=(Initialization const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Initialization& operator=(Initialization&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Initialization(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::Initialization, "UnityEngine.PlayerLoop", "Initialization");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__Initialization__AsyncUploadTimeSlicedUpdate, "UnityEngine.PlayerLoop", "Initialization/AsyncUploadTimeSlicedUpdate");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__Initialization__DirectorSampleTime, "UnityEngine.PlayerLoop", "Initialization/DirectorSampleTime");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__Initialization__ProfilerStartFrame, "UnityEngine.PlayerLoop", "Initialization/ProfilerStartFrame");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__Initialization__SynchronizeInputs, "UnityEngine.PlayerLoop", "Initialization/SynchronizeInputs");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__Initialization__SynchronizeState, "UnityEngine.PlayerLoop", "Initialization/SynchronizeState");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__Initialization__UpdateCameraMotionVectors, "UnityEngine.PlayerLoop", "Initialization/UpdateCameraMotionVectors");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__Initialization__XREarlyUpdate, "UnityEngine.PlayerLoop", "Initialization/XREarlyUpdate");
