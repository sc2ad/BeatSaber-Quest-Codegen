#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Events {
struct PersistentListenerMode;
}
// Type: UnityEngine.Events::PersistentListenerMode
namespace UnityEngine::Events {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10383))
// CS Name: UnityEngine.Events.PersistentListenerMode
struct CORDL_TYPE PersistentListenerMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PersistentListenerMode(int32_t value__) noexcept;


                    constexpr PersistentListenerMode(PersistentListenerMode const&) = default;
                    constexpr PersistentListenerMode(PersistentListenerMode&&) = default;
                    constexpr PersistentListenerMode& operator=(PersistentListenerMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PersistentListenerMode& operator=(PersistentListenerMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PersistentListenerMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __PersistentListenerMode_Unwrapped : int32_t {
__EventDefined = 0,
__Void = 1,
__Object = 2,
__Int = 3,
__Float = 4,
__String = 5,
__Bool = 6,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PersistentListenerMode_Unwrapped () const noexcept {
return std::bit_cast<__PersistentListenerMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field EventDefined offset 0
static UnityEngine::Events::PersistentListenerMode const EventDefined;

/// @brief Field Void offset 0
static UnityEngine::Events::PersistentListenerMode const Void;

/// @brief Field Object offset 0
static UnityEngine::Events::PersistentListenerMode const Object;

/// @brief Field Int offset 0
static UnityEngine::Events::PersistentListenerMode const Int;

/// @brief Field Float offset 0
static UnityEngine::Events::PersistentListenerMode const Float;

/// @brief Field String offset 0
static UnityEngine::Events::PersistentListenerMode const String;

/// @brief Field Bool offset 0
static UnityEngine::Events::PersistentListenerMode const Bool;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Events
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Events::PersistentListenerMode, "UnityEngine.Events", "PersistentListenerMode");
