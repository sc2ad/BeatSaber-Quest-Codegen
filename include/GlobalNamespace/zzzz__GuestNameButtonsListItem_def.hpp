#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Button;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class GuestNameButtonsListItem;
}
// Type: ::GuestNameButtonsListItem
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5620))
// CS Name: GuestNameButtonsListItem
class CORDL_TYPE GuestNameButtonsListItem : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GuestNameButtonsListItem() = default;

// Ctor Parameters [CppParam { name: "", ty: "GuestNameButtonsListItem", modifiers: " const&", def_value: None }]
constexpr GuestNameButtonsListItem(GuestNameButtonsListItem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GuestNameButtonsListItem", modifiers: "&&", def_value: None }]
constexpr GuestNameButtonsListItem(GuestNameButtonsListItem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GuestNameButtonsListItem(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr GuestNameButtonsListItem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GuestNameButtonsListItem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GuestNameButtonsListItem& operator=(GuestNameButtonsListItem&& o) noexcept = default;
  constexpr GuestNameButtonsListItem& operator=(GuestNameButtonsListItem const& o) noexcept = default;
                


// Fields

 TMPro::TextMeshProUGUI __declspec(property(get=__get__nameText, put=__set__nameText))  _nameText;

constexpr void __set__nameText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__nameText() const;

 UnityEngine::UI::Button __declspec(property(get=__get__button, put=__set__button))  _button;

constexpr void __set__button(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__button() const;

 System::Action __declspec(property(get=__get__buttonPressed, put=__set__buttonPressed))  _buttonPressed;

constexpr void __set__buttonPressed(System::Action value) ;

constexpr System::Action __get__buttonPressed() const;


// Properties

 ::StringW __declspec(property(put=set_nameText))  nameText;

 System::Action __declspec(property(put=set_buttonPressed))  buttonPressed;


// Methods

/// @brief Method set_nameText addr 0x2146df4 size 0x24 virtual false final false
 void set_nameText(::StringW value) ;

/// @brief Method set_buttonPressed addr 0x2146e18 size 0x8 virtual false final false
 void set_buttonPressed(System::Action value) ;

/// @brief Method Awake addr 0x2146e20 size 0x94 virtual false final false
 void Awake() ;

static GlobalNamespace::GuestNameButtonsListItem New_ctor() ;

/// @brief Method .ctor addr 0x2146eb4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Awake>b__7_0 addr 0x2146ebc size 0x1c virtual false final false
 void _Awake_b__7_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GuestNameButtonsListItem);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GuestNameButtonsListItem, "", "GuestNameButtonsListItem");
