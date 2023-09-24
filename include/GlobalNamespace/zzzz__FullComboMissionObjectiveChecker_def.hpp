#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveChecker_def.hpp"
namespace GlobalNamespace {
class ComboController;
}
// Forward declare root types
namespace GlobalNamespace {
class FullComboMissionObjectiveChecker;
}
// Type: ::FullComboMissionObjectiveChecker
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5193))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5189))
// CS Name: FullComboMissionObjectiveChecker
class CORDL_TYPE FullComboMissionObjectiveChecker : public GlobalNamespace::MissionObjectiveChecker {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~FullComboMissionObjectiveChecker() = default;

// Ctor Parameters [CppParam { name: "", ty: "FullComboMissionObjectiveChecker", modifiers: " const&", def_value: None }]
constexpr FullComboMissionObjectiveChecker(FullComboMissionObjectiveChecker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FullComboMissionObjectiveChecker", modifiers: "&&", def_value: None }]
constexpr FullComboMissionObjectiveChecker(FullComboMissionObjectiveChecker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FullComboMissionObjectiveChecker(void* ptr) noexcept : GlobalNamespace::MissionObjectiveChecker(ptr) {
}


  constexpr FullComboMissionObjectiveChecker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FullComboMissionObjectiveChecker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FullComboMissionObjectiveChecker& operator=(FullComboMissionObjectiveChecker&& o) noexcept = default;
  constexpr FullComboMissionObjectiveChecker& operator=(FullComboMissionObjectiveChecker const& o) noexcept = default;
                


// Fields

 GlobalNamespace::ComboController __declspec(property(get=__get__comboController, put=__set__comboController))  _comboController;

constexpr void __set__comboController(GlobalNamespace::ComboController value) ;

constexpr GlobalNamespace::ComboController __get__comboController() const;


// Methods

/// @brief Method Init addr 0x20d63fc size 0x104 virtual true final false
 void Init() ;

/// @brief Method OnDestroy addr 0x20d6500 size 0xd4 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleComboBreakingEventHappened addr 0x20d65d4 size 0x3c virtual false final false
 void HandleComboBreakingEventHappened() ;

static GlobalNamespace::FullComboMissionObjectiveChecker New_ctor() ;

/// @brief Method .ctor addr 0x20d6610 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::FullComboMissionObjectiveChecker);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FullComboMissionObjectiveChecker, "", "FullComboMissionObjectiveChecker");
