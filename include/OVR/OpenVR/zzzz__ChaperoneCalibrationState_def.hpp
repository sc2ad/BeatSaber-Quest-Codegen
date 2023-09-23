#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct ChaperoneCalibrationState;
}
// Type: OVR.OpenVR::ChaperoneCalibrationState
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9402))
// CS Name: OVR.OpenVR.ChaperoneCalibrationState
struct CORDL_TYPE ChaperoneCalibrationState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ChaperoneCalibrationState(int32_t value__) noexcept;


                    constexpr ChaperoneCalibrationState(ChaperoneCalibrationState const&) = default;
                    constexpr ChaperoneCalibrationState(ChaperoneCalibrationState&&) = default;
                    constexpr ChaperoneCalibrationState& operator=(ChaperoneCalibrationState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ChaperoneCalibrationState& operator=(ChaperoneCalibrationState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ChaperoneCalibrationState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ChaperoneCalibrationState_Unwrapped : int32_t {
__OK = 1,
__Warning = 100,
__Warning_BaseStationMayHaveMoved = 101,
__Warning_BaseStationRemoved = 102,
__Warning_SeatedBoundsInvalid = 103,
__Error = 200,
__Error_BaseStationUninitialized = 201,
__Error_BaseStationConflict = 202,
__Error_PlayAreaInvalid = 203,
__Error_CollisionBoundsInvalid = 204,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ChaperoneCalibrationState_Unwrapped () const noexcept {
return std::bit_cast<__ChaperoneCalibrationState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field OK offset 0
static OVR::OpenVR::ChaperoneCalibrationState const OK;

/// @brief Field Warning offset 0
static OVR::OpenVR::ChaperoneCalibrationState const Warning;

/// @brief Field Warning_BaseStationMayHaveMoved offset 0
static OVR::OpenVR::ChaperoneCalibrationState const Warning_BaseStationMayHaveMoved;

/// @brief Field Warning_BaseStationRemoved offset 0
static OVR::OpenVR::ChaperoneCalibrationState const Warning_BaseStationRemoved;

/// @brief Field Warning_SeatedBoundsInvalid offset 0
static OVR::OpenVR::ChaperoneCalibrationState const Warning_SeatedBoundsInvalid;

/// @brief Field Error offset 0
static OVR::OpenVR::ChaperoneCalibrationState const Error;

/// @brief Field Error_BaseStationUninitialized offset 0
static OVR::OpenVR::ChaperoneCalibrationState const Error_BaseStationUninitialized;

/// @brief Field Error_BaseStationConflict offset 0
static OVR::OpenVR::ChaperoneCalibrationState const Error_BaseStationConflict;

/// @brief Field Error_PlayAreaInvalid offset 0
static OVR::OpenVR::ChaperoneCalibrationState const Error_PlayAreaInvalid;

/// @brief Field Error_CollisionBoundsInvalid offset 0
static OVR::OpenVR::ChaperoneCalibrationState const Error_CollisionBoundsInvalid;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::ChaperoneCalibrationState, "OVR.OpenVR", "ChaperoneCalibrationState");
