#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__SimpleValueMissionObjectiveChecker_def.hpp"
#include <cstdint>
namespace GlobalNamespace {
class ComboController;
}
// Forward declare root types
namespace GlobalNamespace {
class ComboMissionObjectiveChecker;
}
// Type: ::ComboMissionObjectiveChecker
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5198))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5187))
// CS Name: ComboMissionObjectiveChecker
class CORDL_TYPE ComboMissionObjectiveChecker : public GlobalNamespace::SimpleValueMissionObjectiveChecker {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~ComboMissionObjectiveChecker() = default;

// Ctor Parameters [CppParam { name: "", ty: "ComboMissionObjectiveChecker", modifiers: " const&", def_value: None }]
constexpr ComboMissionObjectiveChecker(ComboMissionObjectiveChecker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ComboMissionObjectiveChecker", modifiers: "&&", def_value: None }]
constexpr ComboMissionObjectiveChecker(ComboMissionObjectiveChecker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ComboMissionObjectiveChecker(void* ptr) noexcept : GlobalNamespace::SimpleValueMissionObjectiveChecker(ptr) {
}


  constexpr ComboMissionObjectiveChecker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ComboMissionObjectiveChecker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ComboMissionObjectiveChecker& operator=(ComboMissionObjectiveChecker&& o) noexcept = default;
  constexpr ComboMissionObjectiveChecker& operator=(ComboMissionObjectiveChecker const& o) noexcept = default;
                


// Fields

 GlobalNamespace::ComboController __declspec(property(get=__get__comboController, put=__set__comboController))  _comboController;

constexpr void __set__comboController(GlobalNamespace::ComboController value) ;

constexpr GlobalNamespace::ComboController __get__comboController() const;


// Methods

/// @brief Method Init addr 0x20d5e3c size 0x14c virtual true final false
 void Init() ;

/// @brief Method OnDestroy addr 0x20d5f88 size 0xd4 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleComboDidChange addr 0x20d605c size 0x50 virtual false final false
 void HandleComboDidChange(int32_t combo) ;

static GlobalNamespace::ComboMissionObjectiveChecker New_ctor() ;

/// @brief Method .ctor addr 0x20d60ac size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ComboMissionObjectiveChecker);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ComboMissionObjectiveChecker, "", "ComboMissionObjectiveChecker");
