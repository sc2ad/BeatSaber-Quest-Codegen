#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSignedGenerator_def.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Cms {
class CmsProcessable;
}
namespace System::Collections {
class ICollection;
}
namespace Org::BouncyCastle::Asn1::Cms {
class AttributeTable;
}
namespace System::IO {
class Stream;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Cms {
class SignerInformation;
}
namespace Org::BouncyCastle::Cms {
class CmsSignedHelper;
}
namespace Org::BouncyCastle::Cms {
class CmsAttributeTableGenerator;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Asn1::Cms {
class SignerIdentifier;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Generator;
}
namespace Org::BouncyCastle::Asn1 {
class BerSequenceGenerator;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Cms {
class ISignerInfoGenerator;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::Cms {
class SignerInfo;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsSignedDataStreamGenerator;
}
namespace Org::BouncyCastle::Cms {
class ____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream;
}
namespace Org::BouncyCastle::Cms {
class ____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder;
}
namespace Org::BouncyCastle::Cms {
class ____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl;
}
// Type: ::DigestAndSignerInfoGeneratorHolder
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(653))
// CS Name: Org.BouncyCastle.Cms.CmsSignedDataStreamGenerator::DigestAndSignerInfoGeneratorHolder
class CORDL_TYPE ____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder", modifiers: " const&", def_value: None }]
constexpr ____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder(____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder", modifiers: "&&", def_value: None }]
constexpr ____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder(____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder& operator=(____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder&& o) noexcept = default;
  constexpr ____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder& operator=(____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Cms::ISignerInfoGenerator __declspec(property(get=__get_signerInf, put=__set_signerInf))  signerInf;

constexpr void __set_signerInf(::Org::BouncyCastle::Cms::ISignerInfoGenerator value) ;

constexpr ::Org::BouncyCastle::Cms::ISignerInfoGenerator __get_signerInf() const;

 ::StringW __declspec(property(get=__get_digestOID, put=__set_digestOID))  digestOID;

constexpr void __set_digestOID(::StringW value) ;

constexpr ::StringW __get_digestOID() const;


// Properties

 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_DigestAlgorithm))  DigestAlgorithm;


// Methods

// Ctor Parameters [CppParam { name: "signerInf", ty: "::Org::BouncyCastle::Cms::ISignerInfoGenerator", modifiers: "", def_value: None }, CppParam { name: "digestOID", ty: "::StringW", modifiers: "", def_value: None }]
explicit ____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder(::Org::BouncyCastle::Cms::ISignerInfoGenerator signerInf, ::StringW digestOID) ;

/// @brief Method .ctor addr 0x1165940 size 0x2c virtual false final false
 void _ctor(::Org::BouncyCastle::Cms::ISignerInfoGenerator signerInf, ::StringW digestOID) ;

/// @brief Method get_DigestAlgorithm addr 0x1167694 size 0xd4 virtual false final false
 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_DigestAlgorithm() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
// Type: ::SignerInfoGeneratorImpl
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(654))
// CS Name: Org.BouncyCastle.Cms.CmsSignedDataStreamGenerator::SignerInfoGeneratorImpl
class CORDL_TYPE ____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Cms::ISignerInfoGenerator
constexpr operator  ::Org::BouncyCastle::Cms::ISignerInfoGenerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl", modifiers: " const&", def_value: None }]
constexpr ____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl(____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl", modifiers: "&&", def_value: None }]
constexpr ____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl(____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl& operator=(____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl&& o) noexcept = default;
  constexpr ____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl& operator=(____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator __declspec(property(get=__get_outer, put=__set_outer))  outer;

constexpr void __set_outer(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator value) ;

constexpr ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator __get_outer() const;

 ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier __declspec(property(get=__get__signerIdentifier, put=__set__signerIdentifier))  _signerIdentifier;

constexpr void __set__signerIdentifier(::Org::BouncyCastle::Asn1::Cms::SignerIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier __get__signerIdentifier() const;

 ::StringW __declspec(property(get=__get__digestOID, put=__set__digestOID))  _digestOID;

constexpr void __set__digestOID(::StringW value) ;

constexpr ::StringW __get__digestOID() const;

 ::StringW __declspec(property(get=__get__encOID, put=__set__encOID))  _encOID;

constexpr void __set__encOID(::StringW value) ;

constexpr ::StringW __get__encOID() const;

 ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator __declspec(property(get=__get__sAttr, put=__set__sAttr))  _sAttr;

constexpr void __set__sAttr(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator value) ;

constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator __get__sAttr() const;

 ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator __declspec(property(get=__get__unsAttr, put=__set__unsAttr))  _unsAttr;

constexpr void __set__unsAttr(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator value) ;

constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator __get__unsAttr() const;

 ::StringW __declspec(property(get=__get__encName, put=__set__encName))  _encName;

constexpr void __set__encName(::StringW value) ;

constexpr ::StringW __get__encName() const;

 ::Org::BouncyCastle::Crypto::ISigner __declspec(property(get=__get__sig, put=__set__sig))  _sig;

constexpr void __set__sig(::Org::BouncyCastle::Crypto::ISigner value) ;

constexpr ::Org::BouncyCastle::Crypto::ISigner __get__sig() const;


// Methods

// Ctor Parameters [CppParam { name: "outer", ty: "::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator", modifiers: "", def_value: None }, CppParam { name: "key", ty: "::Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }, CppParam { name: "signerIdentifier", ty: "::Org::BouncyCastle::Asn1::Cms::SignerIdentifier", modifiers: "", def_value: None }, CppParam { name: "digestOID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "encOID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "sAttr", ty: "::Org::BouncyCastle::Cms::CmsAttributeTableGenerator", modifiers: "", def_value: None }, CppParam { name: "unsAttr", ty: "::Org::BouncyCastle::Cms::CmsAttributeTableGenerator", modifiers: "", def_value: None }]
explicit ____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator outer, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter key, ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier signerIdentifier, ::StringW digestOID, ::StringW encOID, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator sAttr, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator unsAttr) ;

/// @brief Method .ctor addr 0x116561c size 0x324 virtual false final false
 void _ctor(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator outer, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter key, ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier signerIdentifier, ::StringW digestOID, ::StringW encOID, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator sAttr, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator unsAttr) ;

/// @brief Method Generate addr 0x11677c0 size 0x8f0 virtual true final true
 ::Org::BouncyCastle::Asn1::Cms::SignerInfo Generate(::Org::BouncyCastle::Asn1::DerObjectIdentifier contentType, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier digestAlgorithm, ::ArrayW<uint8_t> calculatedDigest) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
// Type: ::CmsSignedDataOutputStream
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(484))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(655))
// CS Name: Org.BouncyCastle.Cms.CmsSignedDataStreamGenerator::CmsSignedDataOutputStream
class CORDL_TYPE ____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream : public ::Org::BouncyCastle::Utilities::IO::BaseOutputStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream", modifiers: " const&", def_value: None }]
constexpr ____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream(____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream", modifiers: "&&", def_value: None }]
constexpr ____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream(____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream(void* ptr) noexcept : ::Org::BouncyCastle::Utilities::IO::BaseOutputStream(ptr) {
}


  constexpr ____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream& operator=(____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream&& o) noexcept = default;
  constexpr ____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream& operator=(____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator __declspec(property(get=__get_outer, put=__set_outer))  outer;

constexpr void __set_outer(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator value) ;

constexpr ::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator __get_outer() const;

 ::System::IO::Stream __declspec(property(get=__get__out, put=__set__out))  _out;

constexpr void __set__out(::System::IO::Stream value) ;

constexpr ::System::IO::Stream __get__out() const;

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get__contentOID, put=__set__contentOID))  _contentOID;

constexpr void __set__contentOID(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get__contentOID() const;

 ::Org::BouncyCastle::Asn1::BerSequenceGenerator __declspec(property(get=__get__sGen, put=__set__sGen))  _sGen;

constexpr void __set__sGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator value) ;

constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator __get__sGen() const;

 ::Org::BouncyCastle::Asn1::BerSequenceGenerator __declspec(property(get=__get__sigGen, put=__set__sigGen))  _sigGen;

constexpr void __set__sigGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator value) ;

constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator __get__sigGen() const;

 ::Org::BouncyCastle::Asn1::BerSequenceGenerator __declspec(property(get=__get__eiGen, put=__set__eiGen))  _eiGen;

constexpr void __set__eiGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator value) ;

constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator __get__eiGen() const;


// Methods

// Ctor Parameters [CppParam { name: "outer", ty: "::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator", modifiers: "", def_value: None }, CppParam { name: "outStream", ty: "::System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "contentOID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "sGen", ty: "::Org::BouncyCastle::Asn1::BerSequenceGenerator", modifiers: "", def_value: None }, CppParam { name: "sigGen", ty: "::Org::BouncyCastle::Asn1::BerSequenceGenerator", modifiers: "", def_value: None }, CppParam { name: "eiGen", ty: "::Org::BouncyCastle::Asn1::BerSequenceGenerator", modifiers: "", def_value: None }]
explicit ____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator outer, ::System::IO::Stream outStream, ::StringW contentOID, ::Org::BouncyCastle::Asn1::BerSequenceGenerator sGen, ::Org::BouncyCastle::Asn1::BerSequenceGenerator sigGen, ::Org::BouncyCastle::Asn1::BerSequenceGenerator eiGen) ;

/// @brief Method .ctor addr 0x116707c size 0xa8 virtual false final false
 void _ctor(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator outer, ::System::IO::Stream outStream, ::StringW contentOID, ::Org::BouncyCastle::Asn1::BerSequenceGenerator sGen, ::Org::BouncyCastle::Asn1::BerSequenceGenerator sigGen, ::Org::BouncyCastle::Asn1::BerSequenceGenerator eiGen) ;

/// @brief Method WriteByte addr 0x11680b8 size 0x24 virtual true final false
 void WriteByte(uint8_t b) ;

/// @brief Method Write addr 0x11680dc size 0x24 virtual true final false
 void Write(::ArrayW<uint8_t> bytes, int32_t off, int32_t len) ;

/// @brief Method Close addr 0x1168100 size 0x1c virtual true final false
 void Close() ;

/// @brief Method DoClose addr 0x116811c size 0xfd0 virtual false final false
 void DoClose() ;

/// @brief Method WriteToGenerator addr 0x11690ec size 0x64 virtual false final false
static void WriteToGenerator(::Org::BouncyCastle::Asn1::Asn1Generator ag, ::Org::BouncyCastle::Asn1::Asn1Encodable ae) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
// Type: Org.BouncyCastle.Cms::CmsSignedDataStreamGenerator
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(649))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(656))
// CS Name: Org.BouncyCastle.Cms.CmsSignedDataStreamGenerator
class CORDL_TYPE CmsSignedDataStreamGenerator : public ::Org::BouncyCastle::Cms::CmsSignedGenerator {
public:
// Declarations
using CmsSignedDataOutputStream = ::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream;

using SignerInfoGeneratorImpl = ::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl;

using DigestAndSignerInfoGeneratorHolder = ::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~CmsSignedDataStreamGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsSignedDataStreamGenerator", modifiers: " const&", def_value: None }]
constexpr CmsSignedDataStreamGenerator(CmsSignedDataStreamGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsSignedDataStreamGenerator", modifiers: "&&", def_value: None }]
constexpr CmsSignedDataStreamGenerator(CmsSignedDataStreamGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CmsSignedDataStreamGenerator(void* ptr) noexcept : ::Org::BouncyCastle::Cms::CmsSignedGenerator(ptr) {
}


  constexpr CmsSignedDataStreamGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CmsSignedDataStreamGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CmsSignedDataStreamGenerator& operator=(CmsSignedDataStreamGenerator&& o) noexcept = default;
  constexpr CmsSignedDataStreamGenerator& operator=(CmsSignedDataStreamGenerator const& o) noexcept = default;
                


// Fields

static ::Org::BouncyCastle::Cms::CmsSignedHelper __declspec(property(get=__get_Helper, put=__set_Helper))  Helper;

static void __set_Helper(::Org::BouncyCastle::Cms::CmsSignedHelper value) ;

static ::Org::BouncyCastle::Cms::CmsSignedHelper __get_Helper() ;

 ::System::Collections::IList __declspec(property(get=__get__signerInfs, put=__set__signerInfs))  _signerInfs;

constexpr void __set__signerInfs(::System::Collections::IList value) ;

constexpr ::System::Collections::IList __get__signerInfs() const;

 ::Org::BouncyCastle::Utilities::Collections::ISet __declspec(property(get=__get__messageDigestOids, put=__set__messageDigestOids))  _messageDigestOids;

constexpr void __set__messageDigestOids(::Org::BouncyCastle::Utilities::Collections::ISet value) ;

constexpr ::Org::BouncyCastle::Utilities::Collections::ISet __get__messageDigestOids() const;

 ::System::Collections::IDictionary __declspec(property(get=__get__messageDigests, put=__set__messageDigests))  _messageDigests;

constexpr void __set__messageDigests(::System::Collections::IDictionary value) ;

constexpr ::System::Collections::IDictionary __get__messageDigests() const;

 ::System::Collections::IDictionary __declspec(property(get=__get__messageHashes, put=__set__messageHashes))  _messageHashes;

constexpr void __set__messageHashes(::System::Collections::IDictionary value) ;

constexpr ::System::Collections::IDictionary __get__messageHashes() const;

 bool __declspec(property(get=__get__messageDigestsLocked, put=__set__messageDigestsLocked))  _messageDigestsLocked;

constexpr void __set__messageDigestsLocked(bool value) ;

constexpr bool __get__messageDigestsLocked() const;

 int32_t __declspec(property(get=__get__bufferSize, put=__set__bufferSize))  _bufferSize;

constexpr void __set__bufferSize(int32_t value) ;

constexpr int32_t __get__bufferSize() const;


// Methods

// Ctor Parameters []
explicit CmsSignedDataStreamGenerator() ;

/// @brief Method .ctor addr 0x116441c size 0xd0 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "rand", ty: "::Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
explicit CmsSignedDataStreamGenerator(::Org::BouncyCastle::Security::SecureRandom rand) ;

/// @brief Method .ctor addr 0x1164a30 size 0xe0 virtual false final false
 void _ctor(::Org::BouncyCastle::Security::SecureRandom rand) ;

/// @brief Method SetBufferSize addr 0x1164b10 size 0x8 virtual false final false
 void SetBufferSize(int32_t bufferSize) ;

/// @brief Method AddDigests addr 0x1164b18 size 0x4 virtual false final false
 void AddDigests(::ArrayW<::StringW> digestOids) ;

/// @brief Method AddDigests addr 0x116469c size 0x31c virtual false final false
 void AddDigests(::System::Collections::IEnumerable digestOids) ;

/// @brief Method AddSigner addr 0x1164d4c size 0x8c virtual false final false
 void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::Org::BouncyCastle::X509::X509Certificate cert, ::StringW digestOid) ;

/// @brief Method AddSigner addr 0x1164e90 size 0x94 virtual false final false
 void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::Org::BouncyCastle::X509::X509Certificate cert, ::StringW encryptionOid, ::StringW digestOid) ;

/// @brief Method AddSigner addr 0x1164fc8 size 0xd0 virtual false final false
 void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::Org::BouncyCastle::X509::X509Certificate cert, ::StringW digestOid, ::Org::BouncyCastle::Asn1::Cms::AttributeTable signedAttr, ::Org::BouncyCastle::Asn1::Cms::AttributeTable unsignedAttr) ;

/// @brief Method AddSigner addr 0x1165098 size 0xd8 virtual false final false
 void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::Org::BouncyCastle::X509::X509Certificate cert, ::StringW encryptionOid, ::StringW digestOid, ::Org::BouncyCastle::Asn1::Cms::AttributeTable signedAttr, ::Org::BouncyCastle::Asn1::Cms::AttributeTable unsignedAttr) ;

/// @brief Method AddSigner addr 0x1164dd8 size 0xb8 virtual false final false
 void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::Org::BouncyCastle::X509::X509Certificate cert, ::StringW digestOid, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator signedAttrGenerator, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator unsignedAttrGenerator) ;

/// @brief Method AddSigner addr 0x1164f24 size 0xa4 virtual false final false
 void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::Org::BouncyCastle::X509::X509Certificate cert, ::StringW encryptionOid, ::StringW digestOid, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator signedAttrGenerator, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator unsignedAttrGenerator) ;

/// @brief Method AddSigner addr 0x11652d0 size 0x8c virtual false final false
 void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::ArrayW<uint8_t> subjectKeyID, ::StringW digestOid) ;

/// @brief Method AddSigner addr 0x1165414 size 0x94 virtual false final false
 void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::ArrayW<uint8_t> subjectKeyID, ::StringW encryptionOid, ::StringW digestOid) ;

/// @brief Method AddSigner addr 0x116554c size 0xd0 virtual false final false
 void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::ArrayW<uint8_t> subjectKeyID, ::StringW digestOid, ::Org::BouncyCastle::Asn1::Cms::AttributeTable signedAttr, ::Org::BouncyCastle::Asn1::Cms::AttributeTable unsignedAttr) ;

/// @brief Method AddSigner addr 0x116535c size 0xb8 virtual false final false
 void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::ArrayW<uint8_t> subjectKeyID, ::StringW digestOid, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator signedAttrGenerator, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator unsignedAttrGenerator) ;

/// @brief Method AddSigner addr 0x11654a8 size 0xa4 virtual false final false
 void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::ArrayW<uint8_t> subjectKeyID, ::StringW encryptionOid, ::StringW digestOid, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator signedAttrGenerator, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator unsignedAttrGenerator) ;

/// @brief Method DoAddSigner addr 0x1165170 size 0x160 virtual false final false
 void DoAddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier signerIdentifier, ::StringW encryptionOid, ::StringW digestOid, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator signedAttrGenerator, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator unsignedAttrGenerator) ;

/// @brief Method AddSignerCallback addr 0x116596c size 0x38 virtual true final false
 void AddSignerCallback(::Org::BouncyCastle::Cms::SignerInformation si) ;

/// @brief Method Open addr 0x1165b04 size 0x8 virtual false final false
 ::System::IO::Stream Open(::System::IO::Stream outStream) ;

/// @brief Method Open addr 0x1165b0c size 0x7c virtual false final false
 ::System::IO::Stream Open(::System::IO::Stream outStream, bool encapsulate) ;

/// @brief Method Open addr 0x1165b88 size 0x88 virtual false final false
 ::System::IO::Stream Open(::System::IO::Stream outStream, bool encapsulate, ::System::IO::Stream dataOutputStream) ;

/// @brief Method Open addr 0x11644ec size 0xc virtual false final false
 ::System::IO::Stream Open(::System::IO::Stream outStream, ::StringW signedContentType, bool encapsulate) ;

/// @brief Method Open addr 0x1165c10 size 0x848 virtual false final false
 ::System::IO::Stream Open(::System::IO::Stream outStream, ::StringW signedContentType, bool encapsulate, ::System::IO::Stream dataOutputStream) ;

/// @brief Method RegisterDigestOid addr 0x11659a4 size 0x160 virtual false final false
 void RegisterDigestOid(::StringW digestOid) ;

/// @brief Method ConfigureDigest addr 0x1164b1c size 0x230 virtual false final false
 void ConfigureDigest(::StringW digestOid) ;

/// @brief Method Generate addr 0x1167124 size 0x10c virtual false final false
 void Generate(::System::IO::Stream outStream, ::StringW eContentType, bool encapsulate, ::System::IO::Stream dataOutputStream, ::Org::BouncyCastle::Cms::CmsProcessable content) ;

/// @brief Method CalculateVersion addr 0x1166458 size 0x720 virtual false final false
 ::Org::BouncyCastle::Asn1::DerInteger CalculateVersion(::Org::BouncyCastle::Asn1::DerObjectIdentifier contentOid) ;

/// @brief Method CheckForVersion3 addr 0x1167230 size 0x388 virtual false final false
 bool CheckForVersion3(::System::Collections::IList signerInfos) ;

/// @brief Method AttachDigestsToOutputStream addr 0x1166cc8 size 0x3b4 virtual false final false
static ::System::IO::Stream AttachDigestsToOutputStream(::System::Collections::ICollection digests, ::System::IO::Stream s) ;

/// @brief Method GetSafeOutputStream addr 0x11675b8 size 0x64 virtual false final false
static ::System::IO::Stream GetSafeOutputStream(::System::IO::Stream s) ;

/// @brief Method GetSafeTeeOutputStream addr 0x1166c08 size 0xc0 virtual false final false
static ::System::IO::Stream GetSafeTeeOutputStream(::System::IO::Stream s1, ::System::IO::Stream s2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsSignedDataStreamGenerator, "Org.BouncyCastle.Cms", "CmsSignedDataStreamGenerator");
NEED_NO_BOX(::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__CmsSignedDataOutputStream, "Org.BouncyCastle.Cms", "CmsSignedDataStreamGenerator/CmsSignedDataOutputStream");
NEED_NO_BOX(::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__DigestAndSignerInfoGeneratorHolder, "Org.BouncyCastle.Cms", "CmsSignedDataStreamGenerator/DigestAndSignerInfoGeneratorHolder");
NEED_NO_BOX(::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsSignedDataStreamGenerator__SignerInfoGeneratorImpl, "Org.BouncyCastle.Cms", "CmsSignedDataStreamGenerator/SignerInfoGeneratorImpl");
