#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassLight_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace System {
class Action;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace GlobalNamespace {
class Parametric3SliceSpriteController;
}
namespace GlobalNamespace {
class ParametricBoxController;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace GlobalNamespace {
struct GlobalNamespace__BloomPrePassLight__QuadData;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class BoolSO;
}
// Forward declare root types
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
// Type: ::TubeBloomPrePassLight
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14635))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14653))
// CS Name: TubeBloomPrePassLight
class CORDL_TYPE TubeBloomPrePassLight : public GlobalNamespace::BloomPrePassLight {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd8};

virtual ~TubeBloomPrePassLight() = default;

// Ctor Parameters [CppParam { name: "", ty: "TubeBloomPrePassLight", modifiers: " const&", def_value: None }]
constexpr TubeBloomPrePassLight(TubeBloomPrePassLight const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TubeBloomPrePassLight", modifiers: "&&", def_value: None }]
constexpr TubeBloomPrePassLight(TubeBloomPrePassLight&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TubeBloomPrePassLight(void* ptr) noexcept : GlobalNamespace::BloomPrePassLight(ptr) {
}


  constexpr TubeBloomPrePassLight& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TubeBloomPrePassLight& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TubeBloomPrePassLight& operator=(TubeBloomPrePassLight&& o) noexcept = default;
  constexpr TubeBloomPrePassLight& operator=(TubeBloomPrePassLight const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BoolSO __declspec(property(get=__get__mainEffectPostProcessEnabled, put=__set__mainEffectPostProcessEnabled))  _mainEffectPostProcessEnabled;

constexpr void __set__mainEffectPostProcessEnabled(GlobalNamespace::BoolSO value) ;

constexpr GlobalNamespace::BoolSO __get__mainEffectPostProcessEnabled() const;

 float_t __declspec(property(get=__get__width, put=__set__width))  _width;

constexpr void __set__width(float_t value) ;

constexpr float_t __get__width() const;

 bool __declspec(property(get=__get__overrideChildrenLength, put=__set__overrideChildrenLength))  _overrideChildrenLength;

constexpr void __set__overrideChildrenLength(bool value) ;

constexpr bool __get__overrideChildrenLength() const;

 float_t __declspec(property(get=__get__length, put=__set__length))  _length;

constexpr void __set__length(float_t value) ;

constexpr float_t __get__length() const;

 float_t __declspec(property(get=__get__center, put=__set__center))  _center;

constexpr void __set__center(float_t value) ;

constexpr float_t __get__center() const;

 UnityEngine::Color __declspec(property(get=__get__color, put=__set__color))  _color;

constexpr void __set__color(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__color() const;

 float_t __declspec(property(get=__get__colorAlphaMultiplier, put=__set__colorAlphaMultiplier))  _colorAlphaMultiplier;

constexpr void __set__colorAlphaMultiplier(float_t value) ;

constexpr float_t __get__colorAlphaMultiplier() const;

 float_t __declspec(property(get=__get__bloomFogIntensityMultiplier, put=__set__bloomFogIntensityMultiplier))  _bloomFogIntensityMultiplier;

constexpr void __set__bloomFogIntensityMultiplier(float_t value) ;

constexpr float_t __get__bloomFogIntensityMultiplier() const;

 float_t __declspec(property(get=__get__fakeBloomIntensityMultiplier, put=__set__fakeBloomIntensityMultiplier))  _fakeBloomIntensityMultiplier;

constexpr void __set__fakeBloomIntensityMultiplier(float_t value) ;

constexpr float_t __get__fakeBloomIntensityMultiplier() const;

 float_t __declspec(property(get=__get__boostToWhite, put=__set__boostToWhite))  _boostToWhite;

constexpr void __set__boostToWhite(float_t value) ;

constexpr float_t __get__boostToWhite() const;

 float_t __declspec(property(get=__get__lightWidthMultiplier, put=__set__lightWidthMultiplier))  _lightWidthMultiplier;

constexpr void __set__lightWidthMultiplier(float_t value) ;

constexpr float_t __get__lightWidthMultiplier() const;

 bool __declspec(property(get=__get__addWidthToLength, put=__set__addWidthToLength))  _addWidthToLength;

constexpr void __set__addWidthToLength(bool value) ;

constexpr bool __get__addWidthToLength() const;

 bool __declspec(property(get=__get__thickenWithDistance, put=__set__thickenWithDistance))  _thickenWithDistance;

constexpr void __set__thickenWithDistance(bool value) ;

constexpr bool __get__thickenWithDistance() const;

 UnityEngine::AnimationCurve __declspec(property(get=__get__thickenCurve, put=__set__thickenCurve))  _thickenCurve;

constexpr void __set__thickenCurve(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get__thickenCurve() const;

 float_t __declspec(property(get=__get__minDistance, put=__set__minDistance))  _minDistance;

constexpr void __set__minDistance(float_t value) ;

constexpr float_t __get__minDistance() const;

 float_t __declspec(property(get=__get__maxDistance, put=__set__maxDistance))  _maxDistance;

constexpr void __set__maxDistance(float_t value) ;

constexpr float_t __get__maxDistance() const;

 float_t __declspec(property(get=__get__minWidthMultiplier, put=__set__minWidthMultiplier))  _minWidthMultiplier;

constexpr void __set__minWidthMultiplier(float_t value) ;

constexpr float_t __get__minWidthMultiplier() const;

 float_t __declspec(property(get=__get__maxWidthMultiplier, put=__set__maxWidthMultiplier))  _maxWidthMultiplier;

constexpr void __set__maxWidthMultiplier(float_t value) ;

constexpr float_t __get__maxWidthMultiplier() const;

 float_t __declspec(property(get=__get__bakedGlowWidthScale, put=__set__bakedGlowWidthScale))  _bakedGlowWidthScale;

constexpr void __set__bakedGlowWidthScale(float_t value) ;

constexpr float_t __get__bakedGlowWidthScale() const;

 bool __declspec(property(get=__get__forceUseBakedGlow, put=__set__forceUseBakedGlow))  _forceUseBakedGlow;

constexpr void __set__forceUseBakedGlow(bool value) ;

constexpr bool __get__forceUseBakedGlow() const;

 bool __declspec(property(get=__get__updateAlways, put=__set__updateAlways))  _updateAlways;

constexpr void __set__updateAlways(bool value) ;

constexpr bool __get__updateAlways() const;

 bool __declspec(property(get=__get__limitAlpha, put=__set__limitAlpha))  _limitAlpha;

constexpr void __set__limitAlpha(bool value) ;

constexpr bool __get__limitAlpha() const;

 float_t __declspec(property(get=__get__minAlpha, put=__set__minAlpha))  _minAlpha;

constexpr void __set__minAlpha(float_t value) ;

constexpr float_t __get__minAlpha() const;

 float_t __declspec(property(get=__get__maxAlpha, put=__set__maxAlpha))  _maxAlpha;

constexpr void __set__maxAlpha(float_t value) ;

constexpr float_t __get__maxAlpha() const;

 bool __declspec(property(get=__get__overrideChildrenAlpha, put=__set__overrideChildrenAlpha))  _overrideChildrenAlpha;

constexpr void __set__overrideChildrenAlpha(bool value) ;

constexpr bool __get__overrideChildrenAlpha() const;

 float_t __declspec(property(get=__get__startAlpha, put=__set__startAlpha))  _startAlpha;

constexpr void __set__startAlpha(float_t value) ;

constexpr float_t __get__startAlpha() const;

 float_t __declspec(property(get=__get__endAlpha, put=__set__endAlpha))  _endAlpha;

constexpr void __set__endAlpha(float_t value) ;

constexpr float_t __get__endAlpha() const;

 bool __declspec(property(get=__get__overrideChildrenWidth, put=__set__overrideChildrenWidth))  _overrideChildrenWidth;

constexpr void __set__overrideChildrenWidth(bool value) ;

constexpr bool __get__overrideChildrenWidth() const;

 float_t __declspec(property(get=__get__startWidth, put=__set__startWidth))  _startWidth;

constexpr void __set__startWidth(float_t value) ;

constexpr float_t __get__startWidth() const;

 float_t __declspec(property(get=__get__endWidth, put=__set__endWidth))  _endWidth;

constexpr void __set__endWidth(float_t value) ;

constexpr float_t __get__endWidth() const;

 GlobalNamespace::ParametricBoxController __declspec(property(get=__get__parametricBoxController, put=__set__parametricBoxController))  _parametricBoxController;

constexpr void __set__parametricBoxController(GlobalNamespace::ParametricBoxController value) ;

constexpr GlobalNamespace::ParametricBoxController __get__parametricBoxController() const;

 GlobalNamespace::Parametric3SliceSpriteController __declspec(property(get=__get__dynamic3SliceSprite, put=__set__dynamic3SliceSprite))  _dynamic3SliceSprite;

constexpr void __set__dynamic3SliceSprite(GlobalNamespace::Parametric3SliceSpriteController value) ;

constexpr GlobalNamespace::Parametric3SliceSpriteController __get__dynamic3SliceSprite() const;

 System::Action __declspec(property(get=__get_didRefreshEvent, put=__set_didRefreshEvent))  didRefreshEvent;

constexpr void __set_didRefreshEvent(System::Action value) ;

constexpr System::Action __get_didRefreshEvent() const;

 bool __declspec(property(get=__get__isDirty, put=__set__isDirty))  _isDirty;

constexpr void __set__isDirty(bool value) ;

constexpr bool __get__isDirty() const;

 UnityEngine::Transform __declspec(property(get=__get__transform, put=__set__transform))  _transform;

constexpr void __set__transform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__transform() const;


// Properties

 float_t __declspec(property(get=get_colorAlphaMultiplier))  colorAlphaMultiplier;

 float_t __declspec(property(get=get_center))  center;

 bool __declspec(property(get=get_isDirty))  isDirty;

 float_t __declspec(property(get=get_length, put=set_length))  length;

 float_t __declspec(property(get=get_width, put=set_width))  width;

 float_t __declspec(property(get=get_lightWidthMultiplier, put=set_lightWidthMultiplier))  lightWidthMultiplier;

 float_t __declspec(property(get=get_bloomFogIntensityMultiplier, put=set_bloomFogIntensityMultiplier))  bloomFogIntensityMultiplier;

 UnityEngine::Color __declspec(property(get=get_color, put=set_color))  color;


// Methods

/// @brief Method add_didRefreshEvent addr 0x1f9768c size 0x9c virtual false final false
 void add_didRefreshEvent(System::Action value) ;

/// @brief Method remove_didRefreshEvent addr 0x1f97728 size 0x9c virtual false final false
 void remove_didRefreshEvent(System::Action value) ;

/// @brief Method get_colorAlphaMultiplier addr 0x1f977c4 size 0x8 virtual false final false
 float_t get_colorAlphaMultiplier() ;

/// @brief Method get_center addr 0x1f977cc size 0x8 virtual false final false
 float_t get_center() ;

/// @brief Method get_isDirty addr 0x1f977d4 size 0x20 virtual true final false
 bool get_isDirty() ;

/// @brief Method MarkDirty addr 0x1f977f4 size 0xc virtual false final false
 void MarkDirty() ;

/// @brief Method get_length addr 0x1f97800 size 0x8 virtual false final false
 float_t get_length() ;

/// @brief Method set_length addr 0x1f97808 size 0x10 virtual false final false
 void set_length(float_t value) ;

/// @brief Method get_width addr 0x1f97818 size 0x8 virtual false final false
 float_t get_width() ;

/// @brief Method set_width addr 0x1f97820 size 0x10 virtual false final false
 void set_width(float_t value) ;

/// @brief Method get_lightWidthMultiplier addr 0x1f97830 size 0x8 virtual false final false
 float_t get_lightWidthMultiplier() ;

/// @brief Method set_lightWidthMultiplier addr 0x1f97838 size 0x8 virtual false final false
 void set_lightWidthMultiplier(float_t value) ;

/// @brief Method get_bloomFogIntensityMultiplier addr 0x1f97840 size 0x8 virtual false final false
 float_t get_bloomFogIntensityMultiplier() ;

/// @brief Method set_bloomFogIntensityMultiplier addr 0x1f97848 size 0x8 virtual false final false
 void set_bloomFogIntensityMultiplier(float_t value) ;

/// @brief Method set_color addr 0x1f97850 size 0x118 virtual false final false
 void set_color(UnityEngine::Color value) ;

/// @brief Method get_color addr 0x1f97968 size 0xc virtual false final false
 UnityEngine::Color get_color() ;

/// @brief Method OnEnable addr 0x1f97974 size 0x20 virtual true final false
 void OnEnable() ;

/// @brief Method DidRegisterLight addr 0x1f97994 size 0x1c virtual true final false
 void DidRegisterLight() ;

/// @brief Method Refresh addr 0x1f979b0 size 0x33c virtual true final false
 void Refresh() ;

/// @brief Method FillMeshData addr 0x1f97cec size 0x9e8 virtual true final false
 void FillMeshData(ByRef<int32_t> lightNum, ::ArrayW<GlobalNamespace::GlobalNamespace__BloomPrePassLight__QuadData> lightQuads, UnityEngine::Matrix4x4 viewMatrix, UnityEngine::Matrix4x4 projectionMatrix, float_t lineWidth) ;

/// @brief Method ClipPoints addr 0x1f986d4 size 0x94 virtual false final false
static void ClipPoints(ByRef<UnityEngine::Vector4> fromPointClipPos, ByRef<UnityEngine::Vector4> toPointClipPos, ByRef<UnityEngine::Vector3> fromPointViewPos, ByRef<UnityEngine::Vector3> toPointViewPos, bool fromPointInside, float_t t) ;

/// @brief Method OnDrawGizmos addr 0x1f98768 size 0x13c virtual false final false
 void OnDrawGizmos() ;

// Ctor Parameters []
explicit TubeBloomPrePassLight() ;

/// @brief Method .ctor addr 0x1f988a4 size 0xd8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::TubeBloomPrePassLight);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TubeBloomPrePassLight, "", "TubeBloomPrePassLight");
