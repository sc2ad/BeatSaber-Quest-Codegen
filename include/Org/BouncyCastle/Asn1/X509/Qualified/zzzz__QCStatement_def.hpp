#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509::Qualified {
class QCStatement;
}
// Type: Org.BouncyCastle.Asn1.X509.Qualified::QCStatement
namespace Org::BouncyCastle::Asn1::X509::Qualified {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(331))
// CS Name: Org.BouncyCastle.Asn1.X509.Qualified.QCStatement
class CORDL_TYPE QCStatement : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~QCStatement() = default;

// Ctor Parameters [CppParam { name: "", ty: "QCStatement", modifiers: " const&", def_value: None }]
constexpr QCStatement(QCStatement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "QCStatement", modifiers: "&&", def_value: None }]
constexpr QCStatement(QCStatement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit QCStatement(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr QCStatement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr QCStatement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr QCStatement& operator=(QCStatement&& o) noexcept = default;
  constexpr QCStatement& operator=(QCStatement const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_qcStatementId, put=__set_qcStatementId))  qcStatementId;

constexpr void __set_qcStatementId(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier __get_qcStatementId() const;

 Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=__get_qcStatementInfo, put=__set_qcStatementInfo))  qcStatementInfo;

constexpr void __set_qcStatementInfo(Org::BouncyCastle::Asn1::Asn1Encodable value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Encodable __get_qcStatementInfo() const;


// Properties

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_StatementId))  StatementId;

 Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=get_StatementInfo))  StatementInfo;


// Methods

/// @brief Method GetInstance addr 0xff43ec size 0x168 virtual false final false
static Org::BouncyCastle::Asn1::X509::Qualified::QCStatement GetInstance(::bs_hook::Il2CppWrapperType obj) ;

static Org::BouncyCastle::Asn1::X509::Qualified::QCStatement New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xff4554 size 0xc4 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

static Org::BouncyCastle::Asn1::X509::Qualified::QCStatement New_ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier qcStatementId) ;

/// @brief Method .ctor addr 0xff4618 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier qcStatementId) ;

static Org::BouncyCastle::Asn1::X509::Qualified::QCStatement New_ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier qcStatementId, Org::BouncyCastle::Asn1::Asn1Encodable qcStatementInfo) ;

/// @brief Method .ctor addr 0xff4640 size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier qcStatementId, Org::BouncyCastle::Asn1::Asn1Encodable qcStatementInfo) ;

/// @brief Method get_StatementId addr 0xff466c size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerObjectIdentifier get_StatementId() ;

/// @brief Method get_StatementInfo addr 0xff4674 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Encodable get_StatementInfo() ;

/// @brief Method ToAsn1Object addr 0xff467c size 0x148 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509::Qualified
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::Qualified::QCStatement);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::Qualified::QCStatement, "Org.BouncyCastle.Asn1.X509.Qualified", "QCStatement");
