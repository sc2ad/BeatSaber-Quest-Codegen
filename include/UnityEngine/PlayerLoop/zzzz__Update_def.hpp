#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace {
// Forward declare root types
namespace UnityEngine::PlayerLoop {
struct Update;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__Update__DirectorUpdate;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__Update__ScriptRunBehaviourUpdate;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__Update__ScriptRunDelayedDynamicFrameRate;
}
namespace UnityEngine::PlayerLoop {
struct ____UnityEngine__PlayerLoop__Update__ScriptRunDelayedTasks;
}
// Type: ::ScriptRunBehaviourUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10477))
// CS Name: UnityEngine.PlayerLoop.Update::ScriptRunBehaviourUpdate
struct CORDL_TYPE ____UnityEngine__PlayerLoop__Update__ScriptRunBehaviourUpdate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__Update__ScriptRunBehaviourUpdate(____UnityEngine__PlayerLoop__Update__ScriptRunBehaviourUpdate const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__Update__ScriptRunBehaviourUpdate(____UnityEngine__PlayerLoop__Update__ScriptRunBehaviourUpdate&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__Update__ScriptRunBehaviourUpdate& operator=(____UnityEngine__PlayerLoop__Update__ScriptRunBehaviourUpdate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__Update__ScriptRunBehaviourUpdate& operator=(____UnityEngine__PlayerLoop__Update__ScriptRunBehaviourUpdate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__Update__ScriptRunBehaviourUpdate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::DirectorUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10478))
// CS Name: UnityEngine.PlayerLoop.Update::DirectorUpdate
struct CORDL_TYPE ____UnityEngine__PlayerLoop__Update__DirectorUpdate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__Update__DirectorUpdate(____UnityEngine__PlayerLoop__Update__DirectorUpdate const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__Update__DirectorUpdate(____UnityEngine__PlayerLoop__Update__DirectorUpdate&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__Update__DirectorUpdate& operator=(____UnityEngine__PlayerLoop__Update__DirectorUpdate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__Update__DirectorUpdate& operator=(____UnityEngine__PlayerLoop__Update__DirectorUpdate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__Update__DirectorUpdate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10479))
// CS Name: UnityEngine.PlayerLoop.Update::ScriptRunDelayedDynamicFrameRate
struct CORDL_TYPE ____UnityEngine__PlayerLoop__Update__ScriptRunDelayedDynamicFrameRate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__Update__ScriptRunDelayedDynamicFrameRate(____UnityEngine__PlayerLoop__Update__ScriptRunDelayedDynamicFrameRate const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__Update__ScriptRunDelayedDynamicFrameRate(____UnityEngine__PlayerLoop__Update__ScriptRunDelayedDynamicFrameRate&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__Update__ScriptRunDelayedDynamicFrameRate& operator=(____UnityEngine__PlayerLoop__Update__ScriptRunDelayedDynamicFrameRate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__Update__ScriptRunDelayedDynamicFrameRate& operator=(____UnityEngine__PlayerLoop__Update__ScriptRunDelayedDynamicFrameRate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__Update__ScriptRunDelayedDynamicFrameRate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::ScriptRunDelayedTasks
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10480))
// CS Name: UnityEngine.PlayerLoop.Update::ScriptRunDelayedTasks
struct CORDL_TYPE ____UnityEngine__PlayerLoop__Update__ScriptRunDelayedTasks : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr ____UnityEngine__PlayerLoop__Update__ScriptRunDelayedTasks(____UnityEngine__PlayerLoop__Update__ScriptRunDelayedTasks const&) = default;
                    constexpr ____UnityEngine__PlayerLoop__Update__ScriptRunDelayedTasks(____UnityEngine__PlayerLoop__Update__ScriptRunDelayedTasks&&) = default;
                    constexpr ____UnityEngine__PlayerLoop__Update__ScriptRunDelayedTasks& operator=(____UnityEngine__PlayerLoop__Update__ScriptRunDelayedTasks const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__PlayerLoop__Update__ScriptRunDelayedTasks& operator=(____UnityEngine__PlayerLoop__Update__ScriptRunDelayedTasks&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__PlayerLoop__Update__ScriptRunDelayedTasks(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: UnityEngine.PlayerLoop::Update
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10481))
// CS Name: UnityEngine.PlayerLoop.Update
struct CORDL_TYPE Update : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using ScriptRunDelayedTasks = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__Update__ScriptRunDelayedTasks;

using ScriptRunDelayedDynamicFrameRate = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__Update__ScriptRunDelayedDynamicFrameRate;

using DirectorUpdate = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__Update__DirectorUpdate;

using ScriptRunBehaviourUpdate = ::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__Update__ScriptRunBehaviourUpdate;


                    constexpr Update(Update const&) = default;
                    constexpr Update(Update&&) = default;
                    constexpr Update& operator=(Update const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Update& operator=(Update&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Update(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::Update, "UnityEngine.PlayerLoop", "Update");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__Update__DirectorUpdate, "UnityEngine.PlayerLoop", "Update/DirectorUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__Update__ScriptRunBehaviourUpdate, "UnityEngine.PlayerLoop", "Update/ScriptRunBehaviourUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__Update__ScriptRunDelayedDynamicFrameRate, "UnityEngine.PlayerLoop", "Update/ScriptRunDelayedDynamicFrameRate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::____UnityEngine__PlayerLoop__Update__ScriptRunDelayedTasks, "UnityEngine.PlayerLoop", "Update/ScriptRunDelayedTasks");
