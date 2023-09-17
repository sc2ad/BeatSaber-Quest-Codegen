#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_InputBindingLoad_t;
}
// Type: OVR.OpenVR::VREvent_InputBindingLoad_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9472))
// CS Name: OVR.OpenVR.VREvent_InputBindingLoad_t
struct CORDL_TYPE VREvent_InputBindingLoad_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "ulAppContainer", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "pathMessage", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "pathUrl", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "pathControllerType", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr VREvent_InputBindingLoad_t(uint64_t ulAppContainer, uint64_t pathMessage, uint64_t pathUrl, uint64_t pathControllerType) noexcept;


                    constexpr VREvent_InputBindingLoad_t(VREvent_InputBindingLoad_t const&) = default;
                    constexpr VREvent_InputBindingLoad_t(VREvent_InputBindingLoad_t&&) = default;
                    constexpr VREvent_InputBindingLoad_t& operator=(VREvent_InputBindingLoad_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VREvent_InputBindingLoad_t& operator=(VREvent_InputBindingLoad_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VREvent_InputBindingLoad_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint64_t __declspec(property(get=__get_ulAppContainer, put=__set_ulAppContainer))  ulAppContainer;

constexpr void __set_ulAppContainer(uint64_t value) ;

constexpr uint64_t __get_ulAppContainer() const;

 uint64_t __declspec(property(get=__get_pathMessage, put=__set_pathMessage))  pathMessage;

constexpr void __set_pathMessage(uint64_t value) ;

constexpr uint64_t __get_pathMessage() const;

 uint64_t __declspec(property(get=__get_pathUrl, put=__set_pathUrl))  pathUrl;

constexpr void __set_pathUrl(uint64_t value) ;

constexpr uint64_t __get_pathUrl() const;

 uint64_t __declspec(property(get=__get_pathControllerType, put=__set_pathControllerType))  pathControllerType;

constexpr void __set_pathControllerType(uint64_t value) ;

constexpr uint64_t __get_pathControllerType() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_InputBindingLoad_t, "OVR.OpenVR", "VREvent_InputBindingLoad_t");
