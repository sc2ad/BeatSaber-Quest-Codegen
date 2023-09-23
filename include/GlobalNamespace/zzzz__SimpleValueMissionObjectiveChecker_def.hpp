#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveChecker_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class SimpleValueMissionObjectiveChecker;
}
// Type: ::SimpleValueMissionObjectiveChecker
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5193))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5198))
// CS Name: SimpleValueMissionObjectiveChecker
class CORDL_TYPE SimpleValueMissionObjectiveChecker : public GlobalNamespace::MissionObjectiveChecker {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~SimpleValueMissionObjectiveChecker() = default;

// Ctor Parameters [CppParam { name: "", ty: "SimpleValueMissionObjectiveChecker", modifiers: " const&", def_value: None }]
constexpr SimpleValueMissionObjectiveChecker(SimpleValueMissionObjectiveChecker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SimpleValueMissionObjectiveChecker", modifiers: "&&", def_value: None }]
constexpr SimpleValueMissionObjectiveChecker(SimpleValueMissionObjectiveChecker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SimpleValueMissionObjectiveChecker(void* ptr) noexcept : GlobalNamespace::MissionObjectiveChecker(ptr) {
}


  constexpr SimpleValueMissionObjectiveChecker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SimpleValueMissionObjectiveChecker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SimpleValueMissionObjectiveChecker& operator=(SimpleValueMissionObjectiveChecker&& o) noexcept = default;
  constexpr SimpleValueMissionObjectiveChecker& operator=(SimpleValueMissionObjectiveChecker const& o) noexcept = default;
                


// Methods

/// @brief Method CheckAndUpdateStatus addr 0x20d5d28 size 0x104 virtual false final false
 void CheckAndUpdateStatus() ;

// Ctor Parameters []
explicit SimpleValueMissionObjectiveChecker() ;

/// @brief Method .ctor addr 0x20d5e34 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SimpleValueMissionObjectiveChecker);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SimpleValueMissionObjectiveChecker, "", "SimpleValueMissionObjectiveChecker");
