#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Collections/zzzz__ReadOnlyCollectionBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System::Security::AccessControl {
class AuthorizationRule;
}
// Forward declare root types
namespace System::Security::AccessControl {
class AuthorizationRuleCollection;
}
// Type: System.Security.AccessControl::AuthorizationRuleCollection
namespace System::Security::AccessControl {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3762))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3018))
// CS Name: System.Security.AccessControl.AuthorizationRuleCollection
class CORDL_TYPE AuthorizationRuleCollection : public System::Collections::ReadOnlyCollectionBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AuthorizationRuleCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "AuthorizationRuleCollection", modifiers: " const&", def_value: None }]
constexpr AuthorizationRuleCollection(AuthorizationRuleCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AuthorizationRuleCollection", modifiers: "&&", def_value: None }]
constexpr AuthorizationRuleCollection(AuthorizationRuleCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AuthorizationRuleCollection(void* ptr) noexcept : System::Collections::ReadOnlyCollectionBase(ptr) {
}


  constexpr AuthorizationRuleCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AuthorizationRuleCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AuthorizationRuleCollection& operator=(AuthorizationRuleCollection&& o) noexcept = default;
  constexpr AuthorizationRuleCollection& operator=(AuthorizationRuleCollection const& o) noexcept = default;
                


// Methods

static System::Security::AccessControl::AuthorizationRuleCollection New_ctor(::ArrayW<System::Security::AccessControl::AuthorizationRule> rules) ;

/// @brief Method .ctor addr 0x23157ac size 0x48 virtual false final false
 void _ctor(::ArrayW<System::Security::AccessControl::AuthorizationRule> rules) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::AccessControl
NEED_NO_BOX(System::Security::AccessControl::AuthorizationRuleCollection);
DEFINE_IL2CPP_ARG_TYPE(System::Security::AccessControl::AuthorizationRuleCollection, "System.Security.AccessControl", "AuthorizationRuleCollection");
