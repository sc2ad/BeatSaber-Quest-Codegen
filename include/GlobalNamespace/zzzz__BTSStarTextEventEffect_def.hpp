#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace UnityEngine {
class Sprite;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
// Forward declare root types
namespace GlobalNamespace {
class BTSStarTextEventEffect;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BTSStarTextEventEffect__StarTextSprite;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BTSStarTextEventEffect__StartTextPosition;
}
// Type: ::StarTextSprite
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3968))
// CS Name: BTSStarTextEventEffect::StarTextSprite
class CORDL_TYPE ____GlobalNamespace__BTSStarTextEventEffect__StarTextSprite : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____GlobalNamespace__BTSStarTextEventEffect__StarTextSprite() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BTSStarTextEventEffect__StarTextSprite", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BTSStarTextEventEffect__StarTextSprite(____GlobalNamespace__BTSStarTextEventEffect__StarTextSprite const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BTSStarTextEventEffect__StarTextSprite", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BTSStarTextEventEffect__StarTextSprite(____GlobalNamespace__BTSStarTextEventEffect__StarTextSprite&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BTSStarTextEventEffect__StarTextSprite(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__BTSStarTextEventEffect__StarTextSprite& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BTSStarTextEventEffect__StarTextSprite& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BTSStarTextEventEffect__StarTextSprite& operator=(____GlobalNamespace__BTSStarTextEventEffect__StarTextSprite&& o) noexcept = default;
  constexpr ____GlobalNamespace__BTSStarTextEventEffect__StarTextSprite& operator=(____GlobalNamespace__BTSStarTextEventEffect__StarTextSprite const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__id, put=__set__id))  _id;

constexpr void __set__id(int32_t value) ;

constexpr int32_t __get__id() const;

 ::UnityEngine::Sprite __declspec(property(get=__get__starTextSprite, put=__set__starTextSprite))  _starTextSprite;

constexpr void __set__starTextSprite(::UnityEngine::Sprite value) ;

constexpr ::UnityEngine::Sprite __get__starTextSprite() const;

 float_t __declspec(property(get=__get__animationLength, put=__set__animationLength))  _animationLength;

constexpr void __set__animationLength(float_t value) ;

constexpr float_t __get__animationLength() const;


// Properties

 int32_t __declspec(property(get=get_id))  id;

 ::UnityEngine::Sprite __declspec(property(get=get_starTextSprite))  starTextSprite;

 float_t __declspec(property(get=get_animationLength))  animationLength;


// Methods

/// @brief Method get_id addr 0x20ab3e4 size 0x8 virtual false final false
 int32_t get_id() ;

/// @brief Method get_starTextSprite addr 0x20ab3ec size 0x8 virtual false final false
 ::UnityEngine::Sprite get_starTextSprite() ;

/// @brief Method get_animationLength addr 0x20ab3f4 size 0x8 virtual false final false
 float_t get_animationLength() ;

// Ctor Parameters []
explicit ____GlobalNamespace__BTSStarTextEventEffect__StarTextSprite() ;

/// @brief Method .ctor addr 0x20ab3fc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::StartTextPosition
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3969))
// CS Name: BTSStarTextEventEffect::StartTextPosition
class CORDL_TYPE ____GlobalNamespace__BTSStarTextEventEffect__StartTextPosition : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__BTSStarTextEventEffect__StartTextPosition() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BTSStarTextEventEffect__StartTextPosition", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BTSStarTextEventEffect__StartTextPosition(____GlobalNamespace__BTSStarTextEventEffect__StartTextPosition const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BTSStarTextEventEffect__StartTextPosition", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BTSStarTextEventEffect__StartTextPosition(____GlobalNamespace__BTSStarTextEventEffect__StartTextPosition&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BTSStarTextEventEffect__StartTextPosition(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__BTSStarTextEventEffect__StartTextPosition& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BTSStarTextEventEffect__StartTextPosition& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BTSStarTextEventEffect__StartTextPosition& operator=(____GlobalNamespace__BTSStarTextEventEffect__StartTextPosition&& o) noexcept = default;
  constexpr ____GlobalNamespace__BTSStarTextEventEffect__StartTextPosition& operator=(____GlobalNamespace__BTSStarTextEventEffect__StartTextPosition const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__id, put=__set__id))  _id;

constexpr void __set__id(int32_t value) ;

constexpr int32_t __get__id() const;

 ::UnityEngine::Transform __declspec(property(get=__get__transform, put=__set__transform))  _transform;

constexpr void __set__transform(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get__transform() const;


// Properties

 int32_t __declspec(property(get=get_id))  id;

 ::UnityEngine::Transform __declspec(property(get=get_transform))  transform;


// Methods

/// @brief Method get_id addr 0x20ab404 size 0x8 virtual false final false
 int32_t get_id() ;

/// @brief Method get_transform addr 0x20ab40c size 0x8 virtual false final false
 ::UnityEngine::Transform get_transform() ;

// Ctor Parameters []
explicit ____GlobalNamespace__BTSStarTextEventEffect__StartTextPosition() ;

/// @brief Method .ctor addr 0x20ab414 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BTSStarTextEventEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3970))
// CS Name: BTSStarTextEventEffect
class CORDL_TYPE BTSStarTextEventEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using StartTextPosition = ::GlobalNamespace::____GlobalNamespace__BTSStarTextEventEffect__StartTextPosition;

using StarTextSprite = ::GlobalNamespace::____GlobalNamespace__BTSStarTextEventEffect__StarTextSprite;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~BTSStarTextEventEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "BTSStarTextEventEffect", modifiers: " const&", def_value: None }]
constexpr BTSStarTextEventEffect(BTSStarTextEventEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BTSStarTextEventEffect", modifiers: "&&", def_value: None }]
constexpr BTSStarTextEventEffect(BTSStarTextEventEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BTSStarTextEventEffect(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BTSStarTextEventEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BTSStarTextEventEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BTSStarTextEventEffect& operator=(BTSStarTextEventEffect&& o) noexcept = default;
  constexpr BTSStarTextEventEffect& operator=(BTSStarTextEventEffect const& o) noexcept = default;
                


// Fields

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__BTSStarTextEventEffect__StarTextSprite> __declspec(property(get=__get__starTextSprites, put=__set__starTextSprites))  _starTextSprites;

constexpr void __set__starTextSprites(::ArrayW<::GlobalNamespace::____GlobalNamespace__BTSStarTextEventEffect__StarTextSprite> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__BTSStarTextEventEffect__StarTextSprite> __get__starTextSprites() const;

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__BTSStarTextEventEffect__StartTextPosition> __declspec(property(get=__get__startTextPositions, put=__set__startTextPositions))  _startTextPositions;

constexpr void __set__startTextPositions(::ArrayW<::GlobalNamespace::____GlobalNamespace__BTSStarTextEventEffect__StartTextPosition> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__BTSStarTextEventEffect__StartTextPosition> __get__startTextPositions() const;

 ::GlobalNamespace::BeatmapCallbacksController __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController))  _beatmapCallbacksController;

constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController value) ;

constexpr ::GlobalNamespace::BeatmapCallbacksController __get__beatmapCallbacksController() const;

 ::GlobalNamespace::IAudioTimeSource __declspec(property(get=__get__audioTimeSource, put=__set__audioTimeSource))  _audioTimeSource;

constexpr void __set__audioTimeSource(::GlobalNamespace::IAudioTimeSource value) ;

constexpr ::GlobalNamespace::IAudioTimeSource __get__audioTimeSource() const;

 ::System::Action_3<::UnityEngine::Sprite,::UnityEngine::Transform,float_t> __declspec(property(get=__get_startStarTextAnimationEvent, put=__set_startStarTextAnimationEvent))  startStarTextAnimationEvent;

constexpr void __set_startStarTextAnimationEvent(::System::Action_3<::UnityEngine::Sprite,::UnityEngine::Transform,float_t> value) ;

constexpr ::System::Action_3<::UnityEngine::Sprite,::UnityEngine::Transform,float_t> __get_startStarTextAnimationEvent() const;

/// @brief Field kStarTextAppearEventType offset 0
static ::GlobalNamespace::BasicBeatmapEventType const kStarTextAppearEventType;

 ::GlobalNamespace::BeatmapDataCallbackWrapper __declspec(property(get=__get__beatmapDataCallbackWrapper, put=__set__beatmapDataCallbackWrapper))  _beatmapDataCallbackWrapper;

constexpr void __set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper value) ;

constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper __get__beatmapDataCallbackWrapper() const;

 ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::____GlobalNamespace__BTSStarTextEventEffect__StarTextSprite> __declspec(property(get=__get__idsToStarTextSpriteDictionary, put=__set__idsToStarTextSpriteDictionary))  _idsToStarTextSpriteDictionary;

constexpr void __set__idsToStarTextSpriteDictionary(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::____GlobalNamespace__BTSStarTextEventEffect__StarTextSprite> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::____GlobalNamespace__BTSStarTextEventEffect__StarTextSprite> __get__idsToStarTextSpriteDictionary() const;

 ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Transform> __declspec(property(get=__get__idsToStarTextPositionDictionary, put=__set__idsToStarTextPositionDictionary))  _idsToStarTextPositionDictionary;

constexpr void __set__idsToStarTextPositionDictionary(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Transform> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Transform> __get__idsToStarTextPositionDictionary() const;


// Methods

/// @brief Method add_startStarTextAnimationEvent addr 0x20aaae0 size 0xb0 virtual false final false
 void add_startStarTextAnimationEvent(::System::Action_3<::UnityEngine::Sprite,::UnityEngine::Transform,float_t> value) ;

/// @brief Method remove_startStarTextAnimationEvent addr 0x20aac18 size 0xb0 virtual false final false
 void remove_startStarTextAnimationEvent(::System::Action_3<::UnityEngine::Sprite,::UnityEngine::Transform,float_t> value) ;

/// @brief Method Start addr 0x20aaf44 size 0x1ec virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20ab130 size 0x1c virtual false final false
 void OnDestroy() ;

/// @brief Method HandleBeatmapEvent addr 0x20ab14c size 0x1d8 virtual false final false
 void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData basicBeatmapEventData) ;

// Ctor Parameters []
explicit BTSStarTextEventEffect() ;

/// @brief Method .ctor addr 0x20ab324 size 0xc0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BTSStarTextEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BTSStarTextEventEffect, "", "BTSStarTextEventEffect");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BTSStarTextEventEffect__StarTextSprite);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BTSStarTextEventEffect__StarTextSprite, "", "BTSStarTextEventEffect/StarTextSprite");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BTSStarTextEventEffect__StartTextPosition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BTSStarTextEventEffect__StartTextPosition, "", "BTSStarTextEventEffect/StartTextPosition");
