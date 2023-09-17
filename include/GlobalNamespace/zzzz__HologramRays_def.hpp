#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace System::Collections {
class IEnumerator;
}
namespace Tweening {
class FloatTween;
}
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Transform;
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
// Forward declare root types
namespace GlobalNamespace {
class HologramRays;
}
namespace GlobalNamespace {
class ____GlobalNamespace__HologramRays___FadingCoroutine_d__28;
}
// Type: ::<FadingCoroutine>d__28
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5214))
// CS Name: HologramRays::<FadingCoroutine>d__28
class CORDL_TYPE ____GlobalNamespace__HologramRays___FadingCoroutine_d__28 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~____GlobalNamespace__HologramRays___FadingCoroutine_d__28() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__HologramRays___FadingCoroutine_d__28", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__HologramRays___FadingCoroutine_d__28(____GlobalNamespace__HologramRays___FadingCoroutine_d__28 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__HologramRays___FadingCoroutine_d__28", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__HologramRays___FadingCoroutine_d__28(____GlobalNamespace__HologramRays___FadingCoroutine_d__28&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__HologramRays___FadingCoroutine_d__28(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__HologramRays___FadingCoroutine_d__28& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__HologramRays___FadingCoroutine_d__28& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__HologramRays___FadingCoroutine_d__28& operator=(____GlobalNamespace__HologramRays___FadingCoroutine_d__28&& o) noexcept = default;
  constexpr ____GlobalNamespace__HologramRays___FadingCoroutine_d__28& operator=(____GlobalNamespace__HologramRays___FadingCoroutine_d__28 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 bool __declspec(property(get=__get_turningOn, put=__set_turningOn))  turningOn;

constexpr void __set_turningOn(bool value) ;

constexpr bool __get_turningOn() const;

 ::GlobalNamespace::HologramRays __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::HologramRays value) ;

constexpr ::GlobalNamespace::HologramRays __get___4__this() const;

 ::GlobalNamespace::EaseType __declspec(property(get=__get_easeType, put=__set_easeType))  easeType;

constexpr void __set_easeType(::GlobalNamespace::EaseType value) ;

constexpr ::GlobalNamespace::EaseType __get_easeType() const;

 float_t __declspec(property(get=__get_duration, put=__set_duration))  duration;

constexpr void __set_duration(float_t value) ;

constexpr float_t __get_duration() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__HologramRays___FadingCoroutine_d__28(int32_t __1__state) ;

/// @brief Method .ctor addr 0x20dc070 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x20dc1ec size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x20dc1f0 size 0x188 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x20dc378 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x20dc380 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x20dc3c0 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::HologramRays
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5215))
// CS Name: HologramRays
class CORDL_TYPE HologramRays : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _FadingCoroutine_d__28 = ::GlobalNamespace::____GlobalNamespace__HologramRays___FadingCoroutine_d__28;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~HologramRays() = default;

// Ctor Parameters [CppParam { name: "", ty: "HologramRays", modifiers: " const&", def_value: None }]
constexpr HologramRays(HologramRays const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HologramRays", modifiers: "&&", def_value: None }]
constexpr HologramRays(HologramRays&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HologramRays(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr HologramRays& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HologramRays& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HologramRays& operator=(HologramRays&& o) noexcept = default;
  constexpr HologramRays& operator=(HologramRays const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::TubeBloomPrePassLight __declspec(property(get=__get__bloomLight, put=__set__bloomLight))  _bloomLight;

constexpr void __set__bloomLight(::GlobalNamespace::TubeBloomPrePassLight value) ;

constexpr ::GlobalNamespace::TubeBloomPrePassLight __get__bloomLight() const;

 ::UnityEngine::MeshRenderer __declspec(property(get=__get__raysMeshRenderer, put=__set__raysMeshRenderer))  _raysMeshRenderer;

constexpr void __set__raysMeshRenderer(::UnityEngine::MeshRenderer value) ;

constexpr ::UnityEngine::MeshRenderer __get__raysMeshRenderer() const;

 ::UnityEngine::Transform __declspec(property(get=__get__targetTransform, put=__set__targetTransform))  _targetTransform;

constexpr void __set__targetTransform(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get__targetTransform() const;

 ::UnityEngine::Transform __declspec(property(get=__get__laserHolderTransform, put=__set__laserHolderTransform))  _laserHolderTransform;

constexpr void __set__laserHolderTransform(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get__laserHolderTransform() const;

 ::UnityEngine::Transform __declspec(property(get=__get__hologramRaysTransform, put=__set__hologramRaysTransform))  _hologramRaysTransform;

constexpr void __set__hologramRaysTransform(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get__hologramRaysTransform() const;

 ::UnityEngine::Mesh __declspec(property(get=__get__hologramRaysMesh, put=__set__hologramRaysMesh))  _hologramRaysMesh;

constexpr void __set__hologramRaysMesh(::UnityEngine::Mesh value) ;

constexpr ::UnityEngine::Mesh __get__hologramRaysMesh() const;

 float_t __declspec(property(get=__get__topYPosition, put=__set__topYPosition))  _topYPosition;

constexpr void __set__topYPosition(float_t value) ;

constexpr float_t __get__topYPosition() const;

 float_t __declspec(property(get=__get__bottomYPosition, put=__set__bottomYPosition))  _bottomYPosition;

constexpr void __set__bottomYPosition(float_t value) ;

constexpr float_t __get__bottomYPosition() const;

 float_t __declspec(property(get=__get_cachedExtent, put=__set_cachedExtent))  cachedExtent;

constexpr void __set_cachedExtent(float_t value) ;

constexpr float_t __get_cachedExtent() const;

 ::Tweening::TimeTweeningManager __declspec(property(get=__get__tweeningManager, put=__set__tweeningManager))  _tweeningManager;

constexpr void __set__tweeningManager(::Tweening::TimeTweeningManager value) ;

constexpr ::Tweening::TimeTweeningManager __get__tweeningManager() const;

static int32_t __declspec(property(get=__get__materialBottomPositionID, put=__set__materialBottomPositionID))  _materialBottomPositionID;

static void __set__materialBottomPositionID(int32_t value) ;

static int32_t __get__materialBottomPositionID() ;

static int32_t __declspec(property(get=__get__materialTopPositionID, put=__set__materialTopPositionID))  _materialTopPositionID;

static void __set__materialTopPositionID(int32_t value) ;

static int32_t __get__materialTopPositionID() ;

static int32_t __declspec(property(get=__get__materialAlphaID, put=__set__materialAlphaID))  _materialAlphaID;

static void __set__materialAlphaID(int32_t value) ;

static int32_t __get__materialAlphaID() ;

 ::Tweening::FloatTween __declspec(property(get=__get__transitionTween, put=__set__transitionTween))  _transitionTween;

constexpr void __set__transitionTween(::Tweening::FloatTween value) ;

constexpr ::Tweening::FloatTween __get__transitionTween() const;

 ::UnityEngine::Color __declspec(property(get=__get__bloomColor, put=__set__bloomColor))  _bloomColor;

constexpr void __set__bloomColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__bloomColor() const;

 ::UnityEngine::Color __declspec(property(get=__get__bloomTransparentColor, put=__set__bloomTransparentColor))  _bloomTransparentColor;

constexpr void __set__bloomTransparentColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__bloomTransparentColor() const;

 float_t __declspec(property(get=__get__alpha, put=__set__alpha))  _alpha;

constexpr void __set__alpha(float_t value) ;

constexpr float_t __get__alpha() const;

 float_t __declspec(property(get=__get__raysDistance, put=__set__raysDistance))  _raysDistance;

constexpr void __set__raysDistance(float_t value) ;

constexpr float_t __get__raysDistance() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__raysLocalScale, put=__set__raysLocalScale))  _raysLocalScale;

constexpr void __set__raysLocalScale(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__raysLocalScale() const;

 bool __declspec(property(get=__get_boundsInitialized, put=__set_boundsInitialized))  boundsInitialized;

constexpr void __set_boundsInitialized(bool value) ;

constexpr bool __get_boundsInitialized() const;

static ::UnityEngine::MaterialPropertyBlock __declspec(property(get=__get__materialPropertyBlock, put=__set__materialPropertyBlock))  _materialPropertyBlock;

static void __set__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock value) ;

static ::UnityEngine::MaterialPropertyBlock __get__materialPropertyBlock() ;


// Methods

/// @brief Method RuntimeInit addr 0x20db990 size 0x58 virtual false final false
static void RuntimeInit() ;

/// @brief Method Awake addr 0x20db9e8 size 0x13c virtual false final false
 void Awake() ;

/// @brief Method OnDisable addr 0x20dbb24 size 0x20 virtual false final false
 void OnDisable() ;

/// @brief Method OnValidate addr 0x20dbb44 size 0x7c virtual false final false
 void OnValidate() ;

/// @brief Method Update addr 0x20dbe34 size 0x4 virtual false final false
 void Update() ;

/// @brief Method Refresh addr 0x20dbbc0 size 0x274 virtual false final false
 void Refresh() ;

/// @brief Method Animate addr 0x20dbe38 size 0xc8 virtual false final false
 void Animate(bool turningOn, float_t duration, ::GlobalNamespace::EaseType easeType) ;

/// @brief Method FadingCoroutine addr 0x20dbf00 size 0x94 virtual false final false
 ::System::Collections::IEnumerator FadingCoroutine(bool turningOn, float_t duration, ::GlobalNamespace::EaseType easeType) ;

/// @brief Method UpdateBounds addr 0x20dbf94 size 0xdc virtual false final false
 void UpdateBounds() ;

// Ctor Parameters []
explicit HologramRays() ;

/// @brief Method .ctor addr 0x20dc098 size 0x20 virtual false final false
 void _ctor() ;

/// @brief Method <Awake>b__22_0 addr 0x20dc184 size 0x68 virtual false final false
 void _Awake_b__22_0(float_t f) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::HologramRays);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HologramRays, "", "HologramRays");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__HologramRays___FadingCoroutine_d__28);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__HologramRays___FadingCoroutine_d__28, "", "HologramRays/<FadingCoroutine>d__28");
