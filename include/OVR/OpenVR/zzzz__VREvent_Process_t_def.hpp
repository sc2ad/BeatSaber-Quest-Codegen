#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_Process_t;
}
// Type: OVR.OpenVR::VREvent_Process_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9454))
// CS Name: OVR.OpenVR.VREvent_Process_t
struct CORDL_TYPE VREvent_Process_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "pid", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "oldPid", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "bForced", ty: "bool", modifiers: "", def_value: None }]
constexpr VREvent_Process_t(uint32_t pid, uint32_t oldPid, bool bForced) noexcept;


                    constexpr VREvent_Process_t(VREvent_Process_t const&) = default;
                    constexpr VREvent_Process_t(VREvent_Process_t&&) = default;
                    constexpr VREvent_Process_t& operator=(VREvent_Process_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VREvent_Process_t& operator=(VREvent_Process_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VREvent_Process_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint32_t __declspec(property(get=__get_pid, put=__set_pid))  pid;

constexpr void __set_pid(uint32_t value) ;

constexpr uint32_t __get_pid() const;

 uint32_t __declspec(property(get=__get_oldPid, put=__set_oldPid))  oldPid;

constexpr void __set_oldPid(uint32_t value) ;

constexpr uint32_t __get_oldPid() const;

 bool __declspec(property(get=__get_bForced, put=__set_bForced))  bForced;

constexpr void __set_bForced(bool value) ;

constexpr bool __get_bForced() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VREvent_Process_t, "OVR.OpenVR", "VREvent_Process_t");
