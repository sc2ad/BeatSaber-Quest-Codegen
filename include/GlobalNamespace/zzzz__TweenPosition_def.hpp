#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
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
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__TweenPosition___AnimateToNewPosCoroutine_d__11;
}
namespace GlobalNamespace {
class TweenPosition;
}
// Type: ::<AnimateToNewPosCoroutine>d__11
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13844))
// CS Name: TweenPosition::<AnimateToNewPosCoroutine>d__11
class CORDL_TYPE GlobalNamespace__TweenPosition___AnimateToNewPosCoroutine_d__11 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~GlobalNamespace__TweenPosition___AnimateToNewPosCoroutine_d__11() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__TweenPosition___AnimateToNewPosCoroutine_d__11", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__TweenPosition___AnimateToNewPosCoroutine_d__11(GlobalNamespace__TweenPosition___AnimateToNewPosCoroutine_d__11 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__TweenPosition___AnimateToNewPosCoroutine_d__11", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__TweenPosition___AnimateToNewPosCoroutine_d__11(GlobalNamespace__TweenPosition___AnimateToNewPosCoroutine_d__11&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__TweenPosition___AnimateToNewPosCoroutine_d__11(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__TweenPosition___AnimateToNewPosCoroutine_d__11& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__TweenPosition___AnimateToNewPosCoroutine_d__11& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__TweenPosition___AnimateToNewPosCoroutine_d__11& operator=(GlobalNamespace__TweenPosition___AnimateToNewPosCoroutine_d__11&& o) noexcept = default;
  constexpr GlobalNamespace__TweenPosition___AnimateToNewPosCoroutine_d__11& operator=(GlobalNamespace__TweenPosition___AnimateToNewPosCoroutine_d__11 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::TweenPosition __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::TweenPosition value) ;

constexpr GlobalNamespace::TweenPosition __get___4__this() const;

 UnityEngine::Vector3 __declspec(property(get=__get__startPos_5__2, put=__set__startPos_5__2))  _startPos_5__2;

constexpr void __set__startPos_5__2(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__startPos_5__2() const;

 float_t __declspec(property(get=__get__elapsedTime_5__3, put=__set__elapsedTime_5__3))  _elapsedTime_5__3;

constexpr void __set__elapsedTime_5__3(float_t value) ;

constexpr float_t __get__elapsedTime_5__3() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__TweenPosition___AnimateToNewPosCoroutine_d__11(int32_t __1__state) ;

/// @brief Method .ctor addr 0x1f7c7e4 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x1f7c848 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x1f7c84c size 0x17c virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x1f7c9c8 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x1f7c9d0 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x1f7ca10 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TweenPosition
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13845))
// CS Name: TweenPosition
class CORDL_TYPE TweenPosition : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _AnimateToNewPosCoroutine_d__11 = GlobalNamespace::GlobalNamespace__TweenPosition___AnimateToNewPosCoroutine_d__11;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~TweenPosition() = default;

// Ctor Parameters [CppParam { name: "", ty: "TweenPosition", modifiers: " const&", def_value: None }]
constexpr TweenPosition(TweenPosition const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TweenPosition", modifiers: "&&", def_value: None }]
constexpr TweenPosition(TweenPosition&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TweenPosition(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr TweenPosition& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TweenPosition& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TweenPosition& operator=(TweenPosition&& o) noexcept = default;
  constexpr TweenPosition& operator=(TweenPosition const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__unscaledTime, put=__set__unscaledTime))  _unscaledTime;

constexpr void __set__unscaledTime(bool value) ;

constexpr bool __get__unscaledTime() const;

 bool __declspec(property(get=__get__localPosition, put=__set__localPosition))  _localPosition;

constexpr void __set__localPosition(bool value) ;

constexpr bool __get__localPosition() const;

 float_t __declspec(property(get=__get__duration, put=__set__duration))  _duration;

constexpr void __set__duration(float_t value) ;

constexpr float_t __get__duration() const;

 UnityEngine::AnimationCurve __declspec(property(get=__get__animationCurve, put=__set__animationCurve))  _animationCurve;

constexpr void __set__animationCurve(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get__animationCurve() const;

 UnityEngine::Transform __declspec(property(get=__get__transform, put=__set__transform))  _transform;

constexpr void __set__transform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__transform() const;

 UnityEngine::Vector3 __declspec(property(get=__get__targetPos, put=__set__targetPos))  _targetPos;

constexpr void __set__targetPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__targetPos() const;


// Properties

 UnityEngine::Vector3 __declspec(property(get=get_TargetPos, put=set_TargetPos))  TargetPos;


// Methods

/// @brief Method set_TargetPos addr 0x1f7c64c size 0x48 virtual false final false
 void set_TargetPos(UnityEngine::Vector3 value) ;

/// @brief Method get_TargetPos addr 0x1f7c754 size 0xc virtual false final false
 UnityEngine::Vector3 get_TargetPos() ;

/// @brief Method Awake addr 0x1f7c760 size 0x1c virtual false final false
 void Awake() ;

/// @brief Method AnimateToNewPos addr 0x1f7c694 size 0xc0 virtual false final false
 void AnimateToNewPos(UnityEngine::Vector3 pos) ;

/// @brief Method AnimateToNewPosCoroutine addr 0x1f7c77c size 0x68 virtual false final false
 System::Collections::IEnumerator AnimateToNewPosCoroutine(UnityEngine::Vector3 pos) ;

// Ctor Parameters []
explicit TweenPosition() ;

/// @brief Method .ctor addr 0x1f7c80c size 0x3c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__TweenPosition___AnimateToNewPosCoroutine_d__11);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__TweenPosition___AnimateToNewPosCoroutine_d__11, "", "TweenPosition/<AnimateToNewPosCoroutine>d__11");
NEED_NO_BOX(GlobalNamespace::TweenPosition);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TweenPosition, "", "TweenPosition");
