#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_ApplicationLaunch_t;
}
// Type: OVR.OpenVR::VREvent_ApplicationLaunch_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9465))
// CS Name: OVR.OpenVR.VREvent_ApplicationLaunch_t
struct CORDL_TYPE VREvent_ApplicationLaunch_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "pid", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "unArgsHandle", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr VREvent_ApplicationLaunch_t(uint32_t pid, uint32_t unArgsHandle) noexcept;


                    constexpr VREvent_ApplicationLaunch_t(VREvent_ApplicationLaunch_t const&) = default;
                    constexpr VREvent_ApplicationLaunch_t(VREvent_ApplicationLaunch_t&&) = default;
                    constexpr VREvent_ApplicationLaunch_t& operator=(VREvent_ApplicationLaunch_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VREvent_ApplicationLaunch_t& operator=(VREvent_ApplicationLaunch_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VREvent_ApplicationLaunch_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint32_t __declspec(property(get=__get_pid, put=__set_pid))  pid;

constexpr void __set_pid(uint32_t value) ;

constexpr uint32_t __get_pid() const;

 uint32_t __declspec(property(get=__get_unArgsHandle, put=__set_unArgsHandle))  unArgsHandle;

constexpr void __set_unArgsHandle(uint32_t value) ;

constexpr uint32_t __get_unArgsHandle() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VREvent_ApplicationLaunch_t, "OVR.OpenVR", "VREvent_ApplicationLaunch_t");
