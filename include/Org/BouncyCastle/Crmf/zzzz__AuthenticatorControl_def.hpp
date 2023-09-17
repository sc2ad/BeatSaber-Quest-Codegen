#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class DerUtf8String;
}
namespace Org::BouncyCastle::Crmf {
class IControl;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crmf {
class AuthenticatorControl;
}
// Type: Org.BouncyCastle.Crmf::AuthenticatorControl
namespace Org::BouncyCastle::Crmf {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(695))
// CS Name: Org.BouncyCastle.Crmf.AuthenticatorControl
class CORDL_TYPE AuthenticatorControl : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crmf::IControl
constexpr operator  ::Org::BouncyCastle::Crmf::IControl() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AuthenticatorControl() = default;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticatorControl", modifiers: " const&", def_value: None }]
constexpr AuthenticatorControl(AuthenticatorControl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticatorControl", modifiers: "&&", def_value: None }]
constexpr AuthenticatorControl(AuthenticatorControl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AuthenticatorControl(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AuthenticatorControl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AuthenticatorControl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AuthenticatorControl& operator=(AuthenticatorControl&& o) noexcept = default;
  constexpr AuthenticatorControl& operator=(AuthenticatorControl const& o) noexcept = default;
                


// Fields

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_type, put=__set_type))  type;

static void __set_type(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_type() ;

 ::Org::BouncyCastle::Asn1::DerUtf8String __declspec(property(get=__get_token, put=__set_token))  token;

constexpr void __set_token(::Org::BouncyCastle::Asn1::DerUtf8String value) ;

constexpr ::Org::BouncyCastle::Asn1::DerUtf8String __get_token() const;


// Properties

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_Type))  Type;

 ::Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=get_Value))  Value;


// Methods

// Ctor Parameters [CppParam { name: "token", ty: "::Org::BouncyCastle::Asn1::DerUtf8String", modifiers: "", def_value: None }]
explicit AuthenticatorControl(::Org::BouncyCastle::Asn1::DerUtf8String token) ;

/// @brief Method .ctor addr 0x1182bd0 size 0x28 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::DerUtf8String token) ;

// Ctor Parameters [CppParam { name: "token", ty: "::StringW", modifiers: "", def_value: None }]
explicit AuthenticatorControl(::StringW token) ;

/// @brief Method .ctor addr 0x1182bf8 size 0x7c virtual false final false
 void _ctor(::StringW token) ;

/// @brief Method get_Type addr 0x1182c74 size 0x58 virtual true final true
 ::Org::BouncyCastle::Asn1::DerObjectIdentifier get_Type() ;

/// @brief Method get_Value addr 0x1182ccc size 0x8 virtual true final true
 ::Org::BouncyCastle::Asn1::Asn1Encodable get_Value() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crmf
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crmf::AuthenticatorControl);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crmf::AuthenticatorControl, "Org.BouncyCastle.Crmf", "AuthenticatorControl");
