#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace GlobalNamespace {
struct OVRTextureData;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRKtxTexture;
}
// Type: ::OVRKtxTexture
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8532))
// CS Name: OVRKtxTexture
class CORDL_TYPE OVRKtxTexture : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OVRKtxTexture() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRKtxTexture", modifiers: " const&", def_value: None }]
constexpr OVRKtxTexture(OVRKtxTexture const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRKtxTexture", modifiers: "&&", def_value: None }]
constexpr OVRKtxTexture(OVRKtxTexture&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRKtxTexture(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OVRKtxTexture& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRKtxTexture& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRKtxTexture& operator=(OVRKtxTexture&& o) noexcept = default;
  constexpr OVRKtxTexture& operator=(OVRKtxTexture const& o) noexcept = default;
                


// Fields

/// @brief Field KTX_TTF_BC7_RGBA offset 0
static constexpr uint32_t  KTX_TTF_BC7_RGBA{6u};

/// @brief Field KTX_TTF_ASTC_4x4_RGBA offset 0
static constexpr uint32_t  KTX_TTF_ASTC_4x4_RGBA{10u};


// Methods

/// @brief Method Load addr 0x25c3d18 size 0x250 virtual false final false
static bool Load(::ArrayW<uint8_t> data, ByRef<GlobalNamespace::OVRTextureData> ktxData) ;

static GlobalNamespace::OVRKtxTexture New_ctor() ;

/// @brief Method .ctor addr 0x25c3f68 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OVRKtxTexture);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRKtxTexture, "", "OVRKtxTexture");
