#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class AnimationCurve;
}
namespace GlobalNamespace {
class CutoutEffect;
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
// Forward declare root types
namespace GlobalNamespace {
class CutoutAnimateEffect;
}
namespace GlobalNamespace {
class GlobalNamespace__CutoutAnimateEffect___AnimateToCutoutCoroutine_d__7;
}
// Type: ::<AnimateToCutoutCoroutine>d__7
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4954))
// CS Name: CutoutAnimateEffect::<AnimateToCutoutCoroutine>d__7
class CORDL_TYPE GlobalNamespace__CutoutAnimateEffect___AnimateToCutoutCoroutine_d__7 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~GlobalNamespace__CutoutAnimateEffect___AnimateToCutoutCoroutine_d__7() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__CutoutAnimateEffect___AnimateToCutoutCoroutine_d__7", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__CutoutAnimateEffect___AnimateToCutoutCoroutine_d__7(GlobalNamespace__CutoutAnimateEffect___AnimateToCutoutCoroutine_d__7 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__CutoutAnimateEffect___AnimateToCutoutCoroutine_d__7", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__CutoutAnimateEffect___AnimateToCutoutCoroutine_d__7(GlobalNamespace__CutoutAnimateEffect___AnimateToCutoutCoroutine_d__7&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__CutoutAnimateEffect___AnimateToCutoutCoroutine_d__7(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__CutoutAnimateEffect___AnimateToCutoutCoroutine_d__7& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__CutoutAnimateEffect___AnimateToCutoutCoroutine_d__7& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__CutoutAnimateEffect___AnimateToCutoutCoroutine_d__7& operator=(GlobalNamespace__CutoutAnimateEffect___AnimateToCutoutCoroutine_d__7&& o) noexcept = default;
  constexpr GlobalNamespace__CutoutAnimateEffect___AnimateToCutoutCoroutine_d__7& operator=(GlobalNamespace__CutoutAnimateEffect___AnimateToCutoutCoroutine_d__7 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::CutoutAnimateEffect __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::CutoutAnimateEffect value) ;

constexpr GlobalNamespace::CutoutAnimateEffect __get___4__this() const;

 float_t __declspec(property(get=__get_duration, put=__set_duration))  duration;

constexpr void __set_duration(float_t value) ;

constexpr float_t __get_duration() const;

 float_t __declspec(property(get=__get_cutoutStart, put=__set_cutoutStart))  cutoutStart;

constexpr void __set_cutoutStart(float_t value) ;

constexpr float_t __get_cutoutStart() const;

 float_t __declspec(property(get=__get_cutoutEnd, put=__set_cutoutEnd))  cutoutEnd;

constexpr void __set_cutoutEnd(float_t value) ;

constexpr float_t __get_cutoutEnd() const;

 float_t __declspec(property(get=__get__elapsedTime_5__2, put=__set__elapsedTime_5__2))  _elapsedTime_5__2;

constexpr void __set__elapsedTime_5__2(float_t value) ;

constexpr float_t __get__elapsedTime_5__2() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__CutoutAnimateEffect___AnimateToCutoutCoroutine_d__7(int32_t __1__state) ;

/// @brief Method .ctor addr 0x224dca8 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x224ddc8 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x224ddcc size 0xf8 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x224dec4 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x224decc size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x224df0c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::CutoutAnimateEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4955))
// CS Name: CutoutAnimateEffect
class CORDL_TYPE CutoutAnimateEffect : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _AnimateToCutoutCoroutine_d__7 = GlobalNamespace::GlobalNamespace__CutoutAnimateEffect___AnimateToCutoutCoroutine_d__7;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~CutoutAnimateEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "CutoutAnimateEffect", modifiers: " const&", def_value: None }]
constexpr CutoutAnimateEffect(CutoutAnimateEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CutoutAnimateEffect", modifiers: "&&", def_value: None }]
constexpr CutoutAnimateEffect(CutoutAnimateEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CutoutAnimateEffect(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr CutoutAnimateEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CutoutAnimateEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CutoutAnimateEffect& operator=(CutoutAnimateEffect&& o) noexcept = default;
  constexpr CutoutAnimateEffect& operator=(CutoutAnimateEffect const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::CutoutEffect> __declspec(property(get=__get__cuttoutEffects, put=__set__cuttoutEffects))  _cuttoutEffects;

constexpr void __set__cuttoutEffects(::ArrayW<GlobalNamespace::CutoutEffect> value) ;

constexpr ::ArrayW<GlobalNamespace::CutoutEffect> __get__cuttoutEffects() const;

 UnityEngine::AnimationCurve __declspec(property(get=__get__transitionCurve, put=__set__transitionCurve))  _transitionCurve;

constexpr void __set__transitionCurve(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get__transitionCurve() const;

 bool __declspec(property(get=__get__animating_k__BackingField, put=__set__animating_k__BackingField))  _animating_k__BackingField;

constexpr void __set__animating_k__BackingField(bool value) ;

constexpr bool __get__animating_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_animating, put=set_animating))  animating;


// Methods

/// @brief Method get_animating addr 0x224db94 size 0x8 virtual false final false
 bool get_animating() ;

/// @brief Method set_animating addr 0x224db9c size 0xc virtual false final false
 void set_animating(bool value) ;

/// @brief Method Start addr 0x224dba8 size 0x8 virtual false final false
 void Start() ;

/// @brief Method AnimateToCutoutCoroutine addr 0x224dc1c size 0x8c virtual false final false
 System::Collections::IEnumerator AnimateToCutoutCoroutine(float_t cutoutStart, float_t cutoutEnd, float_t duration) ;

/// @brief Method SetCutout addr 0x224dbb0 size 0x6c virtual false final false
 void SetCutout(float_t cutout) ;

/// @brief Method ResetEffect addr 0x223dfd0 size 0x24 virtual false final false
 void ResetEffect() ;

/// @brief Method AnimateCutout addr 0x2245e84 size 0x54 virtual false final false
 void AnimateCutout(float_t cutoutStart, float_t cutoutEnd, float_t duration) ;

// Ctor Parameters []
explicit CutoutAnimateEffect() ;

/// @brief Method .ctor addr 0x224dd94 size 0x34 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::CutoutAnimateEffect);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CutoutAnimateEffect, "", "CutoutAnimateEffect");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__CutoutAnimateEffect___AnimateToCutoutCoroutine_d__7);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__CutoutAnimateEffect___AnimateToCutoutCoroutine_d__7, "", "CutoutAnimateEffect/<AnimateToCutoutCoroutine>d__7");
