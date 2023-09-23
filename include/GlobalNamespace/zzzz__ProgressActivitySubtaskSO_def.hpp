#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace GlobalNamespace {
class ProgressActivitySubtaskSO;
}
// Type: ::ProgressActivitySubtaskSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4646))
// CS Name: ProgressActivitySubtaskSO
class CORDL_TYPE ProgressActivitySubtaskSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ProgressActivitySubtaskSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "ProgressActivitySubtaskSO", modifiers: " const&", def_value: None }]
constexpr ProgressActivitySubtaskSO(ProgressActivitySubtaskSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ProgressActivitySubtaskSO", modifiers: "&&", def_value: None }]
constexpr ProgressActivitySubtaskSO(ProgressActivitySubtaskSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ProgressActivitySubtaskSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr ProgressActivitySubtaskSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ProgressActivitySubtaskSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ProgressActivitySubtaskSO& operator=(ProgressActivitySubtaskSO&& o) noexcept = default;
  constexpr ProgressActivitySubtaskSO& operator=(ProgressActivitySubtaskSO const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__activityId, put=__set__activityId))  _activityId;

constexpr void __set__activityId(::StringW value) ;

constexpr ::StringW __get__activityId() const;


// Properties

 ::StringW __declspec(property(get=get_activityId))  activityId;


// Methods

/// @brief Method get_activityId addr 0x221a7b4 size 0x8 virtual false final false
 ::StringW get_activityId() ;

// Ctor Parameters []
explicit ProgressActivitySubtaskSO() ;

/// @brief Method .ctor addr 0x221a7bc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ProgressActivitySubtaskSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ProgressActivitySubtaskSO, "", "ProgressActivitySubtaskSO");
