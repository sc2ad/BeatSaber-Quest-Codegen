#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
namespace {
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace GlobalNamespace {
class TextureEffectSO;
}
// Type: ::TextureEffectSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14739))
// CS Name: TextureEffectSO
class CORDL_TYPE TextureEffectSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TextureEffectSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextureEffectSO", modifiers: " const&", def_value: None }]
constexpr TextureEffectSO(TextureEffectSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextureEffectSO", modifiers: "&&", def_value: None }]
constexpr TextureEffectSO(TextureEffectSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextureEffectSO(void* ptr) noexcept : ::GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr TextureEffectSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextureEffectSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextureEffectSO& operator=(TextureEffectSO&& o) noexcept = default;
  constexpr TextureEffectSO& operator=(TextureEffectSO const& o) noexcept = default;
                


// Methods

/// @brief Method Render addr 0x1fa3364 size 0x68 virtual true final false
 void Render(::UnityEngine::RenderTexture src, ::UnityEngine::RenderTexture dest) ;

// Ctor Parameters []
explicit TextureEffectSO() ;

/// @brief Method .ctor addr 0x1fa33cc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::TextureEffectSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TextureEffectSO, "", "TextureEffectSO");
