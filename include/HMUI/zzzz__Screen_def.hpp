#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace HMUI {
struct HMUI__ViewController__AnimationType;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace HMUI {
class ViewController;
}
namespace HMUI {
class HMUI__Screen___TransitionCoroutine_d__5;
}
// Forward declare root types
namespace HMUI {
class HMUI__Screen___TransitionCoroutine_d__5;
}
namespace HMUI {
class Screen;
}
// Type: ::<TransitionCoroutine>d__5
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13640))
// CS Name: HMUI.Screen::<TransitionCoroutine>d__5
class CORDL_TYPE HMUI__Screen___TransitionCoroutine_d__5 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~HMUI__Screen___TransitionCoroutine_d__5() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__Screen___TransitionCoroutine_d__5", modifiers: " const&", def_value: None }]
constexpr HMUI__Screen___TransitionCoroutine_d__5(HMUI__Screen___TransitionCoroutine_d__5 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__Screen___TransitionCoroutine_d__5", modifiers: "&&", def_value: None }]
constexpr HMUI__Screen___TransitionCoroutine_d__5(HMUI__Screen___TransitionCoroutine_d__5&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__Screen___TransitionCoroutine_d__5(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMUI__Screen___TransitionCoroutine_d__5& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMUI__Screen___TransitionCoroutine_d__5& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMUI__Screen___TransitionCoroutine_d__5& operator=(HMUI__Screen___TransitionCoroutine_d__5&& o) noexcept = default;
  constexpr HMUI__Screen___TransitionCoroutine_d__5& operator=(HMUI__Screen___TransitionCoroutine_d__5 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 HMUI::Screen __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(HMUI::Screen value) ;

constexpr HMUI::Screen __get___4__this() const;

 HMUI::ViewController __declspec(property(get=__get_newRootViewController, put=__set_newRootViewController))  newRootViewController;

constexpr void __set_newRootViewController(HMUI::ViewController value) ;

constexpr HMUI::ViewController __get_newRootViewController() const;

 HMUI::HMUI__ViewController__AnimationType __declspec(property(get=__get_animationType, put=__set_animationType))  animationType;

constexpr void __set_animationType(HMUI::HMUI__ViewController__AnimationType value) ;

constexpr HMUI::HMUI__ViewController__AnimationType __get_animationType() const;

 HMUI::ViewController __declspec(property(get=__get__oldRootViewController_5__2, put=__set__oldRootViewController_5__2))  _oldRootViewController_5__2;

constexpr void __set__oldRootViewController_5__2(HMUI::ViewController value) ;

constexpr HMUI::ViewController __get__oldRootViewController_5__2() const;

 float_t __declspec(property(get=__get__oldRootViewControllerStartAlpha_5__3, put=__set__oldRootViewControllerStartAlpha_5__3))  _oldRootViewControllerStartAlpha_5__3;

constexpr void __set__oldRootViewControllerStartAlpha_5__3(float_t value) ;

constexpr float_t __get__oldRootViewControllerStartAlpha_5__3() const;

 float_t __declspec(property(get=__get__elapsedTime_5__4, put=__set__elapsedTime_5__4))  _elapsedTime_5__4;

constexpr void __set__elapsedTime_5__4(float_t value) ;

constexpr float_t __get__elapsedTime_5__4() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static HMUI::HMUI__Screen___TransitionCoroutine_d__5 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x1fb8334 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x1fb8370 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x1fb8374 size 0x504 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x1fb890c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x1fb8914 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x1fb8954 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: HMUI::Screen
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13641))
// CS Name: HMUI.Screen
class CORDL_TYPE Screen : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _TransitionCoroutine_d__5 = HMUI::HMUI__Screen___TransitionCoroutine_d__5;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Screen() = default;

// Ctor Parameters [CppParam { name: "", ty: "Screen", modifiers: " const&", def_value: None }]
constexpr Screen(Screen const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Screen", modifiers: "&&", def_value: None }]
constexpr Screen(Screen&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Screen(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr Screen& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Screen& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Screen& operator=(Screen&& o) noexcept = default;
  constexpr Screen& operator=(Screen const& o) noexcept = default;
                


// Fields

 HMUI::ViewController __declspec(property(get=__get__rootViewController, put=__set__rootViewController))  _rootViewController;

constexpr void __set__rootViewController(HMUI::ViewController value) ;

constexpr HMUI::ViewController __get__rootViewController() const;

 bool __declspec(property(get=__get__isBeingDestroyed, put=__set__isBeingDestroyed))  _isBeingDestroyed;

constexpr void __set__isBeingDestroyed(bool value) ;

constexpr bool __get__isBeingDestroyed() const;


// Properties

 bool __declspec(property(get=get_isBeingDestroyed))  isBeingDestroyed;


// Methods

/// @brief Method get_isBeingDestroyed addr 0x1fb81e0 size 0x8 virtual false final false
 bool get_isBeingDestroyed() ;

/// @brief Method SetRootViewController addr 0x1fb81e8 size 0xd0 virtual false final false
 void SetRootViewController(HMUI::ViewController newRootViewController, HMUI::HMUI__ViewController__AnimationType animationType) ;

/// @brief Method TransitionCoroutine addr 0x1fb82b8 size 0x7c virtual false final false
 System::Collections::IEnumerator TransitionCoroutine(HMUI::ViewController newRootViewController, HMUI::HMUI__ViewController__AnimationType animationType) ;

/// @brief Method OnDestroy addr 0x1fb835c size 0xc virtual false final false
 void OnDestroy() ;

static HMUI::Screen New_ctor() ;

/// @brief Method .ctor addr 0x1fb8368 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
NEED_NO_BOX(HMUI::HMUI__Screen___TransitionCoroutine_d__5);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__Screen___TransitionCoroutine_d__5, "HMUI", "Screen/<TransitionCoroutine>d__5");
NEED_NO_BOX(HMUI::Screen);
DEFINE_IL2CPP_ARG_TYPE(HMUI::Screen, "HMUI", "Screen");
