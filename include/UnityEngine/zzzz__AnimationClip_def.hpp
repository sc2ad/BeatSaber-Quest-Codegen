#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Motion_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace System {
class Type;
}
namespace UnityEngine {
struct WrapMode;
}
namespace UnityEngine {
class AnimationEvent;
}
namespace System {
class Array;
}
// Forward declare root types
namespace UnityEngine {
class AnimationClip;
}
// Type: UnityEngine::AnimationClip
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15039))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15054))
// CS Name: UnityEngine.AnimationClip
class CORDL_TYPE AnimationClip : public UnityEngine::Motion {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AnimationClip() = default;

// Ctor Parameters [CppParam { name: "", ty: "AnimationClip", modifiers: " const&", def_value: None }]
constexpr AnimationClip(AnimationClip const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AnimationClip", modifiers: "&&", def_value: None }]
constexpr AnimationClip(AnimationClip&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AnimationClip(void* ptr) noexcept : UnityEngine::Motion(ptr) {
}


  constexpr AnimationClip& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AnimationClip& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AnimationClip& operator=(AnimationClip&& o) noexcept = default;
  constexpr AnimationClip& operator=(AnimationClip const& o) noexcept = default;
                


// Properties

 float_t __declspec(property(get=get_length))  length;

 float_t __declspec(property(get=get_startTime))  startTime;

 float_t __declspec(property(get=get_stopTime))  stopTime;

 float_t __declspec(property(get=get_frameRate, put=set_frameRate))  frameRate;

 UnityEngine::WrapMode __declspec(property(get=get_wrapMode, put=set_wrapMode))  wrapMode;

 UnityEngine::Bounds __declspec(property(get=get_localBounds, put=set_localBounds))  localBounds;

 bool __declspec(property(get=get_legacy, put=set_legacy))  legacy;

 bool __declspec(property(get=get_humanMotion))  humanMotion;

 bool __declspec(property(get=get_empty))  empty;

 bool __declspec(property(get=get_hasGenericRootTransform))  hasGenericRootTransform;

 bool __declspec(property(get=get_hasMotionFloatCurves))  hasMotionFloatCurves;

 bool __declspec(property(get=get_hasMotionCurves))  hasMotionCurves;

 bool __declspec(property(get=get_hasRootCurves))  hasRootCurves;

 bool __declspec(property(get=get_hasRootMotion))  hasRootMotion;

 ::ArrayW<UnityEngine::AnimationEvent> __declspec(property(get=get_events, put=set_events))  events;


// Methods

// Ctor Parameters []
explicit AnimationClip() ;

/// @brief Method .ctor addr 0x2b1fe74 size 0x40 virtual false final false
 void _ctor() ;

/// @brief Method Internal_CreateAnimationClip addr 0x2b1feb4 size 0x3c virtual false final false
static void Internal_CreateAnimationClip(UnityEngine::AnimationClip self) ;

/// @brief Method SampleAnimation addr 0x2b1fef0 size 0x8c virtual false final false
 void SampleAnimation(UnityEngine::GameObject go, float_t time) ;

/// @brief Method SampleAnimation addr 0x2b1ffb8 size 0x64 virtual false final false
static void SampleAnimation(UnityEngine::GameObject go, UnityEngine::AnimationClip clip, float_t inTime, UnityEngine::WrapMode wrapMode) ;

/// @brief Method get_length addr 0x2b2001c size 0x3c virtual false final false
 float_t get_length() ;

/// @brief Method get_startTime addr 0x2b20058 size 0x3c virtual false final false
 float_t get_startTime() ;

/// @brief Method get_stopTime addr 0x2b20094 size 0x3c virtual false final false
 float_t get_stopTime() ;

/// @brief Method get_frameRate addr 0x2b200d0 size 0x3c virtual false final false
 float_t get_frameRate() ;

/// @brief Method set_frameRate addr 0x2b2010c size 0x4c virtual false final false
 void set_frameRate(float_t value) ;

/// @brief Method SetCurve addr 0x2b20158 size 0x6c virtual false final false
 void SetCurve(::StringW relativePath, System::Type type, ::StringW propertyName, UnityEngine::AnimationCurve curve) ;

/// @brief Method EnsureQuaternionContinuity addr 0x2b201c4 size 0x3c virtual false final false
 void EnsureQuaternionContinuity() ;

/// @brief Method ClearCurves addr 0x2b20200 size 0x3c virtual false final false
 void ClearCurves() ;

/// @brief Method get_wrapMode addr 0x2b1ff7c size 0x3c virtual false final false
 UnityEngine::WrapMode get_wrapMode() ;

/// @brief Method set_wrapMode addr 0x2b2023c size 0x44 virtual false final false
 void set_wrapMode(UnityEngine::WrapMode value) ;

/// @brief Method get_localBounds addr 0x2b20280 size 0x68 virtual false final false
 UnityEngine::Bounds get_localBounds() ;

/// @brief Method set_localBounds addr 0x2b2032c size 0x44 virtual false final false
 void set_localBounds(UnityEngine::Bounds value) ;

/// @brief Method get_legacy addr 0x2b203b4 size 0x3c virtual false final false
 bool get_legacy() ;

/// @brief Method set_legacy addr 0x2b203f0 size 0x44 virtual false final false
 void set_legacy(bool value) ;

/// @brief Method get_humanMotion addr 0x2b20434 size 0x3c virtual false final false
 bool get_humanMotion() ;

/// @brief Method get_empty addr 0x2b20470 size 0x3c virtual false final false
 bool get_empty() ;

/// @brief Method get_hasGenericRootTransform addr 0x2b204ac size 0x3c virtual false final false
 bool get_hasGenericRootTransform() ;

/// @brief Method get_hasMotionFloatCurves addr 0x2b204e8 size 0x3c virtual false final false
 bool get_hasMotionFloatCurves() ;

/// @brief Method get_hasMotionCurves addr 0x2b20524 size 0x3c virtual false final false
 bool get_hasMotionCurves() ;

/// @brief Method get_hasRootCurves addr 0x2b20560 size 0x3c virtual false final false
 bool get_hasRootCurves() ;

/// @brief Method get_hasRootMotion addr 0x2b2059c size 0x3c virtual false final false
 bool get_hasRootMotion() ;

/// @brief Method AddEvent addr 0x2b205d8 size 0x94 virtual false final false
 void AddEvent(UnityEngine::AnimationEvent evt) ;

/// @brief Method AddEventInternal addr 0x2b2066c size 0x44 virtual false final false
 void AddEventInternal(::bs_hook::Il2CppWrapperType evt) ;

/// @brief Method get_events addr 0x2b206b0 size 0x8c virtual false final false
 ::ArrayW<UnityEngine::AnimationEvent> get_events() ;

/// @brief Method set_events addr 0x2b20778 size 0x44 virtual false final false
 void set_events(::ArrayW<UnityEngine::AnimationEvent> value) ;

/// @brief Method SetEventsInternal addr 0x2b207bc size 0x44 virtual false final false
 void SetEventsInternal(System::Array value) ;

/// @brief Method GetEventsInternal addr 0x2b2073c size 0x3c virtual false final false
 System::Array GetEventsInternal() ;

/// @brief Method get_localBounds_Injected addr 0x2b202e8 size 0x44 virtual false final false
 void get_localBounds_Injected(ByRef<UnityEngine::Bounds> ret) ;

/// @brief Method set_localBounds_Injected addr 0x2b20370 size 0x44 virtual false final false
 void set_localBounds_Injected(ByRef<UnityEngine::Bounds> value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::AnimationClip);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AnimationClip, "UnityEngine", "AnimationClip");
