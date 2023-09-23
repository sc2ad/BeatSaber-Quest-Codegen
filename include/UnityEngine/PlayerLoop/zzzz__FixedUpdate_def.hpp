#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
// Forward declare root types
namespace UnityEngine::PlayerLoop {
struct FixedUpdate;
}
namespace UnityEngine::PlayerLoop {
struct UnityEngine__PlayerLoop__FixedUpdate__AudioFixedUpdate;
}
namespace UnityEngine::PlayerLoop {
struct UnityEngine__PlayerLoop__FixedUpdate__ClearLines;
}
namespace UnityEngine::PlayerLoop {
struct UnityEngine__PlayerLoop__FixedUpdate__DirectorFixedSampleTime;
}
namespace UnityEngine::PlayerLoop {
struct UnityEngine__PlayerLoop__FixedUpdate__DirectorFixedUpdate;
}
namespace UnityEngine::PlayerLoop {
struct UnityEngine__PlayerLoop__FixedUpdate__DirectorFixedUpdatePostPhysics;
}
namespace UnityEngine::PlayerLoop {
struct UnityEngine__PlayerLoop__FixedUpdate__LegacyFixedAnimationUpdate;
}
namespace UnityEngine::PlayerLoop {
struct UnityEngine__PlayerLoop__FixedUpdate__NewInputFixedUpdate;
}
namespace UnityEngine::PlayerLoop {
struct UnityEngine__PlayerLoop__FixedUpdate__Physics2DFixedUpdate;
}
namespace UnityEngine::PlayerLoop {
struct UnityEngine__PlayerLoop__FixedUpdate__PhysicsClothFixedUpdate;
}
namespace UnityEngine::PlayerLoop {
struct UnityEngine__PlayerLoop__FixedUpdate__PhysicsFixedUpdate;
}
namespace UnityEngine::PlayerLoop {
struct UnityEngine__PlayerLoop__FixedUpdate__ScriptRunBehaviourFixedUpdate;
}
namespace UnityEngine::PlayerLoop {
struct UnityEngine__PlayerLoop__FixedUpdate__ScriptRunDelayedFixedFrameRate;
}
namespace UnityEngine::PlayerLoop {
struct UnityEngine__PlayerLoop__FixedUpdate__XRFixedUpdate;
}
// Type: ::ClearLines
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10453))
// CS Name: UnityEngine.PlayerLoop.FixedUpdate::ClearLines
struct CORDL_TYPE UnityEngine__PlayerLoop__FixedUpdate__ClearLines : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__PlayerLoop__FixedUpdate__ClearLines(UnityEngine__PlayerLoop__FixedUpdate__ClearLines const&) = default;
                    constexpr UnityEngine__PlayerLoop__FixedUpdate__ClearLines(UnityEngine__PlayerLoop__FixedUpdate__ClearLines&&) = default;
                    constexpr UnityEngine__PlayerLoop__FixedUpdate__ClearLines& operator=(UnityEngine__PlayerLoop__FixedUpdate__ClearLines const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__PlayerLoop__FixedUpdate__ClearLines& operator=(UnityEngine__PlayerLoop__FixedUpdate__ClearLines&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__PlayerLoop__FixedUpdate__ClearLines(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::DirectorFixedSampleTime
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10454))
// CS Name: UnityEngine.PlayerLoop.FixedUpdate::DirectorFixedSampleTime
struct CORDL_TYPE UnityEngine__PlayerLoop__FixedUpdate__DirectorFixedSampleTime : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__PlayerLoop__FixedUpdate__DirectorFixedSampleTime(UnityEngine__PlayerLoop__FixedUpdate__DirectorFixedSampleTime const&) = default;
                    constexpr UnityEngine__PlayerLoop__FixedUpdate__DirectorFixedSampleTime(UnityEngine__PlayerLoop__FixedUpdate__DirectorFixedSampleTime&&) = default;
                    constexpr UnityEngine__PlayerLoop__FixedUpdate__DirectorFixedSampleTime& operator=(UnityEngine__PlayerLoop__FixedUpdate__DirectorFixedSampleTime const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__PlayerLoop__FixedUpdate__DirectorFixedSampleTime& operator=(UnityEngine__PlayerLoop__FixedUpdate__DirectorFixedSampleTime&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__PlayerLoop__FixedUpdate__DirectorFixedSampleTime(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::AudioFixedUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10455))
// CS Name: UnityEngine.PlayerLoop.FixedUpdate::AudioFixedUpdate
struct CORDL_TYPE UnityEngine__PlayerLoop__FixedUpdate__AudioFixedUpdate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__PlayerLoop__FixedUpdate__AudioFixedUpdate(UnityEngine__PlayerLoop__FixedUpdate__AudioFixedUpdate const&) = default;
                    constexpr UnityEngine__PlayerLoop__FixedUpdate__AudioFixedUpdate(UnityEngine__PlayerLoop__FixedUpdate__AudioFixedUpdate&&) = default;
                    constexpr UnityEngine__PlayerLoop__FixedUpdate__AudioFixedUpdate& operator=(UnityEngine__PlayerLoop__FixedUpdate__AudioFixedUpdate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__PlayerLoop__FixedUpdate__AudioFixedUpdate& operator=(UnityEngine__PlayerLoop__FixedUpdate__AudioFixedUpdate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__PlayerLoop__FixedUpdate__AudioFixedUpdate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::ScriptRunBehaviourFixedUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10456))
// CS Name: UnityEngine.PlayerLoop.FixedUpdate::ScriptRunBehaviourFixedUpdate
struct CORDL_TYPE UnityEngine__PlayerLoop__FixedUpdate__ScriptRunBehaviourFixedUpdate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__PlayerLoop__FixedUpdate__ScriptRunBehaviourFixedUpdate(UnityEngine__PlayerLoop__FixedUpdate__ScriptRunBehaviourFixedUpdate const&) = default;
                    constexpr UnityEngine__PlayerLoop__FixedUpdate__ScriptRunBehaviourFixedUpdate(UnityEngine__PlayerLoop__FixedUpdate__ScriptRunBehaviourFixedUpdate&&) = default;
                    constexpr UnityEngine__PlayerLoop__FixedUpdate__ScriptRunBehaviourFixedUpdate& operator=(UnityEngine__PlayerLoop__FixedUpdate__ScriptRunBehaviourFixedUpdate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__PlayerLoop__FixedUpdate__ScriptRunBehaviourFixedUpdate& operator=(UnityEngine__PlayerLoop__FixedUpdate__ScriptRunBehaviourFixedUpdate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__PlayerLoop__FixedUpdate__ScriptRunBehaviourFixedUpdate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::DirectorFixedUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10457))
// CS Name: UnityEngine.PlayerLoop.FixedUpdate::DirectorFixedUpdate
struct CORDL_TYPE UnityEngine__PlayerLoop__FixedUpdate__DirectorFixedUpdate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__PlayerLoop__FixedUpdate__DirectorFixedUpdate(UnityEngine__PlayerLoop__FixedUpdate__DirectorFixedUpdate const&) = default;
                    constexpr UnityEngine__PlayerLoop__FixedUpdate__DirectorFixedUpdate(UnityEngine__PlayerLoop__FixedUpdate__DirectorFixedUpdate&&) = default;
                    constexpr UnityEngine__PlayerLoop__FixedUpdate__DirectorFixedUpdate& operator=(UnityEngine__PlayerLoop__FixedUpdate__DirectorFixedUpdate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__PlayerLoop__FixedUpdate__DirectorFixedUpdate& operator=(UnityEngine__PlayerLoop__FixedUpdate__DirectorFixedUpdate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__PlayerLoop__FixedUpdate__DirectorFixedUpdate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::LegacyFixedAnimationUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10458))
// CS Name: UnityEngine.PlayerLoop.FixedUpdate::LegacyFixedAnimationUpdate
struct CORDL_TYPE UnityEngine__PlayerLoop__FixedUpdate__LegacyFixedAnimationUpdate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__PlayerLoop__FixedUpdate__LegacyFixedAnimationUpdate(UnityEngine__PlayerLoop__FixedUpdate__LegacyFixedAnimationUpdate const&) = default;
                    constexpr UnityEngine__PlayerLoop__FixedUpdate__LegacyFixedAnimationUpdate(UnityEngine__PlayerLoop__FixedUpdate__LegacyFixedAnimationUpdate&&) = default;
                    constexpr UnityEngine__PlayerLoop__FixedUpdate__LegacyFixedAnimationUpdate& operator=(UnityEngine__PlayerLoop__FixedUpdate__LegacyFixedAnimationUpdate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__PlayerLoop__FixedUpdate__LegacyFixedAnimationUpdate& operator=(UnityEngine__PlayerLoop__FixedUpdate__LegacyFixedAnimationUpdate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__PlayerLoop__FixedUpdate__LegacyFixedAnimationUpdate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::XRFixedUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10459))
// CS Name: UnityEngine.PlayerLoop.FixedUpdate::XRFixedUpdate
struct CORDL_TYPE UnityEngine__PlayerLoop__FixedUpdate__XRFixedUpdate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__PlayerLoop__FixedUpdate__XRFixedUpdate(UnityEngine__PlayerLoop__FixedUpdate__XRFixedUpdate const&) = default;
                    constexpr UnityEngine__PlayerLoop__FixedUpdate__XRFixedUpdate(UnityEngine__PlayerLoop__FixedUpdate__XRFixedUpdate&&) = default;
                    constexpr UnityEngine__PlayerLoop__FixedUpdate__XRFixedUpdate& operator=(UnityEngine__PlayerLoop__FixedUpdate__XRFixedUpdate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__PlayerLoop__FixedUpdate__XRFixedUpdate& operator=(UnityEngine__PlayerLoop__FixedUpdate__XRFixedUpdate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__PlayerLoop__FixedUpdate__XRFixedUpdate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::PhysicsFixedUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10460))
// CS Name: UnityEngine.PlayerLoop.FixedUpdate::PhysicsFixedUpdate
struct CORDL_TYPE UnityEngine__PlayerLoop__FixedUpdate__PhysicsFixedUpdate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__PlayerLoop__FixedUpdate__PhysicsFixedUpdate(UnityEngine__PlayerLoop__FixedUpdate__PhysicsFixedUpdate const&) = default;
                    constexpr UnityEngine__PlayerLoop__FixedUpdate__PhysicsFixedUpdate(UnityEngine__PlayerLoop__FixedUpdate__PhysicsFixedUpdate&&) = default;
                    constexpr UnityEngine__PlayerLoop__FixedUpdate__PhysicsFixedUpdate& operator=(UnityEngine__PlayerLoop__FixedUpdate__PhysicsFixedUpdate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__PlayerLoop__FixedUpdate__PhysicsFixedUpdate& operator=(UnityEngine__PlayerLoop__FixedUpdate__PhysicsFixedUpdate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__PlayerLoop__FixedUpdate__PhysicsFixedUpdate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::Physics2DFixedUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10461))
// CS Name: UnityEngine.PlayerLoop.FixedUpdate::Physics2DFixedUpdate
struct CORDL_TYPE UnityEngine__PlayerLoop__FixedUpdate__Physics2DFixedUpdate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__PlayerLoop__FixedUpdate__Physics2DFixedUpdate(UnityEngine__PlayerLoop__FixedUpdate__Physics2DFixedUpdate const&) = default;
                    constexpr UnityEngine__PlayerLoop__FixedUpdate__Physics2DFixedUpdate(UnityEngine__PlayerLoop__FixedUpdate__Physics2DFixedUpdate&&) = default;
                    constexpr UnityEngine__PlayerLoop__FixedUpdate__Physics2DFixedUpdate& operator=(UnityEngine__PlayerLoop__FixedUpdate__Physics2DFixedUpdate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__PlayerLoop__FixedUpdate__Physics2DFixedUpdate& operator=(UnityEngine__PlayerLoop__FixedUpdate__Physics2DFixedUpdate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__PlayerLoop__FixedUpdate__Physics2DFixedUpdate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::PhysicsClothFixedUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10462))
// CS Name: UnityEngine.PlayerLoop.FixedUpdate::PhysicsClothFixedUpdate
struct CORDL_TYPE UnityEngine__PlayerLoop__FixedUpdate__PhysicsClothFixedUpdate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__PlayerLoop__FixedUpdate__PhysicsClothFixedUpdate(UnityEngine__PlayerLoop__FixedUpdate__PhysicsClothFixedUpdate const&) = default;
                    constexpr UnityEngine__PlayerLoop__FixedUpdate__PhysicsClothFixedUpdate(UnityEngine__PlayerLoop__FixedUpdate__PhysicsClothFixedUpdate&&) = default;
                    constexpr UnityEngine__PlayerLoop__FixedUpdate__PhysicsClothFixedUpdate& operator=(UnityEngine__PlayerLoop__FixedUpdate__PhysicsClothFixedUpdate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__PlayerLoop__FixedUpdate__PhysicsClothFixedUpdate& operator=(UnityEngine__PlayerLoop__FixedUpdate__PhysicsClothFixedUpdate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__PlayerLoop__FixedUpdate__PhysicsClothFixedUpdate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::DirectorFixedUpdatePostPhysics
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10463))
// CS Name: UnityEngine.PlayerLoop.FixedUpdate::DirectorFixedUpdatePostPhysics
struct CORDL_TYPE UnityEngine__PlayerLoop__FixedUpdate__DirectorFixedUpdatePostPhysics : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__PlayerLoop__FixedUpdate__DirectorFixedUpdatePostPhysics(UnityEngine__PlayerLoop__FixedUpdate__DirectorFixedUpdatePostPhysics const&) = default;
                    constexpr UnityEngine__PlayerLoop__FixedUpdate__DirectorFixedUpdatePostPhysics(UnityEngine__PlayerLoop__FixedUpdate__DirectorFixedUpdatePostPhysics&&) = default;
                    constexpr UnityEngine__PlayerLoop__FixedUpdate__DirectorFixedUpdatePostPhysics& operator=(UnityEngine__PlayerLoop__FixedUpdate__DirectorFixedUpdatePostPhysics const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__PlayerLoop__FixedUpdate__DirectorFixedUpdatePostPhysics& operator=(UnityEngine__PlayerLoop__FixedUpdate__DirectorFixedUpdatePostPhysics&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__PlayerLoop__FixedUpdate__DirectorFixedUpdatePostPhysics(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::ScriptRunDelayedFixedFrameRate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10464))
// CS Name: UnityEngine.PlayerLoop.FixedUpdate::ScriptRunDelayedFixedFrameRate
struct CORDL_TYPE UnityEngine__PlayerLoop__FixedUpdate__ScriptRunDelayedFixedFrameRate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__PlayerLoop__FixedUpdate__ScriptRunDelayedFixedFrameRate(UnityEngine__PlayerLoop__FixedUpdate__ScriptRunDelayedFixedFrameRate const&) = default;
                    constexpr UnityEngine__PlayerLoop__FixedUpdate__ScriptRunDelayedFixedFrameRate(UnityEngine__PlayerLoop__FixedUpdate__ScriptRunDelayedFixedFrameRate&&) = default;
                    constexpr UnityEngine__PlayerLoop__FixedUpdate__ScriptRunDelayedFixedFrameRate& operator=(UnityEngine__PlayerLoop__FixedUpdate__ScriptRunDelayedFixedFrameRate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__PlayerLoop__FixedUpdate__ScriptRunDelayedFixedFrameRate& operator=(UnityEngine__PlayerLoop__FixedUpdate__ScriptRunDelayedFixedFrameRate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__PlayerLoop__FixedUpdate__ScriptRunDelayedFixedFrameRate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: ::NewInputFixedUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10465))
// CS Name: UnityEngine.PlayerLoop.FixedUpdate::NewInputFixedUpdate
struct CORDL_TYPE UnityEngine__PlayerLoop__FixedUpdate__NewInputFixedUpdate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr UnityEngine__PlayerLoop__FixedUpdate__NewInputFixedUpdate(UnityEngine__PlayerLoop__FixedUpdate__NewInputFixedUpdate const&) = default;
                    constexpr UnityEngine__PlayerLoop__FixedUpdate__NewInputFixedUpdate(UnityEngine__PlayerLoop__FixedUpdate__NewInputFixedUpdate&&) = default;
                    constexpr UnityEngine__PlayerLoop__FixedUpdate__NewInputFixedUpdate& operator=(UnityEngine__PlayerLoop__FixedUpdate__NewInputFixedUpdate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__PlayerLoop__FixedUpdate__NewInputFixedUpdate& operator=(UnityEngine__PlayerLoop__FixedUpdate__NewInputFixedUpdate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__PlayerLoop__FixedUpdate__NewInputFixedUpdate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
// Type: UnityEngine.PlayerLoop::FixedUpdate
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10466))
// CS Name: UnityEngine.PlayerLoop.FixedUpdate
struct CORDL_TYPE FixedUpdate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using NewInputFixedUpdate = UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__FixedUpdate__NewInputFixedUpdate;

using ScriptRunDelayedFixedFrameRate = UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__FixedUpdate__ScriptRunDelayedFixedFrameRate;

using DirectorFixedUpdatePostPhysics = UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__FixedUpdate__DirectorFixedUpdatePostPhysics;

using PhysicsClothFixedUpdate = UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__FixedUpdate__PhysicsClothFixedUpdate;

using Physics2DFixedUpdate = UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__FixedUpdate__Physics2DFixedUpdate;

using PhysicsFixedUpdate = UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__FixedUpdate__PhysicsFixedUpdate;

using XRFixedUpdate = UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__FixedUpdate__XRFixedUpdate;

using LegacyFixedAnimationUpdate = UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__FixedUpdate__LegacyFixedAnimationUpdate;

using DirectorFixedUpdate = UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__FixedUpdate__DirectorFixedUpdate;

using ScriptRunBehaviourFixedUpdate = UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__FixedUpdate__ScriptRunBehaviourFixedUpdate;

using AudioFixedUpdate = UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__FixedUpdate__AudioFixedUpdate;

using DirectorFixedSampleTime = UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__FixedUpdate__DirectorFixedSampleTime;

using ClearLines = UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__FixedUpdate__ClearLines;


                    constexpr FixedUpdate(FixedUpdate const&) = default;
                    constexpr FixedUpdate(FixedUpdate&&) = default;
                    constexpr FixedUpdate& operator=(FixedUpdate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr FixedUpdate& operator=(FixedUpdate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit FixedUpdate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::PlayerLoop
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::FixedUpdate, "UnityEngine.PlayerLoop", "FixedUpdate");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__FixedUpdate__AudioFixedUpdate, "UnityEngine.PlayerLoop", "FixedUpdate/AudioFixedUpdate");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__FixedUpdate__ClearLines, "UnityEngine.PlayerLoop", "FixedUpdate/ClearLines");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__FixedUpdate__DirectorFixedSampleTime, "UnityEngine.PlayerLoop", "FixedUpdate/DirectorFixedSampleTime");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__FixedUpdate__DirectorFixedUpdate, "UnityEngine.PlayerLoop", "FixedUpdate/DirectorFixedUpdate");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__FixedUpdate__DirectorFixedUpdatePostPhysics, "UnityEngine.PlayerLoop", "FixedUpdate/DirectorFixedUpdatePostPhysics");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__FixedUpdate__LegacyFixedAnimationUpdate, "UnityEngine.PlayerLoop", "FixedUpdate/LegacyFixedAnimationUpdate");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__FixedUpdate__NewInputFixedUpdate, "UnityEngine.PlayerLoop", "FixedUpdate/NewInputFixedUpdate");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__FixedUpdate__Physics2DFixedUpdate, "UnityEngine.PlayerLoop", "FixedUpdate/Physics2DFixedUpdate");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__FixedUpdate__PhysicsClothFixedUpdate, "UnityEngine.PlayerLoop", "FixedUpdate/PhysicsClothFixedUpdate");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__FixedUpdate__PhysicsFixedUpdate, "UnityEngine.PlayerLoop", "FixedUpdate/PhysicsFixedUpdate");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__FixedUpdate__ScriptRunBehaviourFixedUpdate, "UnityEngine.PlayerLoop", "FixedUpdate/ScriptRunBehaviourFixedUpdate");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__FixedUpdate__ScriptRunDelayedFixedFrameRate, "UnityEngine.PlayerLoop", "FixedUpdate/ScriptRunDelayedFixedFrameRate");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::UnityEngine__PlayerLoop__FixedUpdate__XRFixedUpdate, "UnityEngine.PlayerLoop", "FixedUpdate/XRFixedUpdate");
