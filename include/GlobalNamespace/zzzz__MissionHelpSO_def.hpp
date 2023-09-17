#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class MissionHelpSO;
}
// Type: ::MissionHelpSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4467))
// CS Name: MissionHelpSO
class CORDL_TYPE MissionHelpSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MissionHelpSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionHelpSO", modifiers: " const&", def_value: None }]
constexpr MissionHelpSO(MissionHelpSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionHelpSO", modifiers: "&&", def_value: None }]
constexpr MissionHelpSO(MissionHelpSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissionHelpSO(void* ptr) noexcept : ::GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr MissionHelpSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissionHelpSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissionHelpSO& operator=(MissionHelpSO&& o) noexcept = default;
  constexpr MissionHelpSO& operator=(MissionHelpSO const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__missionHelpId, put=__set__missionHelpId))  _missionHelpId;

constexpr void __set__missionHelpId(::StringW value) ;

constexpr ::StringW __get__missionHelpId() const;


// Properties

 ::StringW __declspec(property(get=get_missionHelpId))  missionHelpId;


// Methods

/// @brief Method get_missionHelpId addr 0x21f0ecc size 0x8 virtual false final false
 ::StringW get_missionHelpId() ;

// Ctor Parameters []
explicit MissionHelpSO() ;

/// @brief Method .ctor addr 0x21f0ed4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MissionHelpSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionHelpSO, "", "MissionHelpSO");
