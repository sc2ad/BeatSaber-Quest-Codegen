#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class GlobalNamespace__GhostDuplicationEffect____c__DisplayClass7_0;
}
namespace GlobalNamespace {
class GlobalNamespace__GhostDuplicationEffect___HideRedundantWithDelay_d__8;
}
namespace GlobalNamespace {
struct GlobalNamespace__GhostDuplicationEffect__GhostEffectParams;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace Tweening {
class TimeTweeningManager;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace GlobalNamespace {
struct EaseType;
}
// Forward declare root types
namespace GlobalNamespace {
class GhostDuplicationEffect;
}
namespace GlobalNamespace {
class GlobalNamespace__GhostDuplicationEffect___HideRedundantWithDelay_d__8;
}
namespace GlobalNamespace {
class GlobalNamespace__GhostDuplicationEffect____c__DisplayClass7_0;
}
namespace GlobalNamespace {
struct GlobalNamespace__GhostDuplicationEffect__GhostEffectParams;
}
// Type: ::GhostEffectParams
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4974))
// CS Name: GhostDuplicationEffect::GhostEffectParams
struct CORDL_TYPE GlobalNamespace__GhostDuplicationEffect__GhostEffectParams : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "startAlpha", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "startPosition", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "startSize", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "endAlpha", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "endPosition", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "endSize", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "duration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "delay", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "easeType", ty: "GlobalNamespace::EaseType", modifiers: "", def_value: None }, CppParam { name: "distanceCurve", ty: "UnityEngine::AnimationCurve", modifiers: "", def_value: None }, CppParam { name: "peakDistance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "lastPhase", ty: "bool", modifiers: "", def_value: None }]
constexpr GlobalNamespace__GhostDuplicationEffect__GhostEffectParams(float_t startAlpha, UnityEngine::Vector3 startPosition, float_t startSize, float_t endAlpha, UnityEngine::Vector3 endPosition, float_t endSize, float_t duration, float_t delay, GlobalNamespace::EaseType easeType, UnityEngine::AnimationCurve distanceCurve, float_t peakDistance, bool lastPhase) noexcept;


                    constexpr GlobalNamespace__GhostDuplicationEffect__GhostEffectParams(GlobalNamespace__GhostDuplicationEffect__GhostEffectParams const&) = default;
                    constexpr GlobalNamespace__GhostDuplicationEffect__GhostEffectParams(GlobalNamespace__GhostDuplicationEffect__GhostEffectParams&&) = default;
                    constexpr GlobalNamespace__GhostDuplicationEffect__GhostEffectParams& operator=(GlobalNamespace__GhostDuplicationEffect__GhostEffectParams const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__GhostDuplicationEffect__GhostEffectParams& operator=(GlobalNamespace__GhostDuplicationEffect__GhostEffectParams&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x48};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GhostDuplicationEffect__GhostEffectParams(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_startAlpha, put=__set_startAlpha))  startAlpha;

constexpr void __set_startAlpha(float_t value) ;

constexpr float_t __get_startAlpha() const;

 UnityEngine::Vector3 __declspec(property(get=__get_startPosition, put=__set_startPosition))  startPosition;

constexpr void __set_startPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_startPosition() const;

 float_t __declspec(property(get=__get_startSize, put=__set_startSize))  startSize;

constexpr void __set_startSize(float_t value) ;

constexpr float_t __get_startSize() const;

 float_t __declspec(property(get=__get_endAlpha, put=__set_endAlpha))  endAlpha;

constexpr void __set_endAlpha(float_t value) ;

constexpr float_t __get_endAlpha() const;

 UnityEngine::Vector3 __declspec(property(get=__get_endPosition, put=__set_endPosition))  endPosition;

constexpr void __set_endPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_endPosition() const;

 float_t __declspec(property(get=__get_endSize, put=__set_endSize))  endSize;

constexpr void __set_endSize(float_t value) ;

constexpr float_t __get_endSize() const;

 float_t __declspec(property(get=__get_duration, put=__set_duration))  duration;

constexpr void __set_duration(float_t value) ;

constexpr float_t __get_duration() const;

 float_t __declspec(property(get=__get_delay, put=__set_delay))  delay;

constexpr void __set_delay(float_t value) ;

constexpr float_t __get_delay() const;

 GlobalNamespace::EaseType __declspec(property(get=__get_easeType, put=__set_easeType))  easeType;

constexpr void __set_easeType(GlobalNamespace::EaseType value) ;

constexpr GlobalNamespace::EaseType __get_easeType() const;

 UnityEngine::AnimationCurve __declspec(property(get=__get_distanceCurve, put=__set_distanceCurve))  distanceCurve;

constexpr void __set_distanceCurve(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get_distanceCurve() const;

 float_t __declspec(property(get=__get_peakDistance, put=__set_peakDistance))  peakDistance;

constexpr void __set_peakDistance(float_t value) ;

constexpr float_t __get_peakDistance() const;

 bool __declspec(property(get=__get_lastPhase, put=__set_lastPhase))  lastPhase;

constexpr void __set_lastPhase(bool value) ;

constexpr bool __get_lastPhase() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass7_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4975))
// CS Name: GhostDuplicationEffect::<>c__DisplayClass7_0
class CORDL_TYPE GlobalNamespace__GhostDuplicationEffect____c__DisplayClass7_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~GlobalNamespace__GhostDuplicationEffect____c__DisplayClass7_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GhostDuplicationEffect____c__DisplayClass7_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GhostDuplicationEffect____c__DisplayClass7_0(GlobalNamespace__GhostDuplicationEffect____c__DisplayClass7_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GhostDuplicationEffect____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GhostDuplicationEffect____c__DisplayClass7_0(GlobalNamespace__GhostDuplicationEffect____c__DisplayClass7_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GhostDuplicationEffect____c__DisplayClass7_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__GhostDuplicationEffect____c__DisplayClass7_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GhostDuplicationEffect____c__DisplayClass7_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GhostDuplicationEffect____c__DisplayClass7_0& operator=(GlobalNamespace__GhostDuplicationEffect____c__DisplayClass7_0&& o) noexcept = default;
  constexpr GlobalNamespace__GhostDuplicationEffect____c__DisplayClass7_0& operator=(GlobalNamespace__GhostDuplicationEffect____c__DisplayClass7_0 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GhostDuplicationEffect __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::GhostDuplicationEffect value) ;

constexpr GlobalNamespace::GhostDuplicationEffect __get___4__this() const;

 GlobalNamespace::GlobalNamespace__GhostDuplicationEffect__GhostEffectParams __declspec(property(get=__get_ghostEffectParams, put=__set_ghostEffectParams))  ghostEffectParams;

constexpr void __set_ghostEffectParams(GlobalNamespace::GlobalNamespace__GhostDuplicationEffect__GhostEffectParams value) ;

constexpr GlobalNamespace::GlobalNamespace__GhostDuplicationEffect__GhostEffectParams __get_ghostEffectParams() const;

 UnityEngine::Vector3 __declspec(property(get=__get_direction, put=__set_direction))  direction;

constexpr void __set_direction(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_direction() const;


// Methods

static GlobalNamespace::GlobalNamespace__GhostDuplicationEffect____c__DisplayClass7_0 New_ctor() ;

/// @brief Method .ctor addr 0x2251b84 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Animate>b__0 addr 0x2251e58 size 0x18 virtual false final false
 void _Animate_b__0(float_t val) ;

/// @brief Method <Animate>b__1 addr 0x2251e70 size 0x2c virtual false final false
 void _Animate_b__1(float_t val) ;

/// @brief Method <Animate>b__2 addr 0x2251e9c size 0x50 virtual false final false
 void _Animate_b__2(UnityEngine::Vector3 pos) ;

/// @brief Method <Animate>b__3 addr 0x2251eec size 0x40 virtual false final false
 void _Animate_b__3(float_t val) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<HideRedundantWithDelay>d__8
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4976))
// CS Name: GhostDuplicationEffect::<HideRedundantWithDelay>d__8
class CORDL_TYPE GlobalNamespace__GhostDuplicationEffect___HideRedundantWithDelay_d__8 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~GlobalNamespace__GhostDuplicationEffect___HideRedundantWithDelay_d__8() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GhostDuplicationEffect___HideRedundantWithDelay_d__8", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GhostDuplicationEffect___HideRedundantWithDelay_d__8(GlobalNamespace__GhostDuplicationEffect___HideRedundantWithDelay_d__8 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GhostDuplicationEffect___HideRedundantWithDelay_d__8", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GhostDuplicationEffect___HideRedundantWithDelay_d__8(GlobalNamespace__GhostDuplicationEffect___HideRedundantWithDelay_d__8&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GhostDuplicationEffect___HideRedundantWithDelay_d__8(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__GhostDuplicationEffect___HideRedundantWithDelay_d__8& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GhostDuplicationEffect___HideRedundantWithDelay_d__8& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GhostDuplicationEffect___HideRedundantWithDelay_d__8& operator=(GlobalNamespace__GhostDuplicationEffect___HideRedundantWithDelay_d__8&& o) noexcept = default;
  constexpr GlobalNamespace__GhostDuplicationEffect___HideRedundantWithDelay_d__8& operator=(GlobalNamespace__GhostDuplicationEffect___HideRedundantWithDelay_d__8 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 float_t __declspec(property(get=__get_delay, put=__set_delay))  delay;

constexpr void __set_delay(float_t value) ;

constexpr float_t __get_delay() const;

 GlobalNamespace::GhostDuplicationEffect __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::GhostDuplicationEffect value) ;

constexpr GlobalNamespace::GhostDuplicationEffect __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static GlobalNamespace::GlobalNamespace__GhostDuplicationEffect___HideRedundantWithDelay_d__8 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2251c04 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2251f2c size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2251f30 size 0xfc virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x225202c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2252034 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2252074 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GhostDuplicationEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4977))
// CS Name: GhostDuplicationEffect
class CORDL_TYPE GhostDuplicationEffect : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _HideRedundantWithDelay_d__8 = GlobalNamespace::GlobalNamespace__GhostDuplicationEffect___HideRedundantWithDelay_d__8;

using __c__DisplayClass7_0 = GlobalNamespace::GlobalNamespace__GhostDuplicationEffect____c__DisplayClass7_0;

using GhostEffectParams = GlobalNamespace::GlobalNamespace__GhostDuplicationEffect__GhostEffectParams;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GhostDuplicationEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "GhostDuplicationEffect", modifiers: " const&", def_value: None }]
constexpr GhostDuplicationEffect(GhostDuplicationEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GhostDuplicationEffect", modifiers: "&&", def_value: None }]
constexpr GhostDuplicationEffect(GhostDuplicationEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GhostDuplicationEffect(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr GhostDuplicationEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GhostDuplicationEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GhostDuplicationEffect& operator=(GhostDuplicationEffect&& o) noexcept = default;
  constexpr GhostDuplicationEffect& operator=(GhostDuplicationEffect const& o) noexcept = default;
                


// Fields

 ::ArrayW<UnityEngine::CanvasGroup> __declspec(property(get=__get__canvases, put=__set__canvases))  _canvases;

constexpr void __set__canvases(::ArrayW<UnityEngine::CanvasGroup> value) ;

constexpr ::ArrayW<UnityEngine::CanvasGroup> __get__canvases() const;

 bool __declspec(property(get=__get_isInitialized, put=__set_isInitialized))  isInitialized;

constexpr void __set_isInitialized(bool value) ;

constexpr bool __get_isInitialized() const;

 Tweening::TimeTweeningManager __declspec(property(get=__get__tweeningManager, put=__set__tweeningManager))  _tweeningManager;

constexpr void __set__tweeningManager(Tweening::TimeTweeningManager value) ;

constexpr Tweening::TimeTweeningManager __get__tweeningManager() const;


// Properties

 bool __declspec(property(put=set_hide))  hide;

 float_t __declspec(property(get=get_size, put=set_size))  size;

 float_t __declspec(property(get=get_alpha, put=set_alpha))  alpha;


// Methods

/// @brief Method OnDestroy addr 0x225162c size 0x88 virtual true final false
 void OnDestroy() ;

/// @brief Method Awake addr 0x22516b4 size 0x10 virtual false final false
 void Awake() ;

/// @brief Method Init addr 0x22516c4 size 0x88 virtual false final false
 void Init() ;

/// @brief Method Animate addr 0x22517d0 size 0x3b4 virtual false final false
 void Animate(GlobalNamespace::GlobalNamespace__GhostDuplicationEffect__GhostEffectParams ghostEffectParams) ;

/// @brief Method HideRedundantWithDelay addr 0x2251b8c size 0x78 virtual false final false
 System::Collections::IEnumerator HideRedundantWithDelay(float_t delay) ;

/// @brief Method SetDistances addr 0x2251c2c size 0xec virtual false final false
 void SetDistances(float_t distance, UnityEngine::Vector3 direction) ;

/// @brief Method set_hide addr 0x2251d18 size 0x2c virtual false final false
 void set_hide(bool value) ;

/// @brief Method set_size addr 0x2251d44 size 0x84 virtual false final false
 void set_size(float_t value) ;

/// @brief Method get_size addr 0x2251dc8 size 0x48 virtual false final false
 float_t get_size() ;

/// @brief Method set_alpha addr 0x225174c size 0x84 virtual false final false
 void set_alpha(float_t value) ;

/// @brief Method get_alpha addr 0x2251e10 size 0x40 virtual false final false
 float_t get_alpha() ;

static GlobalNamespace::GhostDuplicationEffect New_ctor() ;

/// @brief Method .ctor addr 0x2251e50 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GhostDuplicationEffect);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GhostDuplicationEffect, "", "GhostDuplicationEffect");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GhostDuplicationEffect___HideRedundantWithDelay_d__8);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GhostDuplicationEffect___HideRedundantWithDelay_d__8, "", "GhostDuplicationEffect/<HideRedundantWithDelay>d__8");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GhostDuplicationEffect____c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GhostDuplicationEffect____c__DisplayClass7_0, "", "GhostDuplicationEffect/<>c__DisplayClass7_0");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GhostDuplicationEffect__GhostEffectParams, "", "GhostDuplicationEffect/GhostEffectParams");
