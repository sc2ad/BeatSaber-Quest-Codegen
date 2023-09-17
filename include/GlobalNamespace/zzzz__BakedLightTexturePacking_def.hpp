#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
class RenderTexture;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class BakedLightTexturePacking;
}
// Type: ::BakedLightTexturePacking
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5939))
// CS Name: BakedLightTexturePacking
class CORDL_TYPE BakedLightTexturePacking : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BakedLightTexturePacking() = default;

// Ctor Parameters [CppParam { name: "", ty: "BakedLightTexturePacking", modifiers: " const&", def_value: None }]
constexpr BakedLightTexturePacking(BakedLightTexturePacking const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BakedLightTexturePacking", modifiers: "&&", def_value: None }]
constexpr BakedLightTexturePacking(BakedLightTexturePacking&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BakedLightTexturePacking(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BakedLightTexturePacking& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BakedLightTexturePacking& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BakedLightTexturePacking& operator=(BakedLightTexturePacking&& o) noexcept = default;
  constexpr BakedLightTexturePacking& operator=(BakedLightTexturePacking const& o) noexcept = default;
                


// Fields

/// @brief Field kBakedLightTexturePackingShaderName offset 0
static constexpr ::ConstString  kBakedLightTexturePackingShaderName{u"Hidden/BakedLightTexturePacking"};

static ::ArrayW<int32_t> __declspec(property(get=__get__texPropertyIds, put=__set__texPropertyIds))  _texPropertyIds;

static void __set__texPropertyIds(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get__texPropertyIds() ;

static ::UnityEngine::Material __declspec(property(get=__get__material, put=__set__material))  _material;

static void __set__material(::UnityEngine::Material value) ;

static ::UnityEngine::Material __get__material() ;


// Methods

/// @brief Method PackTextures addr 0x219a458 size 0x36c virtual false final false
static ::UnityEngine::RenderTexture PackTextures(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::RenderTexture> textures, ::UnityEngine::RenderTextureDescriptor descriptor) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BakedLightTexturePacking);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BakedLightTexturePacking, "", "BakedLightTexturePacking");
