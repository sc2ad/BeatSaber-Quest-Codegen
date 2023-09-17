#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_Screenshot_t;
}
// Type: OVR.OpenVR::VREvent_Screenshot_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9463))
// CS Name: OVR.OpenVR.VREvent_Screenshot_t
struct CORDL_TYPE VREvent_Screenshot_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "handle", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "type", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr VREvent_Screenshot_t(uint32_t handle, uint32_t type) noexcept;


                    constexpr VREvent_Screenshot_t(VREvent_Screenshot_t const&) = default;
                    constexpr VREvent_Screenshot_t(VREvent_Screenshot_t&&) = default;
                    constexpr VREvent_Screenshot_t& operator=(VREvent_Screenshot_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VREvent_Screenshot_t& operator=(VREvent_Screenshot_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VREvent_Screenshot_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint32_t __declspec(property(get=__get_handle, put=__set_handle))  handle;

constexpr void __set_handle(uint32_t value) ;

constexpr uint32_t __get_handle() const;

 uint32_t __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(uint32_t value) ;

constexpr uint32_t __get_type() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_Screenshot_t, "OVR.OpenVR", "VREvent_Screenshot_t");
