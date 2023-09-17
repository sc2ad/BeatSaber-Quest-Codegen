#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class IMockPlayerScoreCalculator;
}
namespace GlobalNamespace {
class MockNoteData;
}
// Forward declare root types
namespace GlobalNamespace {
class DeterministicHitChanceScoreCalculator;
}
// Type: ::DeterministicHitChanceScoreCalculator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5269))
// CS Name: DeterministicHitChanceScoreCalculator
class CORDL_TYPE DeterministicHitChanceScoreCalculator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::IMockPlayerScoreCalculator
constexpr operator  ::GlobalNamespace::IMockPlayerScoreCalculator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DeterministicHitChanceScoreCalculator() = default;

// Ctor Parameters [CppParam { name: "", ty: "DeterministicHitChanceScoreCalculator", modifiers: " const&", def_value: None }]
constexpr DeterministicHitChanceScoreCalculator(DeterministicHitChanceScoreCalculator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DeterministicHitChanceScoreCalculator", modifiers: "&&", def_value: None }]
constexpr DeterministicHitChanceScoreCalculator(DeterministicHitChanceScoreCalculator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DeterministicHitChanceScoreCalculator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DeterministicHitChanceScoreCalculator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DeterministicHitChanceScoreCalculator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DeterministicHitChanceScoreCalculator& operator=(DeterministicHitChanceScoreCalculator&& o) noexcept = default;
  constexpr DeterministicHitChanceScoreCalculator& operator=(DeterministicHitChanceScoreCalculator const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__hitChance, put=__set__hitChance))  _hitChance;

constexpr void __set__hitChance(float_t value) ;

constexpr float_t __get__hitChance() const;

/// @brief Field kScorePerHit offset 0
static constexpr int32_t  kScorePerHit{105};

 float_t __declspec(property(get=__get__chanceAggregated, put=__set__chanceAggregated))  _chanceAggregated;

constexpr void __set__chanceAggregated(float_t value) ;

constexpr float_t __get__chanceAggregated() const;


// Methods

// Ctor Parameters [CppParam { name: "hitChance", ty: "float_t", modifiers: "", def_value: None }]
explicit DeterministicHitChanceScoreCalculator(float_t hitChance) ;

/// @brief Method .ctor addr 0x20e9b80 size 0x28 virtual false final false
 void _ctor(float_t hitChance) ;

/// @brief Method GetScoreForNote addr 0x20e9ba8 size 0x30 virtual true final true
 int32_t GetScoreForNote(::GlobalNamespace::MockNoteData noteData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::DeterministicHitChanceScoreCalculator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DeterministicHitChanceScoreCalculator, "", "DeterministicHitChanceScoreCalculator");
