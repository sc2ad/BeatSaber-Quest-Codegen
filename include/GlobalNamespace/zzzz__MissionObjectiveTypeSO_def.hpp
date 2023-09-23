#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
class ObjectiveValueFormatterSO;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionObjectiveTypeSO;
}
// Type: ::MissionObjectiveTypeSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4472))
// CS Name: MissionObjectiveTypeSO
class CORDL_TYPE MissionObjectiveTypeSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MissionObjectiveTypeSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionObjectiveTypeSO", modifiers: " const&", def_value: None }]
constexpr MissionObjectiveTypeSO(MissionObjectiveTypeSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionObjectiveTypeSO", modifiers: "&&", def_value: None }]
constexpr MissionObjectiveTypeSO(MissionObjectiveTypeSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissionObjectiveTypeSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr MissionObjectiveTypeSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissionObjectiveTypeSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissionObjectiveTypeSO& operator=(MissionObjectiveTypeSO&& o) noexcept = default;
  constexpr MissionObjectiveTypeSO& operator=(MissionObjectiveTypeSO const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__objectiveName, put=__set__objectiveName))  _objectiveName;

constexpr void __set__objectiveName(::StringW value) ;

constexpr ::StringW __get__objectiveName() const;

 bool __declspec(property(get=__get__noConditionValue, put=__set__noConditionValue))  _noConditionValue;

constexpr void __set__noConditionValue(bool value) ;

constexpr bool __get__noConditionValue() const;

 GlobalNamespace::ObjectiveValueFormatterSO __declspec(property(get=__get__objectiveValueFormater, put=__set__objectiveValueFormater))  _objectiveValueFormater;

constexpr void __set__objectiveValueFormater(GlobalNamespace::ObjectiveValueFormatterSO value) ;

constexpr GlobalNamespace::ObjectiveValueFormatterSO __get__objectiveValueFormater() const;


// Properties

 ::StringW __declspec(property(get=get_objectiveName))  objectiveName;

 ::StringW __declspec(property(get=get_objectiveNameLocalized))  objectiveNameLocalized;

 bool __declspec(property(get=get_noConditionValue))  noConditionValue;

 GlobalNamespace::ObjectiveValueFormatterSO __declspec(property(get=get_objectiveValueFormater))  objectiveValueFormater;


// Methods

/// @brief Method get_objectiveName addr 0x21f124c size 0x8 virtual false final false
 ::StringW get_objectiveName() ;

/// @brief Method get_objectiveNameLocalized addr 0x21f1254 size 0xc virtual false final false
 ::StringW get_objectiveNameLocalized() ;

/// @brief Method get_noConditionValue addr 0x21f1260 size 0x8 virtual false final false
 bool get_noConditionValue() ;

/// @brief Method get_objectiveValueFormater addr 0x21f1268 size 0x8 virtual false final false
 GlobalNamespace::ObjectiveValueFormatterSO get_objectiveValueFormater() ;

// Ctor Parameters []
explicit MissionObjectiveTypeSO() ;

/// @brief Method .ctor addr 0x21f1270 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MissionObjectiveTypeSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionObjectiveTypeSO, "", "MissionObjectiveTypeSO");
