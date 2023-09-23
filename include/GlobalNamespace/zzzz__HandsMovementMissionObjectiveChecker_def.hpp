#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__SimpleValueMissionObjectiveChecker_def.hpp"
#include <cmath>
namespace GlobalNamespace {
class SaberActivityCounter;
}
// Forward declare root types
namespace GlobalNamespace {
class HandsMovementMissionObjectiveChecker;
}
// Type: ::HandsMovementMissionObjectiveChecker
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5198))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5191))
// CS Name: HandsMovementMissionObjectiveChecker
class CORDL_TYPE HandsMovementMissionObjectiveChecker : public GlobalNamespace::SimpleValueMissionObjectiveChecker {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~HandsMovementMissionObjectiveChecker() = default;

// Ctor Parameters [CppParam { name: "", ty: "HandsMovementMissionObjectiveChecker", modifiers: " const&", def_value: None }]
constexpr HandsMovementMissionObjectiveChecker(HandsMovementMissionObjectiveChecker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HandsMovementMissionObjectiveChecker", modifiers: "&&", def_value: None }]
constexpr HandsMovementMissionObjectiveChecker(HandsMovementMissionObjectiveChecker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HandsMovementMissionObjectiveChecker(void* ptr) noexcept : GlobalNamespace::SimpleValueMissionObjectiveChecker(ptr) {
}


  constexpr HandsMovementMissionObjectiveChecker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HandsMovementMissionObjectiveChecker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HandsMovementMissionObjectiveChecker& operator=(HandsMovementMissionObjectiveChecker&& o) noexcept = default;
  constexpr HandsMovementMissionObjectiveChecker& operator=(HandsMovementMissionObjectiveChecker const& o) noexcept = default;
                


// Fields

 GlobalNamespace::SaberActivityCounter __declspec(property(get=__get__saberActivityCounter, put=__set__saberActivityCounter))  _saberActivityCounter;

constexpr void __set__saberActivityCounter(GlobalNamespace::SaberActivityCounter value) ;

constexpr GlobalNamespace::SaberActivityCounter __get__saberActivityCounter() const;


// Methods

/// @brief Method OnDestroy addr 0x20d6890 size 0xd4 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleTotalDistanceDidChange addr 0x20d6964 size 0x60 virtual false final false
 void HandleTotalDistanceDidChange(float_t distance) ;

/// @brief Method Init addr 0x20d69c4 size 0x108 virtual true final false
 void Init() ;

// Ctor Parameters []
explicit HandsMovementMissionObjectiveChecker() ;

/// @brief Method .ctor addr 0x20d6acc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::HandsMovementMissionObjectiveChecker);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HandsMovementMissionObjectiveChecker, "", "HandsMovementMissionObjectiveChecker");
