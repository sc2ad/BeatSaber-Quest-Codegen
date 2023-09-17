#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine::Playables {
struct FrameData;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomTweenBehaviour;
}
namespace GlobalNamespace {
class ____GlobalNamespace__CustomTweenBehaviour____c;
}
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6064))
// CS Name: CustomTweenBehaviour::<>c
class CORDL_TYPE ____GlobalNamespace__CustomTweenBehaviour____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____GlobalNamespace__CustomTweenBehaviour____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__CustomTweenBehaviour____c", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__CustomTweenBehaviour____c(____GlobalNamespace__CustomTweenBehaviour____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__CustomTweenBehaviour____c", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__CustomTweenBehaviour____c(____GlobalNamespace__CustomTweenBehaviour____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__CustomTweenBehaviour____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__CustomTweenBehaviour____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__CustomTweenBehaviour____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__CustomTweenBehaviour____c& operator=(____GlobalNamespace__CustomTweenBehaviour____c&& o) noexcept = default;
  constexpr ____GlobalNamespace__CustomTweenBehaviour____c& operator=(____GlobalNamespace__CustomTweenBehaviour____c const& o) noexcept = default;
                


// Fields

static ::GlobalNamespace::____GlobalNamespace__CustomTweenBehaviour____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::GlobalNamespace::____GlobalNamespace__CustomTweenBehaviour____c value) ;

static ::GlobalNamespace::____GlobalNamespace__CustomTweenBehaviour____c __get___9() ;

static ::System::Func_2<int32_t,float_t> __declspec(property(get=__get___9__21_0, put=__set___9__21_0))  __9__21_0;

static void __set___9__21_0(::System::Func_2<int32_t,float_t> value) ;

static ::System::Func_2<int32_t,float_t> __get___9__21_0() ;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__CustomTweenBehaviour____c() ;

/// @brief Method .ctor addr 0x21b272c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <OnBehaviourPlay>b__21_0 addr 0x21b2734 size 0x8 virtual false final false
 float_t _OnBehaviourPlay_b__21_0(int32_t i) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::CustomTweenBehaviour
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10361))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6065))
// CS Name: CustomTweenBehaviour
class CORDL_TYPE CustomTweenBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::____GlobalNamespace__CustomTweenBehaviour____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~CustomTweenBehaviour() = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomTweenBehaviour", modifiers: " const&", def_value: None }]
constexpr CustomTweenBehaviour(CustomTweenBehaviour const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomTweenBehaviour", modifiers: "&&", def_value: None }]
constexpr CustomTweenBehaviour(CustomTweenBehaviour&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CustomTweenBehaviour(void* ptr) noexcept : ::UnityEngine::Playables::PlayableBehaviour(ptr) {
}


  constexpr CustomTweenBehaviour& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CustomTweenBehaviour& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CustomTweenBehaviour& operator=(CustomTweenBehaviour&& o) noexcept = default;
  constexpr CustomTweenBehaviour& operator=(CustomTweenBehaviour const& o) noexcept = default;
                


// Fields

 ::ArrayW<::UnityEngine::Transform> __declspec(property(get=__get__transforms, put=__set__transforms))  _transforms;

constexpr void __set__transforms(::ArrayW<::UnityEngine::Transform> value) ;

constexpr ::ArrayW<::UnityEngine::Transform> __get__transforms() const;

 bool __declspec(property(get=__get_startLocationCurrentPosition, put=__set_startLocationCurrentPosition))  startLocationCurrentPosition;

constexpr void __set_startLocationCurrentPosition(bool value) ;

constexpr bool __get_startLocationCurrentPosition() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_startLocalPos, put=__set_startLocalPos))  startLocalPos;

constexpr void __set_startLocalPos(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_startLocalPos() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_endLocalPos, put=__set_endLocalPos))  endLocalPos;

constexpr void __set_endLocalPos(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_endLocalPos() const;

 ::GlobalNamespace::EaseType __declspec(property(get=__get_easeType, put=__set_easeType))  easeType;

constexpr void __set_easeType(::GlobalNamespace::EaseType value) ;

constexpr ::GlobalNamespace::EaseType __get_easeType() const;

 bool __declspec(property(get=__get_endXRelativeToSelfRotation, put=__set_endXRelativeToSelfRotation))  endXRelativeToSelfRotation;

constexpr void __set_endXRelativeToSelfRotation(bool value) ;

constexpr bool __get_endXRelativeToSelfRotation() const;

 float_t __declspec(property(get=__get_elementDelay, put=__set_elementDelay))  elementDelay;

constexpr void __set_elementDelay(float_t value) ;

constexpr float_t __get_elementDelay() const;

 bool __declspec(property(get=__get__lockX, put=__set__lockX))  _lockX;

constexpr void __set__lockX(bool value) ;

constexpr bool __get__lockX() const;

 bool __declspec(property(get=__get__lockY, put=__set__lockY))  _lockY;

constexpr void __set__lockY(bool value) ;

constexpr bool __get__lockY() const;

 bool __declspec(property(get=__get__lockZ, put=__set__lockZ))  _lockZ;

constexpr void __set__lockZ(bool value) ;

constexpr bool __get__lockZ() const;

 bool __declspec(property(get=__get__randomizeOrder, put=__set__randomizeOrder))  _randomizeOrder;

constexpr void __set__randomizeOrder(bool value) ;

constexpr bool __get__randomizeOrder() const;

 float_t __declspec(property(get=__get__randomizedMinDurationMultiplier, put=__set__randomizedMinDurationMultiplier))  _randomizedMinDurationMultiplier;

constexpr void __set__randomizedMinDurationMultiplier(float_t value) ;

constexpr float_t __get__randomizedMinDurationMultiplier() const;

 float_t __declspec(property(get=__get__duration, put=__set__duration))  _duration;

constexpr void __set__duration(float_t value) ;

constexpr float_t __get__duration() const;

 float_t __declspec(property(get=__get__perItemDuration, put=__set__perItemDuration))  _perItemDuration;

constexpr void __set__perItemDuration(float_t value) ;

constexpr float_t __get__perItemDuration() const;

 ::ArrayW<::UnityEngine::Vector3> __declspec(property(get=__get__originalLocalPos, put=__set__originalLocalPos))  _originalLocalPos;

constexpr void __set__originalLocalPos(::ArrayW<::UnityEngine::Vector3> value) ;

constexpr ::ArrayW<::UnityEngine::Vector3> __get__originalLocalPos() const;

 bool __declspec(property(get=__get__initialized, put=__set__initialized))  _initialized;

constexpr void __set__initialized(bool value) ;

constexpr bool __get__initialized() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__randomizedOrder, put=__set__randomizedOrder))  _randomizedOrder;

constexpr void __set__randomizedOrder(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__randomizedOrder() const;

 ::ArrayW<float_t> __declspec(property(get=__get__randomizedDuration, put=__set__randomizedDuration))  _randomizedDuration;

constexpr void __set__randomizedDuration(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get__randomizedDuration() const;


// Methods

/// @brief Method OnGraphStart addr 0x21b1ea4 size 0x13c virtual true final false
 void OnGraphStart(::UnityEngine::Playables::Playable playable) ;

/// @brief Method ProcessFrame addr 0x21b1fe0 size 0x3e0 virtual true final false
 void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::bs_hook::Il2CppWrapperType playerData) ;

/// @brief Method OnPlayableDestroy addr 0x21b23c0 size 0x104 virtual true final false
 void OnPlayableDestroy(::UnityEngine::Playables::Playable playable) ;

/// @brief Method OnBehaviourPlay addr 0x21b24c4 size 0x1ec virtual true final false
 void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info) ;

// Ctor Parameters []
explicit CustomTweenBehaviour() ;

/// @brief Method .ctor addr 0x21b26b0 size 0x18 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::CustomTweenBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CustomTweenBehaviour, "", "CustomTweenBehaviour");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__CustomTweenBehaviour____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__CustomTweenBehaviour____c, "", "CustomTweenBehaviour/<>c");
