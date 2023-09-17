#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSessionState;
}
// Type: UnityEngine.XR.OpenXR.NativeTypes::XrSessionState
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14182))
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrSessionState
struct CORDL_TYPE XrSessionState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr XrSessionState(int32_t value__) noexcept;


                    constexpr XrSessionState(XrSessionState const&) = default;
                    constexpr XrSessionState(XrSessionState&&) = default;
                    constexpr XrSessionState& operator=(XrSessionState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr XrSessionState& operator=(XrSessionState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit XrSessionState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __XrSessionState_Unwrapped : int32_t {
__Unknown = 0,
__Idle = 1,
__Ready = 2,
__Synchronized = 3,
__Visible = 4,
__Focused = 5,
__Stopping = 6,
__LossPending = 7,
__Exiting = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XrSessionState_Unwrapped () const noexcept {
return std::bit_cast<__XrSessionState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState const Unknown;

/// @brief Field Idle offset 0
static ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState const Idle;

/// @brief Field Ready offset 0
static ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState const Ready;

/// @brief Field Synchronized offset 0
static ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState const Synchronized;

/// @brief Field Visible offset 0
static ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState const Visible;

/// @brief Field Focused offset 0
static ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState const Focused;

/// @brief Field Stopping offset 0
static ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState const Stopping;

/// @brief Field LossPending offset 0
static ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState const LossPending;

/// @brief Field Exiting offset 0
static ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState const Exiting;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::NativeTypes
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState, "UnityEngine.XR.OpenXR.NativeTypes", "XrSessionState");
