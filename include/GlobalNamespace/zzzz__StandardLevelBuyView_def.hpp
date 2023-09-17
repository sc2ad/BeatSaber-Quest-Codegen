#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class LevelBar;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardLevelBuyView;
}
// Type: ::StandardLevelBuyView
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5902))
// CS Name: StandardLevelBuyView
class CORDL_TYPE StandardLevelBuyView : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~StandardLevelBuyView() = default;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelBuyView", modifiers: " const&", def_value: None }]
constexpr StandardLevelBuyView(StandardLevelBuyView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelBuyView", modifiers: "&&", def_value: None }]
constexpr StandardLevelBuyView(StandardLevelBuyView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StandardLevelBuyView(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr StandardLevelBuyView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StandardLevelBuyView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StandardLevelBuyView& operator=(StandardLevelBuyView&& o) noexcept = default;
  constexpr StandardLevelBuyView& operator=(StandardLevelBuyView const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::LevelBar __declspec(property(get=__get__levelBar, put=__set__levelBar))  _levelBar;

constexpr void __set__levelBar(::GlobalNamespace::LevelBar value) ;

constexpr ::GlobalNamespace::LevelBar __get__levelBar() const;

 ::UnityEngine::UI::Button __declspec(property(get=__get__buyButton, put=__set__buyButton))  _buyButton;

constexpr void __set__buyButton(::UnityEngine::UI::Button value) ;

constexpr ::UnityEngine::UI::Button __get__buyButton() const;


// Properties

 ::UnityEngine::UI::Button __declspec(property(get=get_buyButton))  buyButton;


// Methods

/// @brief Method get_buyButton addr 0x218f6ac size 0x8 virtual false final false
 ::UnityEngine::UI::Button get_buyButton() ;

/// @brief Method SetContent addr 0x218f6b4 size 0x20 virtual false final false
 void SetContent(::GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel) ;

// Ctor Parameters []
explicit StandardLevelBuyView() ;

/// @brief Method .ctor addr 0x218f6d4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::StandardLevelBuyView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelBuyView, "", "StandardLevelBuyView");
