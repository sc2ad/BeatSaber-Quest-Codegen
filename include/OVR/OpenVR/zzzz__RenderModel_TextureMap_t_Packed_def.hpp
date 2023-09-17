#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace OVR::OpenVR {
struct RenderModel_TextureMap_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct RenderModel_TextureMap_t_Packed;
}
// Type: OVR.OpenVR::RenderModel_TextureMap_t_Packed
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9497))
// CS Name: OVR.OpenVR.RenderModel_TextureMap_t_Packed
struct CORDL_TYPE RenderModel_TextureMap_t_Packed : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "unWidth", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "unHeight", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "rubTextureMapData", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr RenderModel_TextureMap_t_Packed(uint16_t unWidth, uint16_t unHeight, ::cordl_internals::intptr_t rubTextureMapData) noexcept;


                    constexpr RenderModel_TextureMap_t_Packed(RenderModel_TextureMap_t_Packed const&) = default;
                    constexpr RenderModel_TextureMap_t_Packed(RenderModel_TextureMap_t_Packed&&) = default;
                    constexpr RenderModel_TextureMap_t_Packed& operator=(RenderModel_TextureMap_t_Packed const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RenderModel_TextureMap_t_Packed& operator=(RenderModel_TextureMap_t_Packed&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RenderModel_TextureMap_t_Packed(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint16_t __declspec(property(get=__get_unWidth, put=__set_unWidth))  unWidth;

constexpr void __set_unWidth(uint16_t value) ;

constexpr uint16_t __get_unWidth() const;

 uint16_t __declspec(property(get=__get_unHeight, put=__set_unHeight))  unHeight;

constexpr void __set_unHeight(uint16_t value) ;

constexpr uint16_t __get_unHeight() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_rubTextureMapData, put=__set_rubTextureMapData))  rubTextureMapData;

constexpr void __set_rubTextureMapData(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_rubTextureMapData() const;


// Methods

/// @brief Method .ctor addr 0x2668f0c size 0x14 virtual false final false
 void _ctor(::OVR::OpenVR::RenderModel_TextureMap_t unpacked) ;

/// @brief Method Unpack addr 0x2668f20 size 0x1c virtual false final false
 void Unpack(ByRef<::OVR::OpenVR::RenderModel_TextureMap_t> unpacked) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::RenderModel_TextureMap_t_Packed, "OVR.OpenVR", "RenderModel_TextureMap_t_Packed");
