#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class Action;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
class Transform;
}
namespace System {
class IDisposable;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace HMUI {
class HMUI__PanelAnimation___AnimationCoroutine_d__1;
}
namespace HMUI {
class PanelAnimation;
}
// Type: ::<AnimationCoroutine>d__1
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13562))
// CS Name: HMUI.PanelAnimation::<AnimationCoroutine>d__1
class CORDL_TYPE HMUI__PanelAnimation___AnimationCoroutine_d__1 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~HMUI__PanelAnimation___AnimationCoroutine_d__1() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__PanelAnimation___AnimationCoroutine_d__1", modifiers: " const&", def_value: None }]
constexpr HMUI__PanelAnimation___AnimationCoroutine_d__1(HMUI__PanelAnimation___AnimationCoroutine_d__1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__PanelAnimation___AnimationCoroutine_d__1", modifiers: "&&", def_value: None }]
constexpr HMUI__PanelAnimation___AnimationCoroutine_d__1(HMUI__PanelAnimation___AnimationCoroutine_d__1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__PanelAnimation___AnimationCoroutine_d__1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMUI__PanelAnimation___AnimationCoroutine_d__1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMUI__PanelAnimation___AnimationCoroutine_d__1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMUI__PanelAnimation___AnimationCoroutine_d__1& operator=(HMUI__PanelAnimation___AnimationCoroutine_d__1&& o) noexcept = default;
  constexpr HMUI__PanelAnimation___AnimationCoroutine_d__1& operator=(HMUI__PanelAnimation___AnimationCoroutine_d__1 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 UnityEngine::CanvasGroup __declspec(property(get=__get_canvasGroup, put=__set_canvasGroup))  canvasGroup;

constexpr void __set_canvasGroup(UnityEngine::CanvasGroup value) ;

constexpr UnityEngine::CanvasGroup __get_canvasGroup() const;

 float_t __declspec(property(get=__get_duration, put=__set_duration))  duration;

constexpr void __set_duration(float_t value) ;

constexpr float_t __get_duration() const;

 UnityEngine::CanvasGroup __declspec(property(get=__get_parentCanvasGroup, put=__set_parentCanvasGroup))  parentCanvasGroup;

constexpr void __set_parentCanvasGroup(UnityEngine::CanvasGroup value) ;

constexpr UnityEngine::CanvasGroup __get_parentCanvasGroup() const;

 UnityEngine::AnimationCurve __declspec(property(get=__get_parentAlphaAnimationCurve, put=__set_parentAlphaAnimationCurve))  parentAlphaAnimationCurve;

constexpr void __set_parentAlphaAnimationCurve(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get_parentAlphaAnimationCurve() const;

 UnityEngine::AnimationCurve __declspec(property(get=__get_alphaAnimationCurve, put=__set_alphaAnimationCurve))  alphaAnimationCurve;

constexpr void __set_alphaAnimationCurve(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get_alphaAnimationCurve() const;

 UnityEngine::AnimationCurve __declspec(property(get=__get_scaleXAnimationCurve, put=__set_scaleXAnimationCurve))  scaleXAnimationCurve;

constexpr void __set_scaleXAnimationCurve(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get_scaleXAnimationCurve() const;

 UnityEngine::AnimationCurve __declspec(property(get=__get_scaleYAnimationCurve, put=__set_scaleYAnimationCurve))  scaleYAnimationCurve;

constexpr void __set_scaleYAnimationCurve(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get_scaleYAnimationCurve() const;

 HMUI::PanelAnimation __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(HMUI::PanelAnimation value) ;

constexpr HMUI::PanelAnimation __get___4__this() const;

 System::Action __declspec(property(get=__get_finishedCallback, put=__set_finishedCallback))  finishedCallback;

constexpr void __set_finishedCallback(System::Action value) ;

constexpr System::Action __get_finishedCallback() const;

 UnityEngine::Transform __declspec(property(get=__get__canvasTransform_5__2, put=__set__canvasTransform_5__2))  _canvasTransform_5__2;

constexpr void __set__canvasTransform_5__2(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__canvasTransform_5__2() const;

 float_t __declspec(property(get=__get__elapsedTime_5__3, put=__set__elapsedTime_5__3))  _elapsedTime_5__3;

constexpr void __set__elapsedTime_5__3(float_t value) ;

constexpr float_t __get__elapsedTime_5__3() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit HMUI__PanelAnimation___AnimationCoroutine_d__1(int32_t __1__state) ;

/// @brief Method .ctor addr 0x1fa5480 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x1fa54b0 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x1fa54b4 size 0x28c virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x1fa5740 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x1fa5748 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x1fa5788 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: HMUI::PanelAnimation
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13563))
// CS Name: HMUI.PanelAnimation
class CORDL_TYPE PanelAnimation : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _AnimationCoroutine_d__1 = HMUI::HMUI__PanelAnimation___AnimationCoroutine_d__1;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PanelAnimation() = default;

// Ctor Parameters [CppParam { name: "", ty: "PanelAnimation", modifiers: " const&", def_value: None }]
constexpr PanelAnimation(PanelAnimation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PanelAnimation", modifiers: "&&", def_value: None }]
constexpr PanelAnimation(PanelAnimation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PanelAnimation(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr PanelAnimation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PanelAnimation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PanelAnimation& operator=(PanelAnimation&& o) noexcept = default;
  constexpr PanelAnimation& operator=(PanelAnimation const& o) noexcept = default;
                


// Methods

/// @brief Method StartAnimation addr 0x1fa5268 size 0x154 virtual false final false
 void StartAnimation(UnityEngine::CanvasGroup canvasGroup, UnityEngine::CanvasGroup parentCanvasGroup, float_t duration, UnityEngine::AnimationCurve scaleXAnimationCurve, UnityEngine::AnimationCurve scaleYAnimationCurve, UnityEngine::AnimationCurve alphaAnimationCurve, UnityEngine::AnimationCurve parentAlphaAnimationCurve, System::Action finishedCallback) ;

/// @brief Method AnimationCoroutine addr 0x1fa53bc size 0xc4 virtual false final false
 System::Collections::IEnumerator AnimationCoroutine(float_t duration, UnityEngine::CanvasGroup canvasGroup, UnityEngine::CanvasGroup parentCanvasGroup, UnityEngine::AnimationCurve scaleXAnimationCurve, UnityEngine::AnimationCurve scaleYAnimationCurve, UnityEngine::AnimationCurve alphaAnimationCurve, UnityEngine::AnimationCurve parentAlphaAnimationCurve, System::Action finishedCallback) ;

// Ctor Parameters []
explicit PanelAnimation() ;

/// @brief Method .ctor addr 0x1fa54a8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
NEED_NO_BOX(HMUI::HMUI__PanelAnimation___AnimationCoroutine_d__1);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__PanelAnimation___AnimationCoroutine_d__1, "HMUI", "PanelAnimation/<AnimationCoroutine>d__1");
NEED_NO_BOX(HMUI::PanelAnimation);
DEFINE_IL2CPP_ARG_TYPE(HMUI::PanelAnimation, "HMUI", "PanelAnimation");
