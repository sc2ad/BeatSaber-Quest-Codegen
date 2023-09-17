#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::InputSystem::Utilities {
template<typename T>
class ____UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore;
}
namespace System {
class Action;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
class Finger;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::InputSystem::Utilities {
class ISavedState;
}
namespace UnityEngine::InputSystem {
class Touchscreen;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::InputSystem::LowLevel {
template<typename TValue>
struct ____UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record;
}
namespace UnityEngine::InputSystem {
struct TouchPhase;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::InputSystem::LowLevel {
struct TouchState;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
struct TouchHistory;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputUpdateType;
}
namespace UnityEngine::InputSystem::LowLevel {
template<typename TValue>
class InputStateHistory_1;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct InlinedArray_1;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TDelegate>
struct CallbackArray_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem::EnhancedTouch {
class ____UnityEngine__InputSystem__EnhancedTouch__Touch____c;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
struct Touch;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
struct ____UnityEngine__InputSystem__EnhancedTouch__Touch__ExtraDataPerTouchState;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
struct ____UnityEngine__InputSystem__EnhancedTouch__Touch__FingerAndTouchState;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
struct ____UnityEngine__InputSystem__EnhancedTouch__Touch__GlobalState;
}
// Type: ::GlobalState
namespace UnityEngine::InputSystem::EnhancedTouch {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6498))
// CS Name: UnityEngine.InputSystem.EnhancedTouch.Touch::GlobalState
struct CORDL_TYPE ____UnityEngine__InputSystem__EnhancedTouch__Touch__GlobalState : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "touchscreens", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Touchscreen>", modifiers: "", def_value: None }, CppParam { name: "historyLengthPerFinger", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "onFingerDown", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger>>", modifiers: "", def_value: None }, CppParam { name: "onFingerMove", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger>>", modifiers: "", def_value: None }, CppParam { name: "onFingerUp", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger>>", modifiers: "", def_value: None }, CppParam { name: "playerState", ty: "::UnityEngine::InputSystem::EnhancedTouch::____UnityEngine__InputSystem__EnhancedTouch__Touch__FingerAndTouchState", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__EnhancedTouch__Touch__GlobalState(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Touchscreen> touchscreens, int32_t historyLengthPerFinger, ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger>> onFingerDown, ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger>> onFingerMove, ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger>> onFingerUp, ::UnityEngine::InputSystem::EnhancedTouch::____UnityEngine__InputSystem__EnhancedTouch__Touch__FingerAndTouchState playerState) noexcept;


                    constexpr ____UnityEngine__InputSystem__EnhancedTouch__Touch__GlobalState(____UnityEngine__InputSystem__EnhancedTouch__Touch__GlobalState const&) = default;
                    constexpr ____UnityEngine__InputSystem__EnhancedTouch__Touch__GlobalState(____UnityEngine__InputSystem__EnhancedTouch__Touch__GlobalState&&) = default;
                    constexpr ____UnityEngine__InputSystem__EnhancedTouch__Touch__GlobalState& operator=(____UnityEngine__InputSystem__EnhancedTouch__Touch__GlobalState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__EnhancedTouch__Touch__GlobalState& operator=(____UnityEngine__InputSystem__EnhancedTouch__Touch__GlobalState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x150};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__EnhancedTouch__Touch__GlobalState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Touchscreen> __declspec(property(get=__get_touchscreens, put=__set_touchscreens))  touchscreens;

constexpr void __set_touchscreens(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Touchscreen> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Touchscreen> __get_touchscreens() const;

 int32_t __declspec(property(get=__get_historyLengthPerFinger, put=__set_historyLengthPerFinger))  historyLengthPerFinger;

constexpr void __set_historyLengthPerFinger(int32_t value) ;

constexpr int32_t __get_historyLengthPerFinger() const;

 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger>> __declspec(property(get=__get_onFingerDown, put=__set_onFingerDown))  onFingerDown;

constexpr void __set_onFingerDown(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger>> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger>> __get_onFingerDown() const;

 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger>> __declspec(property(get=__get_onFingerMove, put=__set_onFingerMove))  onFingerMove;

constexpr void __set_onFingerMove(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger>> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger>> __get_onFingerMove() const;

 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger>> __declspec(property(get=__get_onFingerUp, put=__set_onFingerUp))  onFingerUp;

constexpr void __set_onFingerUp(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger>> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger>> __get_onFingerUp() const;

 ::UnityEngine::InputSystem::EnhancedTouch::____UnityEngine__InputSystem__EnhancedTouch__Touch__FingerAndTouchState __declspec(property(get=__get_playerState, put=__set_playerState))  playerState;

constexpr void __set_playerState(::UnityEngine::InputSystem::EnhancedTouch::____UnityEngine__InputSystem__EnhancedTouch__Touch__FingerAndTouchState value) ;

constexpr ::UnityEngine::InputSystem::EnhancedTouch::____UnityEngine__InputSystem__EnhancedTouch__Touch__FingerAndTouchState __get_playerState() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::EnhancedTouch
// Type: ::FingerAndTouchState
namespace UnityEngine::InputSystem::EnhancedTouch {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6499))
// CS Name: UnityEngine.InputSystem.EnhancedTouch.Touch::FingerAndTouchState
struct CORDL_TYPE ____UnityEngine__InputSystem__EnhancedTouch__Touch__FingerAndTouchState : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "updateMask", ty: "::UnityEngine::InputSystem::LowLevel::InputUpdateType", modifiers: "", def_value: None }, CppParam { name: "fingers", ty: "::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger>", modifiers: "", def_value: None }, CppParam { name: "activeFingers", ty: "::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger>", modifiers: "", def_value: None }, CppParam { name: "activeTouches", ty: "::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch>", modifiers: "", def_value: None }, CppParam { name: "activeFingerCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "activeTouchCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "totalFingerCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lastId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "haveBuiltActiveTouches", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "haveActiveTouchesNeedingRefreshNextUpdate", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "activeTouchState", ty: "::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__EnhancedTouch__Touch__FingerAndTouchState(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateMask, ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger> fingers, ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger> activeFingers, ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch> activeTouches, int32_t activeFingerCount, int32_t activeTouchCount, int32_t totalFingerCount, uint32_t lastId, bool haveBuiltActiveTouches, bool haveActiveTouchesNeedingRefreshNextUpdate, ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState> activeTouchState) noexcept;


                    constexpr ____UnityEngine__InputSystem__EnhancedTouch__Touch__FingerAndTouchState(____UnityEngine__InputSystem__EnhancedTouch__Touch__FingerAndTouchState const&) = default;
                    constexpr ____UnityEngine__InputSystem__EnhancedTouch__Touch__FingerAndTouchState(____UnityEngine__InputSystem__EnhancedTouch__Touch__FingerAndTouchState&&) = default;
                    constexpr ____UnityEngine__InputSystem__EnhancedTouch__Touch__FingerAndTouchState& operator=(____UnityEngine__InputSystem__EnhancedTouch__Touch__FingerAndTouchState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__EnhancedTouch__Touch__FingerAndTouchState& operator=(____UnityEngine__InputSystem__EnhancedTouch__Touch__FingerAndTouchState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__EnhancedTouch__Touch__FingerAndTouchState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::InputSystem::LowLevel::InputUpdateType __declspec(property(get=__get_updateMask, put=__set_updateMask))  updateMask;

constexpr void __set_updateMask(::UnityEngine::InputSystem::LowLevel::InputUpdateType value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateType __get_updateMask() const;

 ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger> __declspec(property(get=__get_fingers, put=__set_fingers))  fingers;

constexpr void __set_fingers(::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger> value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger> __get_fingers() const;

 ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger> __declspec(property(get=__get_activeFingers, put=__set_activeFingers))  activeFingers;

constexpr void __set_activeFingers(::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger> value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger> __get_activeFingers() const;

 ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch> __declspec(property(get=__get_activeTouches, put=__set_activeTouches))  activeTouches;

constexpr void __set_activeTouches(::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch> value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch> __get_activeTouches() const;

 int32_t __declspec(property(get=__get_activeFingerCount, put=__set_activeFingerCount))  activeFingerCount;

constexpr void __set_activeFingerCount(int32_t value) ;

constexpr int32_t __get_activeFingerCount() const;

 int32_t __declspec(property(get=__get_activeTouchCount, put=__set_activeTouchCount))  activeTouchCount;

constexpr void __set_activeTouchCount(int32_t value) ;

constexpr int32_t __get_activeTouchCount() const;

 int32_t __declspec(property(get=__get_totalFingerCount, put=__set_totalFingerCount))  totalFingerCount;

constexpr void __set_totalFingerCount(int32_t value) ;

constexpr int32_t __get_totalFingerCount() const;

 uint32_t __declspec(property(get=__get_lastId, put=__set_lastId))  lastId;

constexpr void __set_lastId(uint32_t value) ;

constexpr uint32_t __get_lastId() const;

 bool __declspec(property(get=__get_haveBuiltActiveTouches, put=__set_haveBuiltActiveTouches))  haveBuiltActiveTouches;

constexpr void __set_haveBuiltActiveTouches(bool value) ;

constexpr bool __get_haveBuiltActiveTouches() const;

 bool __declspec(property(get=__get_haveActiveTouchesNeedingRefreshNextUpdate, put=__set_haveActiveTouchesNeedingRefreshNextUpdate))  haveActiveTouchesNeedingRefreshNextUpdate;

constexpr void __set_haveActiveTouchesNeedingRefreshNextUpdate(bool value) ;

constexpr bool __get_haveActiveTouchesNeedingRefreshNextUpdate() const;

 ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState> __declspec(property(get=__get_activeTouchState, put=__set_activeTouchState))  activeTouchState;

constexpr void __set_activeTouchState(::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState> value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState> __get_activeTouchState() const;


// Methods

/// @brief Method AddFingers addr 0x29506d0 size 0x118 virtual false final false
 void AddFingers(::UnityEngine::InputSystem::Touchscreen screen) ;

/// @brief Method RemoveFingers addr 0x29508cc size 0x144 virtual false final false
 void RemoveFingers(::UnityEngine::InputSystem::Touchscreen screen) ;

/// @brief Method Destroy addr 0x2950d2c size 0x84 virtual false final false
 void Destroy() ;

/// @brief Method UpdateActiveFingers addr 0x294fbe0 size 0xf4 virtual false final false
 void UpdateActiveFingers() ;

/// @brief Method UpdateActiveTouches addr 0x294f4f0 size 0x5c0 virtual false final false
 void UpdateActiveTouches() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::EnhancedTouch
// Type: ::ExtraDataPerTouchState
namespace UnityEngine::InputSystem::EnhancedTouch {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6500))
// CS Name: UnityEngine.InputSystem.EnhancedTouch.Touch::ExtraDataPerTouchState
struct CORDL_TYPE ____UnityEngine__InputSystem__EnhancedTouch__Touch__ExtraDataPerTouchState : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "accumulatedDelta", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "uniqueId", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__EnhancedTouch__Touch__ExtraDataPerTouchState(::UnityEngine::Vector2 accumulatedDelta, uint32_t uniqueId) noexcept;


                    constexpr ____UnityEngine__InputSystem__EnhancedTouch__Touch__ExtraDataPerTouchState(____UnityEngine__InputSystem__EnhancedTouch__Touch__ExtraDataPerTouchState const&) = default;
                    constexpr ____UnityEngine__InputSystem__EnhancedTouch__Touch__ExtraDataPerTouchState(____UnityEngine__InputSystem__EnhancedTouch__Touch__ExtraDataPerTouchState&&) = default;
                    constexpr ____UnityEngine__InputSystem__EnhancedTouch__Touch__ExtraDataPerTouchState& operator=(____UnityEngine__InputSystem__EnhancedTouch__Touch__ExtraDataPerTouchState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__EnhancedTouch__Touch__ExtraDataPerTouchState& operator=(____UnityEngine__InputSystem__EnhancedTouch__Touch__ExtraDataPerTouchState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__EnhancedTouch__Touch__ExtraDataPerTouchState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::Vector2 __declspec(property(get=__get_accumulatedDelta, put=__set_accumulatedDelta))  accumulatedDelta;

constexpr void __set_accumulatedDelta(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_accumulatedDelta() const;

 uint32_t __declspec(property(get=__get_uniqueId, put=__set_uniqueId))  uniqueId;

constexpr void __set_uniqueId(uint32_t value) ;

constexpr uint32_t __get_uniqueId() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::EnhancedTouch
// Type: ::<>c
namespace UnityEngine::InputSystem::EnhancedTouch {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6501))
// CS Name: UnityEngine.InputSystem.EnhancedTouch.Touch::<>c
class CORDL_TYPE ____UnityEngine__InputSystem__EnhancedTouch__Touch____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____UnityEngine__InputSystem__EnhancedTouch__Touch____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__EnhancedTouch__Touch____c", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__InputSystem__EnhancedTouch__Touch____c(____UnityEngine__InputSystem__EnhancedTouch__Touch____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__EnhancedTouch__Touch____c", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__InputSystem__EnhancedTouch__Touch____c(____UnityEngine__InputSystem__EnhancedTouch__Touch____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__EnhancedTouch__Touch____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__InputSystem__EnhancedTouch__Touch____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__EnhancedTouch__Touch____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__EnhancedTouch__Touch____c& operator=(____UnityEngine__InputSystem__EnhancedTouch__Touch____c&& o) noexcept = default;
  constexpr ____UnityEngine__InputSystem__EnhancedTouch__Touch____c& operator=(____UnityEngine__InputSystem__EnhancedTouch__Touch____c const& o) noexcept = default;
                


// Fields

static ::UnityEngine::InputSystem::EnhancedTouch::____UnityEngine__InputSystem__EnhancedTouch__Touch____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::UnityEngine::InputSystem::EnhancedTouch::____UnityEngine__InputSystem__EnhancedTouch__Touch____c value) ;

static ::UnityEngine::InputSystem::EnhancedTouch::____UnityEngine__InputSystem__EnhancedTouch__Touch____c __get___9() ;

static ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::EnhancedTouch::____UnityEngine__InputSystem__EnhancedTouch__Touch__GlobalState> __declspec(property(get=__get___9__78_0, put=__set___9__78_0))  __9__78_0;

static void __set___9__78_0(::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::EnhancedTouch::____UnityEngine__InputSystem__EnhancedTouch__Touch__GlobalState> value) ;

static ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::EnhancedTouch::____UnityEngine__InputSystem__EnhancedTouch__Touch__GlobalState> __get___9__78_0() ;

static ::System::Action __declspec(property(get=__get___9__78_1, put=__set___9__78_1))  __9__78_1;

static void __set___9__78_1(::System::Action value) ;

static ::System::Action __get___9__78_1() ;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__InputSystem__EnhancedTouch__Touch____c() ;

/// @brief Method .ctor addr 0x2950e1c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <SaveAndResetState>b__78_0 addr 0x2950e24 size 0x84 virtual false final false
 void _SaveAndResetState_b__78_0(ByRef<::UnityEngine::InputSystem::EnhancedTouch::____UnityEngine__InputSystem__EnhancedTouch__Touch__GlobalState> state) ;

/// @brief Method <SaveAndResetState>b__78_1 addr 0x2950ea8 size 0x4 virtual false final false
 void _SaveAndResetState_b__78_1() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::EnhancedTouch
// Type: UnityEngine.InputSystem.EnhancedTouch::Touch
namespace UnityEngine::InputSystem::EnhancedTouch {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6502))
// CS Name: UnityEngine.InputSystem.EnhancedTouch.Touch
struct CORDL_TYPE Touch : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using __c = ::UnityEngine::InputSystem::EnhancedTouch::____UnityEngine__InputSystem__EnhancedTouch__Touch____c;

using ExtraDataPerTouchState = ::UnityEngine::InputSystem::EnhancedTouch::____UnityEngine__InputSystem__EnhancedTouch__Touch__ExtraDataPerTouchState;

using FingerAndTouchState = ::UnityEngine::InputSystem::EnhancedTouch::____UnityEngine__InputSystem__EnhancedTouch__Touch__FingerAndTouchState;

using GlobalState = ::UnityEngine::InputSystem::EnhancedTouch::____UnityEngine__InputSystem__EnhancedTouch__Touch__GlobalState;

/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>
constexpr operator  ::System::IEquatable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>() const;

// Ctor Parameters [CppParam { name: "m_Finger", ty: "::UnityEngine::InputSystem::EnhancedTouch::Finger", modifiers: "", def_value: None }, CppParam { name: "m_TouchRecord", ty: "::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState>", modifiers: "", def_value: None }]
constexpr Touch(::UnityEngine::InputSystem::EnhancedTouch::Finger m_Finger, ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState> m_TouchRecord) noexcept;


                    constexpr Touch(Touch const&) = default;
                    constexpr Touch(Touch&&) = default;
                    constexpr Touch& operator=(Touch const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Touch& operator=(Touch&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Touch(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::InputSystem::EnhancedTouch::Finger __declspec(property(get=__get_m_Finger, put=__set_m_Finger))  m_Finger;

constexpr void __set_m_Finger(::UnityEngine::InputSystem::EnhancedTouch::Finger value) ;

constexpr ::UnityEngine::InputSystem::EnhancedTouch::Finger __get_m_Finger() const;

 ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState> __declspec(property(get=__get_m_TouchRecord, put=__set_m_TouchRecord))  m_TouchRecord;

constexpr void __set_m_TouchRecord(::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState> value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState> __get_m_TouchRecord() const;

static ::UnityEngine::InputSystem::EnhancedTouch::____UnityEngine__InputSystem__EnhancedTouch__Touch__GlobalState __declspec(property(get=__get_s_GlobalState, put=__set_s_GlobalState))  s_GlobalState;

static void __set_s_GlobalState(::UnityEngine::InputSystem::EnhancedTouch::____UnityEngine__InputSystem__EnhancedTouch__Touch__GlobalState value) ;

static ::UnityEngine::InputSystem::EnhancedTouch::____UnityEngine__InputSystem__EnhancedTouch__Touch__GlobalState __get_s_GlobalState() ;


// Properties

 bool __declspec(property(get=get_valid))  valid;

 ::UnityEngine::InputSystem::EnhancedTouch::Finger __declspec(property(get=get_finger))  finger;

 ::UnityEngine::InputSystem::TouchPhase __declspec(property(get=get_phase))  phase;

 bool __declspec(property(get=get_began))  began;

 bool __declspec(property(get=get_inProgress))  inProgress;

 bool __declspec(property(get=get_ended))  ended;

 int32_t __declspec(property(get=get_touchId))  touchId;

 float_t __declspec(property(get=get_pressure))  pressure;

 ::UnityEngine::Vector2 __declspec(property(get=get_radius))  radius;

 double_t __declspec(property(get=get_startTime))  startTime;

 double_t __declspec(property(get=get_time))  time;

 ::UnityEngine::InputSystem::Touchscreen __declspec(property(get=get_screen))  screen;

 ::UnityEngine::Vector2 __declspec(property(get=get_screenPosition))  screenPosition;

 ::UnityEngine::Vector2 __declspec(property(get=get_startScreenPosition))  startScreenPosition;

 ::UnityEngine::Vector2 __declspec(property(get=get_delta))  delta;

 int32_t __declspec(property(get=get_tapCount))  tapCount;

 bool __declspec(property(get=get_isTap))  isTap;

 bool __declspec(property(get=get_isInProgress))  isInProgress;

 uint32_t __declspec(property(get=get_updateStepCount))  updateStepCount;

 uint32_t __declspec(property(get=get_uniqueId))  uniqueId;

 ::UnityEngine::InputSystem::LowLevel::TouchState __declspec(property(get=get_state))  state;

 ::UnityEngine::InputSystem::EnhancedTouch::____UnityEngine__InputSystem__EnhancedTouch__Touch__ExtraDataPerTouchState __declspec(property(get=get_extraData))  extraData;

 ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory __declspec(property(get=get_history))  history;

static ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Touch> __declspec(property(get=get_activeTouches))  activeTouches;

static ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Finger> __declspec(property(get=get_fingers))  fingers;

static ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Finger> __declspec(property(get=get_activeFingers))  activeFingers;

static ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Touchscreen> __declspec(property(get=get_screens))  screens;

static int32_t __declspec(property(get=get_maxHistoryLengthPerFinger))  maxHistoryLengthPerFinger;


// Methods

/// @brief Method get_valid addr 0x294e304 size 0x48 virtual false final false
 bool get_valid() ;

/// @brief Method get_finger addr 0x294f158 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::EnhancedTouch::Finger get_finger() ;

/// @brief Method get_phase addr 0x294f144 size 0x14 virtual false final false
 ::UnityEngine::InputSystem::TouchPhase get_phase() ;

/// @brief Method get_began addr 0x294f1a8 size 0x1c virtual false final false
 bool get_began() ;

/// @brief Method get_inProgress addr 0x294f1c4 size 0x50 virtual false final false
 bool get_inProgress() ;

/// @brief Method get_ended addr 0x294f214 size 0x3c virtual false final false
 bool get_ended() ;

/// @brief Method get_touchId addr 0x294f130 size 0x14 virtual false final false
 int32_t get_touchId() ;

/// @brief Method get_pressure addr 0x294f250 size 0x14 virtual false final false
 float_t get_pressure() ;

/// @brief Method get_radius addr 0x294f264 size 0x14 virtual false final false
 ::UnityEngine::Vector2 get_radius() ;

/// @brief Method get_startTime addr 0x294f278 size 0x14 virtual false final false
 double_t get_startTime() ;

/// @brief Method get_time addr 0x294f28c size 0x48 virtual false final false
 double_t get_time() ;

/// @brief Method get_screen addr 0x294f2d4 size 0x1c virtual false final false
 ::UnityEngine::InputSystem::Touchscreen get_screen() ;

/// @brief Method get_screenPosition addr 0x294e404 size 0x14 virtual false final false
 ::UnityEngine::Vector2 get_screenPosition() ;

/// @brief Method get_startScreenPosition addr 0x294f2f0 size 0x14 virtual false final false
 ::UnityEngine::Vector2 get_startScreenPosition() ;

/// @brief Method get_delta addr 0x294f304 size 0x14 virtual false final false
 ::UnityEngine::Vector2 get_delta() ;

/// @brief Method get_tapCount addr 0x294f318 size 0x14 virtual false final false
 int32_t get_tapCount() ;

/// @brief Method get_isTap addr 0x294f32c size 0x18 virtual false final false
 bool get_isTap() ;

/// @brief Method get_isInProgress addr 0x294e424 size 0x34 virtual false final false
 bool get_isInProgress() ;

/// @brief Method get_updateStepCount addr 0x294e458 size 0x14 virtual false final false
 uint32_t get_updateStepCount() ;

/// @brief Method get_uniqueId addr 0x294f11c size 0x14 virtual false final false
 uint32_t get_uniqueId() ;

/// @brief Method get_state addr 0x294f160 size 0x48 virtual false final false
 ByRef<::UnityEngine::InputSystem::LowLevel::TouchState> get_state() ;

/// @brief Method get_extraData addr 0x294f350 size 0x48 virtual false final false
 ByRef<::UnityEngine::InputSystem::EnhancedTouch::____UnityEngine__InputSystem__EnhancedTouch__Touch__ExtraDataPerTouchState> get_extraData() ;

/// @brief Method get_history addr 0x294f398 size 0xb8 virtual false final false
 ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory get_history() ;

/// @brief Method get_activeTouches addr 0x294f450 size 0xa0 virtual false final false
static ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Touch> get_activeTouches() ;

/// @brief Method get_fingers addr 0x294fab0 size 0x90 virtual false final false
static ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Finger> get_fingers() ;

/// @brief Method get_activeFingers addr 0x294fb40 size 0xa0 virtual false final false
static ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Finger> get_activeFingers() ;

/// @brief Method get_screens addr 0x294fcd4 size 0x8c virtual false final false
static ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Touchscreen> get_screens() ;

/// @brief Method add_onFingerDown addr 0x294fd60 size 0xc8 virtual false final false
static void add_onFingerDown(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger> value) ;

/// @brief Method remove_onFingerDown addr 0x294fe28 size 0xc8 virtual false final false
static void remove_onFingerDown(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger> value) ;

/// @brief Method add_onFingerUp addr 0x294fef0 size 0xc8 virtual false final false
static void add_onFingerUp(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger> value) ;

/// @brief Method remove_onFingerUp addr 0x294ffb8 size 0xc8 virtual false final false
static void remove_onFingerUp(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger> value) ;

/// @brief Method add_onFingerMove addr 0x2950080 size 0xc8 virtual false final false
static void add_onFingerMove(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger> value) ;

/// @brief Method remove_onFingerMove addr 0x2950148 size 0xc8 virtual false final false
static void remove_onFingerMove(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger> value) ;

/// @brief Method get_maxHistoryLengthPerFinger addr 0x294e7f8 size 0x58 virtual false final false
static int32_t get_maxHistoryLengthPerFinger() ;

/// @brief Method .ctor addr 0x294e418 size 0xc virtual false final false
 void _ctor(::UnityEngine::InputSystem::EnhancedTouch::Finger finger, ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState> touchRecord) ;

/// @brief Method ToString addr 0x2950210 size 0x2bc virtual true final false
 ::StringW ToString() ;

/// @brief Method Equals addr 0x29504cc size 0x74 virtual true final true
 bool Equals(::UnityEngine::InputSystem::EnhancedTouch::Touch other) ;

/// @brief Method Equals addr 0x2950540 size 0x90 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x29505d0 size 0x74 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method AddTouchscreen addr 0x2950644 size 0x8c virtual false final false
static void AddTouchscreen(::UnityEngine::InputSystem::Touchscreen screen) ;

/// @brief Method RemoveTouchscreen addr 0x29507e8 size 0xe4 virtual false final false
static void RemoveTouchscreen(::UnityEngine::InputSystem::Touchscreen screen) ;

/// @brief Method BeginUpdate addr 0x2950a10 size 0x74 virtual false final false
static void BeginUpdate() ;

/// @brief Method CreateGlobalState addr 0x2950a84 size 0x2c virtual false final false
static ::UnityEngine::InputSystem::EnhancedTouch::____UnityEngine__InputSystem__EnhancedTouch__Touch__GlobalState CreateGlobalState() ;

/// @brief Method SaveAndResetState addr 0x2950ab0 size 0x218 virtual false final false
static ::UnityEngine::InputSystem::Utilities::ISavedState SaveAndResetState() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::EnhancedTouch
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::EnhancedTouch::____UnityEngine__InputSystem__EnhancedTouch__Touch____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::EnhancedTouch::____UnityEngine__InputSystem__EnhancedTouch__Touch____c, "UnityEngine.InputSystem.EnhancedTouch", "Touch/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::EnhancedTouch::Touch, "UnityEngine.InputSystem.EnhancedTouch", "Touch");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::EnhancedTouch::____UnityEngine__InputSystem__EnhancedTouch__Touch__ExtraDataPerTouchState, "UnityEngine.InputSystem.EnhancedTouch", "Touch/ExtraDataPerTouchState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::EnhancedTouch::____UnityEngine__InputSystem__EnhancedTouch__Touch__FingerAndTouchState, "UnityEngine.InputSystem.EnhancedTouch", "Touch/FingerAndTouchState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::EnhancedTouch::____UnityEngine__InputSystem__EnhancedTouch__Touch__GlobalState, "UnityEngine.InputSystem.EnhancedTouch", "Touch/GlobalState");
