#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace System {
template<typename T>
class Action_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace HMUI {
struct HMUI__ViewController__AnimationDirection;
}
namespace HMUI {
class ViewController;
}
// Forward declare root types
namespace HMUI {
class HMUI__ViewControllerTransitionHelpers___AnimationCoroutine_d__8;
}
namespace HMUI {
class HMUI__ViewControllerTransitionHelpers___DoDismissTransition_d__4;
}
namespace HMUI {
class HMUI__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5;
}
namespace HMUI {
class HMUI__ViewControllerTransitionHelpers___DoPresentTransition_d__3;
}
namespace HMUI {
class HMUI__ViewControllerTransitionHelpers___DoVerticalTransition_d__6;
}
namespace HMUI {
class HMUI__ViewControllerTransitionHelpers____c__DisplayClass5_0;
}
namespace HMUI {
class HMUI__ViewControllerTransitionHelpers____c__DisplayClass6_0;
}
namespace HMUI {
class ViewControllerTransitionHelpers;
}
// Type: ::<DoPresentTransition>d__3
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13657))
// CS Name: HMUI.ViewControllerTransitionHelpers::<DoPresentTransition>d__3
class CORDL_TYPE HMUI__ViewControllerTransitionHelpers___DoPresentTransition_d__3 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~HMUI__ViewControllerTransitionHelpers___DoPresentTransition_d__3() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__ViewControllerTransitionHelpers___DoPresentTransition_d__3", modifiers: " const&", def_value: None }]
constexpr HMUI__ViewControllerTransitionHelpers___DoPresentTransition_d__3(HMUI__ViewControllerTransitionHelpers___DoPresentTransition_d__3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__ViewControllerTransitionHelpers___DoPresentTransition_d__3", modifiers: "&&", def_value: None }]
constexpr HMUI__ViewControllerTransitionHelpers___DoPresentTransition_d__3(HMUI__ViewControllerTransitionHelpers___DoPresentTransition_d__3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__ViewControllerTransitionHelpers___DoPresentTransition_d__3(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMUI__ViewControllerTransitionHelpers___DoPresentTransition_d__3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMUI__ViewControllerTransitionHelpers___DoPresentTransition_d__3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMUI__ViewControllerTransitionHelpers___DoPresentTransition_d__3& operator=(HMUI__ViewControllerTransitionHelpers___DoPresentTransition_d__3&& o) noexcept = default;
  constexpr HMUI__ViewControllerTransitionHelpers___DoPresentTransition_d__3& operator=(HMUI__ViewControllerTransitionHelpers___DoPresentTransition_d__3 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 HMUI::HMUI__ViewController__AnimationDirection __declspec(property(get=__get_animationDirection, put=__set_animationDirection))  animationDirection;

constexpr void __set_animationDirection(HMUI::HMUI__ViewController__AnimationDirection value) ;

constexpr HMUI::HMUI__ViewController__AnimationDirection __get_animationDirection() const;

 HMUI::ViewController __declspec(property(get=__get_toPresentViewController, put=__set_toPresentViewController))  toPresentViewController;

constexpr void __set_toPresentViewController(HMUI::ViewController value) ;

constexpr HMUI::ViewController __get_toPresentViewController() const;

 HMUI::ViewController __declspec(property(get=__get_toDismissViewController, put=__set_toDismissViewController))  toDismissViewController;

constexpr void __set_toDismissViewController(HMUI::ViewController value) ;

constexpr HMUI::ViewController __get_toDismissViewController() const;

 float_t __declspec(property(get=__get_moveOffsetMultiplier, put=__set_moveOffsetMultiplier))  moveOffsetMultiplier;

constexpr void __set_moveOffsetMultiplier(float_t value) ;

constexpr float_t __get_moveOffsetMultiplier() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit HMUI__ViewControllerTransitionHelpers___DoPresentTransition_d__3(int32_t __1__state) ;

/// @brief Method .ctor addr 0x1fbaeac size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x1fbb0ec size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x1fbb0f0 size 0x94 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x1fbb184 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x1fbb18c size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x1fbb1cc size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: ::<DoDismissTransition>d__4
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13658))
// CS Name: HMUI.ViewControllerTransitionHelpers::<DoDismissTransition>d__4
class CORDL_TYPE HMUI__ViewControllerTransitionHelpers___DoDismissTransition_d__4 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~HMUI__ViewControllerTransitionHelpers___DoDismissTransition_d__4() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__ViewControllerTransitionHelpers___DoDismissTransition_d__4", modifiers: " const&", def_value: None }]
constexpr HMUI__ViewControllerTransitionHelpers___DoDismissTransition_d__4(HMUI__ViewControllerTransitionHelpers___DoDismissTransition_d__4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__ViewControllerTransitionHelpers___DoDismissTransition_d__4", modifiers: "&&", def_value: None }]
constexpr HMUI__ViewControllerTransitionHelpers___DoDismissTransition_d__4(HMUI__ViewControllerTransitionHelpers___DoDismissTransition_d__4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__ViewControllerTransitionHelpers___DoDismissTransition_d__4(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMUI__ViewControllerTransitionHelpers___DoDismissTransition_d__4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMUI__ViewControllerTransitionHelpers___DoDismissTransition_d__4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMUI__ViewControllerTransitionHelpers___DoDismissTransition_d__4& operator=(HMUI__ViewControllerTransitionHelpers___DoDismissTransition_d__4&& o) noexcept = default;
  constexpr HMUI__ViewControllerTransitionHelpers___DoDismissTransition_d__4& operator=(HMUI__ViewControllerTransitionHelpers___DoDismissTransition_d__4 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 HMUI::HMUI__ViewController__AnimationDirection __declspec(property(get=__get_animationDirection, put=__set_animationDirection))  animationDirection;

constexpr void __set_animationDirection(HMUI::HMUI__ViewController__AnimationDirection value) ;

constexpr HMUI::HMUI__ViewController__AnimationDirection __get_animationDirection() const;

 HMUI::ViewController __declspec(property(get=__get_toPresentViewController, put=__set_toPresentViewController))  toPresentViewController;

constexpr void __set_toPresentViewController(HMUI::ViewController value) ;

constexpr HMUI::ViewController __get_toPresentViewController() const;

 HMUI::ViewController __declspec(property(get=__get_toDismissViewController, put=__set_toDismissViewController))  toDismissViewController;

constexpr void __set_toDismissViewController(HMUI::ViewController value) ;

constexpr HMUI::ViewController __get_toDismissViewController() const;

 float_t __declspec(property(get=__get_moveOffsetMultiplier, put=__set_moveOffsetMultiplier))  moveOffsetMultiplier;

constexpr void __set_moveOffsetMultiplier(float_t value) ;

constexpr float_t __get_moveOffsetMultiplier() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit HMUI__ViewControllerTransitionHelpers___DoDismissTransition_d__4(int32_t __1__state) ;

/// @brief Method .ctor addr 0x1fbaed4 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x1fbb1d4 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x1fbb1d8 size 0x94 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x1fbb26c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x1fbb274 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x1fbb2b4 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: ::<>c__DisplayClass5_0
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13659))
// CS Name: HMUI.ViewControllerTransitionHelpers::<>c__DisplayClass5_0
class CORDL_TYPE HMUI__ViewControllerTransitionHelpers____c__DisplayClass5_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~HMUI__ViewControllerTransitionHelpers____c__DisplayClass5_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__ViewControllerTransitionHelpers____c__DisplayClass5_0", modifiers: " const&", def_value: None }]
constexpr HMUI__ViewControllerTransitionHelpers____c__DisplayClass5_0(HMUI__ViewControllerTransitionHelpers____c__DisplayClass5_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__ViewControllerTransitionHelpers____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
constexpr HMUI__ViewControllerTransitionHelpers____c__DisplayClass5_0(HMUI__ViewControllerTransitionHelpers____c__DisplayClass5_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__ViewControllerTransitionHelpers____c__DisplayClass5_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMUI__ViewControllerTransitionHelpers____c__DisplayClass5_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMUI__ViewControllerTransitionHelpers____c__DisplayClass5_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMUI__ViewControllerTransitionHelpers____c__DisplayClass5_0& operator=(HMUI__ViewControllerTransitionHelpers____c__DisplayClass5_0&& o) noexcept = default;
  constexpr HMUI__ViewControllerTransitionHelpers____c__DisplayClass5_0& operator=(HMUI__ViewControllerTransitionHelpers____c__DisplayClass5_0 const& o) noexcept = default;
                


// Fields

 HMUI::ViewController __declspec(property(get=__get_toPresentViewController, put=__set_toPresentViewController))  toPresentViewController;

constexpr void __set_toPresentViewController(HMUI::ViewController value) ;

constexpr HMUI::ViewController __get_toPresentViewController() const;

 float_t __declspec(property(get=__get_moveOffset, put=__set_moveOffset))  moveOffset;

constexpr void __set_moveOffset(float_t value) ;

constexpr float_t __get_moveOffset() const;

 HMUI::ViewController __declspec(property(get=__get_toDismissViewController, put=__set_toDismissViewController))  toDismissViewController;

constexpr void __set_toDismissViewController(HMUI::ViewController value) ;

constexpr HMUI::ViewController __get_toDismissViewController() const;

 float_t __declspec(property(get=__get_baseCanvasGroupAlpha, put=__set_baseCanvasGroupAlpha))  baseCanvasGroupAlpha;

constexpr void __set_baseCanvasGroupAlpha(float_t value) ;

constexpr float_t __get_baseCanvasGroupAlpha() const;


// Methods

// Ctor Parameters []
explicit HMUI__ViewControllerTransitionHelpers____c__DisplayClass5_0() ;

/// @brief Method .ctor addr 0x1fbb2bc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <DoHorizontalTransition>b__0 addr 0x1fbb2c4 size 0xd0 virtual false final false
 void _DoHorizontalTransition_b__0(float_t t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: ::<DoHorizontalTransition>d__5
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13660))
// CS Name: HMUI.ViewControllerTransitionHelpers::<DoHorizontalTransition>d__5
class CORDL_TYPE HMUI__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~HMUI__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5", modifiers: " const&", def_value: None }]
constexpr HMUI__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5(HMUI__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5", modifiers: "&&", def_value: None }]
constexpr HMUI__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5(HMUI__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMUI__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMUI__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMUI__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5& operator=(HMUI__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5&& o) noexcept = default;
  constexpr HMUI__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5& operator=(HMUI__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 HMUI::ViewController __declspec(property(get=__get_toPresentViewController, put=__set_toPresentViewController))  toPresentViewController;

constexpr void __set_toPresentViewController(HMUI::ViewController value) ;

constexpr HMUI::ViewController __get_toPresentViewController() const;

 HMUI::ViewController __declspec(property(get=__get_toDismissViewController, put=__set_toDismissViewController))  toDismissViewController;

constexpr void __set_toDismissViewController(HMUI::ViewController value) ;

constexpr HMUI::ViewController __get_toDismissViewController() const;

 float_t __declspec(property(get=__get_moveOffsetMultiplier, put=__set_moveOffsetMultiplier))  moveOffsetMultiplier;

constexpr void __set_moveOffsetMultiplier(float_t value) ;

constexpr float_t __get_moveOffsetMultiplier() const;

 HMUI::HMUI__ViewControllerTransitionHelpers____c__DisplayClass5_0 __declspec(property(get=__get___8__1, put=__set___8__1))  __8__1;

constexpr void __set___8__1(HMUI::HMUI__ViewControllerTransitionHelpers____c__DisplayClass5_0 value) ;

constexpr HMUI::HMUI__ViewControllerTransitionHelpers____c__DisplayClass5_0 __get___8__1() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit HMUI__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5(int32_t __1__state) ;

/// @brief Method .ctor addr 0x1fbaf80 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x1fbb394 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x1fbb398 size 0x158 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x1fbb4f0 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x1fbb4f8 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x1fbb538 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: ::<>c__DisplayClass6_0
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13661))
// CS Name: HMUI.ViewControllerTransitionHelpers::<>c__DisplayClass6_0
class CORDL_TYPE HMUI__ViewControllerTransitionHelpers____c__DisplayClass6_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~HMUI__ViewControllerTransitionHelpers____c__DisplayClass6_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__ViewControllerTransitionHelpers____c__DisplayClass6_0", modifiers: " const&", def_value: None }]
constexpr HMUI__ViewControllerTransitionHelpers____c__DisplayClass6_0(HMUI__ViewControllerTransitionHelpers____c__DisplayClass6_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__ViewControllerTransitionHelpers____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
constexpr HMUI__ViewControllerTransitionHelpers____c__DisplayClass6_0(HMUI__ViewControllerTransitionHelpers____c__DisplayClass6_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__ViewControllerTransitionHelpers____c__DisplayClass6_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMUI__ViewControllerTransitionHelpers____c__DisplayClass6_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMUI__ViewControllerTransitionHelpers____c__DisplayClass6_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMUI__ViewControllerTransitionHelpers____c__DisplayClass6_0& operator=(HMUI__ViewControllerTransitionHelpers____c__DisplayClass6_0&& o) noexcept = default;
  constexpr HMUI__ViewControllerTransitionHelpers____c__DisplayClass6_0& operator=(HMUI__ViewControllerTransitionHelpers____c__DisplayClass6_0 const& o) noexcept = default;
                


// Fields

 HMUI::ViewController __declspec(property(get=__get_toPresentViewController, put=__set_toPresentViewController))  toPresentViewController;

constexpr void __set_toPresentViewController(HMUI::ViewController value) ;

constexpr HMUI::ViewController __get_toPresentViewController() const;

 float_t __declspec(property(get=__get_moveOffset, put=__set_moveOffset))  moveOffset;

constexpr void __set_moveOffset(float_t value) ;

constexpr float_t __get_moveOffset() const;

 float_t __declspec(property(get=__get_baseCanvasGroupAlpha, put=__set_baseCanvasGroupAlpha))  baseCanvasGroupAlpha;

constexpr void __set_baseCanvasGroupAlpha(float_t value) ;

constexpr float_t __get_baseCanvasGroupAlpha() const;

 HMUI::ViewController __declspec(property(get=__get_toDismissViewController, put=__set_toDismissViewController))  toDismissViewController;

constexpr void __set_toDismissViewController(HMUI::ViewController value) ;

constexpr HMUI::ViewController __get_toDismissViewController() const;


// Methods

// Ctor Parameters []
explicit HMUI__ViewControllerTransitionHelpers____c__DisplayClass6_0() ;

/// @brief Method .ctor addr 0x1fbb540 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <DoVerticalTransition>b__0 addr 0x1fbb548 size 0xe4 virtual false final false
 void _DoVerticalTransition_b__0(float_t t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: ::<DoVerticalTransition>d__6
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13662))
// CS Name: HMUI.ViewControllerTransitionHelpers::<DoVerticalTransition>d__6
class CORDL_TYPE HMUI__ViewControllerTransitionHelpers___DoVerticalTransition_d__6 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~HMUI__ViewControllerTransitionHelpers___DoVerticalTransition_d__6() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__ViewControllerTransitionHelpers___DoVerticalTransition_d__6", modifiers: " const&", def_value: None }]
constexpr HMUI__ViewControllerTransitionHelpers___DoVerticalTransition_d__6(HMUI__ViewControllerTransitionHelpers___DoVerticalTransition_d__6 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__ViewControllerTransitionHelpers___DoVerticalTransition_d__6", modifiers: "&&", def_value: None }]
constexpr HMUI__ViewControllerTransitionHelpers___DoVerticalTransition_d__6(HMUI__ViewControllerTransitionHelpers___DoVerticalTransition_d__6&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__ViewControllerTransitionHelpers___DoVerticalTransition_d__6(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMUI__ViewControllerTransitionHelpers___DoVerticalTransition_d__6& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMUI__ViewControllerTransitionHelpers___DoVerticalTransition_d__6& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMUI__ViewControllerTransitionHelpers___DoVerticalTransition_d__6& operator=(HMUI__ViewControllerTransitionHelpers___DoVerticalTransition_d__6&& o) noexcept = default;
  constexpr HMUI__ViewControllerTransitionHelpers___DoVerticalTransition_d__6& operator=(HMUI__ViewControllerTransitionHelpers___DoVerticalTransition_d__6 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 HMUI::ViewController __declspec(property(get=__get_toPresentViewController, put=__set_toPresentViewController))  toPresentViewController;

constexpr void __set_toPresentViewController(HMUI::ViewController value) ;

constexpr HMUI::ViewController __get_toPresentViewController() const;

 HMUI::ViewController __declspec(property(get=__get_toDismissViewController, put=__set_toDismissViewController))  toDismissViewController;

constexpr void __set_toDismissViewController(HMUI::ViewController value) ;

constexpr HMUI::ViewController __get_toDismissViewController() const;

 float_t __declspec(property(get=__get_moveOffsetMultiplier, put=__set_moveOffsetMultiplier))  moveOffsetMultiplier;

constexpr void __set_moveOffsetMultiplier(float_t value) ;

constexpr float_t __get_moveOffsetMultiplier() const;

 HMUI::HMUI__ViewControllerTransitionHelpers____c__DisplayClass6_0 __declspec(property(get=__get___8__1, put=__set___8__1))  __8__1;

constexpr void __set___8__1(HMUI::HMUI__ViewControllerTransitionHelpers____c__DisplayClass6_0 value) ;

constexpr HMUI::HMUI__ViewControllerTransitionHelpers____c__DisplayClass6_0 __get___8__1() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit HMUI__ViewControllerTransitionHelpers___DoVerticalTransition_d__6(int32_t __1__state) ;

/// @brief Method .ctor addr 0x1fbb02c size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x1fbb62c size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x1fbb630 size 0x15c virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x1fbb78c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x1fbb794 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x1fbb7d4 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: ::<AnimationCoroutine>d__8
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13663))
// CS Name: HMUI.ViewControllerTransitionHelpers::<AnimationCoroutine>d__8
class CORDL_TYPE HMUI__ViewControllerTransitionHelpers___AnimationCoroutine_d__8 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~HMUI__ViewControllerTransitionHelpers___AnimationCoroutine_d__8() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__ViewControllerTransitionHelpers___AnimationCoroutine_d__8", modifiers: " const&", def_value: None }]
constexpr HMUI__ViewControllerTransitionHelpers___AnimationCoroutine_d__8(HMUI__ViewControllerTransitionHelpers___AnimationCoroutine_d__8 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__ViewControllerTransitionHelpers___AnimationCoroutine_d__8", modifiers: "&&", def_value: None }]
constexpr HMUI__ViewControllerTransitionHelpers___AnimationCoroutine_d__8(HMUI__ViewControllerTransitionHelpers___AnimationCoroutine_d__8&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__ViewControllerTransitionHelpers___AnimationCoroutine_d__8(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMUI__ViewControllerTransitionHelpers___AnimationCoroutine_d__8& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMUI__ViewControllerTransitionHelpers___AnimationCoroutine_d__8& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMUI__ViewControllerTransitionHelpers___AnimationCoroutine_d__8& operator=(HMUI__ViewControllerTransitionHelpers___AnimationCoroutine_d__8&& o) noexcept = default;
  constexpr HMUI__ViewControllerTransitionHelpers___AnimationCoroutine_d__8& operator=(HMUI__ViewControllerTransitionHelpers___AnimationCoroutine_d__8 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 System::Action_1<float_t> __declspec(property(get=__get_transitionAnimation, put=__set_transitionAnimation))  transitionAnimation;

constexpr void __set_transitionAnimation(System::Action_1<float_t> value) ;

constexpr System::Action_1<float_t> __get_transitionAnimation() const;

 float_t __declspec(property(get=__get__elapsedTime_5__2, put=__set__elapsedTime_5__2))  _elapsedTime_5__2;

constexpr void __set__elapsedTime_5__2(float_t value) ;

constexpr float_t __get__elapsedTime_5__2() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit HMUI__ViewControllerTransitionHelpers___AnimationCoroutine_d__8(int32_t __1__state) ;

/// @brief Method .ctor addr 0x1fbb0bc size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x1fbb7dc size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x1fbb7e0 size 0xdc virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x1fbb8bc size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x1fbb8c4 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x1fbb904 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: HMUI::ViewControllerTransitionHelpers
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13664))
// CS Name: HMUI.ViewControllerTransitionHelpers
class CORDL_TYPE ViewControllerTransitionHelpers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _AnimationCoroutine_d__8 = HMUI::HMUI__ViewControllerTransitionHelpers___AnimationCoroutine_d__8;

using _DoVerticalTransition_d__6 = HMUI::HMUI__ViewControllerTransitionHelpers___DoVerticalTransition_d__6;

using __c__DisplayClass6_0 = HMUI::HMUI__ViewControllerTransitionHelpers____c__DisplayClass6_0;

using _DoHorizontalTransition_d__5 = HMUI::HMUI__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5;

using __c__DisplayClass5_0 = HMUI::HMUI__ViewControllerTransitionHelpers____c__DisplayClass5_0;

using _DoDismissTransition_d__4 = HMUI::HMUI__ViewControllerTransitionHelpers___DoDismissTransition_d__4;

using _DoPresentTransition_d__3 = HMUI::HMUI__ViewControllerTransitionHelpers___DoPresentTransition_d__3;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ViewControllerTransitionHelpers() = default;

// Ctor Parameters [CppParam { name: "", ty: "ViewControllerTransitionHelpers", modifiers: " const&", def_value: None }]
constexpr ViewControllerTransitionHelpers(ViewControllerTransitionHelpers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ViewControllerTransitionHelpers", modifiers: "&&", def_value: None }]
constexpr ViewControllerTransitionHelpers(ViewControllerTransitionHelpers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ViewControllerTransitionHelpers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ViewControllerTransitionHelpers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ViewControllerTransitionHelpers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ViewControllerTransitionHelpers& operator=(ViewControllerTransitionHelpers&& o) noexcept = default;
  constexpr ViewControllerTransitionHelpers& operator=(ViewControllerTransitionHelpers const& o) noexcept = default;
                


// Fields

/// @brief Field kTransitionDuration offset 0
static constexpr float_t  kTransitionDuration{0.4};

/// @brief Field kHorizontalTransitionMoveOffset offset 0
static constexpr float_t  kHorizontalTransitionMoveOffset{2};

/// @brief Field kVerticalTransitionMoveOffset offset 0
static constexpr float_t  kVerticalTransitionMoveOffset{0.5};


// Methods

/// @brief Method DoPresentTransition addr 0x1fba7a4 size 0x8c virtual false final false
static System::Collections::IEnumerator DoPresentTransition(HMUI::ViewController toPresentViewController, HMUI::ViewController toDismissViewController, HMUI::HMUI__ViewController__AnimationDirection animationDirection, float_t moveOffsetMultiplier) ;

/// @brief Method DoDismissTransition addr 0x1fbadd0 size 0x8c virtual false final false
static System::Collections::IEnumerator DoDismissTransition(HMUI::ViewController toPresentViewController, HMUI::ViewController toDismissViewController, HMUI::HMUI__ViewController__AnimationDirection animationDirection, float_t moveOffsetMultiplier) ;

/// @brief Method DoHorizontalTransition addr 0x1fbaefc size 0x84 virtual false final false
static System::Collections::IEnumerator DoHorizontalTransition(HMUI::ViewController toPresentViewController, HMUI::ViewController toDismissViewController, float_t moveOffsetMultiplier) ;

/// @brief Method DoVerticalTransition addr 0x1fbafa8 size 0x84 virtual false final false
static System::Collections::IEnumerator DoVerticalTransition(HMUI::ViewController toPresentViewController, HMUI::ViewController toDismissViewController, float_t moveOffsetMultiplier) ;

/// @brief Method ImmediateTransition addr 0x1fba830 size 0xfc virtual false final false
static void ImmediateTransition(HMUI::ViewController toPresentViewController, HMUI::ViewController toDismissViewController) ;

/// @brief Method AnimationCoroutine addr 0x1fbb054 size 0x68 virtual false final false
static System::Collections::IEnumerator AnimationCoroutine(System::Action_1<float_t> transitionAnimation) ;

// Ctor Parameters []
explicit ViewControllerTransitionHelpers() ;

/// @brief Method .ctor addr 0x1fbb0e4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
NEED_NO_BOX(HMUI::HMUI__ViewControllerTransitionHelpers___AnimationCoroutine_d__8);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__ViewControllerTransitionHelpers___AnimationCoroutine_d__8, "HMUI", "ViewControllerTransitionHelpers/<AnimationCoroutine>d__8");
NEED_NO_BOX(HMUI::HMUI__ViewControllerTransitionHelpers___DoDismissTransition_d__4);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__ViewControllerTransitionHelpers___DoDismissTransition_d__4, "HMUI", "ViewControllerTransitionHelpers/<DoDismissTransition>d__4");
NEED_NO_BOX(HMUI::HMUI__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5, "HMUI", "ViewControllerTransitionHelpers/<DoHorizontalTransition>d__5");
NEED_NO_BOX(HMUI::HMUI__ViewControllerTransitionHelpers___DoPresentTransition_d__3);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__ViewControllerTransitionHelpers___DoPresentTransition_d__3, "HMUI", "ViewControllerTransitionHelpers/<DoPresentTransition>d__3");
NEED_NO_BOX(HMUI::HMUI__ViewControllerTransitionHelpers___DoVerticalTransition_d__6);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__ViewControllerTransitionHelpers___DoVerticalTransition_d__6, "HMUI", "ViewControllerTransitionHelpers/<DoVerticalTransition>d__6");
NEED_NO_BOX(HMUI::HMUI__ViewControllerTransitionHelpers____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__ViewControllerTransitionHelpers____c__DisplayClass5_0, "HMUI", "ViewControllerTransitionHelpers/<>c__DisplayClass5_0");
NEED_NO_BOX(HMUI::HMUI__ViewControllerTransitionHelpers____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__ViewControllerTransitionHelpers____c__DisplayClass6_0, "HMUI", "ViewControllerTransitionHelpers/<>c__DisplayClass6_0");
NEED_NO_BOX(HMUI::ViewControllerTransitionHelpers);
DEFINE_IL2CPP_ARG_TYPE(HMUI::ViewControllerTransitionHelpers, "HMUI", "ViewControllerTransitionHelpers");
