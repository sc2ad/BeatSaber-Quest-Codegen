#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiBody;
}
// Type: Org.BouncyCastle.Asn1.Cmp::PkiBody
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(29))
// CS Name: Org.BouncyCastle.Asn1.Cmp.PkiBody
class CORDL_TYPE PkiBody : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Asn1::IAsn1Choice
constexpr operator  Org::BouncyCastle::Asn1::IAsn1Choice() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PkiBody() = default;

// Ctor Parameters [CppParam { name: "", ty: "PkiBody", modifiers: " const&", def_value: None }]
constexpr PkiBody(PkiBody const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PkiBody", modifiers: "&&", def_value: None }]
constexpr PkiBody(PkiBody&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PkiBody(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr PkiBody& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PkiBody& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PkiBody& operator=(PkiBody&& o) noexcept = default;
  constexpr PkiBody& operator=(PkiBody const& o) noexcept = default;
                


// Fields

/// @brief Field TYPE_INIT_REQ offset 0
static constexpr int32_t  TYPE_INIT_REQ{0};

/// @brief Field TYPE_INIT_REP offset 0
static constexpr int32_t  TYPE_INIT_REP{1};

/// @brief Field TYPE_CERT_REQ offset 0
static constexpr int32_t  TYPE_CERT_REQ{2};

/// @brief Field TYPE_CERT_REP offset 0
static constexpr int32_t  TYPE_CERT_REP{3};

/// @brief Field TYPE_P10_CERT_REQ offset 0
static constexpr int32_t  TYPE_P10_CERT_REQ{4};

/// @brief Field TYPE_POPO_CHALL offset 0
static constexpr int32_t  TYPE_POPO_CHALL{5};

/// @brief Field TYPE_POPO_REP offset 0
static constexpr int32_t  TYPE_POPO_REP{6};

/// @brief Field TYPE_KEY_UPDATE_REQ offset 0
static constexpr int32_t  TYPE_KEY_UPDATE_REQ{7};

/// @brief Field TYPE_KEY_UPDATE_REP offset 0
static constexpr int32_t  TYPE_KEY_UPDATE_REP{8};

/// @brief Field TYPE_KEY_RECOVERY_REQ offset 0
static constexpr int32_t  TYPE_KEY_RECOVERY_REQ{9};

/// @brief Field TYPE_KEY_RECOVERY_REP offset 0
static constexpr int32_t  TYPE_KEY_RECOVERY_REP{10};

/// @brief Field TYPE_REVOCATION_REQ offset 0
static constexpr int32_t  TYPE_REVOCATION_REQ{11};

/// @brief Field TYPE_REVOCATION_REP offset 0
static constexpr int32_t  TYPE_REVOCATION_REP{12};

/// @brief Field TYPE_CROSS_CERT_REQ offset 0
static constexpr int32_t  TYPE_CROSS_CERT_REQ{13};

/// @brief Field TYPE_CROSS_CERT_REP offset 0
static constexpr int32_t  TYPE_CROSS_CERT_REP{14};

/// @brief Field TYPE_CA_KEY_UPDATE_ANN offset 0
static constexpr int32_t  TYPE_CA_KEY_UPDATE_ANN{15};

/// @brief Field TYPE_CERT_ANN offset 0
static constexpr int32_t  TYPE_CERT_ANN{16};

/// @brief Field TYPE_REVOCATION_ANN offset 0
static constexpr int32_t  TYPE_REVOCATION_ANN{17};

/// @brief Field TYPE_CRL_ANN offset 0
static constexpr int32_t  TYPE_CRL_ANN{18};

/// @brief Field TYPE_CONFIRM offset 0
static constexpr int32_t  TYPE_CONFIRM{19};

/// @brief Field TYPE_NESTED offset 0
static constexpr int32_t  TYPE_NESTED{20};

/// @brief Field TYPE_GEN_MSG offset 0
static constexpr int32_t  TYPE_GEN_MSG{21};

/// @brief Field TYPE_GEN_REP offset 0
static constexpr int32_t  TYPE_GEN_REP{22};

/// @brief Field TYPE_ERROR offset 0
static constexpr int32_t  TYPE_ERROR{23};

/// @brief Field TYPE_CERT_CONFIRM offset 0
static constexpr int32_t  TYPE_CERT_CONFIRM{24};

/// @brief Field TYPE_POLL_REQ offset 0
static constexpr int32_t  TYPE_POLL_REQ{25};

/// @brief Field TYPE_POLL_REP offset 0
static constexpr int32_t  TYPE_POLL_REP{26};

 int32_t __declspec(property(get=__get_tagNo, put=__set_tagNo))  tagNo;

constexpr void __set_tagNo(int32_t value) ;

constexpr int32_t __get_tagNo() const;

 Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=__get_body, put=__set_body))  body;

constexpr void __set_body(Org::BouncyCastle::Asn1::Asn1Encodable value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Encodable __get_body() const;


// Properties

 int32_t __declspec(property(get=get_Type))  Type;

 Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=get_Content))  Content;


// Methods

/// @brief Method GetInstance addr 0xddbf7c size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Cmp::PkiBody GetInstance(::bs_hook::Il2CppWrapperType obj) ;

static Org::BouncyCastle::Asn1::Cmp::PkiBody New_ctor(Org::BouncyCastle::Asn1::Asn1TaggedObject tagged) ;

/// @brief Method .ctor addr 0xddc104 size 0x50 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1TaggedObject tagged) ;

static Org::BouncyCastle::Asn1::Cmp::PkiBody New_ctor(int32_t type, Org::BouncyCastle::Asn1::Asn1Encodable content) ;

/// @brief Method .ctor addr 0xddc2b0 size 0x3c virtual false final false
 void _ctor(int32_t type, Org::BouncyCastle::Asn1::Asn1Encodable content) ;

/// @brief Method GetBodyForType addr 0xddc154 size 0x15c virtual false final false
static Org::BouncyCastle::Asn1::Asn1Encodable GetBodyForType(int32_t type, Org::BouncyCastle::Asn1::Asn1Encodable o) ;

/// @brief Method get_Type addr 0xddd090 size 0x8 virtual true final false
 int32_t get_Type() ;

/// @brief Method get_Content addr 0xddd098 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Encodable get_Content() ;

/// @brief Method ToAsn1Object addr 0xddd0a0 size 0x74 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cmp::PkiBody);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cmp::PkiBody, "Org.BouncyCastle.Asn1.Cmp", "PkiBody");
