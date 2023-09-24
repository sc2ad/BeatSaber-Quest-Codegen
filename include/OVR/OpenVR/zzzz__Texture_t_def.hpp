#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace OVR::OpenVR {
struct ETextureType;
}
namespace OVR::OpenVR {
struct EColorSpace;
}
// Forward declare root types
namespace OVR::OpenVR {
struct Texture_t;
}
// Type: OVR.OpenVR::Texture_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9440))
// CS Name: OVR.OpenVR.Texture_t
struct CORDL_TYPE Texture_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "handle", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "eType", ty: "OVR::OpenVR::ETextureType", modifiers: "", def_value: None }, CppParam { name: "eColorSpace", ty: "OVR::OpenVR::EColorSpace", modifiers: "", def_value: None }]
constexpr Texture_t(::cordl_internals::intptr_t handle, OVR::OpenVR::ETextureType eType, OVR::OpenVR::EColorSpace eColorSpace) noexcept;


                    constexpr Texture_t(Texture_t const&) = default;
                    constexpr Texture_t(Texture_t&&) = default;
                    constexpr Texture_t& operator=(Texture_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Texture_t& operator=(Texture_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Texture_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_handle, put=__set_handle))  handle;

constexpr void __set_handle(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_handle() const;

 OVR::OpenVR::ETextureType __declspec(property(get=__get_eType, put=__set_eType))  eType;

constexpr void __set_eType(OVR::OpenVR::ETextureType value) ;

constexpr OVR::OpenVR::ETextureType __get_eType() const;

 OVR::OpenVR::EColorSpace __declspec(property(get=__get_eColorSpace, put=__set_eColorSpace))  eColorSpace;

constexpr void __set_eColorSpace(OVR::OpenVR::EColorSpace value) ;

constexpr OVR::OpenVR::EColorSpace __get_eColorSpace() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::Texture_t, "OVR.OpenVR", "Texture_t");
