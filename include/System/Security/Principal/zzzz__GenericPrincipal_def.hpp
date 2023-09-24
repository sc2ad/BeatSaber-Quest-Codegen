#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Claims/zzzz__ClaimsPrincipal_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Security::Principal {
class IIdentity;
}
// Forward declare root types
namespace System::Security::Principal {
class GenericPrincipal;
}
// Type: System.Security.Principal::GenericPrincipal
namespace System::Security::Principal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3007))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2994))
// CS Name: System.Security.Principal.GenericPrincipal
class CORDL_TYPE GenericPrincipal : public System::Security::Claims::ClaimsPrincipal {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~GenericPrincipal() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericPrincipal", modifiers: " const&", def_value: None }]
constexpr GenericPrincipal(GenericPrincipal const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericPrincipal", modifiers: "&&", def_value: None }]
constexpr GenericPrincipal(GenericPrincipal&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericPrincipal(void* ptr) noexcept : System::Security::Claims::ClaimsPrincipal(ptr) {
}


  constexpr GenericPrincipal& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericPrincipal& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericPrincipal& operator=(GenericPrincipal&& o) noexcept = default;
  constexpr GenericPrincipal& operator=(GenericPrincipal const& o) noexcept = default;
                


// Fields

 System::Security::Principal::IIdentity __declspec(property(get=__get_m_identity, put=__set_m_identity))  m_identity;

constexpr void __set_m_identity(System::Security::Principal::IIdentity value) ;

constexpr System::Security::Principal::IIdentity __get_m_identity() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_m_roles, put=__set_m_roles))  m_roles;

constexpr void __set_m_roles(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_m_roles() const;


// Methods

static System::Security::Principal::GenericPrincipal New_ctor(System::Security::Principal::IIdentity identity, ::ArrayW<::StringW> roles) ;

/// @brief Method .ctor addr 0x230b97c size 0x168 virtual false final false
 void _ctor(System::Security::Principal::IIdentity identity, ::ArrayW<::StringW> roles) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Principal
NEED_NO_BOX(System::Security::Principal::GenericPrincipal);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Principal::GenericPrincipal, "System.Security.Principal", "GenericPrincipal");
