#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Org::BouncyCastle::Asn1::Cmp {
class CmpCertificate;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiBody;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiHeader;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiMessage;
}
// Type: Org.BouncyCastle.Asn1.Cmp::PkiMessage
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(39))
// CS Name: Org.BouncyCastle.Asn1.Cmp.PkiMessage
class CORDL_TYPE PkiMessage : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~PkiMessage() = default;

// Ctor Parameters [CppParam { name: "", ty: "PkiMessage", modifiers: " const&", def_value: None }]
constexpr PkiMessage(PkiMessage const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PkiMessage", modifiers: "&&", def_value: None }]
constexpr PkiMessage(PkiMessage&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PkiMessage(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr PkiMessage& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PkiMessage& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PkiMessage& operator=(PkiMessage&& o) noexcept = default;
  constexpr PkiMessage& operator=(PkiMessage const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Cmp::PkiHeader __declspec(property(get=__get_header, put=__set_header))  header;

constexpr void __set_header(Org::BouncyCastle::Asn1::Cmp::PkiHeader value) ;

constexpr Org::BouncyCastle::Asn1::Cmp::PkiHeader __get_header() const;

 Org::BouncyCastle::Asn1::Cmp::PkiBody __declspec(property(get=__get_body, put=__set_body))  body;

constexpr void __set_body(Org::BouncyCastle::Asn1::Cmp::PkiBody value) ;

constexpr Org::BouncyCastle::Asn1::Cmp::PkiBody __get_body() const;

 Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=__get_protection, put=__set_protection))  protection;

constexpr void __set_protection(Org::BouncyCastle::Asn1::DerBitString value) ;

constexpr Org::BouncyCastle::Asn1::DerBitString __get_protection() const;

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_extraCerts, put=__set_extraCerts))  extraCerts;

constexpr void __set_extraCerts(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_extraCerts() const;


// Properties

 Org::BouncyCastle::Asn1::Cmp::PkiHeader __declspec(property(get=get_Header))  Header;

 Org::BouncyCastle::Asn1::Cmp::PkiBody __declspec(property(get=get_Body))  Body;

 Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=get_Protection))  Protection;


// Methods

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit PkiMessage(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xddf920 size 0x1c4 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xddfae4 size 0xa4 virtual false final false
static Org::BouncyCastle::Asn1::Cmp::PkiMessage GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "header", ty: "Org::BouncyCastle::Asn1::Cmp::PkiHeader", modifiers: "", def_value: None }, CppParam { name: "body", ty: "Org::BouncyCastle::Asn1::Cmp::PkiBody", modifiers: "", def_value: None }, CppParam { name: "protection", ty: "Org::BouncyCastle::Asn1::DerBitString", modifiers: "", def_value: None }, CppParam { name: "extraCerts", ty: "::ArrayW<Org::BouncyCastle::Asn1::Cmp::CmpCertificate>", modifiers: "", def_value: None }]
explicit PkiMessage(Org::BouncyCastle::Asn1::Cmp::PkiHeader header, Org::BouncyCastle::Asn1::Cmp::PkiBody body, Org::BouncyCastle::Asn1::DerBitString protection, ::ArrayW<Org::BouncyCastle::Asn1::Cmp::CmpCertificate> extraCerts) ;

/// @brief Method .ctor addr 0xddfb88 size 0x9c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Cmp::PkiHeader header, Org::BouncyCastle::Asn1::Cmp::PkiBody body, Org::BouncyCastle::Asn1::DerBitString protection, ::ArrayW<Org::BouncyCastle::Asn1::Cmp::CmpCertificate> extraCerts) ;

// Ctor Parameters [CppParam { name: "header", ty: "Org::BouncyCastle::Asn1::Cmp::PkiHeader", modifiers: "", def_value: None }, CppParam { name: "body", ty: "Org::BouncyCastle::Asn1::Cmp::PkiBody", modifiers: "", def_value: None }, CppParam { name: "protection", ty: "Org::BouncyCastle::Asn1::DerBitString", modifiers: "", def_value: None }]
explicit PkiMessage(Org::BouncyCastle::Asn1::Cmp::PkiHeader header, Org::BouncyCastle::Asn1::Cmp::PkiBody body, Org::BouncyCastle::Asn1::DerBitString protection) ;

/// @brief Method .ctor addr 0xddfc24 size 0x60 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Cmp::PkiHeader header, Org::BouncyCastle::Asn1::Cmp::PkiBody body, Org::BouncyCastle::Asn1::DerBitString protection) ;

// Ctor Parameters [CppParam { name: "header", ty: "Org::BouncyCastle::Asn1::Cmp::PkiHeader", modifiers: "", def_value: None }, CppParam { name: "body", ty: "Org::BouncyCastle::Asn1::Cmp::PkiBody", modifiers: "", def_value: None }]
explicit PkiMessage(Org::BouncyCastle::Asn1::Cmp::PkiHeader header, Org::BouncyCastle::Asn1::Cmp::PkiBody body) ;

/// @brief Method .ctor addr 0xddfc84 size 0x5c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Cmp::PkiHeader header, Org::BouncyCastle::Asn1::Cmp::PkiBody body) ;

/// @brief Method get_Header addr 0xddfce0 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Cmp::PkiHeader get_Header() ;

/// @brief Method get_Body addr 0xddfce8 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Cmp::PkiBody get_Body() ;

/// @brief Method get_Protection addr 0xddfcf0 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::DerBitString get_Protection() ;

/// @brief Method GetExtraCerts addr 0xddfcf8 size 0x100 virtual true final false
 ::ArrayW<Org::BouncyCastle::Asn1::Cmp::CmpCertificate> GetExtraCerts() ;

/// @brief Method ToAsn1Object addr 0xddfdf8 size 0x158 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cmp::PkiMessage);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cmp::PkiMessage, "Org.BouncyCastle.Asn1.Cmp", "PkiMessage");
