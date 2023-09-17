#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class LightTranslationBeatmapEventData;
}
namespace Tweening {
class SongTimeTweeningManager;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace UnityEngine {
struct Vector2;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace UnityEngine {
struct Vector3;
}
namespace Tweening {
class FloatTween;
}
namespace UnityEngine {
class Transform;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
template<typename T>
class BeatmapDataCallback_1;
}
// Forward declare root types
namespace GlobalNamespace {
class LightTranslationGroupEffect;
}
namespace GlobalNamespace {
class ____GlobalNamespace__LightTranslationGroupEffect__InitData;
}
namespace GlobalNamespace {
class ____GlobalNamespace__LightTranslationGroupEffect____c__DisplayClass12_0;
}
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5045))
// CS Name: LightTranslationGroupEffect::InitData
class CORDL_TYPE ____GlobalNamespace__LightTranslationGroupEffect__InitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~____GlobalNamespace__LightTranslationGroupEffect__InitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LightTranslationGroupEffect__InitData", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__LightTranslationGroupEffect__InitData(____GlobalNamespace__LightTranslationGroupEffect__InitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LightTranslationGroupEffect__InitData", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__LightTranslationGroupEffect__InitData(____GlobalNamespace__LightTranslationGroupEffect__InitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__LightTranslationGroupEffect__InitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__LightTranslationGroupEffect__InitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__LightTranslationGroupEffect__InitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__LightTranslationGroupEffect__InitData& operator=(____GlobalNamespace__LightTranslationGroupEffect__InitData&& o) noexcept = default;
  constexpr ____GlobalNamespace__LightTranslationGroupEffect__InitData& operator=(____GlobalNamespace__LightTranslationGroupEffect__InitData const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_groupId, put=__set_groupId))  groupId;

constexpr void __set_groupId(int32_t value) ;

constexpr int32_t __get_groupId() const;

 int32_t __declspec(property(get=__get_elementId, put=__set_elementId))  elementId;

constexpr void __set_elementId(int32_t value) ;

constexpr int32_t __get_elementId() const;

 bool __declspec(property(get=__get_xMirrored, put=__set_xMirrored))  xMirrored;

constexpr void __set_xMirrored(bool value) ;

constexpr bool __get_xMirrored() const;

 bool __declspec(property(get=__get_yMirrored, put=__set_yMirrored))  yMirrored;

constexpr void __set_yMirrored(bool value) ;

constexpr bool __get_yMirrored() const;

 bool __declspec(property(get=__get_zMirrored, put=__set_zMirrored))  zMirrored;

constexpr void __set_zMirrored(bool value) ;

constexpr bool __get_zMirrored() const;

 ::UnityEngine::Transform __declspec(property(get=__get_xTransform, put=__set_xTransform))  xTransform;

constexpr void __set_xTransform(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_xTransform() const;

 ::UnityEngine::Transform __declspec(property(get=__get_yTransform, put=__set_yTransform))  yTransform;

constexpr void __set_yTransform(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_yTransform() const;

 ::UnityEngine::Transform __declspec(property(get=__get_zTransform, put=__set_zTransform))  zTransform;

constexpr void __set_zTransform(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_zTransform() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_xTranslationLimits, put=__set_xTranslationLimits))  xTranslationLimits;

constexpr void __set_xTranslationLimits(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_xTranslationLimits() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_xDistributionLimits, put=__set_xDistributionLimits))  xDistributionLimits;

constexpr void __set_xDistributionLimits(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_xDistributionLimits() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_yTranslationLimits, put=__set_yTranslationLimits))  yTranslationLimits;

constexpr void __set_yTranslationLimits(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_yTranslationLimits() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_yDistributionLimits, put=__set_yDistributionLimits))  yDistributionLimits;

constexpr void __set_yDistributionLimits(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_yDistributionLimits() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_zTranslationLimits, put=__set_zTranslationLimits))  zTranslationLimits;

constexpr void __set_zTranslationLimits(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_zTranslationLimits() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_zDistributionLimits, put=__set_zDistributionLimits))  zDistributionLimits;

constexpr void __set_zDistributionLimits(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_zDistributionLimits() const;


// Methods

// Ctor Parameters [CppParam { name: "groupId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "elementId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "xMirrored", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "yMirrored", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "zMirrored", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "xTransform", ty: "::UnityEngine::Transform", modifiers: "", def_value: None }, CppParam { name: "yTransform", ty: "::UnityEngine::Transform", modifiers: "", def_value: None }, CppParam { name: "zTransform", ty: "::UnityEngine::Transform", modifiers: "", def_value: None }, CppParam { name: "xTranslationLimits", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "xDistributionLimits", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "yTranslationLimits", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "yDistributionLimits", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "zTranslationLimits", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "zDistributionLimits", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__LightTranslationGroupEffect__InitData(int32_t groupId, int32_t elementId, bool xMirrored, bool yMirrored, bool zMirrored, ::UnityEngine::Transform xTransform, ::UnityEngine::Transform yTransform, ::UnityEngine::Transform zTransform, ::UnityEngine::Vector2 xTranslationLimits, ::UnityEngine::Vector2 xDistributionLimits, ::UnityEngine::Vector2 yTranslationLimits, ::UnityEngine::Vector2 yDistributionLimits, ::UnityEngine::Vector2 zTranslationLimits, ::UnityEngine::Vector2 zDistributionLimits) ;

/// @brief Method .ctor addr 0x22606e0 size 0xd8 virtual false final false
 void _ctor(int32_t groupId, int32_t elementId, bool xMirrored, bool yMirrored, bool zMirrored, ::UnityEngine::Transform xTransform, ::UnityEngine::Transform yTransform, ::UnityEngine::Transform zTransform, ::UnityEngine::Vector2 xTranslationLimits, ::UnityEngine::Vector2 xDistributionLimits, ::UnityEngine::Vector2 yTranslationLimits, ::UnityEngine::Vector2 yDistributionLimits, ::UnityEngine::Vector2 zTranslationLimits, ::UnityEngine::Vector2 zDistributionLimits) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass12_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5046))
// CS Name: LightTranslationGroupEffect::<>c__DisplayClass12_0
class CORDL_TYPE ____GlobalNamespace__LightTranslationGroupEffect____c__DisplayClass12_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~____GlobalNamespace__LightTranslationGroupEffect____c__DisplayClass12_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LightTranslationGroupEffect____c__DisplayClass12_0", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__LightTranslationGroupEffect____c__DisplayClass12_0(____GlobalNamespace__LightTranslationGroupEffect____c__DisplayClass12_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LightTranslationGroupEffect____c__DisplayClass12_0", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__LightTranslationGroupEffect____c__DisplayClass12_0(____GlobalNamespace__LightTranslationGroupEffect____c__DisplayClass12_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__LightTranslationGroupEffect____c__DisplayClass12_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__LightTranslationGroupEffect____c__DisplayClass12_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__LightTranslationGroupEffect____c__DisplayClass12_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__LightTranslationGroupEffect____c__DisplayClass12_0& operator=(____GlobalNamespace__LightTranslationGroupEffect____c__DisplayClass12_0&& o) noexcept = default;
  constexpr ____GlobalNamespace__LightTranslationGroupEffect____c__DisplayClass12_0& operator=(____GlobalNamespace__LightTranslationGroupEffect____c__DisplayClass12_0 const& o) noexcept = default;
                


// Fields

 ::Tweening::FloatTween __declspec(property(get=__get_translationTween, put=__set_translationTween))  translationTween;

constexpr void __set_translationTween(::Tweening::FloatTween value) ;

constexpr ::Tweening::FloatTween __get_translationTween() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_translationLimits, put=__set_translationLimits))  translationLimits;

constexpr void __set_translationLimits(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_translationLimits() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_distributionLimits, put=__set_distributionLimits))  distributionLimits;

constexpr void __set_distributionLimits(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_distributionLimits() const;

 bool __declspec(property(get=__get_mirrored, put=__set_mirrored))  mirrored;

constexpr void __set_mirrored(bool value) ;

constexpr bool __get_mirrored() const;

 ::GlobalNamespace::LightTranslationGroupEffect __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::LightTranslationGroupEffect value) ;

constexpr ::GlobalNamespace::LightTranslationGroupEffect __get___4__this() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__LightTranslationGroupEffect____c__DisplayClass12_0() ;

/// @brief Method .ctor addr 0x2260488 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetTranslationEventHandler>b__0 addr 0x22607b8 size 0x1c0 virtual false final false
 void _GetTranslationEventHandler_b__0(::GlobalNamespace::LightTranslationBeatmapEventData currentEventData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LightTranslationGroupEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5047))
// CS Name: LightTranslationGroupEffect
class CORDL_TYPE LightTranslationGroupEffect : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass12_0 = ::GlobalNamespace::____GlobalNamespace__LightTranslationGroupEffect____c__DisplayClass12_0;

using InitData = ::GlobalNamespace::____GlobalNamespace__LightTranslationGroupEffect__InitData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~LightTranslationGroupEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightTranslationGroupEffect", modifiers: " const&", def_value: None }]
constexpr LightTranslationGroupEffect(LightTranslationGroupEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightTranslationGroupEffect", modifiers: "&&", def_value: None }]
constexpr LightTranslationGroupEffect(LightTranslationGroupEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightTranslationGroupEffect(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LightTranslationGroupEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightTranslationGroupEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightTranslationGroupEffect& operator=(LightTranslationGroupEffect&& o) noexcept = default;
  constexpr LightTranslationGroupEffect& operator=(LightTranslationGroupEffect const& o) noexcept = default;
                


// Fields

 ::Tweening::SongTimeTweeningManager __declspec(property(get=__get__tweeningManager, put=__set__tweeningManager))  _tweeningManager;

constexpr void __set__tweeningManager(::Tweening::SongTimeTweeningManager value) ;

constexpr ::Tweening::SongTimeTweeningManager __get__tweeningManager() const;

 ::GlobalNamespace::BeatmapCallbacksController __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController))  _beatmapCallbacksController;

constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController value) ;

constexpr ::GlobalNamespace::BeatmapCallbacksController __get__beatmapCallbacksController() const;

 ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Transform,::UnityEngine::Vector3>> __declspec(property(get=__get__transformMask, put=__set__transformMask))  _transformMask;

constexpr void __set__transformMask(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Transform,::UnityEngine::Vector3>> value) ;

constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Transform,::UnityEngine::Vector3>> __get__transformMask() const;

 ::Tweening::FloatTween __declspec(property(get=__get__xTranslationTween, put=__set__xTranslationTween))  _xTranslationTween;

constexpr void __set__xTranslationTween(::Tweening::FloatTween value) ;

constexpr ::Tweening::FloatTween __get__xTranslationTween() const;

 ::Tweening::FloatTween __declspec(property(get=__get__yTranslationTween, put=__set__yTranslationTween))  _yTranslationTween;

constexpr void __set__yTranslationTween(::Tweening::FloatTween value) ;

constexpr ::Tweening::FloatTween __get__yTranslationTween() const;

 ::Tweening::FloatTween __declspec(property(get=__get__zTranslationTween, put=__set__zTranslationTween))  _zTranslationTween;

constexpr void __set__zTranslationTween(::Tweening::FloatTween value) ;

constexpr ::Tweening::FloatTween __get__zTranslationTween() const;

 ::GlobalNamespace::BeatmapDataCallbackWrapper __declspec(property(get=__get__lightTranslationXBeatmapEventCallbackWrapper, put=__set__lightTranslationXBeatmapEventCallbackWrapper))  _lightTranslationXBeatmapEventCallbackWrapper;

constexpr void __set__lightTranslationXBeatmapEventCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper value) ;

constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper __get__lightTranslationXBeatmapEventCallbackWrapper() const;

 ::GlobalNamespace::BeatmapDataCallbackWrapper __declspec(property(get=__get__lightTranslationYBeatmapEventCallbackWrapper, put=__set__lightTranslationYBeatmapEventCallbackWrapper))  _lightTranslationYBeatmapEventCallbackWrapper;

constexpr void __set__lightTranslationYBeatmapEventCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper value) ;

constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper __get__lightTranslationYBeatmapEventCallbackWrapper() const;

 ::GlobalNamespace::BeatmapDataCallbackWrapper __declspec(property(get=__get__lightTranslationZBeatmapEventCallbackWrapper, put=__set__lightTranslationZBeatmapEventCallbackWrapper))  _lightTranslationZBeatmapEventCallbackWrapper;

constexpr void __set__lightTranslationZBeatmapEventCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper value) ;

constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper __get__lightTranslationZBeatmapEventCallbackWrapper() const;


// Methods

// Ctor Parameters [CppParam { name: "initData", ty: "::GlobalNamespace::____GlobalNamespace__LightTranslationGroupEffect__InitData", modifiers: "", def_value: None }, CppParam { name: "tweeningManager", ty: "::Tweening::SongTimeTweeningManager", modifiers: "", def_value: None }, CppParam { name: "beatmapCallbacksController", ty: "::GlobalNamespace::BeatmapCallbacksController", modifiers: "", def_value: None }]
explicit LightTranslationGroupEffect(::GlobalNamespace::____GlobalNamespace__LightTranslationGroupEffect__InitData initData, ::Tweening::SongTimeTweeningManager tweeningManager, ::GlobalNamespace::BeatmapCallbacksController beatmapCallbacksController) ;

/// @brief Method .ctor addr 0x225f870 size 0xac0 virtual false final false
 void _ctor(::GlobalNamespace::____GlobalNamespace__LightTranslationGroupEffect__InitData initData, ::Tweening::SongTimeTweeningManager tweeningManager, ::GlobalNamespace::BeatmapCallbacksController beatmapCallbacksController) ;

/// @brief Method Cleanup addr 0x2260420 size 0x68 virtual false final false
 void Cleanup() ;

/// @brief Method GetTranslationEventHandler addr 0x2260330 size 0xf0 virtual false final false
 ::GlobalNamespace::BeatmapDataCallback_1<::GlobalNamespace::LightTranslationBeatmapEventData> GetTranslationEventHandler(::Tweening::FloatTween translationTween, ::UnityEngine::Vector2 translationLimits, ::UnityEngine::Vector2 distributionLimits, bool mirrored) ;

/// @brief Method SetTranslation addr 0x2260490 size 0x1c8 virtual false final false
 void SetTranslation(float_t _) ;

/// @brief Method SetTweenData addr 0x2260658 size 0x3c virtual false final false
static void SetTweenData(::Tweening::FloatTween tween, float_t from, float_t to, float_t startTime, float_t endTime, ::GlobalNamespace::EaseType easeType) ;

/// @brief Method ComputeTranslation addr 0x2260694 size 0x4c virtual false final false
static float_t ComputeTranslation(float_t translation, ::UnityEngine::Vector2 translationLimits, float_t distribution, ::UnityEngine::Vector2 distributionLimits, bool mirrored) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::LightTranslationGroupEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightTranslationGroupEffect, "", "LightTranslationGroupEffect");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__LightTranslationGroupEffect__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__LightTranslationGroupEffect__InitData, "", "LightTranslationGroupEffect/InitData");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__LightTranslationGroupEffect____c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__LightTranslationGroupEffect____c__DisplayClass12_0, "", "LightTranslationGroupEffect/<>c__DisplayClass12_0");
