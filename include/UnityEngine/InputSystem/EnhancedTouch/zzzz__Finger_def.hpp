#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem::LowLevel {
template<typename TValue>
class InputStateHistory_1;
}
namespace UnityEngine::InputSystem::LowLevel {
struct UnityEngine__InputSystem__LowLevel__InputStateHistory__Record;
}
namespace UnityEngine::InputSystem::LowLevel {
struct TouchState;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
struct Touch;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputUpdateType;
}
namespace UnityEngine::InputSystem {
class Touchscreen;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
struct TouchHistory;
}
// Forward declare root types
namespace UnityEngine::InputSystem::EnhancedTouch {
class Finger;
}
// Type: UnityEngine.InputSystem.EnhancedTouch::Finger
namespace UnityEngine::InputSystem::EnhancedTouch {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6497))
// CS Name: UnityEngine.InputSystem.EnhancedTouch.Finger
class CORDL_TYPE Finger : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Finger() = default;

// Ctor Parameters [CppParam { name: "", ty: "Finger", modifiers: " const&", def_value: None }]
constexpr Finger(Finger const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Finger", modifiers: "&&", def_value: None }]
constexpr Finger(Finger&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Finger(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Finger& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Finger& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Finger& operator=(Finger&& o) noexcept = default;
  constexpr Finger& operator=(Finger const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Touchscreen __declspec(property(get=__get__screen_k__BackingField, put=__set__screen_k__BackingField))  _screen_k__BackingField;

constexpr void __set__screen_k__BackingField(UnityEngine::InputSystem::Touchscreen value) ;

constexpr UnityEngine::InputSystem::Touchscreen __get__screen_k__BackingField() const;

 int32_t __declspec(property(get=__get__index_k__BackingField, put=__set__index_k__BackingField))  _index_k__BackingField;

constexpr void __set__index_k__BackingField(int32_t value) ;

constexpr int32_t __get__index_k__BackingField() const;

 UnityEngine::InputSystem::LowLevel::InputStateHistory_1<UnityEngine::InputSystem::LowLevel::TouchState> __declspec(property(get=__get_m_StateHistory, put=__set_m_StateHistory))  m_StateHistory;

constexpr void __set_m_StateHistory(UnityEngine::InputSystem::LowLevel::InputStateHistory_1<UnityEngine::InputSystem::LowLevel::TouchState> value) ;

constexpr UnityEngine::InputSystem::LowLevel::InputStateHistory_1<UnityEngine::InputSystem::LowLevel::TouchState> __get_m_StateHistory() const;


// Properties

 UnityEngine::InputSystem::Touchscreen __declspec(property(get=get_screen))  screen;

 int32_t __declspec(property(get=get_index))  index;

 bool __declspec(property(get=get_isActive))  isActive;

 UnityEngine::Vector2 __declspec(property(get=get_screenPosition))  screenPosition;

 UnityEngine::InputSystem::EnhancedTouch::Touch __declspec(property(get=get_lastTouch))  lastTouch;

 UnityEngine::InputSystem::EnhancedTouch::Touch __declspec(property(get=get_currentTouch))  currentTouch;

 UnityEngine::InputSystem::EnhancedTouch::TouchHistory __declspec(property(get=get_touchHistory))  touchHistory;


// Methods

/// @brief Method get_screen addr 0x294e200 size 0x8 virtual false final false
 UnityEngine::InputSystem::Touchscreen get_screen() ;

/// @brief Method get_index addr 0x294e208 size 0x8 virtual false final false
 int32_t get_index() ;

/// @brief Method get_isActive addr 0x294e210 size 0x2c virtual false final false
 bool get_isActive() ;

/// @brief Method get_screenPosition addr 0x294e34c size 0x40 virtual false final false
 UnityEngine::Vector2 get_screenPosition() ;

/// @brief Method get_lastTouch addr 0x294e38c size 0x78 virtual false final false
 UnityEngine::InputSystem::EnhancedTouch::Touch get_lastTouch() ;

/// @brief Method get_currentTouch addr 0x294e23c size 0xc8 virtual false final false
 UnityEngine::InputSystem::EnhancedTouch::Touch get_currentTouch() ;

/// @brief Method get_touchHistory addr 0x294e46c size 0x34 virtual false final false
 UnityEngine::InputSystem::EnhancedTouch::TouchHistory get_touchHistory() ;

static UnityEngine::InputSystem::EnhancedTouch::Finger New_ctor(UnityEngine::InputSystem::Touchscreen screen, int32_t index, UnityEngine::InputSystem::LowLevel::InputUpdateType updateMask) ;

/// @brief Method .ctor addr 0x294e4dc size 0x31c virtual false final false
 void _ctor(UnityEngine::InputSystem::Touchscreen screen, int32_t index, UnityEngine::InputSystem::LowLevel::InputUpdateType updateMask) ;

/// @brief Method ShouldRecordTouch addr 0x294e850 size 0x98 virtual false final false
static bool ShouldRecordTouch(UnityEngine::InputSystem::InputControl control, double_t time, UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) ;

/// @brief Method OnTouchRecorded addr 0x294e91c size 0x2ac virtual false final false
 void OnTouchRecorded(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory__Record record) ;

/// @brief Method FindTouch addr 0x294ebf4 size 0x338 virtual false final false
 UnityEngine::InputSystem::EnhancedTouch::Touch FindTouch(uint32_t uniqueId) ;

/// @brief Method GetTouchHistory addr 0x294ef2c size 0x1f0 virtual false final false
 UnityEngine::InputSystem::EnhancedTouch::TouchHistory GetTouchHistory(UnityEngine::InputSystem::EnhancedTouch::Touch touch) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::EnhancedTouch
NEED_NO_BOX(UnityEngine::InputSystem::EnhancedTouch::Finger);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::EnhancedTouch::Finger, "UnityEngine.InputSystem.EnhancedTouch", "Finger");
