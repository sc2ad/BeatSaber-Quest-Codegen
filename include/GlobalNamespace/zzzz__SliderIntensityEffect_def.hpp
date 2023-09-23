#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
struct EaseType;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
struct ArcVisibilityType;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__SliderIntensityEffect__FadeElement;
}
namespace GlobalNamespace {
class GlobalNamespace__SliderIntensityEffect__InitData;
}
namespace GlobalNamespace {
class GlobalNamespace__SliderIntensityEffect__IntensityCalculationDelegate;
}
namespace GlobalNamespace {
class GlobalNamespace__SliderIntensityEffect___ProcessEffectCoroutine_d__32;
}
namespace GlobalNamespace {
class SliderIntensityEffect;
}
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4929))
// CS Name: SliderIntensityEffect::InitData
class CORDL_TYPE GlobalNamespace__SliderIntensityEffect__InitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__SliderIntensityEffect__InitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SliderIntensityEffect__InitData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__SliderIntensityEffect__InitData(GlobalNamespace__SliderIntensityEffect__InitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SliderIntensityEffect__InitData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__SliderIntensityEffect__InitData(GlobalNamespace__SliderIntensityEffect__InitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SliderIntensityEffect__InitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__SliderIntensityEffect__InitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__SliderIntensityEffect__InitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__SliderIntensityEffect__InitData& operator=(GlobalNamespace__SliderIntensityEffect__InitData&& o) noexcept = default;
  constexpr GlobalNamespace__SliderIntensityEffect__InitData& operator=(GlobalNamespace__SliderIntensityEffect__InitData const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_sliderColorIntensity, put=__set_sliderColorIntensity))  sliderColorIntensity;

constexpr void __set_sliderColorIntensity(float_t value) ;

constexpr float_t __get_sliderColorIntensity() const;

 float_t __declspec(property(get=__get_hapticFeedback, put=__set_hapticFeedback))  hapticFeedback;

constexpr void __set_hapticFeedback(float_t value) ;

constexpr float_t __get_hapticFeedback() const;


// Methods

// Ctor Parameters [CppParam { name: "arcVisibilityType", ty: "GlobalNamespace::ArcVisibilityType", modifiers: "", def_value: None }, CppParam { name: "hapticFeedbackEnabled", ty: "bool", modifiers: "", def_value: None }]
explicit GlobalNamespace__SliderIntensityEffect__InitData(GlobalNamespace::ArcVisibilityType arcVisibilityType, bool hapticFeedbackEnabled) ;

/// @brief Method .ctor addr 0x224a76c size 0x6c virtual false final false
 void _ctor(GlobalNamespace::ArcVisibilityType arcVisibilityType, bool hapticFeedbackEnabled) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::FadeElement
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4930))
// CS Name: SliderIntensityEffect::FadeElement
class CORDL_TYPE GlobalNamespace__SliderIntensityEffect__FadeElement : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__SliderIntensityEffect__FadeElement() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SliderIntensityEffect__FadeElement", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__SliderIntensityEffect__FadeElement(GlobalNamespace__SliderIntensityEffect__FadeElement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SliderIntensityEffect__FadeElement", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__SliderIntensityEffect__FadeElement(GlobalNamespace__SliderIntensityEffect__FadeElement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SliderIntensityEffect__FadeElement(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__SliderIntensityEffect__FadeElement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__SliderIntensityEffect__FadeElement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__SliderIntensityEffect__FadeElement& operator=(GlobalNamespace__SliderIntensityEffect__FadeElement&& o) noexcept = default;
  constexpr GlobalNamespace__SliderIntensityEffect__FadeElement& operator=(GlobalNamespace__SliderIntensityEffect__FadeElement const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_duration, put=__set_duration))  duration;

constexpr void __set_duration(float_t value) ;

constexpr float_t __get_duration() const;

 float_t __declspec(property(get=__get_startIntensity, put=__set_startIntensity))  startIntensity;

constexpr void __set_startIntensity(float_t value) ;

constexpr float_t __get_startIntensity() const;

 float_t __declspec(property(get=__get_endIntensity, put=__set_endIntensity))  endIntensity;

constexpr void __set_endIntensity(float_t value) ;

constexpr float_t __get_endIntensity() const;

 GlobalNamespace::EaseType __declspec(property(get=__get_easeType, put=__set_easeType))  easeType;

constexpr void __set_easeType(GlobalNamespace::EaseType value) ;

constexpr GlobalNamespace::EaseType __get_easeType() const;

 System::Action __declspec(property(get=__get_startCallback, put=__set_startCallback))  startCallback;

constexpr void __set_startCallback(System::Action value) ;

constexpr System::Action __get_startCallback() const;


// Methods

// Ctor Parameters [CppParam { name: "easeType", ty: "GlobalNamespace::EaseType", modifiers: "", def_value: None }, CppParam { name: "startIntensity", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "endIntensity", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "startCallback", ty: "System::Action", modifiers: "", def_value: None }]
explicit GlobalNamespace__SliderIntensityEffect__FadeElement(GlobalNamespace::EaseType easeType, float_t startIntensity, float_t endIntensity, System::Action startCallback) ;

/// @brief Method .ctor addr 0x224a604 size 0x44 virtual false final false
 void _ctor(GlobalNamespace::EaseType easeType, float_t startIntensity, float_t endIntensity, System::Action startCallback) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::IntensityCalculationDelegate
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4931))
// CS Name: SliderIntensityEffect::IntensityCalculationDelegate
class CORDL_TYPE GlobalNamespace__SliderIntensityEffect__IntensityCalculationDelegate : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~GlobalNamespace__SliderIntensityEffect__IntensityCalculationDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SliderIntensityEffect__IntensityCalculationDelegate", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__SliderIntensityEffect__IntensityCalculationDelegate(GlobalNamespace__SliderIntensityEffect__IntensityCalculationDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SliderIntensityEffect__IntensityCalculationDelegate", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__SliderIntensityEffect__IntensityCalculationDelegate(GlobalNamespace__SliderIntensityEffect__IntensityCalculationDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SliderIntensityEffect__IntensityCalculationDelegate(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr GlobalNamespace__SliderIntensityEffect__IntensityCalculationDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__SliderIntensityEffect__IntensityCalculationDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__SliderIntensityEffect__IntensityCalculationDelegate& operator=(GlobalNamespace__SliderIntensityEffect__IntensityCalculationDelegate&& o) noexcept = default;
  constexpr GlobalNamespace__SliderIntensityEffect__IntensityCalculationDelegate& operator=(GlobalNamespace__SliderIntensityEffect__IntensityCalculationDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__SliderIntensityEffect__IntensityCalculationDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x224a7d8 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x224a89c size 0x14 virtual true final false
 float_t Invoke(float_t timeSinceLastSection, float_t timeSinceHeadNoteJump) ;

/// @brief Method BeginInvoke addr 0x224a8b0 size 0x98 virtual true final false
 System::IAsyncResult BeginInvoke(float_t timeSinceLastSection, float_t timeSinceHeadNoteJump, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x224a948 size 0x28 virtual true final false
 float_t EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<ProcessEffectCoroutine>d__32
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4932))
// CS Name: SliderIntensityEffect::<ProcessEffectCoroutine>d__32
class CORDL_TYPE GlobalNamespace__SliderIntensityEffect___ProcessEffectCoroutine_d__32 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~GlobalNamespace__SliderIntensityEffect___ProcessEffectCoroutine_d__32() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SliderIntensityEffect___ProcessEffectCoroutine_d__32", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__SliderIntensityEffect___ProcessEffectCoroutine_d__32(GlobalNamespace__SliderIntensityEffect___ProcessEffectCoroutine_d__32 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SliderIntensityEffect___ProcessEffectCoroutine_d__32", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__SliderIntensityEffect___ProcessEffectCoroutine_d__32(GlobalNamespace__SliderIntensityEffect___ProcessEffectCoroutine_d__32&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SliderIntensityEffect___ProcessEffectCoroutine_d__32(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__SliderIntensityEffect___ProcessEffectCoroutine_d__32& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__SliderIntensityEffect___ProcessEffectCoroutine_d__32& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__SliderIntensityEffect___ProcessEffectCoroutine_d__32& operator=(GlobalNamespace__SliderIntensityEffect___ProcessEffectCoroutine_d__32&& o) noexcept = default;
  constexpr GlobalNamespace__SliderIntensityEffect___ProcessEffectCoroutine_d__32& operator=(GlobalNamespace__SliderIntensityEffect___ProcessEffectCoroutine_d__32 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 System::Collections::Generic::IEnumerable_1<GlobalNamespace::GlobalNamespace__SliderIntensityEffect__FadeElement> __declspec(property(get=__get_fadeElements, put=__set_fadeElements))  fadeElements;

constexpr void __set_fadeElements(System::Collections::Generic::IEnumerable_1<GlobalNamespace::GlobalNamespace__SliderIntensityEffect__FadeElement> value) ;

constexpr System::Collections::Generic::IEnumerable_1<GlobalNamespace::GlobalNamespace__SliderIntensityEffect__FadeElement> __get_fadeElements() const;

 GlobalNamespace::SliderIntensityEffect __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::SliderIntensityEffect value) ;

constexpr GlobalNamespace::SliderIntensityEffect __get___4__this() const;

 System::Collections::Generic::IEnumerator_1<GlobalNamespace::GlobalNamespace__SliderIntensityEffect__FadeElement> __declspec(property(get=__get___7__wrap1, put=__set___7__wrap1))  __7__wrap1;

constexpr void __set___7__wrap1(System::Collections::Generic::IEnumerator_1<GlobalNamespace::GlobalNamespace__SliderIntensityEffect__FadeElement> value) ;

constexpr System::Collections::Generic::IEnumerator_1<GlobalNamespace::GlobalNamespace__SliderIntensityEffect__FadeElement> __get___7__wrap1() const;

 GlobalNamespace::GlobalNamespace__SliderIntensityEffect__FadeElement __declspec(property(get=__get__fadeElement_5__3, put=__set__fadeElement_5__3))  _fadeElement_5__3;

constexpr void __set__fadeElement_5__3(GlobalNamespace::GlobalNamespace__SliderIntensityEffect__FadeElement value) ;

constexpr GlobalNamespace::GlobalNamespace__SliderIntensityEffect__FadeElement __get__fadeElement_5__3() const;

 float_t __declspec(property(get=__get__startTime_5__4, put=__set__startTime_5__4))  _startTime_5__4;

constexpr void __set__startTime_5__4(float_t value) ;

constexpr float_t __get__startTime_5__4() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__SliderIntensityEffect___ProcessEffectCoroutine_d__32(int32_t __1__state) ;

/// @brief Method .ctor addr 0x224a6bc size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x224a970 size 0x1c virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x224a98c size 0x38c virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x224ad18 size 0xb0 virtual false final false
 void __m__Finally1() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x224adc8 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x224add0 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x224ae10 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SliderIntensityEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4933))
// CS Name: SliderIntensityEffect
class CORDL_TYPE SliderIntensityEffect : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _ProcessEffectCoroutine_d__32 = GlobalNamespace::GlobalNamespace__SliderIntensityEffect___ProcessEffectCoroutine_d__32;

using IntensityCalculationDelegate = GlobalNamespace::GlobalNamespace__SliderIntensityEffect__IntensityCalculationDelegate;

using FadeElement = GlobalNamespace::GlobalNamespace__SliderIntensityEffect__FadeElement;

using InitData = GlobalNamespace::GlobalNamespace__SliderIntensityEffect__InitData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~SliderIntensityEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "SliderIntensityEffect", modifiers: " const&", def_value: None }]
constexpr SliderIntensityEffect(SliderIntensityEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SliderIntensityEffect", modifiers: "&&", def_value: None }]
constexpr SliderIntensityEffect(SliderIntensityEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SliderIntensityEffect(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SliderIntensityEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SliderIntensityEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SliderIntensityEffect& operator=(SliderIntensityEffect&& o) noexcept = default;
  constexpr SliderIntensityEffect& operator=(SliderIntensityEffect const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__longSliderHeadIntensity, put=__set__longSliderHeadIntensity))  _longSliderHeadIntensity;

constexpr void __set__longSliderHeadIntensity(float_t value) ;

constexpr float_t __get__longSliderHeadIntensity() const;

 float_t __declspec(property(get=__get__shortSliderHeadIntensity, put=__set__shortSliderHeadIntensity))  _shortSliderHeadIntensity;

constexpr void __set__shortSliderHeadIntensity(float_t value) ;

constexpr float_t __get__shortSliderHeadIntensity() const;

 float_t __declspec(property(get=__get__tailIntensity, put=__set__tailIntensity))  _tailIntensity;

constexpr void __set__tailIntensity(float_t value) ;

constexpr float_t __get__tailIntensity() const;

 float_t __declspec(property(get=__get__fadeOutDuration, put=__set__fadeOutDuration))  _fadeOutDuration;

constexpr void __set__fadeOutDuration(float_t value) ;

constexpr float_t __get__fadeOutDuration() const;

 float_t __declspec(property(get=__get__stayOffDuration, put=__set__stayOffDuration))  _stayOffDuration;

constexpr void __set__stayOffDuration(float_t value) ;

constexpr float_t __get__stayOffDuration() const;

 float_t __declspec(property(get=__get__flashBoost, put=__set__flashBoost))  _flashBoost;

constexpr void __set__flashBoost(float_t value) ;

constexpr float_t __get__flashBoost() const;

 float_t __declspec(property(get=__get__flashInDuration, put=__set__flashInDuration))  _flashInDuration;

constexpr void __set__flashInDuration(float_t value) ;

constexpr float_t __get__flashInDuration() const;

 float_t __declspec(property(get=__get__flashOutDuration, put=__set__flashOutDuration))  _flashOutDuration;

constexpr void __set__flashOutDuration(float_t value) ;

constexpr float_t __get__flashOutDuration() const;

 GlobalNamespace::AudioTimeSyncController __declspec(property(get=__get__audioTimeSyncController, put=__set__audioTimeSyncController))  _audioTimeSyncController;

constexpr void __set__audioTimeSyncController(GlobalNamespace::AudioTimeSyncController value) ;

constexpr GlobalNamespace::AudioTimeSyncController __get__audioTimeSyncController() const;

 GlobalNamespace::GlobalNamespace__SliderIntensityEffect__InitData __declspec(property(get=__get__initData, put=__set__initData))  _initData;

constexpr void __set__initData(GlobalNamespace::GlobalNamespace__SliderIntensityEffect__InitData value) ;

constexpr GlobalNamespace::GlobalNamespace__SliderIntensityEffect__InitData __get__initData() const;

 System::Action __declspec(property(get=__get_fadeInDidStartEvent, put=__set_fadeInDidStartEvent))  fadeInDidStartEvent;

constexpr void __set_fadeInDidStartEvent(System::Action value) ;

constexpr System::Action __get_fadeInDidStartEvent() const;

 float_t __declspec(property(get=__get__coreIntensity, put=__set__coreIntensity))  _coreIntensity;

constexpr void __set__coreIntensity(float_t value) ;

constexpr float_t __get__coreIntensity() const;

 float_t __declspec(property(get=__get__effectIntensity, put=__set__effectIntensity))  _effectIntensity;

constexpr void __set__effectIntensity(float_t value) ;

constexpr float_t __get__effectIntensity() const;

 float_t __declspec(property(get=__get__halfJumpDuration, put=__set__halfJumpDuration))  _halfJumpDuration;

constexpr void __set__halfJumpDuration(float_t value) ;

constexpr float_t __get__halfJumpDuration() const;

 float_t __declspec(property(get=__get__sliderDuration, put=__set__sliderDuration))  _sliderDuration;

constexpr void __set__sliderDuration(float_t value) ;

constexpr float_t __get__sliderDuration() const;

 float_t __declspec(property(get=__get_headIntensity, put=__set_headIntensity))  headIntensity;

constexpr void __set_headIntensity(float_t value) ;

constexpr float_t __get_headIntensity() const;

 GlobalNamespace::GlobalNamespace__SliderIntensityEffect__IntensityCalculationDelegate __declspec(property(get=__get__intensityCalculationDelegate, put=__set__intensityCalculationDelegate))  _intensityCalculationDelegate;

constexpr void __set__intensityCalculationDelegate(GlobalNamespace::GlobalNamespace__SliderIntensityEffect__IntensityCalculationDelegate value) ;

constexpr GlobalNamespace::GlobalNamespace__SliderIntensityEffect__IntensityCalculationDelegate __get__intensityCalculationDelegate() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__SliderIntensityEffect__FadeElement> __declspec(property(get=__get__dipEffectFadeElements, put=__set__dipEffectFadeElements))  _dipEffectFadeElements;

constexpr void __set__dipEffectFadeElements(::ArrayW<GlobalNamespace::GlobalNamespace__SliderIntensityEffect__FadeElement> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__SliderIntensityEffect__FadeElement> __get__dipEffectFadeElements() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__SliderIntensityEffect__FadeElement> __declspec(property(get=__get__flashEffectFadeElements, put=__set__flashEffectFadeElements))  _flashEffectFadeElements;

constexpr void __set__flashEffectFadeElements(::ArrayW<GlobalNamespace::GlobalNamespace__SliderIntensityEffect__FadeElement> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__SliderIntensityEffect__FadeElement> __get__flashEffectFadeElements() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__SliderIntensityEffect__FadeElement> __declspec(property(get=__get__fadeInEffectFadeElements, put=__set__fadeInEffectFadeElements))  _fadeInEffectFadeElements;

constexpr void __set__fadeInEffectFadeElements(::ArrayW<GlobalNamespace::GlobalNamespace__SliderIntensityEffect__FadeElement> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__SliderIntensityEffect__FadeElement> __get__fadeInEffectFadeElements() const;


// Properties

 float_t __declspec(property(get=get_intensity))  intensity;

 float_t __declspec(property(get=get_colorIntensity))  colorIntensity;


// Methods

/// @brief Method add_fadeInDidStartEvent addr 0x2248630 size 0x9c virtual false final false
 void add_fadeInDidStartEvent(System::Action value) ;

/// @brief Method remove_fadeInDidStartEvent addr 0x2248b48 size 0x9c virtual false final false
 void remove_fadeInDidStartEvent(System::Action value) ;

/// @brief Method get_intensity addr 0x2247200 size 0x28 virtual false final false
 float_t get_intensity() ;

/// @brief Method get_colorIntensity addr 0x224a2b4 size 0x28 virtual false final false
 float_t get_colorIntensity() ;

/// @brief Method Awake addr 0x224a2dc size 0x328 virtual false final false
 void Awake() ;

/// @brief Method Init addr 0x224773c size 0xfc virtual false final false
 void Init(float_t sliderDuration, float_t halfJumpDuration, bool startVisible) ;

/// @brief Method ManualUpdate addr 0x2248ec0 size 0x3c virtual false final false
 void ManualUpdate(float_t timeSinceHeadNoteJump) ;

/// @brief Method ProcessEffectCoroutine addr 0x224a648 size 0x74 virtual false final false
 System::Collections::IEnumerator ProcessEffectCoroutine(System::Collections::Generic::IEnumerable_1<GlobalNamespace::GlobalNamespace__SliderIntensityEffect__FadeElement> fadeElements) ;

/// @brief Method StartIntensityDipEffect addr 0x2249740 size 0x30 virtual false final false
 void StartIntensityDipEffect() ;

/// @brief Method StartIntensityFadeInEffect addr 0x22494e4 size 0x30 virtual false final false
 void StartIntensityFadeInEffect() ;

/// @brief Method StartFlashEffect addr 0x224a6e4 size 0x30 virtual false final false
 void StartFlashEffect() ;

// Ctor Parameters []
explicit SliderIntensityEffect() ;

/// @brief Method .ctor addr 0x224a714 size 0x20 virtual false final false
 void _ctor() ;

/// @brief Method <Awake>b__29_0 addr 0x224a734 size 0x1c virtual false final false
 void _Awake_b__29_0() ;

/// @brief Method <Awake>b__29_1 addr 0x224a750 size 0x1c virtual false final false
 void _Awake_b__29_1() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__SliderIntensityEffect__FadeElement);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SliderIntensityEffect__FadeElement, "", "SliderIntensityEffect/FadeElement");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__SliderIntensityEffect__InitData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SliderIntensityEffect__InitData, "", "SliderIntensityEffect/InitData");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__SliderIntensityEffect__IntensityCalculationDelegate);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SliderIntensityEffect__IntensityCalculationDelegate, "", "SliderIntensityEffect/IntensityCalculationDelegate");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__SliderIntensityEffect___ProcessEffectCoroutine_d__32);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SliderIntensityEffect___ProcessEffectCoroutine_d__32, "", "SliderIntensityEffect/<ProcessEffectCoroutine>d__32");
NEED_NO_BOX(GlobalNamespace::SliderIntensityEffect);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SliderIntensityEffect, "", "SliderIntensityEffect");
