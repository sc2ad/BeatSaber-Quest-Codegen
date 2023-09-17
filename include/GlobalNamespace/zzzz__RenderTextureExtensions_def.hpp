#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace GlobalNamespace {
class RenderTextureExtensions;
}
// Type: ::RenderTextureExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13761))
// CS Name: RenderTextureExtensions
class CORDL_TYPE RenderTextureExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~RenderTextureExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "RenderTextureExtensions", modifiers: " const&", def_value: None }]
constexpr RenderTextureExtensions(RenderTextureExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RenderTextureExtensions", modifiers: "&&", def_value: None }]
constexpr RenderTextureExtensions(RenderTextureExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RenderTextureExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RenderTextureExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RenderTextureExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RenderTextureExtensions& operator=(RenderTextureExtensions&& o) noexcept = default;
  constexpr RenderTextureExtensions& operator=(RenderTextureExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method GetTexture2D addr 0x1f741e0 size 0x154 virtual false final false
static ::UnityEngine::Texture2D GetTexture2D(::UnityEngine::RenderTexture rt) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::RenderTextureExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RenderTextureExtensions, "", "RenderTextureExtensions");
