#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
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
namespace GlobalNamespace {
struct EaseType;
}
namespace Tweening {
class TimeTweeningManager;
}
namespace Tweening {
class ColorTween;
}
namespace GlobalNamespace {
class GlobalNamespace__LightsAnimator___DisableDirectionalLightsCoroutine_d__11;
}
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class DirectionalLight;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__LightsAnimator___DisableDirectionalLightsCoroutine_d__11;
}
namespace GlobalNamespace {
class LightsAnimator;
}
// Type: ::<DisableDirectionalLightsCoroutine>d__11
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5244))
// CS Name: LightsAnimator::<DisableDirectionalLightsCoroutine>d__11
class CORDL_TYPE GlobalNamespace__LightsAnimator___DisableDirectionalLightsCoroutine_d__11 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~GlobalNamespace__LightsAnimator___DisableDirectionalLightsCoroutine_d__11() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LightsAnimator___DisableDirectionalLightsCoroutine_d__11", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__LightsAnimator___DisableDirectionalLightsCoroutine_d__11(GlobalNamespace__LightsAnimator___DisableDirectionalLightsCoroutine_d__11 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LightsAnimator___DisableDirectionalLightsCoroutine_d__11", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__LightsAnimator___DisableDirectionalLightsCoroutine_d__11(GlobalNamespace__LightsAnimator___DisableDirectionalLightsCoroutine_d__11&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LightsAnimator___DisableDirectionalLightsCoroutine_d__11(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__LightsAnimator___DisableDirectionalLightsCoroutine_d__11& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__LightsAnimator___DisableDirectionalLightsCoroutine_d__11& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__LightsAnimator___DisableDirectionalLightsCoroutine_d__11& operator=(GlobalNamespace__LightsAnimator___DisableDirectionalLightsCoroutine_d__11&& o) noexcept = default;
  constexpr GlobalNamespace__LightsAnimator___DisableDirectionalLightsCoroutine_d__11& operator=(GlobalNamespace__LightsAnimator___DisableDirectionalLightsCoroutine_d__11 const& o) noexcept = default;
                


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

 GlobalNamespace::LightsAnimator __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::LightsAnimator value) ;

constexpr GlobalNamespace::LightsAnimator __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static GlobalNamespace::GlobalNamespace__LightsAnimator___DisableDirectionalLightsCoroutine_d__11 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x20e2b34 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x20e2b64 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x20e2b68 size 0x108 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x20e2c70 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x20e2c78 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x20e2cb8 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LightsAnimator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5245))
// CS Name: LightsAnimator
class CORDL_TYPE LightsAnimator : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _DisableDirectionalLightsCoroutine_d__11 = GlobalNamespace::GlobalNamespace__LightsAnimator___DisableDirectionalLightsCoroutine_d__11;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~LightsAnimator() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightsAnimator", modifiers: " const&", def_value: None }]
constexpr LightsAnimator(LightsAnimator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightsAnimator", modifiers: "&&", def_value: None }]
constexpr LightsAnimator(LightsAnimator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightsAnimator(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr LightsAnimator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightsAnimator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightsAnimator& operator=(LightsAnimator&& o) noexcept = default;
  constexpr LightsAnimator& operator=(LightsAnimator const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::TubeBloomPrePassLight> __declspec(property(get=__get__lights, put=__set__lights))  _lights;

constexpr void __set__lights(::ArrayW<GlobalNamespace::TubeBloomPrePassLight> value) ;

constexpr ::ArrayW<GlobalNamespace::TubeBloomPrePassLight> __get__lights() const;

 ::ArrayW<GlobalNamespace::DirectionalLight> __declspec(property(get=__get__directionalLights, put=__set__directionalLights))  _directionalLights;

constexpr void __set__directionalLights(::ArrayW<GlobalNamespace::DirectionalLight> value) ;

constexpr ::ArrayW<GlobalNamespace::DirectionalLight> __get__directionalLights() const;

 Tweening::TimeTweeningManager __declspec(property(get=__get__tweeningManager, put=__set__tweeningManager))  _tweeningManager;

constexpr void __set__tweeningManager(Tweening::TimeTweeningManager value) ;

constexpr Tweening::TimeTweeningManager __get__tweeningManager() const;

 Tweening::ColorTween __declspec(property(get=__get__tween, put=__set__tween))  _tween;

constexpr void __set__tween(Tweening::ColorTween value) ;

constexpr Tweening::ColorTween __get__tween() const;


// Methods

/// @brief Method Awake addr 0x20e27dc size 0xe0 virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x20e28bc size 0x88 virtual false final false
 void OnDestroy() ;

/// @brief Method AnimateToColor addr 0x20dfcd4 size 0xfc virtual false final false
 void AnimateToColor(UnityEngine::Color color, float_t duration, GlobalNamespace::EaseType easeType) ;

/// @brief Method SetColor addr 0x20e2944 size 0x58 virtual false final false
 void SetColor(UnityEngine::Color color) ;

/// @brief Method SetLightsColor addr 0x20e299c size 0xe8 virtual false final false
 void SetLightsColor(UnityEngine::Color color) ;

/// @brief Method SetLightsWidth addr 0x20e0144 size 0x70 virtual false final false
 void SetLightsWidth(float_t width) ;

/// @brief Method DisableDirectionalLights addr 0x20e2a84 size 0x38 virtual false final false
 void DisableDirectionalLights(float_t delay) ;

/// @brief Method DisableDirectionalLightsCoroutine addr 0x20e2abc size 0x78 virtual false final false
 System::Collections::IEnumerator DisableDirectionalLightsCoroutine(float_t delay) ;

static GlobalNamespace::LightsAnimator New_ctor() ;

/// @brief Method .ctor addr 0x20e2b5c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__LightsAnimator___DisableDirectionalLightsCoroutine_d__11);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LightsAnimator___DisableDirectionalLightsCoroutine_d__11, "", "LightsAnimator/<DisableDirectionalLightsCoroutine>d__11");
NEED_NO_BOX(GlobalNamespace::LightsAnimator);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightsAnimator, "", "LightsAnimator");
