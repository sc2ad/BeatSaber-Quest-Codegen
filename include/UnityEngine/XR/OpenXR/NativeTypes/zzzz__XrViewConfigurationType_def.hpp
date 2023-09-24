#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrViewConfigurationType;
}
// Type: UnityEngine.XR.OpenXR.NativeTypes::XrViewConfigurationType
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14178))
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrViewConfigurationType
struct CORDL_TYPE XrViewConfigurationType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr XrViewConfigurationType(int32_t value__) noexcept;


                    constexpr XrViewConfigurationType(XrViewConfigurationType const&) = default;
                    constexpr XrViewConfigurationType(XrViewConfigurationType&&) = default;
                    constexpr XrViewConfigurationType& operator=(XrViewConfigurationType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr XrViewConfigurationType& operator=(XrViewConfigurationType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit XrViewConfigurationType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __XrViewConfigurationType_Unwrapped : int32_t {
__PrimaryMono = 1,
__PrimaryStereo = 2,
__PrimaryQuadVarjo = 1000037000,
__SecondaryMonoFirstPersonObserver = 1000054000,
__SecondaryMonoThirdPersonObserver = 1000145000,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XrViewConfigurationType_Unwrapped () const noexcept {
return std::bit_cast<__XrViewConfigurationType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field PrimaryMono offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType const PrimaryMono;

/// @brief Field PrimaryStereo offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType const PrimaryStereo;

/// @brief Field PrimaryQuadVarjo offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType const PrimaryQuadVarjo;

/// @brief Field SecondaryMonoFirstPersonObserver offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType const SecondaryMonoFirstPersonObserver;

/// @brief Field SecondaryMonoThirdPersonObserver offset 0
static UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType const SecondaryMonoThirdPersonObserver;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::NativeTypes
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType, "UnityEngine.XR.OpenXR.NativeTypes", "XrViewConfigurationType");
