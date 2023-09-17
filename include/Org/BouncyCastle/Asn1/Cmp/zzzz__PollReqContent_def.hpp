#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class PollReqContent;
}
// Type: Org.BouncyCastle.Asn1.Cmp::PollReqContent
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(45))
// CS Name: Org.BouncyCastle.Asn1.Cmp.PollReqContent
class CORDL_TYPE PollReqContent : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PollReqContent() = default;

// Ctor Parameters [CppParam { name: "", ty: "PollReqContent", modifiers: " const&", def_value: None }]
constexpr PollReqContent(PollReqContent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PollReqContent", modifiers: "&&", def_value: None }]
constexpr PollReqContent(PollReqContent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PollReqContent(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr PollReqContent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PollReqContent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PollReqContent& operator=(PollReqContent&& o) noexcept = default;
  constexpr PollReqContent& operator=(PollReqContent const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_content, put=__set_content))  content;

constexpr void __set_content(::Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence __get_content() const;


// Methods

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit PollReqContent(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xde0bc4 size 0x28 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xddcd7c size 0x18c virtual false final false
static ::Org::BouncyCastle::Asn1::Cmp::PollReqContent GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetCertReqIDs addr 0xde0bec size 0x13c virtual true final false
 ::ArrayW<::ArrayW<::Org::BouncyCastle::Asn1::DerInteger>> GetCertReqIDs() ;

/// @brief Method SequenceToDerIntegerArray addr 0xde0d28 size 0xf4 virtual false final false
static ::ArrayW<::Org::BouncyCastle::Asn1::DerInteger> SequenceToDerIntegerArray(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method ToAsn1Object addr 0xde0e1c size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cmp
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::PollReqContent);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::PollReqContent, "Org.BouncyCastle.Asn1.Cmp", "PollReqContent");
