#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BeatmapSelectionView_def.hpp"
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class PreviewDifficultyBeatmap;
}
namespace UnityEngine {
class CanvasGroup;
}
// Forward declare root types
namespace GlobalNamespace {
class EditableBeatmapSelectionView;
}
// Type: ::EditableBeatmapSelectionView
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5859))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5866))
// CS Name: EditableBeatmapSelectionView
class CORDL_TYPE EditableBeatmapSelectionView : public GlobalNamespace::BeatmapSelectionView {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~EditableBeatmapSelectionView() = default;

// Ctor Parameters [CppParam { name: "", ty: "EditableBeatmapSelectionView", modifiers: " const&", def_value: None }]
constexpr EditableBeatmapSelectionView(EditableBeatmapSelectionView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EditableBeatmapSelectionView", modifiers: "&&", def_value: None }]
constexpr EditableBeatmapSelectionView(EditableBeatmapSelectionView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EditableBeatmapSelectionView(void* ptr) noexcept : GlobalNamespace::BeatmapSelectionView(ptr) {
}


  constexpr EditableBeatmapSelectionView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EditableBeatmapSelectionView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EditableBeatmapSelectionView& operator=(EditableBeatmapSelectionView&& o) noexcept = default;
  constexpr EditableBeatmapSelectionView& operator=(EditableBeatmapSelectionView const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::Button __declspec(property(get=__get__editButton, put=__set__editButton))  _editButton;

constexpr void __set__editButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__editButton() const;

 UnityEngine::UI::Button __declspec(property(get=__get__clearButton, put=__set__clearButton))  _clearButton;

constexpr void __set__clearButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__clearButton() const;

 UnityEngine::CanvasGroup __declspec(property(get=__get__levelBarCanvasGroup, put=__set__levelBarCanvasGroup))  _levelBarCanvasGroup;

constexpr void __set__levelBarCanvasGroup(UnityEngine::CanvasGroup value) ;

constexpr UnityEngine::CanvasGroup __get__levelBarCanvasGroup() const;

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

/// @brief Method get_editButton addr 0x2186714 size 0x8 virtual false final false
 UnityEngine::UI::Button get_editButton() ;

/// @brief Method get_clearButton addr 0x218671c size 0x8 virtual false final false
 UnityEngine::UI::Button get_clearButton() ;

/// @brief Method get_interactable addr 0x2186724 size 0x8 virtual false final false
 bool get_interactable() ;

/// @brief Method set_interactable addr 0x2177fa8 size 0x60 virtual false final false
 void set_interactable(bool value) ;

/// @brief Method get_showClearButton addr 0x218672c size 0x8 virtual false final false
 bool get_showClearButton() ;

/// @brief Method set_showClearButton addr 0x2186734 size 0xc virtual false final false
 void set_showClearButton(bool value) ;

/// @brief Method SetVisibility addr 0x21779cc size 0x28 virtual false final false
 void SetVisibility(bool visible) ;

/// @brief Method Setup addr 0x21779c0 size 0xc virtual false final false
 void Setup(bool showClearButton) ;

/// @brief Method SetBeatmap addr 0x2186740 size 0x68 virtual true final false
 void SetBeatmap(GlobalNamespace::PreviewDifficultyBeatmap beatmapLevel) ;

static GlobalNamespace::EditableBeatmapSelectionView New_ctor() ;

/// @brief Method .ctor addr 0x21867a8 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::EditableBeatmapSelectionView);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EditableBeatmapSelectionView, "", "EditableBeatmapSelectionView");
