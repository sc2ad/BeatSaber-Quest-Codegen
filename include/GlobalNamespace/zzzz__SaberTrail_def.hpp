#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class SaberTrailRenderer;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class TrailElementCollection;
}
namespace GlobalNamespace {
class IBladeMovementData;
}
namespace GlobalNamespace {
struct BladeMovementDataElement;
}
// Forward declare root types
namespace GlobalNamespace {
class SaberTrail;
}
// Type: ::SaberTrail
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4989))
// CS Name: SaberTrail
class CORDL_TYPE SaberTrail : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~SaberTrail() = default;

// Ctor Parameters [CppParam { name: "", ty: "SaberTrail", modifiers: " const&", def_value: None }]
constexpr SaberTrail(SaberTrail const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SaberTrail", modifiers: "&&", def_value: None }]
constexpr SaberTrail(SaberTrail&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SaberTrail(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SaberTrail& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SaberTrail& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SaberTrail& operator=(SaberTrail&& o) noexcept = default;
  constexpr SaberTrail& operator=(SaberTrail const& o) noexcept = default;
                


// Fields

 GlobalNamespace::SaberTrailRenderer __declspec(property(get=__get__trailRendererPrefab, put=__set__trailRendererPrefab))  _trailRendererPrefab;

constexpr void __set__trailRendererPrefab(GlobalNamespace::SaberTrailRenderer value) ;

constexpr GlobalNamespace::SaberTrailRenderer __get__trailRendererPrefab() const;

 float_t __declspec(property(get=__get__trailDuration, put=__set__trailDuration))  _trailDuration;

constexpr void __set__trailDuration(float_t value) ;

constexpr float_t __get__trailDuration() const;

 int32_t __declspec(property(get=__get__samplingFrequency, put=__set__samplingFrequency))  _samplingFrequency;

constexpr void __set__samplingFrequency(int32_t value) ;

constexpr int32_t __get__samplingFrequency() const;

 int32_t __declspec(property(get=__get__granularity, put=__set__granularity))  _granularity;

constexpr void __set__granularity(int32_t value) ;

constexpr int32_t __get__granularity() const;

 float_t __declspec(property(get=__get__whiteSectionMaxDuration, put=__set__whiteSectionMaxDuration))  _whiteSectionMaxDuration;

constexpr void __set__whiteSectionMaxDuration(float_t value) ;

constexpr float_t __get__whiteSectionMaxDuration() const;

 bool __declspec(property(get=__get__colorOverwrite, put=__set__colorOverwrite))  _colorOverwrite;

constexpr void __set__colorOverwrite(bool value) ;

constexpr bool __get__colorOverwrite() const;

 UnityEngine::Color __declspec(property(get=__get__forcedColor, put=__set__forcedColor))  _forcedColor;

constexpr void __set__forcedColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__forcedColor() const;

/// @brief Field kIgnoredFramesCount offset 0
static constexpr int32_t  kIgnoredFramesCount{4};

/// @brief Field kSnapshotCapacityMargin offset 0
static constexpr int32_t  kSnapshotCapacityMargin{3};

/// @brief Field kScaleCheckFramesInterval offset 0
static constexpr int32_t  kScaleCheckFramesInterval{10};

 UnityEngine::Color __declspec(property(get=__get__color, put=__set__color))  _color;

constexpr void __set__color(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__color() const;

 GlobalNamespace::IBladeMovementData __declspec(property(get=__get__movementData, put=__set__movementData))  _movementData;

constexpr void __set__movementData(GlobalNamespace::IBladeMovementData value) ;

constexpr GlobalNamespace::IBladeMovementData __get__movementData() const;

 float_t __declspec(property(get=__get__lastTrailElementTime, put=__set__lastTrailElementTime))  _lastTrailElementTime;

constexpr void __set__lastTrailElementTime(float_t value) ;

constexpr float_t __get__lastTrailElementTime() const;

 GlobalNamespace::SaberTrailRenderer __declspec(property(get=__get__trailRenderer, put=__set__trailRenderer))  _trailRenderer;

constexpr void __set__trailRenderer(GlobalNamespace::SaberTrailRenderer value) ;

constexpr GlobalNamespace::SaberTrailRenderer __get__trailRenderer() const;

 GlobalNamespace::TrailElementCollection __declspec(property(get=__get__trailElementCollection, put=__set__trailElementCollection))  _trailElementCollection;

constexpr void __set__trailElementCollection(GlobalNamespace::TrailElementCollection value) ;

constexpr GlobalNamespace::TrailElementCollection __get__trailElementCollection() const;

 float_t __declspec(property(get=__get__sampleStep, put=__set__sampleStep))  _sampleStep;

constexpr void __set__sampleStep(float_t value) ;

constexpr float_t __get__sampleStep() const;

 int32_t __declspec(property(get=__get__framesPassed, put=__set__framesPassed))  _framesPassed;

constexpr void __set__framesPassed(int32_t value) ;

constexpr int32_t __get__framesPassed() const;

 float_t __declspec(property(get=__get__lastZScale, put=__set__lastZScale))  _lastZScale;

constexpr void __set__lastZScale(float_t value) ;

constexpr float_t __get__lastZScale() const;

 int32_t __declspec(property(get=__get__framesToScaleCheck, put=__set__framesToScaleCheck))  _framesToScaleCheck;

constexpr void __set__framesToScaleCheck(int32_t value) ;

constexpr int32_t __get__framesToScaleCheck() const;

 bool __declspec(property(get=__get__inited, put=__set__inited))  _inited;

constexpr void __set__inited(bool value) ;

constexpr bool __get__inited() const;


// Methods

/// @brief Method Awake addr 0x2255698 size 0x12c virtual false final false
 void Awake() ;

/// @brief Method Setup addr 0x22557c4 size 0x20 virtual false final false
 void Setup(UnityEngine::Color color, GlobalNamespace::IBladeMovementData movementData) ;

/// @brief Method Init addr 0x22557e4 size 0x280 virtual false final false
 void Init() ;

/// @brief Method ResetTrailData addr 0x2255c98 size 0xd4 virtual false final false
 void ResetTrailData() ;

/// @brief Method LateUpdate addr 0x2255dfc size 0x3e4 virtual false final false
 void LateUpdate() ;

/// @brief Method OnEnable addr 0x22564e0 size 0xac virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x225658c size 0x84 virtual false final false
 void OnDisable() ;

/// @brief Method OnDestroy addr 0x2256610 size 0xa8 virtual false final false
 void OnDestroy() ;

/// @brief Method GetTrailWidth addr 0x2255c14 size 0x84 virtual false final false
 float_t GetTrailWidth(GlobalNamespace::BladeMovementDataElement lastAddedData) ;

/// @brief Method OnDrawGizmosSelected addr 0x22566b8 size 0x1d4 virtual false final false
 void OnDrawGizmosSelected() ;

// Ctor Parameters []
explicit SaberTrail() ;

/// @brief Method .ctor addr 0x225688c size 0x38 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SaberTrail);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberTrail, "", "SaberTrail");
