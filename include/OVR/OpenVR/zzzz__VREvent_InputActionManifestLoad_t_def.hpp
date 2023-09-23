#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_InputActionManifestLoad_t;
}
// Type: OVR.OpenVR::VREvent_InputActionManifestLoad_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9473))
// CS Name: OVR.OpenVR.VREvent_InputActionManifestLoad_t
struct CORDL_TYPE VREvent_InputActionManifestLoad_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "pathAppKey", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "pathMessage", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "pathMessageParam", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "pathManifestPath", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr VREvent_InputActionManifestLoad_t(uint64_t pathAppKey, uint64_t pathMessage, uint64_t pathMessageParam, uint64_t pathManifestPath) noexcept;


                    constexpr VREvent_InputActionManifestLoad_t(VREvent_InputActionManifestLoad_t const&) = default;
                    constexpr VREvent_InputActionManifestLoad_t(VREvent_InputActionManifestLoad_t&&) = default;
                    constexpr VREvent_InputActionManifestLoad_t& operator=(VREvent_InputActionManifestLoad_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VREvent_InputActionManifestLoad_t& operator=(VREvent_InputActionManifestLoad_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VREvent_InputActionManifestLoad_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint64_t __declspec(property(get=__get_pathAppKey, put=__set_pathAppKey))  pathAppKey;

constexpr void __set_pathAppKey(uint64_t value) ;

constexpr uint64_t __get_pathAppKey() const;

 uint64_t __declspec(property(get=__get_pathMessage, put=__set_pathMessage))  pathMessage;

constexpr void __set_pathMessage(uint64_t value) ;

constexpr uint64_t __get_pathMessage() const;

 uint64_t __declspec(property(get=__get_pathMessageParam, put=__set_pathMessageParam))  pathMessageParam;

constexpr void __set_pathMessageParam(uint64_t value) ;

constexpr uint64_t __get_pathMessageParam() const;

 uint64_t __declspec(property(get=__get_pathManifestPath, put=__set_pathManifestPath))  pathManifestPath;

constexpr void __set_pathManifestPath(uint64_t value) ;

constexpr uint64_t __get_pathManifestPath() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VREvent_InputActionManifestLoad_t, "OVR.OpenVR", "VREvent_InputActionManifestLoad_t");
