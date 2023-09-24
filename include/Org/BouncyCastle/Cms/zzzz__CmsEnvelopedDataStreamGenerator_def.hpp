#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsEnvelopedGenerator_def.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Crypto {
class CipherKeyGenerator;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace Org::BouncyCastle::Cms {
class Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Cms {
class CmsEnvelopedGenerator;
}
namespace Org::BouncyCastle::Crypto::IO {
class CipherStream;
}
namespace Org::BouncyCastle::Asn1 {
class BerSequenceGenerator;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsEnvelopedDataStreamGenerator;
}
namespace Org::BouncyCastle::Cms {
class Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream;
}
// Type: ::CmsEnvelopedDataOutputStream
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(484))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(636))
// CS Name: Org.BouncyCastle.Cms.CmsEnvelopedDataStreamGenerator::CmsEnvelopedDataOutputStream
class CORDL_TYPE Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream : public Org::BouncyCastle::Utilities::IO::BaseOutputStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream(Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream(Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream(void* ptr) noexcept : Org::BouncyCastle::Utilities::IO::BaseOutputStream(ptr) {
}


  constexpr Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream& operator=(Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream&& o) noexcept = default;
  constexpr Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream& operator=(Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Cms::CmsEnvelopedGenerator __declspec(property(get=__get__outer, put=__set__outer))  _outer;

constexpr void __set__outer(Org::BouncyCastle::Cms::CmsEnvelopedGenerator value) ;

constexpr Org::BouncyCastle::Cms::CmsEnvelopedGenerator __get__outer() const;

 Org::BouncyCastle::Crypto::IO::CipherStream __declspec(property(get=__get__out, put=__set__out))  _out;

constexpr void __set__out(Org::BouncyCastle::Crypto::IO::CipherStream value) ;

constexpr Org::BouncyCastle::Crypto::IO::CipherStream __get__out() const;

 Org::BouncyCastle::Asn1::BerSequenceGenerator __declspec(property(get=__get__cGen, put=__set__cGen))  _cGen;

constexpr void __set__cGen(Org::BouncyCastle::Asn1::BerSequenceGenerator value) ;

constexpr Org::BouncyCastle::Asn1::BerSequenceGenerator __get__cGen() const;

 Org::BouncyCastle::Asn1::BerSequenceGenerator __declspec(property(get=__get__envGen, put=__set__envGen))  _envGen;

constexpr void __set__envGen(Org::BouncyCastle::Asn1::BerSequenceGenerator value) ;

constexpr Org::BouncyCastle::Asn1::BerSequenceGenerator __get__envGen() const;

 Org::BouncyCastle::Asn1::BerSequenceGenerator __declspec(property(get=__get__eiGen, put=__set__eiGen))  _eiGen;

constexpr void __set__eiGen(Org::BouncyCastle::Asn1::BerSequenceGenerator value) ;

constexpr Org::BouncyCastle::Asn1::BerSequenceGenerator __get__eiGen() const;


// Methods

static Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream New_ctor(Org::BouncyCastle::Cms::CmsEnvelopedGenerator outer, Org::BouncyCastle::Crypto::IO::CipherStream outStream, Org::BouncyCastle::Asn1::BerSequenceGenerator cGen, Org::BouncyCastle::Asn1::BerSequenceGenerator envGen, Org::BouncyCastle::Asn1::BerSequenceGenerator eiGen) ;

/// @brief Method .ctor addr 0x1156c38 size 0x50 virtual false final false
 void _ctor(Org::BouncyCastle::Cms::CmsEnvelopedGenerator outer, Org::BouncyCastle::Crypto::IO::CipherStream outStream, Org::BouncyCastle::Asn1::BerSequenceGenerator cGen, Org::BouncyCastle::Asn1::BerSequenceGenerator envGen, Org::BouncyCastle::Asn1::BerSequenceGenerator eiGen) ;

/// @brief Method WriteByte addr 0x1156c88 size 0x24 virtual true final false
 void WriteByte(uint8_t b) ;

/// @brief Method Write addr 0x1156cac size 0x24 virtual true final false
 void Write(::ArrayW<uint8_t> bytes, int32_t off, int32_t len) ;

/// @brief Method Close addr 0x1156cd0 size 0x1e4 virtual true final false
 void Close() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
// Type: Org.BouncyCastle.Cms::CmsEnvelopedDataStreamGenerator
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(617))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(637))
// CS Name: Org.BouncyCastle.Cms.CmsEnvelopedDataStreamGenerator
class CORDL_TYPE CmsEnvelopedDataStreamGenerator : public Org::BouncyCastle::Cms::CmsEnvelopedGenerator {
public:
// Declarations
using CmsEnvelopedDataOutputStream = Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~CmsEnvelopedDataStreamGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsEnvelopedDataStreamGenerator", modifiers: " const&", def_value: None }]
constexpr CmsEnvelopedDataStreamGenerator(CmsEnvelopedDataStreamGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsEnvelopedDataStreamGenerator", modifiers: "&&", def_value: None }]
constexpr CmsEnvelopedDataStreamGenerator(CmsEnvelopedDataStreamGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CmsEnvelopedDataStreamGenerator(void* ptr) noexcept : Org::BouncyCastle::Cms::CmsEnvelopedGenerator(ptr) {
}


  constexpr CmsEnvelopedDataStreamGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CmsEnvelopedDataStreamGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CmsEnvelopedDataStreamGenerator& operator=(CmsEnvelopedDataStreamGenerator&& o) noexcept = default;
  constexpr CmsEnvelopedDataStreamGenerator& operator=(CmsEnvelopedDataStreamGenerator const& o) noexcept = default;
                


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__originatorInfo, put=__set__originatorInfo))  _originatorInfo;

constexpr void __set__originatorInfo(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__originatorInfo() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__unprotectedAttributes, put=__set__unprotectedAttributes))  _unprotectedAttributes;

constexpr void __set__unprotectedAttributes(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__unprotectedAttributes() const;

 int32_t __declspec(property(get=__get__bufferSize, put=__set__bufferSize))  _bufferSize;

constexpr void __set__bufferSize(int32_t value) ;

constexpr int32_t __get__bufferSize() const;

 bool __declspec(property(get=__get__berEncodeRecipientSet, put=__set__berEncodeRecipientSet))  _berEncodeRecipientSet;

constexpr void __set__berEncodeRecipientSet(bool value) ;

constexpr bool __get__berEncodeRecipientSet() const;


// Properties

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_Version))  Version;


// Methods

static Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator New_ctor() ;

/// @brief Method .ctor addr 0x1155aa8 size 0x58 virtual false final false
 void _ctor() ;

static Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator New_ctor(Org::BouncyCastle::Security::SecureRandom rand) ;

/// @brief Method .ctor addr 0x1155b00 size 0x68 virtual false final false
 void _ctor(Org::BouncyCastle::Security::SecureRandom rand) ;

/// @brief Method SetBufferSize addr 0x1155b68 size 0x8 virtual false final false
 void SetBufferSize(int32_t bufferSize) ;

/// @brief Method SetBerEncodeRecipients addr 0x1155b70 size 0xc virtual false final false
 void SetBerEncodeRecipients(bool berEncodeRecipientSet) ;

/// @brief Method get_Version addr 0x1155b7c size 0x80 virtual false final false
 Org::BouncyCastle::Asn1::DerInteger get_Version() ;

/// @brief Method Open addr 0x1155bfc size 0x600 virtual false final false
 System::IO::Stream Open(System::IO::Stream outStream, ::StringW encryptionOid, Org::BouncyCastle::Crypto::CipherKeyGenerator keyGen) ;

/// @brief Method Open addr 0x11561fc size 0x880 virtual false final false
 System::IO::Stream Open(System::IO::Stream outStream, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier encAlgID, Org::BouncyCastle::Crypto::ICipherParameters cipherParameters, Org::BouncyCastle::Asn1::Asn1EncodableVector recipientInfos) ;

/// @brief Method Open addr 0x1156a7c size 0xdc virtual false final false
 System::IO::Stream Open(System::IO::Stream outStream, ::StringW encryptionOid) ;

/// @brief Method Open addr 0x1156b58 size 0xe0 virtual false final false
 System::IO::Stream Open(System::IO::Stream outStream, ::StringW encryptionOid, int32_t keySize) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator, "Org.BouncyCastle.Cms", "CmsEnvelopedDataStreamGenerator");
NEED_NO_BOX(Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream, "Org.BouncyCastle.Cms", "CmsEnvelopedDataStreamGenerator/CmsEnvelopedDataOutputStream");
