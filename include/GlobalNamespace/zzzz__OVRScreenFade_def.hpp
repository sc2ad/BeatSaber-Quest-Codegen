#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__OVRScreenFade___Fade_d__25;
}
namespace GlobalNamespace {
class OVRScreenFade;
}
// Type: ::<Fade>d__25
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8953))
// CS Name: OVRScreenFade::<Fade>d__25
class CORDL_TYPE GlobalNamespace__OVRScreenFade___Fade_d__25 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~GlobalNamespace__OVRScreenFade___Fade_d__25() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRScreenFade___Fade_d__25", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRScreenFade___Fade_d__25(GlobalNamespace__OVRScreenFade___Fade_d__25 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRScreenFade___Fade_d__25", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRScreenFade___Fade_d__25(GlobalNamespace__OVRScreenFade___Fade_d__25&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRScreenFade___Fade_d__25(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OVRScreenFade___Fade_d__25& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRScreenFade___Fade_d__25& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRScreenFade___Fade_d__25& operator=(GlobalNamespace__OVRScreenFade___Fade_d__25&& o) noexcept = default;
  constexpr GlobalNamespace__OVRScreenFade___Fade_d__25& operator=(GlobalNamespace__OVRScreenFade___Fade_d__25 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::OVRScreenFade __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::OVRScreenFade value) ;

constexpr GlobalNamespace::OVRScreenFade __get___4__this() const;

 float_t __declspec(property(get=__get_startAlpha, put=__set_startAlpha))  startAlpha;

constexpr void __set_startAlpha(float_t value) ;

constexpr float_t __get_startAlpha() const;

 float_t __declspec(property(get=__get_endAlpha, put=__set_endAlpha))  endAlpha;

constexpr void __set_endAlpha(float_t value) ;

constexpr float_t __get_endAlpha() const;

 float_t __declspec(property(get=__get__elapsedTime_5__2, put=__set__elapsedTime_5__2))  _elapsedTime_5__2;

constexpr void __set__elapsedTime_5__2(float_t value) ;

constexpr float_t __get__elapsedTime_5__2() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__OVRScreenFade___Fade_d__25(int32_t __1__state) ;

/// @brief Method .ctor addr 0x26310d8 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x263112c size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2631130 size 0x11c virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x263124c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2631254 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2631294 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRScreenFade
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8954))
// CS Name: OVRScreenFade
class CORDL_TYPE OVRScreenFade : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _Fade_d__25 = GlobalNamespace::GlobalNamespace__OVRScreenFade___Fade_d__25;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~OVRScreenFade() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRScreenFade", modifiers: " const&", def_value: None }]
constexpr OVRScreenFade(OVRScreenFade const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRScreenFade", modifiers: "&&", def_value: None }]
constexpr OVRScreenFade(OVRScreenFade&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRScreenFade(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRScreenFade& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRScreenFade& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRScreenFade& operator=(OVRScreenFade&& o) noexcept = default;
  constexpr OVRScreenFade& operator=(OVRScreenFade const& o) noexcept = default;
                


// Fields

static GlobalNamespace::OVRScreenFade __declspec(property(get=__get__instance_k__BackingField, put=__set__instance_k__BackingField))  _instance_k__BackingField;

static void __set__instance_k__BackingField(GlobalNamespace::OVRScreenFade value) ;

static GlobalNamespace::OVRScreenFade __get__instance_k__BackingField() ;

 float_t __declspec(property(get=__get_fadeTime, put=__set_fadeTime))  fadeTime;

constexpr void __set_fadeTime(float_t value) ;

constexpr float_t __get_fadeTime() const;

 UnityEngine::Color __declspec(property(get=__get_fadeColor, put=__set_fadeColor))  fadeColor;

constexpr void __set_fadeColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_fadeColor() const;

 bool __declspec(property(get=__get_fadeOnStart, put=__set_fadeOnStart))  fadeOnStart;

constexpr void __set_fadeOnStart(bool value) ;

constexpr bool __get_fadeOnStart() const;

 int32_t __declspec(property(get=__get_renderQueue, put=__set_renderQueue))  renderQueue;

constexpr void __set_renderQueue(int32_t value) ;

constexpr int32_t __get_renderQueue() const;

 float_t __declspec(property(get=__get_explicitFadeAlpha, put=__set_explicitFadeAlpha))  explicitFadeAlpha;

constexpr void __set_explicitFadeAlpha(float_t value) ;

constexpr float_t __get_explicitFadeAlpha() const;

 float_t __declspec(property(get=__get_animatedFadeAlpha, put=__set_animatedFadeAlpha))  animatedFadeAlpha;

constexpr void __set_animatedFadeAlpha(float_t value) ;

constexpr float_t __get_animatedFadeAlpha() const;

 float_t __declspec(property(get=__get_uiFadeAlpha, put=__set_uiFadeAlpha))  uiFadeAlpha;

constexpr void __set_uiFadeAlpha(float_t value) ;

constexpr float_t __get_uiFadeAlpha() const;

 UnityEngine::MeshRenderer __declspec(property(get=__get_fadeRenderer, put=__set_fadeRenderer))  fadeRenderer;

constexpr void __set_fadeRenderer(UnityEngine::MeshRenderer value) ;

constexpr UnityEngine::MeshRenderer __get_fadeRenderer() const;

 UnityEngine::MeshFilter __declspec(property(get=__get_fadeMesh, put=__set_fadeMesh))  fadeMesh;

constexpr void __set_fadeMesh(UnityEngine::MeshFilter value) ;

constexpr UnityEngine::MeshFilter __get_fadeMesh() const;

 UnityEngine::Material __declspec(property(get=__get_fadeMaterial, put=__set_fadeMaterial))  fadeMaterial;

constexpr void __set_fadeMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get_fadeMaterial() const;

 bool __declspec(property(get=__get_isFading, put=__set_isFading))  isFading;

constexpr void __set_isFading(bool value) ;

constexpr bool __get_isFading() const;


// Properties

static GlobalNamespace::OVRScreenFade __declspec(property(get=get_instance, put=set_instance))  instance;

 float_t __declspec(property(get=get_currentAlpha))  currentAlpha;


// Methods

/// @brief Method get_instance addr 0x2630760 size 0x48 virtual false final false
static GlobalNamespace::OVRScreenFade get_instance() ;

/// @brief Method set_instance addr 0x26307a8 size 0x4c virtual false final false
static void set_instance(GlobalNamespace::OVRScreenFade value) ;

/// @brief Method get_currentAlpha addr 0x26307f4 size 0xbc virtual false final false
 float_t get_currentAlpha() ;

/// @brief Method Start addr 0x26308b0 size 0x49c virtual false final false
 void Start() ;

/// @brief Method FadeIn addr 0x2630d4c size 0x28 virtual false final false
 void FadeIn() ;

/// @brief Method FadeOut addr 0x2630df0 size 0x28 virtual false final false
 void FadeOut() ;

/// @brief Method OnLevelFinishedLoading addr 0x2630e18 size 0x28 virtual false final false
 void OnLevelFinishedLoading(int32_t level) ;

/// @brief Method OnEnable addr 0x2630e40 size 0x18 virtual false final false
 void OnEnable() ;

/// @brief Method OnDestroy addr 0x2630e58 size 0x154 virtual false final false
 void OnDestroy() ;

/// @brief Method SetUIFade addr 0x2630fac size 0x1c virtual false final false
 void SetUIFade(float_t level) ;

/// @brief Method SetExplicitFade addr 0x26310d0 size 0x8 virtual false final false
 void SetExplicitFade(float_t level) ;

/// @brief Method Fade addr 0x2630d74 size 0x7c virtual false final false
 System::Collections::IEnumerator Fade(float_t startAlpha, float_t endAlpha) ;

/// @brief Method SetMaterialAlpha addr 0x2630fc8 size 0x108 virtual false final false
 void SetMaterialAlpha() ;

// Ctor Parameters []
explicit OVRScreenFade() ;

/// @brief Method .ctor addr 0x2631100 size 0x2c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRScreenFade___Fade_d__25);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRScreenFade___Fade_d__25, "", "OVRScreenFade/<Fade>d__25");
NEED_NO_BOX(GlobalNamespace::OVRScreenFade);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRScreenFade, "", "OVRScreenFade");
