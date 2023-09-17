#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace {
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine {
struct RectInt;
}
namespace UnityEngine::UIElements {
class TextureRegistry;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine::UIElements {
struct TextureId;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class AtlasBase;
}
// Type: UnityEngine.UIElements::AtlasBase
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6842))
// CS Name: UnityEngine.UIElements.AtlasBase
class CORDL_TYPE AtlasBase : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AtlasBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "AtlasBase", modifiers: " const&", def_value: None }]
constexpr AtlasBase(AtlasBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AtlasBase", modifiers: "&&", def_value: None }]
constexpr AtlasBase(AtlasBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AtlasBase(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AtlasBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AtlasBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AtlasBase& operator=(AtlasBase&& o) noexcept = default;
  constexpr AtlasBase& operator=(AtlasBase const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UIElements::TextureRegistry __declspec(property(get=__get_textureRegistry, put=__set_textureRegistry))  textureRegistry;

constexpr void __set_textureRegistry(::UnityEngine::UIElements::TextureRegistry value) ;

constexpr ::UnityEngine::UIElements::TextureRegistry __get_textureRegistry() const;


// Methods

/// @brief Method TryGetAtlas addr 0x2c3b0e8 size 0x74 virtual true final false
 bool TryGetAtlas(::UnityEngine::UIElements::VisualElement ctx, ::UnityEngine::Texture2D src, ByRef<::UnityEngine::UIElements::TextureId> atlas, ByRef<::UnityEngine::RectInt> atlasRect) ;

/// @brief Method ReturnAtlas addr 0x2c3b15c size 0x4 virtual true final false
 void ReturnAtlas(::UnityEngine::UIElements::VisualElement ctx, ::UnityEngine::Texture2D src, ::UnityEngine::UIElements::TextureId atlas) ;

/// @brief Method Reset addr 0x2c3b160 size 0x4 virtual true final false
 void Reset() ;

/// @brief Method OnAssignedToPanel addr 0x2c3b164 size 0x4 virtual true final false
 void OnAssignedToPanel(::UnityEngine::UIElements::IPanel panel) ;

/// @brief Method OnRemovedFromPanel addr 0x2c3b168 size 0x4 virtual true final false
 void OnRemovedFromPanel(::UnityEngine::UIElements::IPanel panel) ;

/// @brief Method OnUpdateDynamicTextures addr 0x2c3b16c size 0x4 virtual true final false
 void OnUpdateDynamicTextures(::UnityEngine::UIElements::IPanel panel) ;

/// @brief Method InvokeAssignedToPanel addr 0x2c3b170 size 0xc virtual false final false
 void InvokeAssignedToPanel(::UnityEngine::UIElements::IPanel panel) ;

/// @brief Method InvokeRemovedFromPanel addr 0x2c3b17c size 0xc virtual false final false
 void InvokeRemovedFromPanel(::UnityEngine::UIElements::IPanel panel) ;

/// @brief Method InvokeUpdateDynamicTextures addr 0x2c3b188 size 0xc virtual false final false
 void InvokeUpdateDynamicTextures(::UnityEngine::UIElements::IPanel panel) ;

/// @brief Method RepaintTexturedElements addr 0x2c3b194 size 0xec virtual false final false
static void RepaintTexturedElements(::UnityEngine::UIElements::IPanel panel) ;

/// @brief Method SetDynamicTexture addr 0x2c3b280 size 0x20 virtual false final false
 void SetDynamicTexture(::UnityEngine::UIElements::TextureId id, ::UnityEngine::Texture texture) ;

// Ctor Parameters []
explicit AtlasBase() ;

/// @brief Method .ctor addr 0x2c3b2a0 size 0x98 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::AtlasBase);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::AtlasBase, "UnityEngine.UIElements", "AtlasBase");
