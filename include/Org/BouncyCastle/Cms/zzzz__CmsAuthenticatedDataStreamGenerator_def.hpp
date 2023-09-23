#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsAuthenticatedGenerator_def.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class CipherKeyGenerator;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace Org::BouncyCastle::Asn1 {
class BerSequenceGenerator;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsAuthenticatedDataStreamGenerator;
}
namespace Org::BouncyCastle::Cms {
class Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream;
}
// Type: ::CmsAuthenticatedDataOutputStream
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(484))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(622))
// CS Name: Org.BouncyCastle.Cms.CmsAuthenticatedDataStreamGenerator::CmsAuthenticatedDataOutputStream
class CORDL_TYPE Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream : public Org::BouncyCastle::Utilities::IO::BaseOutputStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream(Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream(Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream(void* ptr) noexcept : Org::BouncyCastle::Utilities::IO::BaseOutputStream(ptr) {
}


  constexpr Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream& operator=(Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream&& o) noexcept = default;
  constexpr Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream& operator=(Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream const& o) noexcept = default;
                


// Fields

 System::IO::Stream __declspec(property(get=__get_macStream, put=__set_macStream))  macStream;

constexpr void __set_macStream(System::IO::Stream value) ;

constexpr System::IO::Stream __get_macStream() const;

 Org::BouncyCastle::Crypto::IMac __declspec(property(get=__get_mac, put=__set_mac))  mac;

constexpr void __set_mac(Org::BouncyCastle::Crypto::IMac value) ;

constexpr Org::BouncyCastle::Crypto::IMac __get_mac() const;

 Org::BouncyCastle::Asn1::BerSequenceGenerator __declspec(property(get=__get_cGen, put=__set_cGen))  cGen;

constexpr void __set_cGen(Org::BouncyCastle::Asn1::BerSequenceGenerator value) ;

constexpr Org::BouncyCastle::Asn1::BerSequenceGenerator __get_cGen() const;

 Org::BouncyCastle::Asn1::BerSequenceGenerator __declspec(property(get=__get_authGen, put=__set_authGen))  authGen;

constexpr void __set_authGen(Org::BouncyCastle::Asn1::BerSequenceGenerator value) ;

constexpr Org::BouncyCastle::Asn1::BerSequenceGenerator __get_authGen() const;

 Org::BouncyCastle::Asn1::BerSequenceGenerator __declspec(property(get=__get_eiGen, put=__set_eiGen))  eiGen;

constexpr void __set_eiGen(Org::BouncyCastle::Asn1::BerSequenceGenerator value) ;

constexpr Org::BouncyCastle::Asn1::BerSequenceGenerator __get_eiGen() const;


// Methods

// Ctor Parameters [CppParam { name: "macStream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "mac", ty: "Org::BouncyCastle::Crypto::IMac", modifiers: "", def_value: None }, CppParam { name: "cGen", ty: "Org::BouncyCastle::Asn1::BerSequenceGenerator", modifiers: "", def_value: None }, CppParam { name: "authGen", ty: "Org::BouncyCastle::Asn1::BerSequenceGenerator", modifiers: "", def_value: None }, CppParam { name: "eiGen", ty: "Org::BouncyCastle::Asn1::BerSequenceGenerator", modifiers: "", def_value: None }]
explicit Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream(System::IO::Stream macStream, Org::BouncyCastle::Crypto::IMac mac, Org::BouncyCastle::Asn1::BerSequenceGenerator cGen, Org::BouncyCastle::Asn1::BerSequenceGenerator authGen, Org::BouncyCastle::Asn1::BerSequenceGenerator eiGen) ;

/// @brief Method .ctor addr 0x1151e18 size 0x50 virtual false final false
 void _ctor(System::IO::Stream macStream, Org::BouncyCastle::Crypto::IMac mac, Org::BouncyCastle::Asn1::BerSequenceGenerator cGen, Org::BouncyCastle::Asn1::BerSequenceGenerator authGen, Org::BouncyCastle::Asn1::BerSequenceGenerator eiGen) ;

/// @brief Method WriteByte addr 0x1152024 size 0x24 virtual true final false
 void WriteByte(uint8_t b) ;

/// @brief Method Write addr 0x1152048 size 0x24 virtual true final false
 void Write(::ArrayW<uint8_t> bytes, int32_t off, int32_t len) ;

/// @brief Method Close addr 0x115206c size 0x138 virtual true final false
 void Close() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
// Type: Org.BouncyCastle.Cms::CmsAuthenticatedDataStreamGenerator
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(618))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(623))
// CS Name: Org.BouncyCastle.Cms.CmsAuthenticatedDataStreamGenerator
class CORDL_TYPE CmsAuthenticatedDataStreamGenerator : public Org::BouncyCastle::Cms::CmsAuthenticatedGenerator {
public:
// Declarations
using CmsAuthenticatedDataOutputStream = Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~CmsAuthenticatedDataStreamGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsAuthenticatedDataStreamGenerator", modifiers: " const&", def_value: None }]
constexpr CmsAuthenticatedDataStreamGenerator(CmsAuthenticatedDataStreamGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsAuthenticatedDataStreamGenerator", modifiers: "&&", def_value: None }]
constexpr CmsAuthenticatedDataStreamGenerator(CmsAuthenticatedDataStreamGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CmsAuthenticatedDataStreamGenerator(void* ptr) noexcept : Org::BouncyCastle::Cms::CmsAuthenticatedGenerator(ptr) {
}


  constexpr CmsAuthenticatedDataStreamGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CmsAuthenticatedDataStreamGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CmsAuthenticatedDataStreamGenerator& operator=(CmsAuthenticatedDataStreamGenerator&& o) noexcept = default;
  constexpr CmsAuthenticatedDataStreamGenerator& operator=(CmsAuthenticatedDataStreamGenerator const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__bufferSize, put=__set__bufferSize))  _bufferSize;

constexpr void __set__bufferSize(int32_t value) ;

constexpr int32_t __get__bufferSize() const;

 bool __declspec(property(get=__get__berEncodeRecipientSet, put=__set__berEncodeRecipientSet))  _berEncodeRecipientSet;

constexpr void __set__berEncodeRecipientSet(bool value) ;

constexpr bool __get__berEncodeRecipientSet() const;


// Methods

// Ctor Parameters []
explicit CmsAuthenticatedDataStreamGenerator() ;

/// @brief Method .ctor addr 0x1150f58 size 0x4 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "rand", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
explicit CmsAuthenticatedDataStreamGenerator(Org::BouncyCastle::Security::SecureRandom rand) ;

/// @brief Method .ctor addr 0x1150f5c size 0x4 virtual false final false
 void _ctor(Org::BouncyCastle::Security::SecureRandom rand) ;

/// @brief Method SetBufferSize addr 0x1150f60 size 0x8 virtual false final false
 void SetBufferSize(int32_t bufferSize) ;

/// @brief Method SetBerEncodeRecipients addr 0x1150f68 size 0xc virtual false final false
 void SetBerEncodeRecipients(bool berEncodeRecipientSet) ;

/// @brief Method Open addr 0x1150f74 size 0x5f8 virtual false final false
 System::IO::Stream Open(System::IO::Stream outStr, ::StringW macOid, Org::BouncyCastle::Crypto::CipherKeyGenerator keyGen) ;

/// @brief Method Open addr 0x115156c size 0x8ac virtual false final false
 System::IO::Stream Open(System::IO::Stream outStr, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier macAlgId, Org::BouncyCastle::Crypto::ICipherParameters cipherParameters, Org::BouncyCastle::Asn1::Asn1EncodableVector recipientInfos) ;

/// @brief Method Open addr 0x1151e68 size 0xdc virtual false final false
 System::IO::Stream Open(System::IO::Stream outStr, ::StringW encryptionOid) ;

/// @brief Method Open addr 0x1151f44 size 0xe0 virtual false final false
 System::IO::Stream Open(System::IO::Stream outStr, ::StringW encryptionOid, int32_t keySize) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator, "Org.BouncyCastle.Cms", "CmsAuthenticatedDataStreamGenerator");
NEED_NO_BOX(Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream, "Org.BouncyCastle.Cms", "CmsAuthenticatedDataStreamGenerator/CmsAuthenticatedDataOutputStream");
