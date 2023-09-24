#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::UI {
class Button;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardLevelBuyInfoView;
}
// Type: ::StandardLevelBuyInfoView
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5901))
// CS Name: StandardLevelBuyInfoView
class CORDL_TYPE StandardLevelBuyInfoView : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~StandardLevelBuyInfoView() = default;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelBuyInfoView", modifiers: " const&", def_value: None }]
constexpr StandardLevelBuyInfoView(StandardLevelBuyInfoView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelBuyInfoView", modifiers: "&&", def_value: None }]
constexpr StandardLevelBuyInfoView(StandardLevelBuyInfoView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StandardLevelBuyInfoView(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr StandardLevelBuyInfoView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StandardLevelBuyInfoView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StandardLevelBuyInfoView& operator=(StandardLevelBuyInfoView&& o) noexcept = default;
  constexpr StandardLevelBuyInfoView& operator=(StandardLevelBuyInfoView const& o) noexcept = default;
                


// Fields

 TMPro::TextMeshProUGUI __declspec(property(get=__get__text, put=__set__text))  _text;

constexpr void __set__text(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__text() const;

 UnityEngine::UI::Button __declspec(property(get=__get__buyLevelButton, put=__set__buyLevelButton))  _buyLevelButton;

constexpr void __set__buyLevelButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__buyLevelButton() const;

 UnityEngine::UI::Button __declspec(property(get=__get__openPackButton, put=__set__openPackButton))  _openPackButton;

constexpr void __set__openPackButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__openPackButton() const;

 UnityEngine::UI::Button __declspec(property(get=__get__buyPackButton, put=__set__buyPackButton))  _buyPackButton;

constexpr void __set__buyPackButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__buyPackButton() const;


// Properties

 UnityEngine::UI::Button __declspec(property(get=get_buyLevelButton))  buyLevelButton;

 UnityEngine::UI::Button __declspec(property(get=get_openPackButton))  openPackButton;

 UnityEngine::UI::Button __declspec(property(get=get_buyPackButton))  buyPackButton;


// Methods

/// @brief Method get_buyLevelButton addr 0x218f614 size 0x8 virtual false final false
 UnityEngine::UI::Button get_buyLevelButton() ;

/// @brief Method get_openPackButton addr 0x218f61c size 0x8 virtual false final false
 UnityEngine::UI::Button get_openPackButton() ;

/// @brief Method get_buyPackButton addr 0x218f624 size 0x8 virtual false final false
 UnityEngine::UI::Button get_buyPackButton() ;

/// @brief Method RefreshView addr 0x218f62c size 0x78 virtual false final false
 void RefreshView(::StringW infoText, bool canBuyPack) ;

static GlobalNamespace::StandardLevelBuyInfoView New_ctor() ;

/// @brief Method .ctor addr 0x218f6a4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::StandardLevelBuyInfoView);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelBuyInfoView, "", "StandardLevelBuyInfoView");
