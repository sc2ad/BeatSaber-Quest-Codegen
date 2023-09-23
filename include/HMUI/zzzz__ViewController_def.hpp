#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class Action;
}
namespace HMUI {
class ContainerViewController;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine::EventSystems {
class BaseRaycaster;
}
namespace HMUI {
class ButtonBinder;
}
namespace HMUI {
class Screen;
}
// Forward declare root types
namespace HMUI {
struct HMUI__ViewController__AnimationDirection;
}
namespace HMUI {
struct HMUI__ViewController__AnimationType;
}
namespace HMUI {
class HMUI__ViewController__DidActivateDelegate;
}
namespace HMUI {
class HMUI__ViewController__DidDeactivateDelegate;
}
namespace HMUI {
class HMUI__ViewController___DismissViewControllerCoroutine_d__62;
}
namespace HMUI {
class HMUI__ViewController___PresentViewControllerCoroutine_d__58;
}
namespace HMUI {
class HMUI__ViewController___ReplaceViewControllerCoroutine_d__60;
}
namespace HMUI {
class ViewController;
}
// Type: ::DidActivateDelegate
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13649))
// CS Name: HMUI.ViewController::DidActivateDelegate
class CORDL_TYPE HMUI__ViewController__DidActivateDelegate : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HMUI__ViewController__DidActivateDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__ViewController__DidActivateDelegate", modifiers: " const&", def_value: None }]
constexpr HMUI__ViewController__DidActivateDelegate(HMUI__ViewController__DidActivateDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__ViewController__DidActivateDelegate", modifiers: "&&", def_value: None }]
constexpr HMUI__ViewController__DidActivateDelegate(HMUI__ViewController__DidActivateDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__ViewController__DidActivateDelegate(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HMUI__ViewController__DidActivateDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMUI__ViewController__DidActivateDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMUI__ViewController__DidActivateDelegate& operator=(HMUI__ViewController__DidActivateDelegate&& o) noexcept = default;
  constexpr HMUI__ViewController__DidActivateDelegate& operator=(HMUI__ViewController__DidActivateDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HMUI__ViewController__DidActivateDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x1fba250 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x1fba314 size 0x20 virtual true final false
 void Invoke(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method BeginInvoke addr 0x1fba334 size 0xc0 virtual true final false
 System::IAsyncResult BeginInvoke(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x1fba3f4 size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: ::DidDeactivateDelegate
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13650))
// CS Name: HMUI.ViewController::DidDeactivateDelegate
class CORDL_TYPE HMUI__ViewController__DidDeactivateDelegate : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HMUI__ViewController__DidDeactivateDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__ViewController__DidDeactivateDelegate", modifiers: " const&", def_value: None }]
constexpr HMUI__ViewController__DidDeactivateDelegate(HMUI__ViewController__DidDeactivateDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__ViewController__DidDeactivateDelegate", modifiers: "&&", def_value: None }]
constexpr HMUI__ViewController__DidDeactivateDelegate(HMUI__ViewController__DidDeactivateDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__ViewController__DidDeactivateDelegate(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HMUI__ViewController__DidDeactivateDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMUI__ViewController__DidDeactivateDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMUI__ViewController__DidDeactivateDelegate& operator=(HMUI__ViewController__DidDeactivateDelegate&& o) noexcept = default;
  constexpr HMUI__ViewController__DidDeactivateDelegate& operator=(HMUI__ViewController__DidDeactivateDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HMUI__ViewController__DidDeactivateDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x1fba400 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x1fba4c4 size 0x1c virtual true final false
 void Invoke(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method BeginInvoke addr 0x1fba4e0 size 0xa4 virtual true final false
 System::IAsyncResult BeginInvoke(bool removedFromHierarchy, bool screenSystemDisabling, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x1fba584 size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: ::AnimationType
namespace HMUI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13651))
// CS Name: HMUI.ViewController::AnimationType
struct CORDL_TYPE HMUI__ViewController__AnimationType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HMUI__ViewController__AnimationType(int32_t value__) noexcept;


                    constexpr HMUI__ViewController__AnimationType(HMUI__ViewController__AnimationType const&) = default;
                    constexpr HMUI__ViewController__AnimationType(HMUI__ViewController__AnimationType&&) = default;
                    constexpr HMUI__ViewController__AnimationType& operator=(HMUI__ViewController__AnimationType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HMUI__ViewController__AnimationType& operator=(HMUI__ViewController__AnimationType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HMUI__ViewController__AnimationType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HMUI__ViewController__AnimationType_Unwrapped : int32_t {
__None = 0,
__In = 1,
__Out = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HMUI__ViewController__AnimationType_Unwrapped () const noexcept {
return std::bit_cast<__HMUI__ViewController__AnimationType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static HMUI::HMUI__ViewController__AnimationType const None;

/// @brief Field In offset 0
static HMUI::HMUI__ViewController__AnimationType const In;

/// @brief Field Out offset 0
static HMUI::HMUI__ViewController__AnimationType const Out;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HMUI
// Type: ::AnimationDirection
namespace HMUI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13652))
// CS Name: HMUI.ViewController::AnimationDirection
struct CORDL_TYPE HMUI__ViewController__AnimationDirection : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HMUI__ViewController__AnimationDirection(int32_t value__) noexcept;


                    constexpr HMUI__ViewController__AnimationDirection(HMUI__ViewController__AnimationDirection const&) = default;
                    constexpr HMUI__ViewController__AnimationDirection(HMUI__ViewController__AnimationDirection&&) = default;
                    constexpr HMUI__ViewController__AnimationDirection& operator=(HMUI__ViewController__AnimationDirection const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HMUI__ViewController__AnimationDirection& operator=(HMUI__ViewController__AnimationDirection&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HMUI__ViewController__AnimationDirection(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HMUI__ViewController__AnimationDirection_Unwrapped : int32_t {
__Horizontal = 0,
__Vertical = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HMUI__ViewController__AnimationDirection_Unwrapped () const noexcept {
return std::bit_cast<__HMUI__ViewController__AnimationDirection_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Horizontal offset 0
static HMUI::HMUI__ViewController__AnimationDirection const Horizontal;

/// @brief Field Vertical offset 0
static HMUI::HMUI__ViewController__AnimationDirection const Vertical;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HMUI
// Type: ::<PresentViewControllerCoroutine>d__58
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13653))
// CS Name: HMUI.ViewController::<PresentViewControllerCoroutine>d__58
class CORDL_TYPE HMUI__ViewController___PresentViewControllerCoroutine_d__58 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~HMUI__ViewController___PresentViewControllerCoroutine_d__58() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__ViewController___PresentViewControllerCoroutine_d__58", modifiers: " const&", def_value: None }]
constexpr HMUI__ViewController___PresentViewControllerCoroutine_d__58(HMUI__ViewController___PresentViewControllerCoroutine_d__58 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__ViewController___PresentViewControllerCoroutine_d__58", modifiers: "&&", def_value: None }]
constexpr HMUI__ViewController___PresentViewControllerCoroutine_d__58(HMUI__ViewController___PresentViewControllerCoroutine_d__58&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__ViewController___PresentViewControllerCoroutine_d__58(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMUI__ViewController___PresentViewControllerCoroutine_d__58& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMUI__ViewController___PresentViewControllerCoroutine_d__58& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMUI__ViewController___PresentViewControllerCoroutine_d__58& operator=(HMUI__ViewController___PresentViewControllerCoroutine_d__58&& o) noexcept = default;
  constexpr HMUI__ViewController___PresentViewControllerCoroutine_d__58& operator=(HMUI__ViewController___PresentViewControllerCoroutine_d__58 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 HMUI::ViewController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(HMUI::ViewController value) ;

constexpr HMUI::ViewController __get___4__this() const;

 HMUI::ViewController __declspec(property(get=__get_newViewController, put=__set_newViewController))  newViewController;

constexpr void __set_newViewController(HMUI::ViewController value) ;

constexpr HMUI::ViewController __get_newViewController() const;

 bool __declspec(property(get=__get_immediately, put=__set_immediately))  immediately;

constexpr void __set_immediately(bool value) ;

constexpr bool __get_immediately() const;

 HMUI::HMUI__ViewController__AnimationDirection __declspec(property(get=__get_animationDirection, put=__set_animationDirection))  animationDirection;

constexpr void __set_animationDirection(HMUI::HMUI__ViewController__AnimationDirection value) ;

constexpr HMUI::HMUI__ViewController__AnimationDirection __get_animationDirection() const;

 System::Action __declspec(property(get=__get_finishedCallback, put=__set_finishedCallback))  finishedCallback;

constexpr void __set_finishedCallback(System::Action value) ;

constexpr System::Action __get_finishedCallback() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit HMUI__ViewController___PresentViewControllerCoroutine_d__58(int32_t __1__state) ;

/// @brief Method .ctor addr 0x1fb9cc4 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x1fba590 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x1fba594 size 0x210 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x1fba92c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x1fba934 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x1fba974 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: ::<ReplaceViewControllerCoroutine>d__60
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13654))
// CS Name: HMUI.ViewController::<ReplaceViewControllerCoroutine>d__60
class CORDL_TYPE HMUI__ViewController___ReplaceViewControllerCoroutine_d__60 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~HMUI__ViewController___ReplaceViewControllerCoroutine_d__60() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__ViewController___ReplaceViewControllerCoroutine_d__60", modifiers: " const&", def_value: None }]
constexpr HMUI__ViewController___ReplaceViewControllerCoroutine_d__60(HMUI__ViewController___ReplaceViewControllerCoroutine_d__60 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__ViewController___ReplaceViewControllerCoroutine_d__60", modifiers: "&&", def_value: None }]
constexpr HMUI__ViewController___ReplaceViewControllerCoroutine_d__60(HMUI__ViewController___ReplaceViewControllerCoroutine_d__60&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__ViewController___ReplaceViewControllerCoroutine_d__60(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMUI__ViewController___ReplaceViewControllerCoroutine_d__60& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMUI__ViewController___ReplaceViewControllerCoroutine_d__60& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMUI__ViewController___ReplaceViewControllerCoroutine_d__60& operator=(HMUI__ViewController___ReplaceViewControllerCoroutine_d__60&& o) noexcept = default;
  constexpr HMUI__ViewController___ReplaceViewControllerCoroutine_d__60& operator=(HMUI__ViewController___ReplaceViewControllerCoroutine_d__60 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 HMUI::ViewController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(HMUI::ViewController value) ;

constexpr HMUI::ViewController __get___4__this() const;

 HMUI::ViewController __declspec(property(get=__get_newViewController, put=__set_newViewController))  newViewController;

constexpr void __set_newViewController(HMUI::ViewController value) ;

constexpr HMUI::ViewController __get_newViewController() const;

 HMUI::HMUI__ViewController__AnimationType __declspec(property(get=__get_animationType, put=__set_animationType))  animationType;

constexpr void __set_animationType(HMUI::HMUI__ViewController__AnimationType value) ;

constexpr HMUI::HMUI__ViewController__AnimationType __get_animationType() const;

 HMUI::HMUI__ViewController__AnimationDirection __declspec(property(get=__get_animationDirection, put=__set_animationDirection))  animationDirection;

constexpr void __set_animationDirection(HMUI::HMUI__ViewController__AnimationDirection value) ;

constexpr HMUI::HMUI__ViewController__AnimationDirection __get_animationDirection() const;

 System::Action __declspec(property(get=__get_finishedCallback, put=__set_finishedCallback))  finishedCallback;

constexpr void __set_finishedCallback(System::Action value) ;

constexpr System::Action __get_finishedCallback() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit HMUI__ViewController___ReplaceViewControllerCoroutine_d__60(int32_t __1__state) ;

/// @brief Method .ctor addr 0x1fb9d9c size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x1fba97c size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x1fba980 size 0x25c virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x1fbabdc size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x1fbabe4 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x1fbac24 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: ::<DismissViewControllerCoroutine>d__62
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13655))
// CS Name: HMUI.ViewController::<DismissViewControllerCoroutine>d__62
class CORDL_TYPE HMUI__ViewController___DismissViewControllerCoroutine_d__62 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~HMUI__ViewController___DismissViewControllerCoroutine_d__62() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__ViewController___DismissViewControllerCoroutine_d__62", modifiers: " const&", def_value: None }]
constexpr HMUI__ViewController___DismissViewControllerCoroutine_d__62(HMUI__ViewController___DismissViewControllerCoroutine_d__62 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__ViewController___DismissViewControllerCoroutine_d__62", modifiers: "&&", def_value: None }]
constexpr HMUI__ViewController___DismissViewControllerCoroutine_d__62(HMUI__ViewController___DismissViewControllerCoroutine_d__62&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__ViewController___DismissViewControllerCoroutine_d__62(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMUI__ViewController___DismissViewControllerCoroutine_d__62& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMUI__ViewController___DismissViewControllerCoroutine_d__62& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMUI__ViewController___DismissViewControllerCoroutine_d__62& operator=(HMUI__ViewController___DismissViewControllerCoroutine_d__62&& o) noexcept = default;
  constexpr HMUI__ViewController___DismissViewControllerCoroutine_d__62& operator=(HMUI__ViewController___DismissViewControllerCoroutine_d__62 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 HMUI::ViewController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(HMUI::ViewController value) ;

constexpr HMUI::ViewController __get___4__this() const;

 bool __declspec(property(get=__get_immediately, put=__set_immediately))  immediately;

constexpr void __set_immediately(bool value) ;

constexpr bool __get_immediately() const;

 HMUI::HMUI__ViewController__AnimationDirection __declspec(property(get=__get_animationDirection, put=__set_animationDirection))  animationDirection;

constexpr void __set_animationDirection(HMUI::HMUI__ViewController__AnimationDirection value) ;

constexpr HMUI::HMUI__ViewController__AnimationDirection __get_animationDirection() const;

 System::Action __declspec(property(get=__get_finishedCallback, put=__set_finishedCallback))  finishedCallback;

constexpr void __set_finishedCallback(System::Action value) ;

constexpr System::Action __get_finishedCallback() const;

 HMUI::ViewController __declspec(property(get=__get__movingInViewController_5__2, put=__set__movingInViewController_5__2))  _movingInViewController_5__2;

constexpr void __set__movingInViewController_5__2(HMUI::ViewController value) ;

constexpr HMUI::ViewController __get__movingInViewController_5__2() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit HMUI__ViewController___DismissViewControllerCoroutine_d__62(int32_t __1__state) ;

/// @brief Method .ctor addr 0x1fb9e7c size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x1fbac2c size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x1fbac30 size 0x1a0 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x1fbae5c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x1fbae64 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x1fbaea4 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: HMUI::ViewController
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13656))
// CS Name: HMUI.ViewController
class CORDL_TYPE ViewController : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _DismissViewControllerCoroutine_d__62 = HMUI::HMUI__ViewController___DismissViewControllerCoroutine_d__62;

using _ReplaceViewControllerCoroutine_d__60 = HMUI::HMUI__ViewController___ReplaceViewControllerCoroutine_d__60;

using _PresentViewControllerCoroutine_d__58 = HMUI::HMUI__ViewController___PresentViewControllerCoroutine_d__58;

using AnimationDirection = HMUI::HMUI__ViewController__AnimationDirection;

using AnimationType = HMUI::HMUI__ViewController__AnimationType;

using DidDeactivateDelegate = HMUI::HMUI__ViewController__DidDeactivateDelegate;

using DidActivateDelegate = HMUI::HMUI__ViewController__DidActivateDelegate;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~ViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "ViewController", modifiers: " const&", def_value: None }]
constexpr ViewController(ViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ViewController", modifiers: "&&", def_value: None }]
constexpr ViewController(ViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ViewController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ViewController& operator=(ViewController&& o) noexcept = default;
  constexpr ViewController& operator=(ViewController const& o) noexcept = default;
                


// Fields

 HMUI::HMUI__ViewController__DidActivateDelegate __declspec(property(get=__get_didActivateEvent, put=__set_didActivateEvent))  didActivateEvent;

constexpr void __set_didActivateEvent(HMUI::HMUI__ViewController__DidActivateDelegate value) ;

constexpr HMUI::HMUI__ViewController__DidActivateDelegate __get_didActivateEvent() const;

 HMUI::HMUI__ViewController__DidDeactivateDelegate __declspec(property(get=__get_didDeactivateEvent, put=__set_didDeactivateEvent))  didDeactivateEvent;

constexpr void __set_didDeactivateEvent(HMUI::HMUI__ViewController__DidDeactivateDelegate value) ;

constexpr HMUI::HMUI__ViewController__DidDeactivateDelegate __get_didDeactivateEvent() const;

/// @brief Field kTransitionDuration offset 0
static constexpr float_t  kTransitionDuration{0.4};

/// @brief Field kTransitionMoveOffset offset 0
static constexpr float_t  kTransitionMoveOffset{2};

 HMUI::ButtonBinder __declspec(property(get=__get__buttonBinder_k__BackingField, put=__set__buttonBinder_k__BackingField))  _buttonBinder_k__BackingField;

constexpr void __set__buttonBinder_k__BackingField(HMUI::ButtonBinder value) ;

constexpr HMUI::ButtonBinder __get__buttonBinder_k__BackingField() const;

 HMUI::ContainerViewController __declspec(property(get=__get__containerViewController, put=__set__containerViewController))  _containerViewController;

constexpr void __set__containerViewController(HMUI::ContainerViewController value) ;

constexpr HMUI::ContainerViewController __get__containerViewController() const;

 HMUI::ViewController __declspec(property(get=__get__parentViewController, put=__set__parentViewController))  _parentViewController;

constexpr void __set__parentViewController(HMUI::ViewController value) ;

constexpr HMUI::ViewController __get__parentViewController() const;

 HMUI::ViewController __declspec(property(get=__get__childViewController, put=__set__childViewController))  _childViewController;

constexpr void __set__childViewController(HMUI::ViewController value) ;

constexpr HMUI::ViewController __get__childViewController() const;

 HMUI::Screen __declspec(property(get=__get__screen, put=__set__screen))  _screen;

constexpr void __set__screen(HMUI::Screen value) ;

constexpr HMUI::Screen __get__screen() const;

 UnityEngine::RectTransform __declspec(property(get=__get__rectTransform, put=__set__rectTransform))  _rectTransform;

constexpr void __set__rectTransform(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get__rectTransform() const;

 UnityEngine::CanvasGroup __declspec(property(get=__get__canvasGroup, put=__set__canvasGroup))  _canvasGroup;

constexpr void __set__canvasGroup(UnityEngine::CanvasGroup value) ;

constexpr UnityEngine::CanvasGroup __get__canvasGroup() const;

 bool __declspec(property(get=__get__wasActivatedBefore, put=__set__wasActivatedBefore))  _wasActivatedBefore;

constexpr void __set__wasActivatedBefore(bool value) ;

constexpr bool __get__wasActivatedBefore() const;

 bool __declspec(property(get=__get__isActivated, put=__set__isActivated))  _isActivated;

constexpr void __set__isActivated(bool value) ;

constexpr bool __get__isActivated() const;

 bool __declspec(property(get=__get__isInTransition, put=__set__isInTransition))  _isInTransition;

constexpr void __set__isInTransition(bool value) ;

constexpr bool __get__isInTransition() const;

 UnityEngine::EventSystems::BaseRaycaster __declspec(property(get=__get__graphicRaycaster, put=__set__graphicRaycaster))  _graphicRaycaster;

constexpr void __set__graphicRaycaster(UnityEngine::EventSystems::BaseRaycaster value) ;

constexpr UnityEngine::EventSystems::BaseRaycaster __get__graphicRaycaster() const;


// Properties

 HMUI::ContainerViewController __declspec(property(get=get_containerViewController))  containerViewController;

 HMUI::Screen __declspec(property(get=get_screen))  screen;

 HMUI::ViewController __declspec(property(get=get_parentViewController))  parentViewController;

 HMUI::ViewController __declspec(property(get=get_childViewController))  childViewController;

 bool __declspec(property(get=get_isInViewControllerHierarchy))  isInViewControllerHierarchy;

 bool __declspec(property(get=get_isActivated))  isActivated;

 bool __declspec(property(get=get_wasActivatedBefore))  wasActivatedBefore;

 bool __declspec(property(get=get_isInTransition, put=set_isInTransition))  isInTransition;

 bool __declspec(property(get=get_enableUserInteractions, put=set_enableUserInteractions))  enableUserInteractions;

 HMUI::ButtonBinder __declspec(property(get=get_buttonBinder, put=set_buttonBinder))  buttonBinder;

 UnityEngine::RectTransform __declspec(property(get=get_rectTransform))  rectTransform;

 UnityEngine::CanvasGroup __declspec(property(get=get_canvasGroup))  canvasGroup;

 UnityEngine::EventSystems::BaseRaycaster __declspec(property(get=get_graphicRaycaster))  graphicRaycaster;


// Methods

/// @brief Method get_containerViewController addr 0x1fb960c size 0x8 virtual false final false
 HMUI::ContainerViewController get_containerViewController() ;

/// @brief Method get_screen addr 0x1fb9614 size 0x8 virtual false final false
 HMUI::Screen get_screen() ;

/// @brief Method get_parentViewController addr 0x1fb961c size 0x8 virtual false final false
 HMUI::ViewController get_parentViewController() ;

/// @brief Method get_childViewController addr 0x1fb9624 size 0x8 virtual false final false
 HMUI::ViewController get_childViewController() ;

/// @brief Method get_isInViewControllerHierarchy addr 0x1fb962c size 0x60 virtual false final false
 bool get_isInViewControllerHierarchy() ;

/// @brief Method get_isActivated addr 0x1fb968c size 0x8 virtual false final false
 bool get_isActivated() ;

/// @brief Method get_wasActivatedBefore addr 0x1fb9694 size 0x8 virtual false final false
 bool get_wasActivatedBefore() ;

/// @brief Method get_isInTransition addr 0x1fb969c size 0x8 virtual false final false
 bool get_isInTransition() ;

/// @brief Method set_isInTransition addr 0x1fb96a4 size 0xc virtual false final false
 void set_isInTransition(bool value) ;

/// @brief Method get_enableUserInteractions addr 0x1fb96b0 size 0x1c virtual false final false
 bool get_enableUserInteractions() ;

/// @brief Method set_enableUserInteractions addr 0x1fb9190 size 0x24 virtual false final false
 void set_enableUserInteractions(bool value) ;

/// @brief Method add_didActivateEvent addr 0x1fb9760 size 0x9c virtual false final false
 void add_didActivateEvent(HMUI::HMUI__ViewController__DidActivateDelegate value) ;

/// @brief Method remove_didActivateEvent addr 0x1fb97fc size 0x9c virtual false final false
 void remove_didActivateEvent(HMUI::HMUI__ViewController__DidActivateDelegate value) ;

/// @brief Method add_didDeactivateEvent addr 0x1fb9898 size 0x9c virtual false final false
 void add_didDeactivateEvent(HMUI::HMUI__ViewController__DidDeactivateDelegate value) ;

/// @brief Method remove_didDeactivateEvent addr 0x1fb9934 size 0x9c virtual false final false
 void remove_didDeactivateEvent(HMUI::HMUI__ViewController__DidDeactivateDelegate value) ;

/// @brief Method get_buttonBinder addr 0x1fb99d0 size 0x8 virtual false final false
 HMUI::ButtonBinder get_buttonBinder() ;

/// @brief Method set_buttonBinder addr 0x1fb99d8 size 0x8 virtual false final false
 void set_buttonBinder(HMUI::ButtonBinder value) ;

/// @brief Method get_rectTransform addr 0x1fb9430 size 0x94 virtual false final false
 UnityEngine::RectTransform get_rectTransform() ;

/// @brief Method get_canvasGroup addr 0x1fb8878 size 0x94 virtual false final false
 UnityEngine::CanvasGroup get_canvasGroup() ;

/// @brief Method get_graphicRaycaster addr 0x1fb96cc size 0x94 virtual false final false
 UnityEngine::EventSystems::BaseRaycaster get_graphicRaycaster() ;

/// @brief Method OnDestroy addr 0x1fb99e0 size 0x48 virtual true final false
 void OnDestroy() ;

/// @brief Method DidActivate addr 0x1fb9a28 size 0x4 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x1fb9a2c size 0x4 virtual true final false
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method __Init addr 0x1fb9a30 size 0x118 virtual true final false
 void __Init(HMUI::Screen screen, HMUI::ViewController parentViewController, HMUI::ContainerViewController containerViewController) ;

/// @brief Method __ResetViewController addr 0x1fb9b48 size 0xc0 virtual true final false
 void __ResetViewController() ;

/// @brief Method __PresentViewController addr 0x1fb9c08 size 0x24 virtual false final false
 void __PresentViewController(HMUI::ViewController viewController, System::Action finishedCallback, HMUI::HMUI__ViewController__AnimationDirection animationDirection, bool immediately) ;

/// @brief Method PresentViewControllerCoroutine addr 0x1fb9c2c size 0x98 virtual false final false
 System::Collections::IEnumerator PresentViewControllerCoroutine(HMUI::ViewController newViewController, System::Action finishedCallback, HMUI::HMUI__ViewController__AnimationDirection animationDirection, bool immediately) ;

/// @brief Method __ReplaceViewController addr 0x1fb9cec size 0x20 virtual false final false
 void __ReplaceViewController(HMUI::ViewController viewController, System::Action finishedCallback, HMUI::HMUI__ViewController__AnimationType animationType, HMUI::HMUI__ViewController__AnimationDirection animationDirection) ;

/// @brief Method ReplaceViewControllerCoroutine addr 0x1fb9d0c size 0x90 virtual false final false
 System::Collections::IEnumerator ReplaceViewControllerCoroutine(HMUI::ViewController newViewController, System::Action finishedCallback, HMUI::HMUI__ViewController__AnimationType animationType, HMUI::HMUI__ViewController__AnimationDirection animationDirection) ;

/// @brief Method __DismissViewController addr 0x1fb9dc4 size 0x24 virtual false final false
 void __DismissViewController(System::Action finishedCallback, HMUI::HMUI__ViewController__AnimationDirection animationDirection, bool immediately) ;

/// @brief Method DismissViewControllerCoroutine addr 0x1fb9de8 size 0x94 virtual false final false
 System::Collections::IEnumerator DismissViewControllerCoroutine(System::Action finishedCallback, HMUI::HMUI__ViewController__AnimationDirection animationDirection, bool immediately) ;

/// @brief Method __Activate addr 0x1fb9ea4 size 0xd0 virtual true final false
 void __Activate(bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method __Deactivate addr 0x1fb9f74 size 0xb8 virtual true final false
 void __Deactivate(bool removedFromHierarchy, bool deactivateGameObject, bool screenSystemDisabling) ;

/// @brief Method DeactivateGameObject addr 0x1fba02c size 0x4c virtual true final false
 void DeactivateGameObject() ;

/// @brief Method IsViewControllerInHierarchy addr 0x1fba078 size 0x180 virtual false final false
 bool IsViewControllerInHierarchy(HMUI::ViewController viewController) ;

/// @brief Method Log addr 0x1fba1f8 size 0x58 virtual false final false
static void Log(::StringW message) ;

// Ctor Parameters []
explicit ViewController() ;

/// @brief Method .ctor addr 0x1fb9604 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__ViewController__AnimationDirection, "HMUI", "ViewController/AnimationDirection");
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__ViewController__AnimationType, "HMUI", "ViewController/AnimationType");
NEED_NO_BOX(HMUI::HMUI__ViewController__DidActivateDelegate);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__ViewController__DidActivateDelegate, "HMUI", "ViewController/DidActivateDelegate");
NEED_NO_BOX(HMUI::HMUI__ViewController__DidDeactivateDelegate);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__ViewController__DidDeactivateDelegate, "HMUI", "ViewController/DidDeactivateDelegate");
NEED_NO_BOX(HMUI::HMUI__ViewController___DismissViewControllerCoroutine_d__62);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__ViewController___DismissViewControllerCoroutine_d__62, "HMUI", "ViewController/<DismissViewControllerCoroutine>d__62");
NEED_NO_BOX(HMUI::HMUI__ViewController___PresentViewControllerCoroutine_d__58);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__ViewController___PresentViewControllerCoroutine_d__58, "HMUI", "ViewController/<PresentViewControllerCoroutine>d__58");
NEED_NO_BOX(HMUI::HMUI__ViewController___ReplaceViewControllerCoroutine_d__60);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__ViewController___ReplaceViewControllerCoroutine_d__60, "HMUI", "ViewController/<ReplaceViewControllerCoroutine>d__60");
NEED_NO_BOX(HMUI::ViewController);
DEFINE_IL2CPP_ARG_TYPE(HMUI::ViewController, "HMUI", "ViewController");
