#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrEnvironmentBlendMode;
}
// Type: UnityEngine.XR.OpenXR.NativeTypes::XrEnvironmentBlendMode
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14176))
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrEnvironmentBlendMode
struct CORDL_TYPE XrEnvironmentBlendMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr XrEnvironmentBlendMode(int32_t value__) noexcept;


                    constexpr XrEnvironmentBlendMode(XrEnvironmentBlendMode const&) = default;
                    constexpr XrEnvironmentBlendMode(XrEnvironmentBlendMode&&) = default;
                    constexpr XrEnvironmentBlendMode& operator=(XrEnvironmentBlendMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr XrEnvironmentBlendMode& operator=(XrEnvironmentBlendMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit XrEnvironmentBlendMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __XrEnvironmentBlendMode_Unwrapped : int32_t {
__Opaque = 1,
__Additive = 2,
__AlphaBlend = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XrEnvironmentBlendMode_Unwrapped () const noexcept {
return std::bit_cast<__XrEnvironmentBlendMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Opaque offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode const Opaque;

/// @brief Field Additive offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode const Additive;

/// @brief Field AlphaBlend offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode const AlphaBlend;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::NativeTypes
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode, "UnityEngine.XR.OpenXR.NativeTypes", "XrEnvironmentBlendMode");
