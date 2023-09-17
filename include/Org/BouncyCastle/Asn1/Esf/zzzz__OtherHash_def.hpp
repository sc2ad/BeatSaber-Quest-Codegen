#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace Org::BouncyCastle::Asn1::Esf {
class OtherHashAlgAndValue;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class OtherHash;
}
// Type: Org.BouncyCastle.Asn1.Esf::OtherHash
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(149))
// CS Name: Org.BouncyCastle.Asn1.Esf.OtherHash
class CORDL_TYPE OtherHash : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Asn1::IAsn1Choice
constexpr operator  ::Org::BouncyCastle::Asn1::IAsn1Choice() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OtherHash() = default;

// Ctor Parameters [CppParam { name: "", ty: "OtherHash", modifiers: " const&", def_value: None }]
constexpr OtherHash(OtherHash const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OtherHash", modifiers: "&&", def_value: None }]
constexpr OtherHash(OtherHash&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OtherHash(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr OtherHash& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OtherHash& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OtherHash& operator=(OtherHash&& o) noexcept = default;
  constexpr OtherHash& operator=(OtherHash const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_sha1Hash, put=__set_sha1Hash))  sha1Hash;

constexpr void __set_sha1Hash(::Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString __get_sha1Hash() const;

 ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue __declspec(property(get=__get_otherHash, put=__set_otherHash))  otherHash;

constexpr void __set_otherHash(::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue value) ;

constexpr ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue __get_otherHash() const;


// Properties

 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_HashAlgorithm))  HashAlgorithm;


// Methods

/// @brief Method GetInstance addr 0xe04f00 size 0x128 virtual false final false
static ::Org::BouncyCastle::Asn1::Esf::OtherHash GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "sha1Hash", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit OtherHash(::ArrayW<uint8_t> sha1Hash) ;

/// @brief Method .ctor addr 0xe06c18 size 0xc4 virtual false final false
 void _ctor(::ArrayW<uint8_t> sha1Hash) ;

// Ctor Parameters [CppParam { name: "sha1Hash", ty: "::Org::BouncyCastle::Asn1::Asn1OctetString", modifiers: "", def_value: None }]
explicit OtherHash(::Org::BouncyCastle::Asn1::Asn1OctetString sha1Hash) ;

/// @brief Method .ctor addr 0xe069a0 size 0x78 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1OctetString sha1Hash) ;

// Ctor Parameters [CppParam { name: "otherHash", ty: "::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue", modifiers: "", def_value: None }]
explicit OtherHash(::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue otherHash) ;

/// @brief Method .ctor addr 0xe06ba0 size 0x78 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue otherHash) ;

/// @brief Method get_HashAlgorithm addr 0xe06cdc size 0xa4 virtual false final false
 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_HashAlgorithm() ;

/// @brief Method GetHashValue addr 0xe06d80 size 0x30 virtual false final false
 ::ArrayW<uint8_t> GetHashValue() ;

/// @brief Method ToAsn1Object addr 0xe06dd0 size 0x20 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Esf
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::OtherHash);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::OtherHash, "Org.BouncyCastle.Asn1.Esf", "OtherHash");
