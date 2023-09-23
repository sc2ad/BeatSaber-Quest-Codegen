#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class SubsequentMessage;
}
// Type: Org.BouncyCastle.Asn1.Crmf::SubsequentMessage
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(123))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(124))
// CS Name: Org.BouncyCastle.Asn1.Crmf.SubsequentMessage
class CORDL_TYPE SubsequentMessage : public Org::BouncyCastle::Asn1::DerInteger {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SubsequentMessage() = default;

// Ctor Parameters [CppParam { name: "", ty: "SubsequentMessage", modifiers: " const&", def_value: None }]
constexpr SubsequentMessage(SubsequentMessage const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SubsequentMessage", modifiers: "&&", def_value: None }]
constexpr SubsequentMessage(SubsequentMessage&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SubsequentMessage(void* ptr) noexcept : Org::BouncyCastle::Asn1::DerInteger(ptr) {
}


  constexpr SubsequentMessage& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SubsequentMessage& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SubsequentMessage& operator=(SubsequentMessage&& o) noexcept = default;
  constexpr SubsequentMessage& operator=(SubsequentMessage const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::Crmf::SubsequentMessage __declspec(property(get=__get_encrCert, put=__set_encrCert))  encrCert;

static void __set_encrCert(Org::BouncyCastle::Asn1::Crmf::SubsequentMessage value) ;

static Org::BouncyCastle::Asn1::Crmf::SubsequentMessage __get_encrCert() ;

static Org::BouncyCastle::Asn1::Crmf::SubsequentMessage __declspec(property(get=__get_challengeResp, put=__set_challengeResp))  challengeResp;

static void __set_challengeResp(Org::BouncyCastle::Asn1::Crmf::SubsequentMessage value) ;

static Org::BouncyCastle::Asn1::Crmf::SubsequentMessage __get_challengeResp() ;


// Methods

// Ctor Parameters [CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: None }]
explicit SubsequentMessage(int32_t value) ;

/// @brief Method .ctor addr 0xdfb32c size 0x4 virtual false final false
 void _ctor(int32_t value) ;

/// @brief Method ValueOf addr 0xdf9a0c size 0x110 virtual false final false
static Org::BouncyCastle::Asn1::Crmf::SubsequentMessage ValueOf(int32_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(Org::BouncyCastle::Asn1::Crmf::SubsequentMessage);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Crmf::SubsequentMessage, "Org.BouncyCastle.Asn1.Crmf", "SubsequentMessage");
