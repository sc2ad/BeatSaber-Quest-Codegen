#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class BloomFogEnvironmentParams;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class BloomFogSO;
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
class BloomFogParamsAnimator;
}
namespace GlobalNamespace {
class GlobalNamespace__BloomFogParamsAnimator___AnimationCoroutine_d__2;
}
// Type: ::<AnimationCoroutine>d__2
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14613))
// CS Name: BloomFogParamsAnimator::<AnimationCoroutine>d__2
class CORDL_TYPE GlobalNamespace__BloomFogParamsAnimator___AnimationCoroutine_d__2 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~GlobalNamespace__BloomFogParamsAnimator___AnimationCoroutine_d__2() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BloomFogParamsAnimator___AnimationCoroutine_d__2", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BloomFogParamsAnimator___AnimationCoroutine_d__2(GlobalNamespace__BloomFogParamsAnimator___AnimationCoroutine_d__2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BloomFogParamsAnimator___AnimationCoroutine_d__2", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BloomFogParamsAnimator___AnimationCoroutine_d__2(GlobalNamespace__BloomFogParamsAnimator___AnimationCoroutine_d__2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BloomFogParamsAnimator___AnimationCoroutine_d__2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__BloomFogParamsAnimator___AnimationCoroutine_d__2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BloomFogParamsAnimator___AnimationCoroutine_d__2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BloomFogParamsAnimator___AnimationCoroutine_d__2& operator=(GlobalNamespace__BloomFogParamsAnimator___AnimationCoroutine_d__2&& o) noexcept = default;
  constexpr GlobalNamespace__BloomFogParamsAnimator___AnimationCoroutine_d__2& operator=(GlobalNamespace__BloomFogParamsAnimator___AnimationCoroutine_d__2 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 float_t __declspec(property(get=__get_duration, put=__set_duration))  duration;

constexpr void __set_duration(float_t value) ;

constexpr float_t __get_duration() const;

 GlobalNamespace::BloomFogParamsAnimator __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::BloomFogParamsAnimator value) ;

constexpr GlobalNamespace::BloomFogParamsAnimator __get___4__this() const;

 GlobalNamespace::BloomFogEnvironmentParams __declspec(property(get=__get_envFogParams, put=__set_envFogParams))  envFogParams;

constexpr void __set_envFogParams(GlobalNamespace::BloomFogEnvironmentParams value) ;

constexpr GlobalNamespace::BloomFogEnvironmentParams __get_envFogParams() const;

 float_t __declspec(property(get=__get__elapsedTime_5__2, put=__set__elapsedTime_5__2))  _elapsedTime_5__2;

constexpr void __set__elapsedTime_5__2(float_t value) ;

constexpr float_t __get__elapsedTime_5__2() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__BloomFogParamsAnimator___AnimationCoroutine_d__2(int32_t __1__state) ;

/// @brief Method .ctor addr 0x1f903d4 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x1f9051c size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x1f90520 size 0xe0 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x1f90600 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x1f90608 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x1f90648 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BloomFogParamsAnimator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14614))
// CS Name: BloomFogParamsAnimator
class CORDL_TYPE BloomFogParamsAnimator : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _AnimationCoroutine_d__2 = GlobalNamespace::GlobalNamespace__BloomFogParamsAnimator___AnimationCoroutine_d__2;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BloomFogParamsAnimator() = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomFogParamsAnimator", modifiers: " const&", def_value: None }]
constexpr BloomFogParamsAnimator(BloomFogParamsAnimator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomFogParamsAnimator", modifiers: "&&", def_value: None }]
constexpr BloomFogParamsAnimator(BloomFogParamsAnimator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BloomFogParamsAnimator(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BloomFogParamsAnimator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BloomFogParamsAnimator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BloomFogParamsAnimator& operator=(BloomFogParamsAnimator&& o) noexcept = default;
  constexpr BloomFogParamsAnimator& operator=(BloomFogParamsAnimator const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BloomFogSO __declspec(property(get=__get__bloomFog, put=__set__bloomFog))  _bloomFog;

constexpr void __set__bloomFog(GlobalNamespace::BloomFogSO value) ;

constexpr GlobalNamespace::BloomFogSO __get__bloomFog() const;


// Methods

/// @brief Method AnimateBloomFogParamsChange addr 0x1f9023c size 0x7c virtual false final false
 void AnimateBloomFogParamsChange(GlobalNamespace::BloomFogEnvironmentParams envFogParams, float_t duration) ;

/// @brief Method AnimationCoroutine addr 0x1f90350 size 0x84 virtual false final false
 System::Collections::IEnumerator AnimationCoroutine(GlobalNamespace::BloomFogEnvironmentParams envFogParams, float_t duration) ;

/// @brief Method SetBloomFogParamsChange addr 0x1f903fc size 0x48 virtual false final false
 void SetBloomFogParamsChange(GlobalNamespace::BloomFogEnvironmentParams envFogParams, float_t transition) ;

/// @brief Method GetDefaultBloomFogParams addr 0x1f90444 size 0x1c virtual false final false
 GlobalNamespace::BloomFogEnvironmentParams GetDefaultBloomFogParams() ;

/// @brief Method SetDefaultBloomFogParams addr 0x1f90460 size 0x18 virtual false final false
 void SetDefaultBloomFogParams(GlobalNamespace::BloomFogEnvironmentParams newDefaultBloomFogParams) ;

// Ctor Parameters []
explicit BloomFogParamsAnimator() ;

/// @brief Method .ctor addr 0x1f90514 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BloomFogParamsAnimator);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomFogParamsAnimator, "", "BloomFogParamsAnimator");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__BloomFogParamsAnimator___AnimationCoroutine_d__2);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BloomFogParamsAnimator___AnimationCoroutine_d__2, "", "BloomFogParamsAnimator/<AnimationCoroutine>d__2");
