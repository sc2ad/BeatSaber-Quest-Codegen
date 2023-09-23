#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine::UI {
class Image;
}
namespace HMUI {
class HoverHint;
}
namespace GlobalNamespace {
class GameplayModifierParamsSO;
}
// Forward declare root types
namespace GlobalNamespace {
class GameplayModifierInfoListItem;
}
// Type: ::GameplayModifierInfoListItem
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5514))
// CS Name: GameplayModifierInfoListItem
class CORDL_TYPE GameplayModifierInfoListItem : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GameplayModifierInfoListItem() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameplayModifierInfoListItem", modifiers: " const&", def_value: None }]
constexpr GameplayModifierInfoListItem(GameplayModifierInfoListItem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameplayModifierInfoListItem", modifiers: "&&", def_value: None }]
constexpr GameplayModifierInfoListItem(GameplayModifierInfoListItem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameplayModifierInfoListItem(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr GameplayModifierInfoListItem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameplayModifierInfoListItem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameplayModifierInfoListItem& operator=(GameplayModifierInfoListItem&& o) noexcept = default;
  constexpr GameplayModifierInfoListItem& operator=(GameplayModifierInfoListItem const& o) noexcept = default;
                


// Fields

 HMUI::HoverHint __declspec(property(get=__get__hoverHint, put=__set__hoverHint))  _hoverHint;

constexpr void __set__hoverHint(HMUI::HoverHint value) ;

constexpr HMUI::HoverHint __get__hoverHint() const;

 UnityEngine::UI::Image __declspec(property(get=__get__iconImage, put=__set__iconImage))  _iconImage;

constexpr void __set__iconImage(UnityEngine::UI::Image value) ;

constexpr UnityEngine::UI::Image __get__iconImage() const;


// Methods

/// @brief Method SetModifier addr 0x2122f2c size 0x224 virtual false final false
 void SetModifier(GlobalNamespace::GameplayModifierParamsSO modifierParam, bool showName) ;

// Ctor Parameters []
explicit GameplayModifierInfoListItem() ;

/// @brief Method .ctor addr 0x2123150 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GameplayModifierInfoListItem);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayModifierInfoListItem, "", "GameplayModifierInfoListItem");
