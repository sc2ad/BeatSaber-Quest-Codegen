#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__ModifiersSelectionView_def.hpp"
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace UnityEngine {
class CanvasGroup;
}
// Forward declare root types
namespace GlobalNamespace {
class EditableModifiersSelectionView;
}
// Type: ::EditableModifiersSelectionView
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5884))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5867))
// CS Name: EditableModifiersSelectionView
class CORDL_TYPE EditableModifiersSelectionView : public GlobalNamespace::ModifiersSelectionView {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~EditableModifiersSelectionView() = default;

// Ctor Parameters [CppParam { name: "", ty: "EditableModifiersSelectionView", modifiers: " const&", def_value: None }]
constexpr EditableModifiersSelectionView(EditableModifiersSelectionView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EditableModifiersSelectionView", modifiers: "&&", def_value: None }]
constexpr EditableModifiersSelectionView(EditableModifiersSelectionView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EditableModifiersSelectionView(void* ptr) noexcept : GlobalNamespace::ModifiersSelectionView(ptr) {
}


  constexpr EditableModifiersSelectionView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EditableModifiersSelectionView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EditableModifiersSelectionView& operator=(EditableModifiersSelectionView&& o) noexcept = default;
  constexpr EditableModifiersSelectionView& operator=(EditableModifiersSelectionView const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::Button __declspec(property(get=__get__editButton, put=__set__editButton))  _editButton;

constexpr void __set__editButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__editButton() const;

 UnityEngine::UI::Button __declspec(property(get=__get__clearButton, put=__set__clearButton))  _clearButton;

constexpr void __set__clearButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__clearButton() const;

 UnityEngine::CanvasGroup __declspec(property(get=__get__modifiersListCanvasGroup, put=__set__modifiersListCanvasGroup))  _modifiersListCanvasGroup;

constexpr void __set__modifiersListCanvasGroup(UnityEngine::CanvasGroup value) ;

constexpr UnityEngine::CanvasGroup __get__modifiersListCanvasGroup() const;

 bool __declspec(property(get=__get__interactable, put=__set__interactable))  _interactable;

constexpr void __set__interactable(bool value) ;

constexpr bool __get__interactable() const;

 bool __declspec(property(get=__get__showClearButton_k__BackingField, put=__set__showClearButton_k__BackingField))  _showClearButton_k__BackingField;

constexpr void __set__showClearButton_k__BackingField(bool value) ;

constexpr bool __get__showClearButton_k__BackingField() const;


// Properties

 UnityEngine::UI::Button __declspec(property(get=get_editButton))  editButton;

 UnityEngine::UI::Button __declspec(property(get=get_clearButton))  clearButton;

 bool __declspec(property(get=get_interactable, put=set_interactable))  interactable;

 bool __declspec(property(get=get_showClearButton, put=set_showClearButton))  showClearButton;


// Methods

/// @brief Method get_editButton addr 0x21867b8 size 0x8 virtual false final false
 UnityEngine::UI::Button get_editButton() ;

/// @brief Method get_clearButton addr 0x21867c0 size 0x8 virtual false final false
 UnityEngine::UI::Button get_clearButton() ;

/// @brief Method get_interactable addr 0x21867c8 size 0x8 virtual false final false
 bool get_interactable() ;

/// @brief Method set_interactable addr 0x2178008 size 0x60 virtual false final false
 void set_interactable(bool value) ;

/// @brief Method get_showClearButton addr 0x21867d0 size 0x8 virtual false final false
 bool get_showClearButton() ;

/// @brief Method set_showClearButton addr 0x21867d8 size 0xc virtual false final false
 void set_showClearButton(bool value) ;

/// @brief Method SetVisibility addr 0x2177a00 size 0x28 virtual false final false
 void SetVisibility(bool visible) ;

/// @brief Method Setup addr 0x21779f4 size 0xc virtual false final false
 void Setup(bool showClearButton) ;

/// @brief Method SetGameplayModifiers addr 0x21867e4 size 0x64 virtual true final false
 void SetGameplayModifiers(GlobalNamespace::GameplayModifiers gameplayModifiers) ;

static GlobalNamespace::EditableModifiersSelectionView New_ctor() ;

/// @brief Method .ctor addr 0x2186848 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::EditableModifiersSelectionView);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EditableModifiersSelectionView, "", "EditableModifiersSelectionView");
