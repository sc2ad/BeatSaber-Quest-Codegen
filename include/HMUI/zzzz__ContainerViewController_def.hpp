#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine {
class RectTransform;
}
namespace System {
class Action;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace HMUI {
class ViewController;
}
namespace HMUI {
class Screen;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace HMUI {
class ContainerViewController;
}
namespace HMUI {
class HMUI__ContainerViewController___AddViewControllerCoroutine_d__15;
}
namespace HMUI {
class HMUI__ContainerViewController___RemoveViewControllersCoroutine_d__17;
}
// Type: ::<AddViewControllerCoroutine>d__15
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13621))
// CS Name: HMUI.ContainerViewController::<AddViewControllerCoroutine>d__15
class CORDL_TYPE HMUI__ContainerViewController___AddViewControllerCoroutine_d__15 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~HMUI__ContainerViewController___AddViewControllerCoroutine_d__15() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__ContainerViewController___AddViewControllerCoroutine_d__15", modifiers: " const&", def_value: None }]
constexpr HMUI__ContainerViewController___AddViewControllerCoroutine_d__15(HMUI__ContainerViewController___AddViewControllerCoroutine_d__15 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__ContainerViewController___AddViewControllerCoroutine_d__15", modifiers: "&&", def_value: None }]
constexpr HMUI__ContainerViewController___AddViewControllerCoroutine_d__15(HMUI__ContainerViewController___AddViewControllerCoroutine_d__15&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__ContainerViewController___AddViewControllerCoroutine_d__15(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMUI__ContainerViewController___AddViewControllerCoroutine_d__15& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMUI__ContainerViewController___AddViewControllerCoroutine_d__15& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMUI__ContainerViewController___AddViewControllerCoroutine_d__15& operator=(HMUI__ContainerViewController___AddViewControllerCoroutine_d__15&& o) noexcept = default;
  constexpr HMUI__ContainerViewController___AddViewControllerCoroutine_d__15& operator=(HMUI__ContainerViewController___AddViewControllerCoroutine_d__15 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 HMUI::ContainerViewController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(HMUI::ContainerViewController value) ;

constexpr HMUI::ContainerViewController __get___4__this() const;

 HMUI::ViewController __declspec(property(get=__get_newViewController, put=__set_newViewController))  newViewController;

constexpr void __set_newViewController(HMUI::ViewController value) ;

constexpr HMUI::ViewController __get_newViewController() const;

 bool __declspec(property(get=__get_immediately, put=__set_immediately))  immediately;

constexpr void __set_immediately(bool value) ;

constexpr bool __get_immediately() const;

 System::Action_2<float_t,::ArrayW<HMUI::ViewController>> __declspec(property(get=__get_animationLayouter, put=__set_animationLayouter))  animationLayouter;

constexpr void __set_animationLayouter(System::Action_2<float_t,::ArrayW<HMUI::ViewController>> value) ;

constexpr System::Action_2<float_t,::ArrayW<HMUI::ViewController>> __get_animationLayouter() const;

 System::Action __declspec(property(get=__get_finishedCallback, put=__set_finishedCallback))  finishedCallback;

constexpr void __set_finishedCallback(System::Action value) ;

constexpr System::Action __get_finishedCallback() const;

 ::ArrayW<HMUI::ViewController> __declspec(property(get=__get__viewControllers_5__2, put=__set__viewControllers_5__2))  _viewControllers_5__2;

constexpr void __set__viewControllers_5__2(::ArrayW<HMUI::ViewController> value) ;

constexpr ::ArrayW<HMUI::ViewController> __get__viewControllers_5__2() const;

 float_t __declspec(property(get=__get__transitionDuration_5__3, put=__set__transitionDuration_5__3))  _transitionDuration_5__3;

constexpr void __set__transitionDuration_5__3(float_t value) ;

constexpr float_t __get__transitionDuration_5__3() const;

 float_t __declspec(property(get=__get__elapsedTime_5__4, put=__set__elapsedTime_5__4))  _elapsedTime_5__4;

constexpr void __set__elapsedTime_5__4(float_t value) ;

constexpr float_t __get__elapsedTime_5__4() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit HMUI__ContainerViewController___AddViewControllerCoroutine_d__15(int32_t __1__state) ;

/// @brief Method .ctor addr 0x1fb2c94 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x1fb306c size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x1fb3070 size 0x210 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x1fb3280 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x1fb3288 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x1fb32c8 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: ::<RemoveViewControllersCoroutine>d__17
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13622))
// CS Name: HMUI.ContainerViewController::<RemoveViewControllersCoroutine>d__17
class CORDL_TYPE HMUI__ContainerViewController___RemoveViewControllersCoroutine_d__17 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~HMUI__ContainerViewController___RemoveViewControllersCoroutine_d__17() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__ContainerViewController___RemoveViewControllersCoroutine_d__17", modifiers: " const&", def_value: None }]
constexpr HMUI__ContainerViewController___RemoveViewControllersCoroutine_d__17(HMUI__ContainerViewController___RemoveViewControllersCoroutine_d__17 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__ContainerViewController___RemoveViewControllersCoroutine_d__17", modifiers: "&&", def_value: None }]
constexpr HMUI__ContainerViewController___RemoveViewControllersCoroutine_d__17(HMUI__ContainerViewController___RemoveViewControllersCoroutine_d__17&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__ContainerViewController___RemoveViewControllersCoroutine_d__17(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMUI__ContainerViewController___RemoveViewControllersCoroutine_d__17& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMUI__ContainerViewController___RemoveViewControllersCoroutine_d__17& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMUI__ContainerViewController___RemoveViewControllersCoroutine_d__17& operator=(HMUI__ContainerViewController___RemoveViewControllersCoroutine_d__17&& o) noexcept = default;
  constexpr HMUI__ContainerViewController___RemoveViewControllersCoroutine_d__17& operator=(HMUI__ContainerViewController___RemoveViewControllersCoroutine_d__17 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 HMUI::ContainerViewController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(HMUI::ContainerViewController value) ;

constexpr HMUI::ContainerViewController __get___4__this() const;

 ::ArrayW<HMUI::ViewController> __declspec(property(get=__get_viewControllersToRemove, put=__set_viewControllersToRemove))  viewControllersToRemove;

constexpr void __set_viewControllersToRemove(::ArrayW<HMUI::ViewController> value) ;

constexpr ::ArrayW<HMUI::ViewController> __get_viewControllersToRemove() const;

 bool __declspec(property(get=__get_immediately, put=__set_immediately))  immediately;

constexpr void __set_immediately(bool value) ;

constexpr bool __get_immediately() const;

 System::Action_3<float_t,::ArrayW<HMUI::ViewController>,System::Collections::Generic::HashSet_1<HMUI::ViewController>> __declspec(property(get=__get_animationLayouter, put=__set_animationLayouter))  animationLayouter;

constexpr void __set_animationLayouter(System::Action_3<float_t,::ArrayW<HMUI::ViewController>,System::Collections::Generic::HashSet_1<HMUI::ViewController>> value) ;

constexpr System::Action_3<float_t,::ArrayW<HMUI::ViewController>,System::Collections::Generic::HashSet_1<HMUI::ViewController>> __get_animationLayouter() const;

 System::Action __declspec(property(get=__get_finishedCallback, put=__set_finishedCallback))  finishedCallback;

constexpr void __set_finishedCallback(System::Action value) ;

constexpr System::Action __get_finishedCallback() const;

 ::ArrayW<HMUI::ViewController> __declspec(property(get=__get__viewControllers_5__2, put=__set__viewControllers_5__2))  _viewControllers_5__2;

constexpr void __set__viewControllers_5__2(::ArrayW<HMUI::ViewController> value) ;

constexpr ::ArrayW<HMUI::ViewController> __get__viewControllers_5__2() const;

 System::Collections::Generic::HashSet_1<HMUI::ViewController> __declspec(property(get=__get__viewControllersToRemoveSet_5__3, put=__set__viewControllersToRemoveSet_5__3))  _viewControllersToRemoveSet_5__3;

constexpr void __set__viewControllersToRemoveSet_5__3(System::Collections::Generic::HashSet_1<HMUI::ViewController> value) ;

constexpr System::Collections::Generic::HashSet_1<HMUI::ViewController> __get__viewControllersToRemoveSet_5__3() const;

 float_t __declspec(property(get=__get__transitionDuration_5__4, put=__set__transitionDuration_5__4))  _transitionDuration_5__4;

constexpr void __set__transitionDuration_5__4(float_t value) ;

constexpr float_t __get__transitionDuration_5__4() const;

 float_t __declspec(property(get=__get__elapsedTime_5__5, put=__set__elapsedTime_5__5))  _elapsedTime_5__5;

constexpr void __set__elapsedTime_5__5(float_t value) ;

constexpr float_t __get__elapsedTime_5__5() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit HMUI__ContainerViewController___RemoveViewControllersCoroutine_d__17(int32_t __1__state) ;

/// @brief Method .ctor addr 0x1fb2d94 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x1fb32d0 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x1fb32d4 size 0x2fc virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x1fb35d0 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x1fb35d8 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x1fb3618 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: HMUI::ContainerViewController
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13623))
// CS Name: HMUI.ContainerViewController
class CORDL_TYPE ContainerViewController : public HMUI::ViewController {
public:
// Declarations
using _RemoveViewControllersCoroutine_d__17 = HMUI::HMUI__ContainerViewController___RemoveViewControllersCoroutine_d__17;

using _AddViewControllerCoroutine_d__15 = HMUI::HMUI__ContainerViewController___AddViewControllerCoroutine_d__15;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~ContainerViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContainerViewController", modifiers: " const&", def_value: None }]
constexpr ContainerViewController(ContainerViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContainerViewController", modifiers: "&&", def_value: None }]
constexpr ContainerViewController(ContainerViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContainerViewController(void* ptr) noexcept : HMUI::ViewController(ptr) {
}


  constexpr ContainerViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContainerViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContainerViewController& operator=(ContainerViewController&& o) noexcept = default;
  constexpr ContainerViewController& operator=(ContainerViewController const& o) noexcept = default;
                


// Fields

 UnityEngine::RectTransform __declspec(property(get=__get__controllersContainer, put=__set__controllersContainer))  _controllersContainer;

constexpr void __set__controllersContainer(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get__controllersContainer() const;

 System::Collections::Generic::List_1<HMUI::ViewController> __declspec(property(get=__get__viewControllers, put=__set__viewControllers))  _viewControllers;

constexpr void __set__viewControllers(System::Collections::Generic::List_1<HMUI::ViewController> value) ;

constexpr System::Collections::Generic::List_1<HMUI::ViewController> __get__viewControllers() const;


// Properties

 UnityEngine::RectTransform __declspec(property(get=get_controllersContainer))  controllersContainer;

 System::Collections::Generic::List_1<HMUI::ViewController> __declspec(property(get=get_viewControllers))  viewControllers;


// Methods

/// @brief Method get_controllersContainer addr 0x1fb2298 size 0xa8 virtual false final false
 UnityEngine::RectTransform get_controllersContainer() ;

/// @brief Method get_viewControllers addr 0x1fb2340 size 0x8 virtual false final false
 System::Collections::Generic::List_1<HMUI::ViewController> get_viewControllers() ;

/// @brief Method __Init addr 0x1fb2348 size 0xd8 virtual true final false
 void __Init(HMUI::Screen screen, HMUI::ViewController parentViewController, HMUI::ContainerViewController containerViewController) ;

/// @brief Method LayoutViewControllers addr 0x0 size 0xffffffffffffffff virtual true final false
 void LayoutViewControllers(System::Collections::Generic::List_1<HMUI::ViewController> viewControllers) ;

/// @brief Method __Activate addr 0x1fb2420 size 0x190 virtual true final false
 void __Activate(bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method __Deactivate addr 0x1fb25b0 size 0xd0 virtual true final false
 void __Deactivate(bool removedFromHierarchy, bool deactivateGameObject, bool screenSystemDisabling) ;

/// @brief Method DeactivateGameObject addr 0x1fb2680 size 0xe8 virtual true final false
 void DeactivateGameObject() ;

/// @brief Method ClearChildViewControllers addr 0x1fb2768 size 0x124 virtual false final false
 void ClearChildViewControllers() ;

/// @brief Method SetChildViewController addr 0x1fb288c size 0xa0 virtual false final false
 void SetChildViewController(HMUI::ViewController viewController) ;

/// @brief Method SetChildViewControllers addr 0x1fb292c size 0x15c virtual false final false
 void SetChildViewControllers(::ArrayW<HMUI::ViewController> viewControllers) ;

/// @brief Method AddViewController addr 0x1fb2a88 size 0x178 virtual false final false
 void AddViewController(HMUI::ViewController viewController, System::Action finishedCallback, System::Action_2<float_t,::ArrayW<HMUI::ViewController>> animationLayouter, bool immediately) ;

/// @brief Method AddViewControllerCoroutine addr 0x1fb2c00 size 0x94 virtual false final false
 System::Collections::IEnumerator AddViewControllerCoroutine(HMUI::ViewController newViewController, System::Action finishedCallback, System::Action_2<float_t,::ArrayW<HMUI::ViewController>> animationLayouter, bool immediately) ;

/// @brief Method RemoveViewControllers addr 0x1fb2cbc size 0x44 virtual false final false
 void RemoveViewControllers(::ArrayW<HMUI::ViewController> viewControllers, System::Action finishedCallback, System::Action_3<float_t,::ArrayW<HMUI::ViewController>,System::Collections::Generic::HashSet_1<HMUI::ViewController>> animationLayouter, bool immediately) ;

/// @brief Method RemoveViewControllersCoroutine addr 0x1fb2d00 size 0x94 virtual false final false
 System::Collections::IEnumerator RemoveViewControllersCoroutine(::ArrayW<HMUI::ViewController> viewControllersToRemove, System::Action finishedCallback, System::Action_3<float_t,::ArrayW<HMUI::ViewController>,System::Collections::Generic::HashSet_1<HMUI::ViewController>> animationLayouter, bool immediately) ;

/// @brief Method GetNewXPositionsForViewControllers addr 0x1fb2dbc size 0x234 virtual false final false
 ::ArrayW<float_t> GetNewXPositionsForViewControllers(System::Collections::Generic::List_1<HMUI::ViewController> viewControllers, int32_t exludeFromEndCount) ;

// Ctor Parameters []
explicit ContainerViewController() ;

/// @brief Method .ctor addr 0x1fb2ff0 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
NEED_NO_BOX(HMUI::ContainerViewController);
DEFINE_IL2CPP_ARG_TYPE(HMUI::ContainerViewController, "HMUI", "ContainerViewController");
NEED_NO_BOX(HMUI::HMUI__ContainerViewController___AddViewControllerCoroutine_d__15);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__ContainerViewController___AddViewControllerCoroutine_d__15, "HMUI", "ContainerViewController/<AddViewControllerCoroutine>d__15");
NEED_NO_BOX(HMUI::HMUI__ContainerViewController___RemoveViewControllersCoroutine_d__17);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__ContainerViewController___RemoveViewControllersCoroutine_d__17, "HMUI", "ContainerViewController/<RemoveViewControllersCoroutine>d__17");
