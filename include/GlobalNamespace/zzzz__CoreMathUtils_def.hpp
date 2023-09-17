#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
// Forward declare root types
namespace GlobalNamespace {
class CoreMathUtils;
}
// Type: ::CoreMathUtils
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16067))
// CS Name: CoreMathUtils
class CORDL_TYPE CoreMathUtils : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CoreMathUtils() = default;

// Ctor Parameters [CppParam { name: "", ty: "CoreMathUtils", modifiers: " const&", def_value: None }]
constexpr CoreMathUtils(CoreMathUtils const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CoreMathUtils", modifiers: "&&", def_value: None }]
constexpr CoreMathUtils(CoreMathUtils&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CoreMathUtils(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CoreMathUtils& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CoreMathUtils& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CoreMathUtils& operator=(CoreMathUtils&& o) noexcept = default;
  constexpr CoreMathUtils& operator=(CoreMathUtils const& o) noexcept = default;
                


// Fields

/// @brief Field kHalfJumpDistanceEpsilon offset 0
static constexpr float_t  kHalfJumpDistanceEpsilon{0.001};


// Methods

/// @brief Method CalculateHalfJumpDurationInBeats addr 0x11a3730 size 0x40 virtual false final false
static float_t CalculateHalfJumpDurationInBeats(float_t startHalfJumpDurationInBeats, float_t maxHalfJumpDistance, float_t noteJumpMovementSpeed, float_t oneBeatDuration, float_t noteJumpStartBeatOffset) ;

/// @brief Method __CalculateHalfJumpDurationInBeatsV2 addr 0x11a3770 size 0x34 virtual false final false
static float_t __CalculateHalfJumpDurationInBeatsV2(float_t startHalfJumpDurationInBeats, float_t maxHalfJumpDistance, float_t noteJumpMovementSpeed, float_t oneBeatDuration, float_t noteJumpStartBeatOffset) ;

/// @brief Method __CalculateHalfJumpDurationInBeatsV1 addr 0x11a37a4 size 0x48 virtual false final false
static int32_t __CalculateHalfJumpDurationInBeatsV1(float_t startHalfJumpDurationInBeats, float_t maxHalfJumpDistance, float_t noteJumpMovementSpeed, float_t oneBeatDuration, float_t minHalfJumpDistance) ;

// Ctor Parameters []
explicit CoreMathUtils() ;

/// @brief Method .ctor addr 0x11a37ec size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::CoreMathUtils);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CoreMathUtils, "", "CoreMathUtils");
