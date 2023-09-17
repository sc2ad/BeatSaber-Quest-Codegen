#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrReferenceSpaceType;
}
// Type: UnityEngine.XR.OpenXR.NativeTypes::XrReferenceSpaceType
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14181))
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrReferenceSpaceType
struct CORDL_TYPE XrReferenceSpaceType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr XrReferenceSpaceType(int32_t value__) noexcept;


                    constexpr XrReferenceSpaceType(XrReferenceSpaceType const&) = default;
                    constexpr XrReferenceSpaceType(XrReferenceSpaceType&&) = default;
                    constexpr XrReferenceSpaceType& operator=(XrReferenceSpaceType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr XrReferenceSpaceType& operator=(XrReferenceSpaceType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit XrReferenceSpaceType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __XrReferenceSpaceType_Unwrapped : int32_t {
__View = 1,
__Local = 2,
__Stage = 3,
__UnboundedMsft = 1000038000,
__CombinedEyeVarjo = 1000121000,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XrReferenceSpaceType_Unwrapped () const noexcept {
return std::bit_cast<__XrReferenceSpaceType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field View offset 0
static ::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType const View;

/// @brief Field Local offset 0
static ::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType const Local;

/// @brief Field Stage offset 0
static ::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType const Stage;

/// @brief Field UnboundedMsft offset 0
static ::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType const UnboundedMsft;

/// @brief Field CombinedEyeVarjo offset 0
static ::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType const CombinedEyeVarjo;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::NativeTypes
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType, "UnityEngine.XR.OpenXR.NativeTypes", "XrReferenceSpaceType");
