#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace GlobalNamespace {
class MissionObjective;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionObjectiveResult;
}
// Type: ::MissionObjectiveResult
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4471))
// CS Name: MissionObjectiveResult
class CORDL_TYPE MissionObjectiveResult : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MissionObjectiveResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionObjectiveResult", modifiers: " const&", def_value: None }]
constexpr MissionObjectiveResult(MissionObjectiveResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionObjectiveResult", modifiers: "&&", def_value: None }]
constexpr MissionObjectiveResult(MissionObjectiveResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissionObjectiveResult(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MissionObjectiveResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissionObjectiveResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissionObjectiveResult& operator=(MissionObjectiveResult&& o) noexcept = default;
  constexpr MissionObjectiveResult& operator=(MissionObjectiveResult const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MissionObjective __declspec(property(get=__get__missionObjective_k__BackingField, put=__set__missionObjective_k__BackingField))  _missionObjective_k__BackingField;

constexpr void __set__missionObjective_k__BackingField(GlobalNamespace::MissionObjective value) ;

constexpr GlobalNamespace::MissionObjective __get__missionObjective_k__BackingField() const;

 bool __declspec(property(get=__get__cleared_k__BackingField, put=__set__cleared_k__BackingField))  _cleared_k__BackingField;

constexpr void __set__cleared_k__BackingField(bool value) ;

constexpr bool __get__cleared_k__BackingField() const;

 int32_t __declspec(property(get=__get__value_k__BackingField, put=__set__value_k__BackingField))  _value_k__BackingField;

constexpr void __set__value_k__BackingField(int32_t value) ;

constexpr int32_t __get__value_k__BackingField() const;


// Properties

 GlobalNamespace::MissionObjective __declspec(property(get=get_missionObjective, put=set_missionObjective))  missionObjective;

 bool __declspec(property(get=get_cleared, put=set_cleared))  cleared;

 int32_t __declspec(property(get=get_value, put=set_value))  value;


// Methods

/// @brief Method get_missionObjective addr 0x21f11d4 size 0x8 virtual false final false
 GlobalNamespace::MissionObjective get_missionObjective() ;

/// @brief Method set_missionObjective addr 0x21f11dc size 0x8 virtual false final false
 void set_missionObjective(GlobalNamespace::MissionObjective value) ;

/// @brief Method get_cleared addr 0x21f11e4 size 0x8 virtual false final false
 bool get_cleared() ;

/// @brief Method set_cleared addr 0x21f11ec size 0xc virtual false final false
 void set_cleared(bool value) ;

/// @brief Method get_value addr 0x21f11f8 size 0x8 virtual false final false
 int32_t get_value() ;

/// @brief Method set_value addr 0x21f1200 size 0x8 virtual false final false
 void set_value(int32_t value) ;

static GlobalNamespace::MissionObjectiveResult New_ctor(GlobalNamespace::MissionObjective missionObjective, bool cleared, int32_t value) ;

/// @brief Method .ctor addr 0x21f1208 size 0x44 virtual false final false
 void _ctor(GlobalNamespace::MissionObjective missionObjective, bool cleared, int32_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MissionObjectiveResult);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionObjectiveResult, "", "MissionObjectiveResult");
