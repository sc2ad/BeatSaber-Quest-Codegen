#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct VRActiveActionSet_t;
}
// Type: OVR.OpenVR::VRActiveActionSet_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9508))
// CS Name: OVR.OpenVR.VRActiveActionSet_t
struct CORDL_TYPE VRActiveActionSet_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "ulActionSet", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "ulRestrictedToDevice", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "ulSecondaryActionSet", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "unPadding", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "nPriority", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VRActiveActionSet_t(uint64_t ulActionSet, uint64_t ulRestrictedToDevice, uint64_t ulSecondaryActionSet, uint32_t unPadding, int32_t nPriority) noexcept;


                    constexpr VRActiveActionSet_t(VRActiveActionSet_t const&) = default;
                    constexpr VRActiveActionSet_t(VRActiveActionSet_t&&) = default;
                    constexpr VRActiveActionSet_t& operator=(VRActiveActionSet_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VRActiveActionSet_t& operator=(VRActiveActionSet_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VRActiveActionSet_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint64_t __declspec(property(get=__get_ulActionSet, put=__set_ulActionSet))  ulActionSet;

constexpr void __set_ulActionSet(uint64_t value) ;

constexpr uint64_t __get_ulActionSet() const;

 uint64_t __declspec(property(get=__get_ulRestrictedToDevice, put=__set_ulRestrictedToDevice))  ulRestrictedToDevice;

constexpr void __set_ulRestrictedToDevice(uint64_t value) ;

constexpr uint64_t __get_ulRestrictedToDevice() const;

 uint64_t __declspec(property(get=__get_ulSecondaryActionSet, put=__set_ulSecondaryActionSet))  ulSecondaryActionSet;

constexpr void __set_ulSecondaryActionSet(uint64_t value) ;

constexpr uint64_t __get_ulSecondaryActionSet() const;

 uint32_t __declspec(property(get=__get_unPadding, put=__set_unPadding))  unPadding;

constexpr void __set_unPadding(uint32_t value) ;

constexpr uint32_t __get_unPadding() const;

 int32_t __declspec(property(get=__get_nPriority, put=__set_nPriority))  nPriority;

constexpr void __set_nPriority(int32_t value) ;

constexpr int32_t __get_nPriority() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VRActiveActionSet_t, "OVR.OpenVR", "VRActiveActionSet_t");
