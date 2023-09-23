#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace GlobalNamespace {
class AveragingValueRecorder;
}
// Forward declare root types
namespace GlobalNamespace {
class MovementHistoryRecorder;
}
// Type: ::MovementHistoryRecorder
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5378))
// CS Name: MovementHistoryRecorder
class CORDL_TYPE MovementHistoryRecorder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MovementHistoryRecorder() = default;

// Ctor Parameters [CppParam { name: "", ty: "MovementHistoryRecorder", modifiers: " const&", def_value: None }]
constexpr MovementHistoryRecorder(MovementHistoryRecorder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MovementHistoryRecorder", modifiers: "&&", def_value: None }]
constexpr MovementHistoryRecorder(MovementHistoryRecorder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MovementHistoryRecorder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MovementHistoryRecorder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MovementHistoryRecorder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MovementHistoryRecorder& operator=(MovementHistoryRecorder&& o) noexcept = default;
  constexpr MovementHistoryRecorder& operator=(MovementHistoryRecorder const& o) noexcept = default;
                


// Fields

 GlobalNamespace::AveragingValueRecorder __declspec(property(get=__get__averagingValueRecorer, put=__set__averagingValueRecorer))  _averagingValueRecorer;

constexpr void __set__averagingValueRecorer(GlobalNamespace::AveragingValueRecorder value) ;

constexpr GlobalNamespace::AveragingValueRecorder __get__averagingValueRecorer() const;

 float_t __declspec(property(get=__get__increaseSpeed, put=__set__increaseSpeed))  _increaseSpeed;

constexpr void __set__increaseSpeed(float_t value) ;

constexpr float_t __get__increaseSpeed() const;

 float_t __declspec(property(get=__get__decreaseSpeed, put=__set__decreaseSpeed))  _decreaseSpeed;

constexpr void __set__decreaseSpeed(float_t value) ;

constexpr float_t __get__decreaseSpeed() const;

 float_t __declspec(property(get=__get__accum, put=__set__accum))  _accum;

constexpr void __set__accum(float_t value) ;

constexpr float_t __get__accum() const;


// Properties

 GlobalNamespace::AveragingValueRecorder __declspec(property(get=get_averagingValueRecorer))  averagingValueRecorer;


// Methods

/// @brief Method get_averagingValueRecorer addr 0x210b1c8 size 0x8 virtual false final false
 GlobalNamespace::AveragingValueRecorder get_averagingValueRecorer() ;

// Ctor Parameters [CppParam { name: "averageWindowDuration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "historyValuesPerSecond", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "increaseSpeed", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "decreaseSpeed", ty: "float_t", modifiers: "", def_value: None }]
explicit MovementHistoryRecorder(float_t averageWindowDuration, float_t historyValuesPerSecond, float_t increaseSpeed, float_t decreaseSpeed) ;

/// @brief Method .ctor addr 0x210b1d0 size 0x9c virtual false final false
 void _ctor(float_t averageWindowDuration, float_t historyValuesPerSecond, float_t increaseSpeed, float_t decreaseSpeed) ;

/// @brief Method AddMovement addr 0x210b26c size 0x24 virtual false final false
 void AddMovement(float_t distance) ;

/// @brief Method ManualUpdate addr 0x210b290 size 0x3c virtual false final false
 void ManualUpdate(float_t deltaTime) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MovementHistoryRecorder);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MovementHistoryRecorder, "", "MovementHistoryRecorder");
