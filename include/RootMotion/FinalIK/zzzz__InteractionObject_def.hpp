#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
class Transform;
}
namespace RootMotion::FinalIK {
struct FullBodyBipedEffector;
}
namespace RootMotion::FinalIK {
class IKSolverFullBodyBiped;
}
namespace RootMotion::FinalIK {
class InteractionTarget;
}
namespace RootMotion::FinalIK {
class InteractionSystem;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class Animation;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
struct RootMotion__FinalIK__InteractionObject__WeightCurve__Type;
}
namespace RootMotion::FinalIK {
class InteractionObject;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__InteractionObject__AnimatorEvent;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__InteractionObject__InteractionEvent;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__InteractionObject__Message;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__InteractionObject__Multiplier;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__InteractionObject__WeightCurve;
}
// Type: ::InteractionEvent
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12539))
// CS Name: RootMotion.FinalIK.InteractionObject::InteractionEvent
class CORDL_TYPE RootMotion__FinalIK__InteractionObject__InteractionEvent : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~RootMotion__FinalIK__InteractionObject__InteractionEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__InteractionObject__InteractionEvent", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__InteractionObject__InteractionEvent(RootMotion__FinalIK__InteractionObject__InteractionEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__InteractionObject__InteractionEvent", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__InteractionObject__InteractionEvent(RootMotion__FinalIK__InteractionObject__InteractionEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__InteractionObject__InteractionEvent(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RootMotion__FinalIK__InteractionObject__InteractionEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__InteractionObject__InteractionEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__InteractionObject__InteractionEvent& operator=(RootMotion__FinalIK__InteractionObject__InteractionEvent&& o) noexcept = default;
  constexpr RootMotion__FinalIK__InteractionObject__InteractionEvent& operator=(RootMotion__FinalIK__InteractionObject__InteractionEvent const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_time, put=__set_time))  time;

constexpr void __set_time(float_t value) ;

constexpr float_t __get_time() const;

 bool __declspec(property(get=__get_pause, put=__set_pause))  pause;

constexpr void __set_pause(bool value) ;

constexpr bool __get_pause() const;

 bool __declspec(property(get=__get_pickUp, put=__set_pickUp))  pickUp;

constexpr void __set_pickUp(bool value) ;

constexpr bool __get_pickUp() const;

 ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__InteractionObject__AnimatorEvent> __declspec(property(get=__get_animations, put=__set_animations))  animations;

constexpr void __set_animations(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__InteractionObject__AnimatorEvent> value) ;

constexpr ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__InteractionObject__AnimatorEvent> __get_animations() const;

 ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__InteractionObject__Message> __declspec(property(get=__get_messages, put=__set_messages))  messages;

constexpr void __set_messages(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__InteractionObject__Message> value) ;

constexpr ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__InteractionObject__Message> __get_messages() const;

 UnityEngine::Events::UnityEvent __declspec(property(get=__get_unityEvent, put=__set_unityEvent))  unityEvent;

constexpr void __set_unityEvent(UnityEngine::Events::UnityEvent value) ;

constexpr UnityEngine::Events::UnityEvent __get_unityEvent() const;


// Methods

/// @brief Method Activate addr 0x11f9bcc size 0xc4 virtual false final false
 void Activate(UnityEngine::Transform t) ;

// Ctor Parameters []
explicit RootMotion__FinalIK__InteractionObject__InteractionEvent() ;

/// @brief Method .ctor addr 0x11fb454 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: ::Message
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12540))
// CS Name: RootMotion.FinalIK.InteractionObject::Message
class CORDL_TYPE RootMotion__FinalIK__InteractionObject__Message : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RootMotion__FinalIK__InteractionObject__Message() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__InteractionObject__Message", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__InteractionObject__Message(RootMotion__FinalIK__InteractionObject__Message const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__InteractionObject__Message", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__InteractionObject__Message(RootMotion__FinalIK__InteractionObject__Message&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__InteractionObject__Message(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RootMotion__FinalIK__InteractionObject__Message& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__InteractionObject__Message& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__InteractionObject__Message& operator=(RootMotion__FinalIK__InteractionObject__Message&& o) noexcept = default;
  constexpr RootMotion__FinalIK__InteractionObject__Message& operator=(RootMotion__FinalIK__InteractionObject__Message const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_function, put=__set_function))  function;

constexpr void __set_function(::StringW value) ;

constexpr ::StringW __get_function() const;

 UnityEngine::GameObject __declspec(property(get=__get_recipient, put=__set_recipient))  recipient;

constexpr void __set_recipient(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_recipient() const;

/// @brief Field empty offset 0
static constexpr ::ConstString  empty{u""};


// Methods

/// @brief Method Send addr 0x11fb35c size 0xf8 virtual false final false
 void Send(UnityEngine::Transform t) ;

// Ctor Parameters []
explicit RootMotion__FinalIK__InteractionObject__Message() ;

/// @brief Method .ctor addr 0x11fb45c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: ::AnimatorEvent
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12541))
// CS Name: RootMotion.FinalIK.InteractionObject::AnimatorEvent
class CORDL_TYPE RootMotion__FinalIK__InteractionObject__AnimatorEvent : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~RootMotion__FinalIK__InteractionObject__AnimatorEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__InteractionObject__AnimatorEvent", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__InteractionObject__AnimatorEvent(RootMotion__FinalIK__InteractionObject__AnimatorEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__InteractionObject__AnimatorEvent", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__InteractionObject__AnimatorEvent(RootMotion__FinalIK__InteractionObject__AnimatorEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__InteractionObject__AnimatorEvent(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RootMotion__FinalIK__InteractionObject__AnimatorEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__InteractionObject__AnimatorEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__InteractionObject__AnimatorEvent& operator=(RootMotion__FinalIK__InteractionObject__AnimatorEvent&& o) noexcept = default;
  constexpr RootMotion__FinalIK__InteractionObject__AnimatorEvent& operator=(RootMotion__FinalIK__InteractionObject__AnimatorEvent const& o) noexcept = default;
                


// Fields

 UnityEngine::Animator __declspec(property(get=__get_animator, put=__set_animator))  animator;

constexpr void __set_animator(UnityEngine::Animator value) ;

constexpr UnityEngine::Animator __get_animator() const;

 UnityEngine::Animation __declspec(property(get=__get_animation, put=__set_animation))  animation;

constexpr void __set_animation(UnityEngine::Animation value) ;

constexpr UnityEngine::Animation __get_animation() const;

 ::StringW __declspec(property(get=__get_animationState, put=__set_animationState))  animationState;

constexpr void __set_animationState(::StringW value) ;

constexpr ::StringW __get_animationState() const;

 float_t __declspec(property(get=__get_crossfadeTime, put=__set_crossfadeTime))  crossfadeTime;

constexpr void __set_crossfadeTime(float_t value) ;

constexpr float_t __get_crossfadeTime() const;

 int32_t __declspec(property(get=__get_layer, put=__set_layer))  layer;

constexpr void __set_layer(int32_t value) ;

constexpr int32_t __get_layer() const;

 bool __declspec(property(get=__get_resetNormalizedTime, put=__set_resetNormalizedTime))  resetNormalizedTime;

constexpr void __set_resetNormalizedTime(bool value) ;

constexpr bool __get_resetNormalizedTime() const;

/// @brief Field empty offset 0
static constexpr ::ConstString  empty{u""};


// Methods

/// @brief Method Activate addr 0x11fb280 size 0xdc virtual false final false
 void Activate(bool pickUp) ;

/// @brief Method Activate addr 0x11fb464 size 0xb0 virtual false final false
 void Activate(UnityEngine::Animator animator) ;

/// @brief Method Activate addr 0x11fb514 size 0xd8 virtual false final false
 void Activate(UnityEngine::Animation animation) ;

// Ctor Parameters []
explicit RootMotion__FinalIK__InteractionObject__AnimatorEvent() ;

/// @brief Method .ctor addr 0x11fb5ec size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: ::Type
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12542))
// CS Name: RootMotion.FinalIK.InteractionObject::WeightCurve::Type
struct CORDL_TYPE RootMotion__FinalIK__InteractionObject__WeightCurve__Type : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RootMotion__FinalIK__InteractionObject__WeightCurve__Type(int32_t value__) noexcept;


                    constexpr RootMotion__FinalIK__InteractionObject__WeightCurve__Type(RootMotion__FinalIK__InteractionObject__WeightCurve__Type const&) = default;
                    constexpr RootMotion__FinalIK__InteractionObject__WeightCurve__Type(RootMotion__FinalIK__InteractionObject__WeightCurve__Type&&) = default;
                    constexpr RootMotion__FinalIK__InteractionObject__WeightCurve__Type& operator=(RootMotion__FinalIK__InteractionObject__WeightCurve__Type const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RootMotion__FinalIK__InteractionObject__WeightCurve__Type& operator=(RootMotion__FinalIK__InteractionObject__WeightCurve__Type&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__InteractionObject__WeightCurve__Type(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __RootMotion__FinalIK__InteractionObject__WeightCurve__Type_Unwrapped : int32_t {
__PositionWeight = 0,
__RotationWeight = 1,
__PositionOffsetX = 2,
__PositionOffsetY = 3,
__PositionOffsetZ = 4,
__Pull = 5,
__Reach = 6,
__RotateBoneWeight = 7,
__Push = 8,
__PushParent = 9,
__PoserWeight = 10,
__BendGoalWeight = 11,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RootMotion__FinalIK__InteractionObject__WeightCurve__Type_Unwrapped () const noexcept {
return std::bit_cast<__RootMotion__FinalIK__InteractionObject__WeightCurve__Type_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field PositionWeight offset 0
static GlobalNamespace::RootMotion__FinalIK__InteractionObject__WeightCurve__Type const PositionWeight;

/// @brief Field RotationWeight offset 0
static GlobalNamespace::RootMotion__FinalIK__InteractionObject__WeightCurve__Type const RotationWeight;

/// @brief Field PositionOffsetX offset 0
static GlobalNamespace::RootMotion__FinalIK__InteractionObject__WeightCurve__Type const PositionOffsetX;

/// @brief Field PositionOffsetY offset 0
static GlobalNamespace::RootMotion__FinalIK__InteractionObject__WeightCurve__Type const PositionOffsetY;

/// @brief Field PositionOffsetZ offset 0
static GlobalNamespace::RootMotion__FinalIK__InteractionObject__WeightCurve__Type const PositionOffsetZ;

/// @brief Field Pull offset 0
static GlobalNamespace::RootMotion__FinalIK__InteractionObject__WeightCurve__Type const Pull;

/// @brief Field Reach offset 0
static GlobalNamespace::RootMotion__FinalIK__InteractionObject__WeightCurve__Type const Reach;

/// @brief Field RotateBoneWeight offset 0
static GlobalNamespace::RootMotion__FinalIK__InteractionObject__WeightCurve__Type const RotateBoneWeight;

/// @brief Field Push offset 0
static GlobalNamespace::RootMotion__FinalIK__InteractionObject__WeightCurve__Type const Push;

/// @brief Field PushParent offset 0
static GlobalNamespace::RootMotion__FinalIK__InteractionObject__WeightCurve__Type const PushParent;

/// @brief Field PoserWeight offset 0
static GlobalNamespace::RootMotion__FinalIK__InteractionObject__WeightCurve__Type const PoserWeight;

/// @brief Field BendGoalWeight offset 0
static GlobalNamespace::RootMotion__FinalIK__InteractionObject__WeightCurve__Type const BendGoalWeight;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::WeightCurve
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12543))
// CS Name: RootMotion.FinalIK.InteractionObject::WeightCurve
class CORDL_TYPE RootMotion__FinalIK__InteractionObject__WeightCurve : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Type = GlobalNamespace::RootMotion__FinalIK__InteractionObject__WeightCurve__Type;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RootMotion__FinalIK__InteractionObject__WeightCurve() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__InteractionObject__WeightCurve", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__InteractionObject__WeightCurve(RootMotion__FinalIK__InteractionObject__WeightCurve const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__InteractionObject__WeightCurve", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__InteractionObject__WeightCurve(RootMotion__FinalIK__InteractionObject__WeightCurve&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__InteractionObject__WeightCurve(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RootMotion__FinalIK__InteractionObject__WeightCurve& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__InteractionObject__WeightCurve& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__InteractionObject__WeightCurve& operator=(RootMotion__FinalIK__InteractionObject__WeightCurve&& o) noexcept = default;
  constexpr RootMotion__FinalIK__InteractionObject__WeightCurve& operator=(RootMotion__FinalIK__InteractionObject__WeightCurve const& o) noexcept = default;
                


// Fields

 GlobalNamespace::RootMotion__FinalIK__InteractionObject__WeightCurve__Type __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(GlobalNamespace::RootMotion__FinalIK__InteractionObject__WeightCurve__Type value) ;

constexpr GlobalNamespace::RootMotion__FinalIK__InteractionObject__WeightCurve__Type __get_type() const;

 UnityEngine::AnimationCurve __declspec(property(get=__get_curve, put=__set_curve))  curve;

constexpr void __set_curve(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get_curve() const;


// Methods

/// @brief Method GetValue addr 0x11fab90 size 0x1c virtual false final false
 float_t GetValue(float_t timer) ;

// Ctor Parameters []
explicit RootMotion__FinalIK__InteractionObject__WeightCurve() ;

/// @brief Method .ctor addr 0x11fb600 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: ::Multiplier
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12544))
// CS Name: RootMotion.FinalIK.InteractionObject::Multiplier
class CORDL_TYPE RootMotion__FinalIK__InteractionObject__Multiplier : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RootMotion__FinalIK__InteractionObject__Multiplier() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__InteractionObject__Multiplier", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__InteractionObject__Multiplier(RootMotion__FinalIK__InteractionObject__Multiplier const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__InteractionObject__Multiplier", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__InteractionObject__Multiplier(RootMotion__FinalIK__InteractionObject__Multiplier&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__InteractionObject__Multiplier(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RootMotion__FinalIK__InteractionObject__Multiplier& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__InteractionObject__Multiplier& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__InteractionObject__Multiplier& operator=(RootMotion__FinalIK__InteractionObject__Multiplier&& o) noexcept = default;
  constexpr RootMotion__FinalIK__InteractionObject__Multiplier& operator=(RootMotion__FinalIK__InteractionObject__Multiplier const& o) noexcept = default;
                


// Fields

 GlobalNamespace::RootMotion__FinalIK__InteractionObject__WeightCurve__Type __declspec(property(get=__get_curve, put=__set_curve))  curve;

constexpr void __set_curve(GlobalNamespace::RootMotion__FinalIK__InteractionObject__WeightCurve__Type value) ;

constexpr GlobalNamespace::RootMotion__FinalIK__InteractionObject__WeightCurve__Type __get_curve() const;

 float_t __declspec(property(get=__get_multiplier, put=__set_multiplier))  multiplier;

constexpr void __set_multiplier(float_t value) ;

constexpr float_t __get_multiplier() const;

 GlobalNamespace::RootMotion__FinalIK__InteractionObject__WeightCurve__Type __declspec(property(get=__get_result, put=__set_result))  result;

constexpr void __set_result(GlobalNamespace::RootMotion__FinalIK__InteractionObject__WeightCurve__Type value) ;

constexpr GlobalNamespace::RootMotion__FinalIK__InteractionObject__WeightCurve__Type __get_result() const;


// Methods

/// @brief Method GetValue addr 0x11fb198 size 0x30 virtual false final false
 float_t GetValue(RootMotion::FinalIK::RootMotion__FinalIK__InteractionObject__WeightCurve weightCurve, float_t timer) ;

// Ctor Parameters []
explicit RootMotion__FinalIK__InteractionObject__Multiplier() ;

/// @brief Method .ctor addr 0x11fb608 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: RootMotion.FinalIK::InteractionObject
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12545))
// CS Name: RootMotion.FinalIK.InteractionObject
class CORDL_TYPE InteractionObject : public UnityEngine::MonoBehaviour {
public:
// Declarations
using Multiplier = RootMotion::FinalIK::RootMotion__FinalIK__InteractionObject__Multiplier;

using WeightCurve = RootMotion::FinalIK::RootMotion__FinalIK__InteractionObject__WeightCurve;

using AnimatorEvent = RootMotion::FinalIK::RootMotion__FinalIK__InteractionObject__AnimatorEvent;

using Message = RootMotion::FinalIK::RootMotion__FinalIK__InteractionObject__Message;

using InteractionEvent = RootMotion::FinalIK::RootMotion__FinalIK__InteractionObject__InteractionEvent;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~InteractionObject() = default;

// Ctor Parameters [CppParam { name: "", ty: "InteractionObject", modifiers: " const&", def_value: None }]
constexpr InteractionObject(InteractionObject const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InteractionObject", modifiers: "&&", def_value: None }]
constexpr InteractionObject(InteractionObject&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InteractionObject(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr InteractionObject& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InteractionObject& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InteractionObject& operator=(InteractionObject&& o) noexcept = default;
  constexpr InteractionObject& operator=(InteractionObject const& o) noexcept = default;
                


// Fields

 UnityEngine::Transform __declspec(property(get=__get_otherLookAtTarget, put=__set_otherLookAtTarget))  otherLookAtTarget;

constexpr void __set_otherLookAtTarget(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_otherLookAtTarget() const;

 UnityEngine::Transform __declspec(property(get=__get_otherTargetsRoot, put=__set_otherTargetsRoot))  otherTargetsRoot;

constexpr void __set_otherTargetsRoot(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_otherTargetsRoot() const;

 UnityEngine::Transform __declspec(property(get=__get_positionOffsetSpace, put=__set_positionOffsetSpace))  positionOffsetSpace;

constexpr void __set_positionOffsetSpace(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_positionOffsetSpace() const;

 ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__InteractionObject__WeightCurve> __declspec(property(get=__get_weightCurves, put=__set_weightCurves))  weightCurves;

constexpr void __set_weightCurves(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__InteractionObject__WeightCurve> value) ;

constexpr ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__InteractionObject__WeightCurve> __get_weightCurves() const;

 ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__InteractionObject__Multiplier> __declspec(property(get=__get_multipliers, put=__set_multipliers))  multipliers;

constexpr void __set_multipliers(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__InteractionObject__Multiplier> value) ;

constexpr ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__InteractionObject__Multiplier> __get_multipliers() const;

 ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__InteractionObject__InteractionEvent> __declspec(property(get=__get_events, put=__set_events))  events;

constexpr void __set_events(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__InteractionObject__InteractionEvent> value) ;

constexpr ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__InteractionObject__InteractionEvent> __get_events() const;

 float_t __declspec(property(get=__get__length_k__BackingField, put=__set__length_k__BackingField))  _length_k__BackingField;

constexpr void __set__length_k__BackingField(float_t value) ;

constexpr float_t __get__length_k__BackingField() const;

 RootMotion::FinalIK::InteractionSystem __declspec(property(get=__get__lastUsedInteractionSystem_k__BackingField, put=__set__lastUsedInteractionSystem_k__BackingField))  _lastUsedInteractionSystem_k__BackingField;

constexpr void __set__lastUsedInteractionSystem_k__BackingField(RootMotion::FinalIK::InteractionSystem value) ;

constexpr RootMotion::FinalIK::InteractionSystem __get__lastUsedInteractionSystem_k__BackingField() const;

 ::ArrayW<RootMotion::FinalIK::InteractionTarget> __declspec(property(get=__get_targets, put=__set_targets))  targets;

constexpr void __set_targets(::ArrayW<RootMotion::FinalIK::InteractionTarget> value) ;

constexpr ::ArrayW<RootMotion::FinalIK::InteractionTarget> __get_targets() const;


// Properties

 float_t __declspec(property(get=get_length, put=set_length))  length;

 RootMotion::FinalIK::InteractionSystem __declspec(property(get=get_lastUsedInteractionSystem, put=set_lastUsedInteractionSystem))  lastUsedInteractionSystem;

 UnityEngine::Transform __declspec(property(get=get_lookAtTarget))  lookAtTarget;

 UnityEngine::Transform __declspec(property(get=get_targetsRoot))  targetsRoot;


// Methods

/// @brief Method OpenUserManual addr 0x11fa4d8 size 0x44 virtual false final false
 void OpenUserManual() ;

/// @brief Method OpenScriptReference addr 0x11fa51c size 0x44 virtual false final false
 void OpenScriptReference() ;

/// @brief Method OpenTutorial1 addr 0x11fa560 size 0x44 virtual false final false
 void OpenTutorial1() ;

/// @brief Method OpenTutorial2 addr 0x11fa5a4 size 0x44 virtual false final false
 void OpenTutorial2() ;

/// @brief Method OpenTutorial3 addr 0x11fa5e8 size 0x44 virtual false final false
 void OpenTutorial3() ;

/// @brief Method OpenTutorial4 addr 0x11fa62c size 0x44 virtual false final false
 void OpenTutorial4() ;

/// @brief Method SupportGroup addr 0x11fa670 size 0x44 virtual false final false
 void SupportGroup() ;

/// @brief Method ASThread addr 0x11fa6b4 size 0x44 virtual false final false
 void ASThread() ;

/// @brief Method get_length addr 0x11fa6f8 size 0x8 virtual false final false
 float_t get_length() ;

/// @brief Method set_length addr 0x11fa700 size 0x8 virtual false final false
 void set_length(float_t value) ;

/// @brief Method get_lastUsedInteractionSystem addr 0x11fa708 size 0x8 virtual false final false
 RootMotion::FinalIK::InteractionSystem get_lastUsedInteractionSystem() ;

/// @brief Method set_lastUsedInteractionSystem addr 0x11fa710 size 0x8 virtual false final false
 void set_lastUsedInteractionSystem(RootMotion::FinalIK::InteractionSystem value) ;

/// @brief Method Initiate addr 0x11fa718 size 0x1b0 virtual false final false
 void Initiate() ;

/// @brief Method get_lookAtTarget addr 0x11fa8c8 size 0x80 virtual false final false
 UnityEngine::Transform get_lookAtTarget() ;

/// @brief Method GetTarget addr 0x11fa948 size 0x178 virtual false final false
 RootMotion::FinalIK::InteractionTarget GetTarget(RootMotion::FinalIK::FullBodyBipedEffector effectorType, RootMotion::FinalIK::InteractionSystem interactionSystem) ;

/// @brief Method CurveUsed addr 0x11f8490 size 0x94 virtual false final false
 bool CurveUsed(GlobalNamespace::RootMotion__FinalIK__InteractionObject__WeightCurve__Type type) ;

/// @brief Method GetTargets addr 0x11faac0 size 0x8 virtual false final false
 ::ArrayW<RootMotion::FinalIK::InteractionTarget> GetTargets() ;

/// @brief Method GetTarget addr 0x11f834c size 0x13c virtual false final false
 UnityEngine::Transform GetTarget(RootMotion::FinalIK::FullBodyBipedEffector effectorType, ::StringW tag) ;

/// @brief Method OnStartInteraction addr 0x11f8488 size 0x8 virtual false final false
 void OnStartInteraction(RootMotion::FinalIK::InteractionSystem interactionSystem) ;

/// @brief Method Apply addr 0x11f9008 size 0x408 virtual false final false
 void Apply(RootMotion::FinalIK::IKSolverFullBodyBiped solver, RootMotion::FinalIK::FullBodyBipedEffector effector, RootMotion::FinalIK::InteractionTarget target, float_t timer, float_t weight) ;

/// @brief Method GetValue addr 0x11f9848 size 0x20c virtual false final false
 float_t GetValue(GlobalNamespace::RootMotion__FinalIK__InteractionObject__WeightCurve__Type weightCurveType, RootMotion::FinalIK::InteractionTarget target, float_t timer) ;

/// @brief Method get_targetsRoot addr 0x11f9c90 size 0x80 virtual false final false
 UnityEngine::Transform get_targetsRoot() ;

/// @brief Method Start addr 0x11fb1c8 size 0x4 virtual false final false
 void Start() ;

/// @brief Method Apply addr 0x11fabac size 0x590 virtual false final false
 void Apply(RootMotion::FinalIK::IKSolverFullBodyBiped solver, RootMotion::FinalIK::FullBodyBipedEffector effector, GlobalNamespace::RootMotion__FinalIK__InteractionObject__WeightCurve__Type type, float_t value, float_t weight) ;

/// @brief Method GetTarget addr 0x11faac8 size 0x64 virtual false final false
 UnityEngine::Transform GetTarget(RootMotion::FinalIK::FullBodyBipedEffector effectorType) ;

/// @brief Method GetWeightCurveIndex addr 0x11fb13c size 0x5c virtual false final false
 int32_t GetWeightCurveIndex(GlobalNamespace::RootMotion__FinalIK__InteractionObject__WeightCurve__Type weightCurveType) ;

/// @brief Method GetMultiplierIndex addr 0x11fb1cc size 0x5c virtual false final false
 int32_t GetMultiplierIndex(GlobalNamespace::RootMotion__FinalIK__InteractionObject__WeightCurve__Type weightCurveType) ;

// Ctor Parameters []
explicit InteractionObject() ;

/// @brief Method .ctor addr 0x11fb228 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RootMotion__FinalIK__InteractionObject__WeightCurve__Type, "RootMotion.FinalIK", "InteractionObject/WeightCurve/Type");
NEED_NO_BOX(RootMotion::FinalIK::InteractionObject);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::InteractionObject, "RootMotion.FinalIK", "InteractionObject");
NEED_NO_BOX(RootMotion::FinalIK::RootMotion__FinalIK__InteractionObject__AnimatorEvent);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__InteractionObject__AnimatorEvent, "RootMotion.FinalIK", "InteractionObject/AnimatorEvent");
NEED_NO_BOX(RootMotion::FinalIK::RootMotion__FinalIK__InteractionObject__InteractionEvent);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__InteractionObject__InteractionEvent, "RootMotion.FinalIK", "InteractionObject/InteractionEvent");
NEED_NO_BOX(RootMotion::FinalIK::RootMotion__FinalIK__InteractionObject__Message);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__InteractionObject__Message, "RootMotion.FinalIK", "InteractionObject/Message");
NEED_NO_BOX(RootMotion::FinalIK::RootMotion__FinalIK__InteractionObject__Multiplier);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__InteractionObject__Multiplier, "RootMotion.FinalIK", "InteractionObject/Multiplier");
NEED_NO_BOX(RootMotion::FinalIK::RootMotion__FinalIK__InteractionObject__WeightCurve);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__InteractionObject__WeightCurve, "RootMotion.FinalIK", "InteractionObject/WeightCurve");
