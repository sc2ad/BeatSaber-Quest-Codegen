#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateTypeInfo;
}
namespace UnityEngine::InputSystem {
struct TouchPhase;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct TouchState;
}
// Type: UnityEngine.InputSystem.LowLevel::TouchState
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6597))
// CS Name: UnityEngine.InputSystem.LowLevel.TouchState
struct CORDL_TYPE TouchState : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo
constexpr operator  UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo() const;

// Ctor Parameters [CppParam { name: "touchId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "position", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "delta", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "pressure", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "radius", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "phaseId", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "tapCount", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "displayIndex", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "updateStepCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "startTime", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "startPosition", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }]
constexpr TouchState(int32_t touchId, UnityEngine::Vector2 position, UnityEngine::Vector2 delta, float_t pressure, UnityEngine::Vector2 radius, uint8_t phaseId, uint8_t tapCount, uint8_t displayIndex, uint8_t flags, uint32_t updateStepCount, double_t startTime, UnityEngine::Vector2 startPosition) noexcept;


                    constexpr TouchState(TouchState const&) = default;
                    constexpr TouchState(TouchState&&) = default;
                    constexpr TouchState& operator=(TouchState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TouchState& operator=(TouchState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TouchState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field kSizeInBytes offset 0
static constexpr int32_t  kSizeInBytes{56};

 int32_t __declspec(property(get=__get_touchId, put=__set_touchId))  touchId;

constexpr void __set_touchId(int32_t value) ;

constexpr int32_t __get_touchId() const;

 UnityEngine::Vector2 __declspec(property(get=__get_position, put=__set_position))  position;

constexpr void __set_position(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_position() const;

 UnityEngine::Vector2 __declspec(property(get=__get_delta, put=__set_delta))  delta;

constexpr void __set_delta(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_delta() const;

 float_t __declspec(property(get=__get_pressure, put=__set_pressure))  pressure;

constexpr void __set_pressure(float_t value) ;

constexpr float_t __get_pressure() const;

 UnityEngine::Vector2 __declspec(property(get=__get_radius, put=__set_radius))  radius;

constexpr void __set_radius(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_radius() const;

 uint8_t __declspec(property(get=__get_phaseId, put=__set_phaseId))  phaseId;

constexpr void __set_phaseId(uint8_t value) ;

constexpr uint8_t __get_phaseId() const;

 uint8_t __declspec(property(get=__get_tapCount, put=__set_tapCount))  tapCount;

constexpr void __set_tapCount(uint8_t value) ;

constexpr uint8_t __get_tapCount() const;

 uint8_t __declspec(property(get=__get_displayIndex, put=__set_displayIndex))  displayIndex;

constexpr void __set_displayIndex(uint8_t value) ;

constexpr uint8_t __get_displayIndex() const;

 uint8_t __declspec(property(get=__get_flags, put=__set_flags))  flags;

constexpr void __set_flags(uint8_t value) ;

constexpr uint8_t __get_flags() const;

 uint32_t __declspec(property(get=__get_updateStepCount, put=__set_updateStepCount))  updateStepCount;

constexpr void __set_updateStepCount(uint32_t value) ;

constexpr uint32_t __get_updateStepCount() const;

 double_t __declspec(property(get=__get_startTime, put=__set_startTime))  startTime;

constexpr void __set_startTime(double_t value) ;

constexpr double_t __get_startTime() const;

 UnityEngine::Vector2 __declspec(property(get=__get_startPosition, put=__set_startPosition))  startPosition;

constexpr void __set_startPosition(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_startPosition() const;


// Properties

static UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_Format))  Format;

 UnityEngine::InputSystem::TouchPhase __declspec(property(get=get_phase, put=set_phase))  phase;

 bool __declspec(property(get=get_isNoneEndedOrCanceled))  isNoneEndedOrCanceled;

 bool __declspec(property(get=get_isInProgress))  isInProgress;

 bool __declspec(property(get=get_isPrimaryTouch, put=set_isPrimaryTouch))  isPrimaryTouch;

 bool __declspec(property(get=get_isOrphanedPrimaryTouch, put=set_isOrphanedPrimaryTouch))  isOrphanedPrimaryTouch;

 bool __declspec(property(get=get_isIndirectTouch, put=set_isIndirectTouch))  isIndirectTouch;

 bool __declspec(property(get=get_isTap, put=set_isTap))  isTap;

 bool __declspec(property(get=get_isTapPress, put=set_isTapPress))  isTapPress;

 bool __declspec(property(get=get_isTapRelease, put=set_isTapRelease))  isTapRelease;

 bool __declspec(property(get=get_beganInSameFrame, put=set_beganInSameFrame))  beganInSameFrame;

 UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_format))  format;


// Methods

/// @brief Method get_Format addr 0x29563ec size 0x30 virtual false final false
static UnityEngine::InputSystem::Utilities::FourCC get_Format() ;

/// @brief Method get_phase addr 0x295641c size 0x8 virtual false final false
 UnityEngine::InputSystem::TouchPhase get_phase() ;

/// @brief Method set_phase addr 0x2950db0 size 0x8 virtual false final false
 void set_phase(UnityEngine::InputSystem::TouchPhase value) ;

/// @brief Method get_isNoneEndedOrCanceled addr 0x2956424 size 0x20 virtual false final false
 bool get_isNoneEndedOrCanceled() ;

/// @brief Method get_isInProgress addr 0x2956444 size 0x2c virtual false final false
 bool get_isInProgress() ;

/// @brief Method get_isPrimaryTouch addr 0x2952ccc size 0xc virtual false final false
 bool get_isPrimaryTouch() ;

/// @brief Method set_isPrimaryTouch addr 0x2952cb0 size 0x1c virtual false final false
 void set_isPrimaryTouch(bool value) ;

/// @brief Method get_isOrphanedPrimaryTouch addr 0x2956470 size 0xc virtual false final false
 bool get_isOrphanedPrimaryTouch() ;

/// @brief Method set_isOrphanedPrimaryTouch addr 0x295647c size 0x1c virtual false final false
 void set_isOrphanedPrimaryTouch(bool value) ;

/// @brief Method get_isIndirectTouch addr 0x2956498 size 0xc virtual false final false
 bool get_isIndirectTouch() ;

/// @brief Method set_isIndirectTouch addr 0x29564a4 size 0x1c virtual false final false
 void set_isIndirectTouch(bool value) ;

/// @brief Method get_isTap addr 0x294f344 size 0xc virtual false final false
 bool get_isTap() ;

/// @brief Method set_isTap addr 0x2952cd8 size 0x1c virtual false final false
 void set_isTap(bool value) ;

/// @brief Method get_isTapPress addr 0x29564c0 size 0xc virtual false final false
 bool get_isTapPress() ;

/// @brief Method set_isTapPress addr 0x29564cc size 0x1c virtual false final false
 void set_isTapPress(bool value) ;

/// @brief Method get_isTapRelease addr 0x294e910 size 0xc virtual false final false
 bool get_isTapRelease() ;

/// @brief Method set_isTapRelease addr 0x29564e8 size 0x1c virtual false final false
 void set_isTapRelease(bool value) ;

/// @brief Method get_beganInSameFrame addr 0x294ebc8 size 0x10 virtual false final false
 bool get_beganInSameFrame() ;

/// @brief Method set_beganInSameFrame addr 0x294ebd8 size 0x1c virtual false final false
 void set_beganInSameFrame(bool value) ;

/// @brief Method get_format addr 0x2956504 size 0x30 virtual true final true
 UnityEngine::InputSystem::Utilities::FourCC get_format() ;

/// @brief Method ToString addr 0x2956534 size 0x2c0 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::TouchState, "UnityEngine.InputSystem.LowLevel", "TouchState");
