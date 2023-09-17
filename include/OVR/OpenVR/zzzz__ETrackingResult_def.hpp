#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace OVR::OpenVR {
struct ETrackingResult;
}
// Type: OVR.OpenVR::ETrackingResult
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9366))
// CS Name: OVR.OpenVR.ETrackingResult
struct CORDL_TYPE ETrackingResult : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ETrackingResult(int32_t value__) noexcept;


                    constexpr ETrackingResult(ETrackingResult const&) = default;
                    constexpr ETrackingResult(ETrackingResult&&) = default;
                    constexpr ETrackingResult& operator=(ETrackingResult const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ETrackingResult& operator=(ETrackingResult&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ETrackingResult(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ETrackingResult_Unwrapped : int32_t {
__Uninitialized = 1,
__Calibrating_InProgress = 100,
__Calibrating_OutOfRange = 101,
__Running_OK = 200,
__Running_OutOfRange = 201,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ETrackingResult_Unwrapped () const noexcept {
return std::bit_cast<__ETrackingResult_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Uninitialized offset 0
static ::OVR::OpenVR::ETrackingResult const Uninitialized;

/// @brief Field Calibrating_InProgress offset 0
static ::OVR::OpenVR::ETrackingResult const Calibrating_InProgress;

/// @brief Field Calibrating_OutOfRange offset 0
static ::OVR::OpenVR::ETrackingResult const Calibrating_OutOfRange;

/// @brief Field Running_OK offset 0
static ::OVR::OpenVR::ETrackingResult const Running_OK;

/// @brief Field Running_OutOfRange offset 0
static ::OVR::OpenVR::ETrackingResult const Running_OutOfRange;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::ETrackingResult, "OVR.OpenVR", "ETrackingResult");
