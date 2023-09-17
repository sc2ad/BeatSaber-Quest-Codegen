#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace OVR::OpenVR {
struct InputDigitalActionData_t;
}
// Type: OVR.OpenVR::InputDigitalActionData_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9504))
// CS Name: OVR.OpenVR.InputDigitalActionData_t
struct CORDL_TYPE InputDigitalActionData_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "bActive", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "activeOrigin", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "bState", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "bChanged", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "fUpdateTime", ty: "float_t", modifiers: "", def_value: None }]
constexpr InputDigitalActionData_t(bool bActive, uint64_t activeOrigin, bool bState, bool bChanged, float_t fUpdateTime) noexcept;


                    constexpr InputDigitalActionData_t(InputDigitalActionData_t const&) = default;
                    constexpr InputDigitalActionData_t(InputDigitalActionData_t&&) = default;
                    constexpr InputDigitalActionData_t& operator=(InputDigitalActionData_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InputDigitalActionData_t& operator=(InputDigitalActionData_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InputDigitalActionData_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_bActive, put=__set_bActive))  bActive;

constexpr void __set_bActive(bool value) ;

constexpr bool __get_bActive() const;

 uint64_t __declspec(property(get=__get_activeOrigin, put=__set_activeOrigin))  activeOrigin;

constexpr void __set_activeOrigin(uint64_t value) ;

constexpr uint64_t __get_activeOrigin() const;

 bool __declspec(property(get=__get_bState, put=__set_bState))  bState;

constexpr void __set_bState(bool value) ;

constexpr bool __get_bState() const;

 bool __declspec(property(get=__get_bChanged, put=__set_bChanged))  bChanged;

constexpr void __set_bChanged(bool value) ;

constexpr bool __get_bChanged() const;

 float_t __declspec(property(get=__get_fUpdateTime, put=__set_fUpdateTime))  fUpdateTime;

constexpr void __set_fUpdateTime(float_t value) ;

constexpr float_t __get_fUpdateTime() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::InputDigitalActionData_t, "OVR.OpenVR", "InputDigitalActionData_t");
