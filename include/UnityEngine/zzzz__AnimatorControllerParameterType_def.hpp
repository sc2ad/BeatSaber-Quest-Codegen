#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct AnimatorControllerParameterType;
}
// Type: UnityEngine::AnimatorControllerParameterType
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15044))
// CS Name: UnityEngine.AnimatorControllerParameterType
struct CORDL_TYPE AnimatorControllerParameterType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AnimatorControllerParameterType(int32_t value__) noexcept;


                    constexpr AnimatorControllerParameterType(AnimatorControllerParameterType const&) = default;
                    constexpr AnimatorControllerParameterType(AnimatorControllerParameterType&&) = default;
                    constexpr AnimatorControllerParameterType& operator=(AnimatorControllerParameterType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AnimatorControllerParameterType& operator=(AnimatorControllerParameterType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AnimatorControllerParameterType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AnimatorControllerParameterType_Unwrapped : int32_t {
__Float = 1,
__Int = 3,
__Bool = 4,
__Trigger = 9,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AnimatorControllerParameterType_Unwrapped () const noexcept {
return std::bit_cast<__AnimatorControllerParameterType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Float offset 0
static UnityEngine::AnimatorControllerParameterType const Float;

/// @brief Field Int offset 0
static UnityEngine::AnimatorControllerParameterType const Int;

/// @brief Field Bool offset 0
static UnityEngine::AnimatorControllerParameterType const Bool;

/// @brief Field Trigger offset 0
static UnityEngine::AnimatorControllerParameterType const Trigger;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AnimatorControllerParameterType, "UnityEngine", "AnimatorControllerParameterType");
