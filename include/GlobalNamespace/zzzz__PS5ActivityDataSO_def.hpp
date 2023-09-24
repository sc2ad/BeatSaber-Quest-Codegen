#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace GlobalNamespace {
class PS5ActivityDataSO;
}
// Type: ::PS5ActivityDataSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4647))
// CS Name: PS5ActivityDataSO
class CORDL_TYPE PS5ActivityDataSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PS5ActivityDataSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "PS5ActivityDataSO", modifiers: " const&", def_value: None }]
constexpr PS5ActivityDataSO(PS5ActivityDataSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PS5ActivityDataSO", modifiers: "&&", def_value: None }]
constexpr PS5ActivityDataSO(PS5ActivityDataSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PS5ActivityDataSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr PS5ActivityDataSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PS5ActivityDataSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PS5ActivityDataSO& operator=(PS5ActivityDataSO&& o) noexcept = default;
  constexpr PS5ActivityDataSO& operator=(PS5ActivityDataSO const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__activityId, put=__set__activityId))  _activityId;

constexpr void __set__activityId(::StringW value) ;

constexpr ::StringW __get__activityId() const;


// Properties

 ::StringW __declspec(property(get=get_activityId))  activityId;


// Methods

/// @brief Method get_activityId addr 0x221a7c4 size 0x8 virtual false final false
 ::StringW get_activityId() ;

static GlobalNamespace::PS5ActivityDataSO New_ctor() ;

/// @brief Method .ctor addr 0x221a7a4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PS5ActivityDataSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PS5ActivityDataSO, "", "PS5ActivityDataSO");
