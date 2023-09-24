#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class DerUtf8String;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Crmf {
class IControl;
}
// Forward declare root types
namespace Org::BouncyCastle::Crmf {
class RegTokenControl;
}
// Type: Org.BouncyCastle.Crmf::RegTokenControl
namespace Org::BouncyCastle::Crmf {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(713))
// CS Name: Org.BouncyCastle.Crmf.RegTokenControl
class CORDL_TYPE RegTokenControl : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crmf::IControl
constexpr operator  Org::BouncyCastle::Crmf::IControl() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~RegTokenControl() = default;

// Ctor Parameters [CppParam { name: "", ty: "RegTokenControl", modifiers: " const&", def_value: None }]
constexpr RegTokenControl(RegTokenControl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RegTokenControl", modifiers: "&&", def_value: None }]
constexpr RegTokenControl(RegTokenControl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RegTokenControl(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RegTokenControl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RegTokenControl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RegTokenControl& operator=(RegTokenControl&& o) noexcept = default;
  constexpr RegTokenControl& operator=(RegTokenControl const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_type, put=__set_type))  type;

static void __set_type(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_type() ;

 Org::BouncyCastle::Asn1::DerUtf8String __declspec(property(get=__get_token, put=__set_token))  token;

constexpr void __set_token(Org::BouncyCastle::Asn1::DerUtf8String value) ;

constexpr Org::BouncyCastle::Asn1::DerUtf8String __get_token() const;


// Properties

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_Type))  Type;

 Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=get_Value))  Value;


// Methods

static Org::BouncyCastle::Crmf::RegTokenControl New_ctor(Org::BouncyCastle::Asn1::DerUtf8String token) ;

/// @brief Method .ctor addr 0x11830dc size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerUtf8String token) ;

static Org::BouncyCastle::Crmf::RegTokenControl New_ctor(::StringW token) ;

/// @brief Method .ctor addr 0x1187e0c size 0x7c virtual false final false
 void _ctor(::StringW token) ;

/// @brief Method get_Type addr 0x1187e88 size 0x58 virtual true final true
 Org::BouncyCastle::Asn1::DerObjectIdentifier get_Type() ;

/// @brief Method get_Value addr 0x1187ee0 size 0x8 virtual true final true
 Org::BouncyCastle::Asn1::Asn1Encodable get_Value() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crmf
NEED_NO_BOX(Org::BouncyCastle::Crmf::RegTokenControl);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crmf::RegTokenControl, "Org.BouncyCastle.Crmf", "RegTokenControl");
