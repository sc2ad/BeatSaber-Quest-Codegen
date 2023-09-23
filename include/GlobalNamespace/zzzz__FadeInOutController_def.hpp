#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace GlobalNamespace {
class FloatSO;
}
namespace System {
class Action;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class FadeInOutController;
}
namespace GlobalNamespace {
class GlobalNamespace__FadeInOutController___Fade_d__15;
}
// Type: ::<Fade>d__15
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13797))
// CS Name: FadeInOutController::<Fade>d__15
class CORDL_TYPE GlobalNamespace__FadeInOutController___Fade_d__15 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~GlobalNamespace__FadeInOutController___Fade_d__15() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__FadeInOutController___Fade_d__15", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__FadeInOutController___Fade_d__15(GlobalNamespace__FadeInOutController___Fade_d__15 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__FadeInOutController___Fade_d__15", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__FadeInOutController___Fade_d__15(GlobalNamespace__FadeInOutController___Fade_d__15&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__FadeInOutController___Fade_d__15(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__FadeInOutController___Fade_d__15& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__FadeInOutController___Fade_d__15& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__FadeInOutController___Fade_d__15& operator=(GlobalNamespace__FadeInOutController___Fade_d__15&& o) noexcept = default;
  constexpr GlobalNamespace__FadeInOutController___Fade_d__15& operator=(GlobalNamespace__FadeInOutController___Fade_d__15 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 float_t __declspec(property(get=__get_startDelay, put=__set_startDelay))  startDelay;

constexpr void __set_startDelay(float_t value) ;

constexpr float_t __get_startDelay() const;

 GlobalNamespace::FadeInOutController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::FadeInOutController value) ;

constexpr GlobalNamespace::FadeInOutController __get___4__this() const;

 float_t __declspec(property(get=__get_fromValue, put=__set_fromValue))  fromValue;

constexpr void __set_fromValue(float_t value) ;

constexpr float_t __get_fromValue() const;

 float_t __declspec(property(get=__get_toValue, put=__set_toValue))  toValue;

constexpr void __set_toValue(float_t value) ;

constexpr float_t __get_toValue() const;

 UnityEngine::AnimationCurve __declspec(property(get=__get_curve, put=__set_curve))  curve;

constexpr void __set_curve(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get_curve() const;

 float_t __declspec(property(get=__get_duration, put=__set_duration))  duration;

constexpr void __set_duration(float_t value) ;

constexpr float_t __get_duration() const;

 System::Action __declspec(property(get=__get_fadeFinishedCallback, put=__set_fadeFinishedCallback))  fadeFinishedCallback;

constexpr void __set_fadeFinishedCallback(System::Action value) ;

constexpr System::Action __get_fadeFinishedCallback() const;

 float_t __declspec(property(get=__get__elapsedTime_5__2, put=__set__elapsedTime_5__2))  _elapsedTime_5__2;

constexpr void __set__elapsedTime_5__2(float_t value) ;

constexpr float_t __get__elapsedTime_5__2() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__FadeInOutController___Fade_d__15(int32_t __1__state) ;

/// @brief Method .ctor addr 0x1f77bf0 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x1f77c34 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x1f77c38 size 0x190 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x1f77dc8 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x1f77dd0 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x1f77e10 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::FadeInOutController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13798))
// CS Name: FadeInOutController
class CORDL_TYPE FadeInOutController : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _Fade_d__15 = GlobalNamespace::GlobalNamespace__FadeInOutController___Fade_d__15;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~FadeInOutController() = default;

// Ctor Parameters [CppParam { name: "", ty: "FadeInOutController", modifiers: " const&", def_value: None }]
constexpr FadeInOutController(FadeInOutController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FadeInOutController", modifiers: "&&", def_value: None }]
constexpr FadeInOutController(FadeInOutController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FadeInOutController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr FadeInOutController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FadeInOutController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FadeInOutController& operator=(FadeInOutController&& o) noexcept = default;
  constexpr FadeInOutController& operator=(FadeInOutController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::FloatSO __declspec(property(get=__get__easeValue, put=__set__easeValue))  _easeValue;

constexpr void __set__easeValue(GlobalNamespace::FloatSO value) ;

constexpr GlobalNamespace::FloatSO __get__easeValue() const;

 UnityEngine::AnimationCurve __declspec(property(get=__get__fadeInCurve, put=__set__fadeInCurve))  _fadeInCurve;

constexpr void __set__fadeInCurve(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get__fadeInCurve() const;

 UnityEngine::AnimationCurve __declspec(property(get=__get__fadeOutCurve, put=__set__fadeOutCurve))  _fadeOutCurve;

constexpr void __set__fadeOutCurve(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get__fadeOutCurve() const;

 float_t __declspec(property(get=__get__fadeInStartDelay, put=__set__fadeInStartDelay))  _fadeInStartDelay;

constexpr void __set__fadeInStartDelay(float_t value) ;

constexpr float_t __get__fadeInStartDelay() const;

 float_t __declspec(property(get=__get__defaultFadeOutDuration, put=__set__defaultFadeOutDuration))  _defaultFadeOutDuration;

constexpr void __set__defaultFadeOutDuration(float_t value) ;

constexpr float_t __get__defaultFadeOutDuration() const;

 float_t __declspec(property(get=__get__defaultFadeInDuration, put=__set__defaultFadeInDuration))  _defaultFadeInDuration;

constexpr void __set__defaultFadeInDuration(float_t value) ;

constexpr float_t __get__defaultFadeInDuration() const;


// Methods

/// @brief Method FadeOutInstant addr 0x1f77984 size 0xc virtual false final false
 void FadeOutInstant() ;

/// @brief Method FadeIn addr 0x1f77a50 size 0xc virtual false final false
 void FadeIn() ;

/// @brief Method FadeOut addr 0x1f77b18 size 0xc virtual false final false
 void FadeOut() ;

/// @brief Method FadeIn addr 0x1f77b24 size 0x8 virtual false final false
 void FadeIn(float_t duration) ;

/// @brief Method FadeOut addr 0x1f77b2c size 0x8 virtual false final false
 void FadeOut(float_t duration) ;

/// @brief Method FadeIn addr 0x1f77b34 size 0x8 virtual false final false
 void FadeIn(System::Action fadeInCallback) ;

/// @brief Method FadeOut addr 0x1f77b3c size 0x8 virtual false final false
 void FadeOut(System::Action fadeOutCallback) ;

/// @brief Method FadeIn addr 0x1f77a5c size 0xbc virtual false final false
 void FadeIn(float_t duration, System::Action fadeInFinishedCallback) ;

/// @brief Method FadeOut addr 0x1f77990 size 0xc0 virtual false final false
 void FadeOut(float_t duration, System::Action fadeOutFinishedCallback) ;

/// @brief Method Fade addr 0x1f77b44 size 0xac virtual false final false
 System::Collections::IEnumerator Fade(float_t fromValue, float_t toValue, float_t duration, float_t startDelay, UnityEngine::AnimationCurve curve, System::Action fadeFinishedCallback) ;

// Ctor Parameters []
explicit FadeInOutController() ;

/// @brief Method .ctor addr 0x1f77c18 size 0x1c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::FadeInOutController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FadeInOutController, "", "FadeInOutController");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__FadeInOutController___Fade_d__15);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__FadeInOutController___Fade_d__15, "", "FadeInOutController/<Fade>d__15");
