#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__SimpleValueMissionObjectiveChecker_def.hpp"
#include <cstdint>
namespace GlobalNamespace {
class IScoreController;
}
// Forward declare root types
namespace GlobalNamespace {
class ScoreMissionObjectiveChecker;
}
// Type: ::ScoreMissionObjectiveChecker
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5198))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5197))
// CS Name: ScoreMissionObjectiveChecker
class CORDL_TYPE ScoreMissionObjectiveChecker : public GlobalNamespace::SimpleValueMissionObjectiveChecker {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~ScoreMissionObjectiveChecker() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScoreMissionObjectiveChecker", modifiers: " const&", def_value: None }]
constexpr ScoreMissionObjectiveChecker(ScoreMissionObjectiveChecker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScoreMissionObjectiveChecker", modifiers: "&&", def_value: None }]
constexpr ScoreMissionObjectiveChecker(ScoreMissionObjectiveChecker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScoreMissionObjectiveChecker(void* ptr) noexcept : GlobalNamespace::SimpleValueMissionObjectiveChecker(ptr) {
}


  constexpr ScoreMissionObjectiveChecker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScoreMissionObjectiveChecker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScoreMissionObjectiveChecker& operator=(ScoreMissionObjectiveChecker&& o) noexcept = default;
  constexpr ScoreMissionObjectiveChecker& operator=(ScoreMissionObjectiveChecker const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IScoreController __declspec(property(get=__get__scoreController, put=__set__scoreController))  _scoreController;

constexpr void __set__scoreController(GlobalNamespace::IScoreController value) ;

constexpr GlobalNamespace::IScoreController __get__scoreController() const;


// Methods

/// @brief Method OnDestroy addr 0x20d7dc8 size 0x108 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleScoreDidChange addr 0x20d7ed0 size 0x48 virtual false final false
 void HandleScoreDidChange(int32_t multipliedScore, int32_t modifiedScore) ;

/// @brief Method Init addr 0x20d7f18 size 0x208 virtual true final false
 void Init() ;

// Ctor Parameters []
explicit ScoreMissionObjectiveChecker() ;

/// @brief Method .ctor addr 0x20d8120 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ScoreMissionObjectiveChecker);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScoreMissionObjectiveChecker, "", "ScoreMissionObjectiveChecker");
