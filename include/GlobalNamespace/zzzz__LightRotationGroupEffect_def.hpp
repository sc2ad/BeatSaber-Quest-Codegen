#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace Tweening {
class SongTimeTweeningManager;
}
namespace GlobalNamespace {
class LightRotationBeatmapEventData;
}
namespace Tweening {
class FloatTween;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
struct LightAxis;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
struct LightRotationDirection;
}
// Forward declare root types
namespace GlobalNamespace {
class LightRotationGroupEffect;
}
namespace GlobalNamespace {
class ____GlobalNamespace__LightRotationGroupEffect__InitData;
}
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5040))
// CS Name: LightRotationGroupEffect::InitData
class CORDL_TYPE ____GlobalNamespace__LightRotationGroupEffect__InitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____GlobalNamespace__LightRotationGroupEffect__InitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LightRotationGroupEffect__InitData", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__LightRotationGroupEffect__InitData(____GlobalNamespace__LightRotationGroupEffect__InitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LightRotationGroupEffect__InitData", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__LightRotationGroupEffect__InitData(____GlobalNamespace__LightRotationGroupEffect__InitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__LightRotationGroupEffect__InitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__LightRotationGroupEffect__InitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__LightRotationGroupEffect__InitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__LightRotationGroupEffect__InitData& operator=(____GlobalNamespace__LightRotationGroupEffect__InitData&& o) noexcept = default;
  constexpr ____GlobalNamespace__LightRotationGroupEffect__InitData& operator=(____GlobalNamespace__LightRotationGroupEffect__InitData const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_groupId, put=__set_groupId))  groupId;

constexpr void __set_groupId(int32_t value) ;

constexpr int32_t __get_groupId() const;

 int32_t __declspec(property(get=__get_elementId, put=__set_elementId))  elementId;

constexpr void __set_elementId(int32_t value) ;

constexpr int32_t __get_elementId() const;

 ::GlobalNamespace::LightAxis __declspec(property(get=__get_axis, put=__set_axis))  axis;

constexpr void __set_axis(::GlobalNamespace::LightAxis value) ;

constexpr ::GlobalNamespace::LightAxis __get_axis() const;

 bool __declspec(property(get=__get_mirrored, put=__set_mirrored))  mirrored;

constexpr void __set_mirrored(bool value) ;

constexpr bool __get_mirrored() const;

 ::UnityEngine::Transform __declspec(property(get=__get_transform, put=__set_transform))  transform;

constexpr void __set_transform(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_transform() const;


// Methods

// Ctor Parameters [CppParam { name: "groupId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "elementId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "axis", ty: "::GlobalNamespace::LightAxis", modifiers: "", def_value: None }, CppParam { name: "mirrored", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "transform", ty: "::UnityEngine::Transform", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__LightRotationGroupEffect__InitData(int32_t groupId, int32_t elementId, ::GlobalNamespace::LightAxis axis, bool mirrored, ::UnityEngine::Transform transform) ;

/// @brief Method .ctor addr 0x225ee60 size 0x54 virtual false final false
 void _ctor(int32_t groupId, int32_t elementId, ::GlobalNamespace::LightAxis axis, bool mirrored, ::UnityEngine::Transform transform) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LightRotationGroupEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5041))
// CS Name: LightRotationGroupEffect
class CORDL_TYPE LightRotationGroupEffect : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using InitData = ::GlobalNamespace::____GlobalNamespace__LightRotationGroupEffect__InitData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LightRotationGroupEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightRotationGroupEffect", modifiers: " const&", def_value: None }]
constexpr LightRotationGroupEffect(LightRotationGroupEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightRotationGroupEffect", modifiers: "&&", def_value: None }]
constexpr LightRotationGroupEffect(LightRotationGroupEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightRotationGroupEffect(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LightRotationGroupEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightRotationGroupEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightRotationGroupEffect& operator=(LightRotationGroupEffect&& o) noexcept = default;
  constexpr LightRotationGroupEffect& operator=(LightRotationGroupEffect const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Transform __declspec(property(get=__get__transform, put=__set__transform))  _transform;

constexpr void __set__transform(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get__transform() const;

 ::GlobalNamespace::LightAxis __declspec(property(get=__get__axis, put=__set__axis))  _axis;

constexpr void __set__axis(::GlobalNamespace::LightAxis value) ;

constexpr ::GlobalNamespace::LightAxis __get__axis() const;

 bool __declspec(property(get=__get__mirrored, put=__set__mirrored))  _mirrored;

constexpr void __set__mirrored(bool value) ;

constexpr bool __get__mirrored() const;

 ::Tweening::SongTimeTweeningManager __declspec(property(get=__get__tweeningManager, put=__set__tweeningManager))  _tweeningManager;

constexpr void __set__tweeningManager(::Tweening::SongTimeTweeningManager value) ;

constexpr ::Tweening::SongTimeTweeningManager __get__tweeningManager() const;

 ::GlobalNamespace::BeatmapCallbacksController __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController))  _beatmapCallbacksController;

constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController value) ;

constexpr ::GlobalNamespace::BeatmapCallbacksController __get__beatmapCallbacksController() const;

 ::Tweening::FloatTween __declspec(property(get=__get__rotationTween, put=__set__rotationTween))  _rotationTween;

constexpr void __set__rotationTween(::Tweening::FloatTween value) ;

constexpr ::Tweening::FloatTween __get__rotationTween() const;

 ::GlobalNamespace::BeatmapDataCallbackWrapper __declspec(property(get=__get__lightRotationBeatmapEventCallbackWrapper, put=__set__lightRotationBeatmapEventCallbackWrapper))  _lightRotationBeatmapEventCallbackWrapper;

constexpr void __set__lightRotationBeatmapEventCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper value) ;

constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper __get__lightRotationBeatmapEventCallbackWrapper() const;


// Methods

// Ctor Parameters [CppParam { name: "initData", ty: "::GlobalNamespace::____GlobalNamespace__LightRotationGroupEffect__InitData", modifiers: "", def_value: None }, CppParam { name: "tweeningManager", ty: "::Tweening::SongTimeTweeningManager", modifiers: "", def_value: None }, CppParam { name: "beatmapCallbacksController", ty: "::GlobalNamespace::BeatmapCallbacksController", modifiers: "", def_value: None }]
explicit LightRotationGroupEffect(::GlobalNamespace::____GlobalNamespace__LightRotationGroupEffect__InitData initData, ::Tweening::SongTimeTweeningManager tweeningManager, ::GlobalNamespace::BeatmapCallbacksController beatmapCallbacksController) ;

/// @brief Method .ctor addr 0x225e864 size 0x220 virtual false final false
 void _ctor(::GlobalNamespace::____GlobalNamespace__LightRotationGroupEffect__InitData initData, ::Tweening::SongTimeTweeningManager tweeningManager, ::GlobalNamespace::BeatmapCallbacksController beatmapCallbacksController) ;

/// @brief Method Cleanup addr 0x225ea84 size 0x9c virtual false final false
 void Cleanup() ;

/// @brief Method HandleRotationChangeBeatmapEvent addr 0x225eb20 size 0x184 virtual false final false
 void HandleRotationChangeBeatmapEvent(::GlobalNamespace::LightRotationBeatmapEventData currentEventData) ;

/// @brief Method SetRotation addr 0x225eca4 size 0xd8 virtual false final false
 void SetRotation(float_t rotation) ;

/// @brief Method ComputeTargetAngle addr 0x225ed7c size 0xe4 virtual false final false
static float_t ComputeTargetAngle(float_t startAngle, float_t targetAngle, int32_t loopCount, ::GlobalNamespace::LightRotationDirection rotationOrientation) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::LightRotationGroupEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightRotationGroupEffect, "", "LightRotationGroupEffect");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__LightRotationGroupEffect__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__LightRotationGroupEffect__InitData, "", "LightRotationGroupEffect/InitData");
