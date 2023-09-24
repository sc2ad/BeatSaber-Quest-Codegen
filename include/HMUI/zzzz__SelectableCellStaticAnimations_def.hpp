#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace HMUI {
struct HMUI__SelectableCell__TransitionType;
}
namespace HMUI {
class SelectableCell;
}
namespace UnityEngine {
class AnimationClip;
}
// Forward declare root types
namespace HMUI {
class SelectableCellStaticAnimations;
}
// Type: HMUI::SelectableCellStaticAnimations
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13705))
// CS Name: HMUI.SelectableCellStaticAnimations
class CORDL_TYPE SelectableCellStaticAnimations : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~SelectableCellStaticAnimations() = default;

// Ctor Parameters [CppParam { name: "", ty: "SelectableCellStaticAnimations", modifiers: " const&", def_value: None }]
constexpr SelectableCellStaticAnimations(SelectableCellStaticAnimations const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SelectableCellStaticAnimations", modifiers: "&&", def_value: None }]
constexpr SelectableCellStaticAnimations(SelectableCellStaticAnimations&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SelectableCellStaticAnimations(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SelectableCellStaticAnimations& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SelectableCellStaticAnimations& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SelectableCellStaticAnimations& operator=(SelectableCellStaticAnimations&& o) noexcept = default;
  constexpr SelectableCellStaticAnimations& operator=(SelectableCellStaticAnimations const& o) noexcept = default;
                


// Fields

 HMUI::SelectableCell __declspec(property(get=__get__selectableCell, put=__set__selectableCell))  _selectableCell;

constexpr void __set__selectableCell(HMUI::SelectableCell value) ;

constexpr HMUI::SelectableCell __get__selectableCell() const;

 UnityEngine::AnimationClip __declspec(property(get=__get__normalAnimationClip, put=__set__normalAnimationClip))  _normalAnimationClip;

constexpr void __set__normalAnimationClip(UnityEngine::AnimationClip value) ;

constexpr UnityEngine::AnimationClip __get__normalAnimationClip() const;

 UnityEngine::AnimationClip __declspec(property(get=__get__highlightedAnimationClip, put=__set__highlightedAnimationClip))  _highlightedAnimationClip;

constexpr void __set__highlightedAnimationClip(UnityEngine::AnimationClip value) ;

constexpr UnityEngine::AnimationClip __get__highlightedAnimationClip() const;

 UnityEngine::AnimationClip __declspec(property(get=__get__selectedAnimationClip, put=__set__selectedAnimationClip))  _selectedAnimationClip;

constexpr void __set__selectedAnimationClip(UnityEngine::AnimationClip value) ;

constexpr UnityEngine::AnimationClip __get__selectedAnimationClip() const;

 UnityEngine::AnimationClip __declspec(property(get=__get__selectedAndHighlightedAnimationClip, put=__set__selectedAndHighlightedAnimationClip))  _selectedAndHighlightedAnimationClip;

constexpr void __set__selectedAndHighlightedAnimationClip(UnityEngine::AnimationClip value) ;

constexpr UnityEngine::AnimationClip __get__selectedAndHighlightedAnimationClip() const;


// Methods

/// @brief Method Awake addr 0x1fd259c size 0xec virtual false final false
 void Awake() ;

/// @brief Method Start addr 0x1fd2688 size 0x4 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x1fd26f0 size 0xec virtual false final false
 void OnDestroy() ;

/// @brief Method HandleSelectionDidChange addr 0x1fd27dc size 0x4 virtual false final false
 void HandleSelectionDidChange(HMUI::SelectableCell selectableCell, HMUI::HMUI__SelectableCell__TransitionType transitionType, ::bs_hook::Il2CppWrapperType changeOwner) ;

/// @brief Method HandleHighlightDidChange addr 0x1fd27e0 size 0x4 virtual false final false
 void HandleHighlightDidChange(HMUI::SelectableCell selectableCell, HMUI::HMUI__SelectableCell__TransitionType transitionType) ;

/// @brief Method RefreshVisuals addr 0x1fd268c size 0x64 virtual false final false
 void RefreshVisuals() ;

static HMUI::SelectableCellStaticAnimations New_ctor() ;

/// @brief Method .ctor addr 0x1fd27e4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
NEED_NO_BOX(HMUI::SelectableCellStaticAnimations);
DEFINE_IL2CPP_ARG_TYPE(HMUI::SelectableCellStaticAnimations, "HMUI", "SelectableCellStaticAnimations");
