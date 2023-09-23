#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralNames;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class RoleSyntax;
}
// Type: Org.BouncyCastle.Asn1.X509::RoleSyntax
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(380))
// CS Name: Org.BouncyCastle.Asn1.X509.RoleSyntax
class CORDL_TYPE RoleSyntax : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RoleSyntax() = default;

// Ctor Parameters [CppParam { name: "", ty: "RoleSyntax", modifiers: " const&", def_value: None }]
constexpr RoleSyntax(RoleSyntax const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RoleSyntax", modifiers: "&&", def_value: None }]
constexpr RoleSyntax(RoleSyntax&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RoleSyntax(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr RoleSyntax& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RoleSyntax& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RoleSyntax& operator=(RoleSyntax&& o) noexcept = default;
  constexpr RoleSyntax& operator=(RoleSyntax const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X509::GeneralNames __declspec(property(get=__get_roleAuthority, put=__set_roleAuthority))  roleAuthority;

constexpr void __set_roleAuthority(Org::BouncyCastle::Asn1::X509::GeneralNames value) ;

constexpr Org::BouncyCastle::Asn1::X509::GeneralNames __get_roleAuthority() const;

 Org::BouncyCastle::Asn1::X509::GeneralName __declspec(property(get=__get_roleName, put=__set_roleName))  roleName;

constexpr void __set_roleName(Org::BouncyCastle::Asn1::X509::GeneralName value) ;

constexpr Org::BouncyCastle::Asn1::X509::GeneralName __get_roleName() const;


// Properties

 Org::BouncyCastle::Asn1::X509::GeneralNames __declspec(property(get=get_RoleAuthority))  RoleAuthority;

 Org::BouncyCastle::Asn1::X509::GeneralName __declspec(property(get=get_RoleName))  RoleName;


// Methods

/// @brief Method GetInstance addr 0x110b504 size 0xa4 virtual false final false
static Org::BouncyCastle::Asn1::X509::RoleSyntax GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "roleAuthority", ty: "Org::BouncyCastle::Asn1::X509::GeneralNames", modifiers: "", def_value: None }, CppParam { name: "roleName", ty: "Org::BouncyCastle::Asn1::X509::GeneralName", modifiers: "", def_value: None }]
explicit RoleSyntax(Org::BouncyCastle::Asn1::X509::GeneralNames roleAuthority, Org::BouncyCastle::Asn1::X509::GeneralName roleName) ;

/// @brief Method .ctor addr 0x110b7b8 size 0x194 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::GeneralNames roleAuthority, Org::BouncyCastle::Asn1::X509::GeneralName roleName) ;

// Ctor Parameters [CppParam { name: "roleName", ty: "Org::BouncyCastle::Asn1::X509::GeneralName", modifiers: "", def_value: None }]
explicit RoleSyntax(Org::BouncyCastle::Asn1::X509::GeneralName roleName) ;

/// @brief Method .ctor addr 0x110b94c size 0xc virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::GeneralName roleName) ;

// Ctor Parameters [CppParam { name: "roleName", ty: "::StringW", modifiers: "", def_value: None }]
explicit RoleSyntax(::StringW roleName) ;

/// @brief Method .ctor addr 0x110b958 size 0x94 virtual false final false
 void _ctor(::StringW roleName) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit RoleSyntax(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0x110b5a8 size 0x210 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_RoleAuthority addr 0x110b9ec size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::GeneralNames get_RoleAuthority() ;

/// @brief Method get_RoleName addr 0x110b9f4 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::GeneralName get_RoleName() ;

/// @brief Method GetRoleNameAsString addr 0x110b9fc size 0xec virtual false final false
 ::StringW GetRoleNameAsString() ;

/// @brief Method GetRoleAuthorityAsString addr 0x110bae8 size 0x1fc virtual false final false
 ::ArrayW<::StringW> GetRoleAuthorityAsString() ;

/// @brief Method ToAsn1Object addr 0x110bce4 size 0xfc virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

/// @brief Method ToString addr 0x110bde0 size 0x1b8 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::RoleSyntax);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::RoleSyntax, "Org.BouncyCastle.Asn1.X509", "RoleSyntax");
