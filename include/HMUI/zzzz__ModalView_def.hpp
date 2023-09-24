#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace System {
class Action;
}
namespace UnityEngine {
class Canvas;
}
namespace HMUI {
class PanelAnimationSO;
}
namespace UnityEngine {
class GameObject;
}
namespace HMUI {
class HMUI__ModalView____c__DisplayClass21_0;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace HMUI {
class HMUI__ModalView____c__DisplayClass17_0;
}
namespace Zenject {
class DiContainer;
}
namespace HMUI {
class ViewController;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace HMUI {
class HMUI__ModalView____c__DisplayClass17_0;
}
namespace HMUI {
class HMUI__ModalView____c__DisplayClass21_0;
}
namespace HMUI {
class ModalView;
}
// Type: ::<>c__DisplayClass17_0
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13685))
// CS Name: HMUI.ModalView::<>c__DisplayClass17_0
class CORDL_TYPE HMUI__ModalView____c__DisplayClass17_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~HMUI__ModalView____c__DisplayClass17_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__ModalView____c__DisplayClass17_0", modifiers: " const&", def_value: None }]
constexpr HMUI__ModalView____c__DisplayClass17_0(HMUI__ModalView____c__DisplayClass17_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__ModalView____c__DisplayClass17_0", modifiers: "&&", def_value: None }]
constexpr HMUI__ModalView____c__DisplayClass17_0(HMUI__ModalView____c__DisplayClass17_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__ModalView____c__DisplayClass17_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMUI__ModalView____c__DisplayClass17_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMUI__ModalView____c__DisplayClass17_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMUI__ModalView____c__DisplayClass17_0& operator=(HMUI__ModalView____c__DisplayClass17_0&& o) noexcept = default;
  constexpr HMUI__ModalView____c__DisplayClass17_0& operator=(HMUI__ModalView____c__DisplayClass17_0 const& o) noexcept = default;
                


// Fields

 HMUI::ModalView __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(HMUI::ModalView value) ;

constexpr HMUI::ModalView __get___4__this() const;

 System::Action __declspec(property(get=__get_finishedCallback, put=__set_finishedCallback))  finishedCallback;

constexpr void __set_finishedCallback(System::Action value) ;

constexpr System::Action __get_finishedCallback() const;


// Methods

static HMUI::HMUI__ModalView____c__DisplayClass17_0 New_ctor() ;

/// @brief Method .ctor addr 0x1fce7d0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Hide>b__0 addr 0x1fcf220 size 0x7c virtual false final false
 void _Hide_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: ::<>c__DisplayClass21_0
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13686))
// CS Name: HMUI.ModalView::<>c__DisplayClass21_0
class CORDL_TYPE HMUI__ModalView____c__DisplayClass21_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~HMUI__ModalView____c__DisplayClass21_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__ModalView____c__DisplayClass21_0", modifiers: " const&", def_value: None }]
constexpr HMUI__ModalView____c__DisplayClass21_0(HMUI__ModalView____c__DisplayClass21_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__ModalView____c__DisplayClass21_0", modifiers: "&&", def_value: None }]
constexpr HMUI__ModalView____c__DisplayClass21_0(HMUI__ModalView____c__DisplayClass21_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__ModalView____c__DisplayClass21_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMUI__ModalView____c__DisplayClass21_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMUI__ModalView____c__DisplayClass21_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMUI__ModalView____c__DisplayClass21_0& operator=(HMUI__ModalView____c__DisplayClass21_0&& o) noexcept = default;
  constexpr HMUI__ModalView____c__DisplayClass21_0& operator=(HMUI__ModalView____c__DisplayClass21_0 const& o) noexcept = default;
                


// Fields

 HMUI::ModalView __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(HMUI::ModalView value) ;

constexpr HMUI::ModalView __get___4__this() const;

 bool __declspec(property(get=__get_prevAnimateParentCanvas, put=__set_prevAnimateParentCanvas))  prevAnimateParentCanvas;

constexpr void __set_prevAnimateParentCanvas(bool value) ;

constexpr bool __get_prevAnimateParentCanvas() const;


// Methods

static HMUI::HMUI__ModalView____c__DisplayClass21_0 New_ctor() ;

/// @brief Method .ctor addr 0x1fcf208 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <HandleParentViewControllerDidDeactivate>b__0 addr 0x1fcf29c size 0x20 virtual false final false
 void _HandleParentViewControllerDidDeactivate_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: HMUI::ModalView
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13687))
// CS Name: HMUI.ModalView
class CORDL_TYPE ModalView : public UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass21_0 = HMUI::HMUI__ModalView____c__DisplayClass21_0;

using __c__DisplayClass17_0 = HMUI::HMUI__ModalView____c__DisplayClass17_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~ModalView() = default;

// Ctor Parameters [CppParam { name: "", ty: "ModalView", modifiers: " const&", def_value: None }]
constexpr ModalView(ModalView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ModalView", modifiers: "&&", def_value: None }]
constexpr ModalView(ModalView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ModalView(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ModalView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ModalView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ModalView& operator=(ModalView&& o) noexcept = default;
  constexpr ModalView& operator=(ModalView const& o) noexcept = default;
                


// Fields

 HMUI::PanelAnimationSO __declspec(property(get=__get__presentPanelAnimations, put=__set__presentPanelAnimations))  _presentPanelAnimations;

constexpr void __set__presentPanelAnimations(HMUI::PanelAnimationSO value) ;

constexpr HMUI::PanelAnimationSO __get__presentPanelAnimations() const;

 HMUI::PanelAnimationSO __declspec(property(get=__get__dismissPanelAnimation, put=__set__dismissPanelAnimation))  _dismissPanelAnimation;

constexpr void __set__dismissPanelAnimation(HMUI::PanelAnimationSO value) ;

constexpr HMUI::PanelAnimationSO __get__dismissPanelAnimation() const;

 bool __declspec(property(get=__get__animateParentCanvas, put=__set__animateParentCanvas))  _animateParentCanvas;

constexpr void __set__animateParentCanvas(bool value) ;

constexpr bool __get__animateParentCanvas() const;

 Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get__container() const;

 System::Action __declspec(property(get=__get_blockerClickedEvent, put=__set_blockerClickedEvent))  blockerClickedEvent;

constexpr void __set_blockerClickedEvent(System::Action value) ;

constexpr System::Action __get_blockerClickedEvent() const;

 UnityEngine::Transform __declspec(property(get=__get__previousParent, put=__set__previousParent))  _previousParent;

constexpr void __set__previousParent(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__previousParent() const;

 bool __declspec(property(get=__get__isShown, put=__set__isShown))  _isShown;

constexpr void __set__isShown(bool value) ;

constexpr bool __get__isShown() const;

 bool __declspec(property(get=__get__viewIsValid, put=__set__viewIsValid))  _viewIsValid;

constexpr void __set__viewIsValid(bool value) ;

constexpr bool __get__viewIsValid() const;

 UnityEngine::Canvas __declspec(property(get=__get__mainCanvas, put=__set__mainCanvas))  _mainCanvas;

constexpr void __set__mainCanvas(UnityEngine::Canvas value) ;

constexpr UnityEngine::Canvas __get__mainCanvas() const;

 UnityEngine::CanvasGroup __declspec(property(get=__get__parentCanvasGroup, put=__set__parentCanvasGroup))  _parentCanvasGroup;

constexpr void __set__parentCanvasGroup(UnityEngine::CanvasGroup value) ;

constexpr UnityEngine::CanvasGroup __get__parentCanvasGroup() const;

 UnityEngine::GameObject __declspec(property(get=__get__blockerGO, put=__set__blockerGO))  _blockerGO;

constexpr void __set__blockerGO(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__blockerGO() const;

 int32_t __declspec(property(get=__get__test, put=__set__test))  _test;

constexpr void __set__test(int32_t value) ;

constexpr int32_t __get__test() const;


// Methods

/// @brief Method add_blockerClickedEvent addr 0x1fce16c size 0x9c virtual false final false
 void add_blockerClickedEvent(System::Action value) ;

/// @brief Method remove_blockerClickedEvent addr 0x1fce208 size 0x9c virtual false final false
 void remove_blockerClickedEvent(System::Action value) ;

/// @brief Method OnDisable addr 0x1fce2a4 size 0xc virtual false final false
 void OnDisable() ;

/// @brief Method OnDestroy addr 0x1fce4c4 size 0x8c virtual false final false
 void OnDestroy() ;

/// @brief Method SetupView addr 0x1fce550 size 0x280 virtual false final false
 void SetupView(UnityEngine::Transform screenTransform) ;

/// @brief Method Hide addr 0x1fce2b0 size 0x214 virtual false final false
 void Hide(bool animated, System::Action finishedCallback) ;

/// @brief Method Show addr 0x1fce7d8 size 0x3e4 virtual false final false
 void Show(bool animated, bool moveToCenter, System::Action finishedCallback) ;

/// @brief Method CreateBlocker addr 0x1fcecbc size 0x45c virtual false final false
 UnityEngine::GameObject CreateBlocker() ;

/// @brief Method HandleBlockerButtonClicked addr 0x1fcf118 size 0x1c virtual false final false
 void HandleBlockerButtonClicked() ;

/// @brief Method HandleParentViewControllerDidDeactivate addr 0x1fcf134 size 0xd4 virtual false final false
 void HandleParentViewControllerDidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method GetModalRootTransform addr 0x1fcebbc size 0x100 virtual false final false
static UnityEngine::Transform GetModalRootTransform(UnityEngine::Transform transform, ByRef<UnityEngine::Canvas> canvas, ByRef<HMUI::ViewController> viewController) ;

static HMUI::ModalView New_ctor() ;

/// @brief Method .ctor addr 0x1fcf210 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
NEED_NO_BOX(HMUI::HMUI__ModalView____c__DisplayClass17_0);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__ModalView____c__DisplayClass17_0, "HMUI", "ModalView/<>c__DisplayClass17_0");
NEED_NO_BOX(HMUI::HMUI__ModalView____c__DisplayClass21_0);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__ModalView____c__DisplayClass21_0, "HMUI", "ModalView/<>c__DisplayClass21_0");
NEED_NO_BOX(HMUI::ModalView);
DEFINE_IL2CPP_ARG_TYPE(HMUI::ModalView, "HMUI", "ModalView");
