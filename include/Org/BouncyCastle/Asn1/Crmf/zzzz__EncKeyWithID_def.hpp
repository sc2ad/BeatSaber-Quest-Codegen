#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerUtf8String;
}
namespace Org::BouncyCastle::Asn1::Pkcs {
class PrivateKeyInfo;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class EncKeyWithID;
}
// Type: Org.BouncyCastle.Asn1.Crmf::EncKeyWithID
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(111))
// CS Name: Org.BouncyCastle.Asn1.Crmf.EncKeyWithID
class CORDL_TYPE EncKeyWithID : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~EncKeyWithID() = default;

// Ctor Parameters [CppParam { name: "", ty: "EncKeyWithID", modifiers: " const&", def_value: None }]
constexpr EncKeyWithID(EncKeyWithID const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EncKeyWithID", modifiers: "&&", def_value: None }]
constexpr EncKeyWithID(EncKeyWithID&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EncKeyWithID(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr EncKeyWithID& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EncKeyWithID& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EncKeyWithID& operator=(EncKeyWithID&& o) noexcept = default;
  constexpr EncKeyWithID& operator=(EncKeyWithID const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo __declspec(property(get=__get_privKeyInfo, put=__set_privKeyInfo))  privKeyInfo;

constexpr void __set_privKeyInfo(Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo value) ;

constexpr Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo __get_privKeyInfo() const;

 Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=__get_identifier, put=__set_identifier))  identifier;

constexpr void __set_identifier(Org::BouncyCastle::Asn1::Asn1Encodable value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Encodable __get_identifier() const;


// Properties

 Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo __declspec(property(get=get_PrivateKey))  PrivateKey;

 bool __declspec(property(get=get_HasIdentifier))  HasIdentifier;

 bool __declspec(property(get=get_IsIdentifierUtf8String))  IsIdentifierUtf8String;

 Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=get_Identifier))  Identifier;


// Methods

/// @brief Method GetInstance addr 0xdf7a0c size 0xa4 virtual false final false
static Org::BouncyCastle::Asn1::Crmf::EncKeyWithID GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit EncKeyWithID(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdf7ab0 size 0x10c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "privKeyInfo", ty: "Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo", modifiers: "", def_value: None }]
explicit EncKeyWithID(Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo privKeyInfo) ;

/// @brief Method .ctor addr 0xdf7bbc size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo privKeyInfo) ;

// Ctor Parameters [CppParam { name: "privKeyInfo", ty: "Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo", modifiers: "", def_value: None }, CppParam { name: "str", ty: "Org::BouncyCastle::Asn1::DerUtf8String", modifiers: "", def_value: None }]
explicit EncKeyWithID(Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo privKeyInfo, Org::BouncyCastle::Asn1::DerUtf8String str) ;

/// @brief Method .ctor addr 0xdf7be4 size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo privKeyInfo, Org::BouncyCastle::Asn1::DerUtf8String str) ;

// Ctor Parameters [CppParam { name: "privKeyInfo", ty: "Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo", modifiers: "", def_value: None }, CppParam { name: "generalName", ty: "Org::BouncyCastle::Asn1::X509::GeneralName", modifiers: "", def_value: None }]
explicit EncKeyWithID(Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo privKeyInfo, Org::BouncyCastle::Asn1::X509::GeneralName generalName) ;

/// @brief Method .ctor addr 0xdf7c10 size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo privKeyInfo, Org::BouncyCastle::Asn1::X509::GeneralName generalName) ;

/// @brief Method get_PrivateKey addr 0xdf7c3c size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo get_PrivateKey() ;

/// @brief Method get_HasIdentifier addr 0xdf7c44 size 0x10 virtual true final false
 bool get_HasIdentifier() ;

/// @brief Method get_IsIdentifierUtf8String addr 0xdf7c54 size 0x7c virtual true final false
 bool get_IsIdentifierUtf8String() ;

/// @brief Method get_Identifier addr 0xdf7cd0 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Encodable get_Identifier() ;

/// @brief Method ToAsn1Object addr 0xdf7cd8 size 0x148 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(Org::BouncyCastle::Asn1::Crmf::EncKeyWithID);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Crmf::EncKeyWithID, "Org.BouncyCastle.Asn1.Crmf", "EncKeyWithID");
