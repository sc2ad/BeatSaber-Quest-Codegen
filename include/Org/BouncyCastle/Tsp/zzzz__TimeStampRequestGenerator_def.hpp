#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Asn1 {
class DerBoolean;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Tsp {
class TimeStampRequest;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Tsp {
class TimeStampRequestGenerator;
}
// Type: Org.BouncyCastle.Tsp::TimeStampRequestGenerator
namespace Org::BouncyCastle::Tsp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1765))
// CS Name: Org.BouncyCastle.Tsp.TimeStampRequestGenerator
class CORDL_TYPE TimeStampRequestGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~TimeStampRequestGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeStampRequestGenerator", modifiers: " const&", def_value: None }]
constexpr TimeStampRequestGenerator(TimeStampRequestGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeStampRequestGenerator", modifiers: "&&", def_value: None }]
constexpr TimeStampRequestGenerator(TimeStampRequestGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TimeStampRequestGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TimeStampRequestGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TimeStampRequestGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TimeStampRequestGenerator& operator=(TimeStampRequestGenerator&& o) noexcept = default;
  constexpr TimeStampRequestGenerator& operator=(TimeStampRequestGenerator const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_reqPolicy, put=__set_reqPolicy))  reqPolicy;

constexpr void __set_reqPolicy(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_reqPolicy() const;

 ::Org::BouncyCastle::Asn1::DerBoolean __declspec(property(get=__get_certReq, put=__set_certReq))  certReq;

constexpr void __set_certReq(::Org::BouncyCastle::Asn1::DerBoolean value) ;

constexpr ::Org::BouncyCastle::Asn1::DerBoolean __get_certReq() const;

 ::System::Collections::IDictionary __declspec(property(get=__get_extensions, put=__set_extensions))  extensions;

constexpr void __set_extensions(::System::Collections::IDictionary value) ;

constexpr ::System::Collections::IDictionary __get_extensions() const;

 ::System::Collections::IList __declspec(property(get=__get_extOrdering, put=__set_extOrdering))  extOrdering;

constexpr void __set_extOrdering(::System::Collections::IList value) ;

constexpr ::System::Collections::IList __get_extOrdering() const;


// Methods

/// @brief Method SetReqPolicy addr 0x10c3d3c size 0x70 virtual false final false
 void SetReqPolicy(::StringW reqPolicy) ;

/// @brief Method SetCertReq addr 0x10c3dac size 0x6c virtual false final false
 void SetCertReq(bool certReq) ;

/// @brief Method AddExtension addr 0x10c3e18 size 0x44 virtual false final false
 void AddExtension(::StringW oid, bool critical, ::Org::BouncyCastle::Asn1::Asn1Encodable value) ;

/// @brief Method AddExtension addr 0x10c3e5c size 0x1d8 virtual false final false
 void AddExtension(::StringW oid, bool critical, ::ArrayW<uint8_t> value) ;

/// @brief Method AddExtension addr 0x10c4034 size 0x4c virtual true final false
 void AddExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid, bool critical, ::Org::BouncyCastle::Asn1::Asn1Encodable extValue) ;

/// @brief Method AddExtension addr 0x10c4080 size 0x1a8 virtual true final false
 void AddExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid, bool critical, ::ArrayW<uint8_t> extValue) ;

/// @brief Method Generate addr 0x10c4228 size 0x8 virtual false final false
 ::Org::BouncyCastle::Tsp::TimeStampRequest Generate(::StringW digestAlgorithm, ::ArrayW<uint8_t> digest) ;

/// @brief Method Generate addr 0x10c4230 size 0x2d0 virtual false final false
 ::Org::BouncyCastle::Tsp::TimeStampRequest Generate(::StringW digestAlgorithmOid, ::ArrayW<uint8_t> digest, ::Org::BouncyCastle::Math::BigInteger nonce) ;

/// @brief Method Generate addr 0x10c4500 size 0x1c virtual true final false
 ::Org::BouncyCastle::Tsp::TimeStampRequest Generate(::Org::BouncyCastle::Asn1::DerObjectIdentifier digestAlgorithm, ::ArrayW<uint8_t> digest) ;

/// @brief Method Generate addr 0x10c451c size 0x18 virtual true final false
 ::Org::BouncyCastle::Tsp::TimeStampRequest Generate(::Org::BouncyCastle::Asn1::DerObjectIdentifier digestAlgorithm, ::ArrayW<uint8_t> digest, ::Org::BouncyCastle::Math::BigInteger nonce) ;

// Ctor Parameters []
explicit TimeStampRequestGenerator() ;

/// @brief Method .ctor addr 0x10c4534 size 0x70 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Tsp
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Tsp::TimeStampRequestGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Tsp::TimeStampRequestGenerator, "Org.BouncyCastle.Tsp", "TimeStampRequestGenerator");
