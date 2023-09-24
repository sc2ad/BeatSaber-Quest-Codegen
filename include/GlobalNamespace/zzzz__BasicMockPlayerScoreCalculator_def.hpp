#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class MockNoteData;
}
namespace System {
class Random;
}
namespace GlobalNamespace {
class IMockPlayerScoreCalculator;
}
// Forward declare root types
namespace GlobalNamespace {
class BasicMockPlayerScoreCalculator;
}
// Type: ::BasicMockPlayerScoreCalculator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15482))
// CS Name: BasicMockPlayerScoreCalculator
class CORDL_TYPE BasicMockPlayerScoreCalculator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IMockPlayerScoreCalculator
constexpr operator  GlobalNamespace::IMockPlayerScoreCalculator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~BasicMockPlayerScoreCalculator() = default;

// Ctor Parameters [CppParam { name: "", ty: "BasicMockPlayerScoreCalculator", modifiers: " const&", def_value: None }]
constexpr BasicMockPlayerScoreCalculator(BasicMockPlayerScoreCalculator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BasicMockPlayerScoreCalculator", modifiers: "&&", def_value: None }]
constexpr BasicMockPlayerScoreCalculator(BasicMockPlayerScoreCalculator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BasicMockPlayerScoreCalculator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BasicMockPlayerScoreCalculator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BasicMockPlayerScoreCalculator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BasicMockPlayerScoreCalculator& operator=(BasicMockPlayerScoreCalculator&& o) noexcept = default;
  constexpr BasicMockPlayerScoreCalculator& operator=(BasicMockPlayerScoreCalculator const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__hitFrequency, put=__set__hitFrequency))  _hitFrequency;

constexpr void __set__hitFrequency(float_t value) ;

constexpr float_t __get__hitFrequency() const;

 int32_t __declspec(property(get=__get__minScore, put=__set__minScore))  _minScore;

constexpr void __set__minScore(int32_t value) ;

constexpr int32_t __get__minScore() const;

 int32_t __declspec(property(get=__get__maxScore, put=__set__maxScore))  _maxScore;

constexpr void __set__maxScore(int32_t value) ;

constexpr int32_t __get__maxScore() const;

 System::Random __declspec(property(get=__get__random, put=__set__random))  _random;

constexpr void __set__random(System::Random value) ;

constexpr System::Random __get__random() const;


// Methods

static GlobalNamespace::BasicMockPlayerScoreCalculator New_ctor(float_t hitFrequency, int32_t minScore, int32_t maxScore) ;

/// @brief Method .ctor addr 0x2279034 size 0xbc virtual false final false
 void _ctor(float_t hitFrequency, int32_t minScore, int32_t maxScore) ;

/// @brief Method GetScoreForNote addr 0x22790f0 size 0x74 virtual true final true
 int32_t GetScoreForNote(GlobalNamespace::MockNoteData noteData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BasicMockPlayerScoreCalculator);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BasicMockPlayerScoreCalculator, "", "BasicMockPlayerScoreCalculator");
