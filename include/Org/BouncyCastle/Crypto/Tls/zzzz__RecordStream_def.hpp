#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsProtocol;
}
namespace Org::BouncyCastle::Utilities::IO {
class BaseOutputStream;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipher;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsHandshakeHash;
}
namespace Org::BouncyCastle::Crypto::Tls {
class ProtocolVersion;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCompression;
}
namespace System::IO {
class MemoryStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class Org__BouncyCastle__Crypto__Tls__RecordStream__HandshakeHashUpdateStream;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Org__BouncyCastle__Crypto__Tls__RecordStream__SequenceNumber;
}
namespace Org::BouncyCastle::Crypto::Tls {
class RecordStream;
}
// Type: ::HandshakeHashUpdateStream
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(484))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1263))
// CS Name: Org.BouncyCastle.Crypto.Tls.RecordStream::HandshakeHashUpdateStream
class CORDL_TYPE Org__BouncyCastle__Crypto__Tls__RecordStream__HandshakeHashUpdateStream : public Org::BouncyCastle::Utilities::IO::BaseOutputStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Org__BouncyCastle__Crypto__Tls__RecordStream__HandshakeHashUpdateStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Tls__RecordStream__HandshakeHashUpdateStream", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Tls__RecordStream__HandshakeHashUpdateStream(Org__BouncyCastle__Crypto__Tls__RecordStream__HandshakeHashUpdateStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Tls__RecordStream__HandshakeHashUpdateStream", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Tls__RecordStream__HandshakeHashUpdateStream(Org__BouncyCastle__Crypto__Tls__RecordStream__HandshakeHashUpdateStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Crypto__Tls__RecordStream__HandshakeHashUpdateStream(void* ptr) noexcept : Org::BouncyCastle::Utilities::IO::BaseOutputStream(ptr) {
}


  constexpr Org__BouncyCastle__Crypto__Tls__RecordStream__HandshakeHashUpdateStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Tls__RecordStream__HandshakeHashUpdateStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Tls__RecordStream__HandshakeHashUpdateStream& operator=(Org__BouncyCastle__Crypto__Tls__RecordStream__HandshakeHashUpdateStream&& o) noexcept = default;
  constexpr Org__BouncyCastle__Crypto__Tls__RecordStream__HandshakeHashUpdateStream& operator=(Org__BouncyCastle__Crypto__Tls__RecordStream__HandshakeHashUpdateStream const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Tls::RecordStream __declspec(property(get=__get_mOuter, put=__set_mOuter))  mOuter;

constexpr void __set_mOuter(Org::BouncyCastle::Crypto::Tls::RecordStream value) ;

constexpr Org::BouncyCastle::Crypto::Tls::RecordStream __get_mOuter() const;


// Methods

// Ctor Parameters [CppParam { name: "mOuter", ty: "Org::BouncyCastle::Crypto::Tls::RecordStream", modifiers: "", def_value: None }]
explicit Org__BouncyCastle__Crypto__Tls__RecordStream__HandshakeHashUpdateStream(Org::BouncyCastle::Crypto::Tls::RecordStream mOuter) ;

/// @brief Method .ctor addr 0xf066bc size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Tls::RecordStream mOuter) ;

/// @brief Method Write addr 0xf07a40 size 0xcc virtual true final false
 void Write(::ArrayW<uint8_t> buf, int32_t off, int32_t len) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
// Type: ::SequenceNumber
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1264))
// CS Name: Org.BouncyCastle.Crypto.Tls.RecordStream::SequenceNumber
class CORDL_TYPE Org__BouncyCastle__Crypto__Tls__RecordStream__SequenceNumber : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Org__BouncyCastle__Crypto__Tls__RecordStream__SequenceNumber() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Tls__RecordStream__SequenceNumber", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Tls__RecordStream__SequenceNumber(Org__BouncyCastle__Crypto__Tls__RecordStream__SequenceNumber const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Tls__RecordStream__SequenceNumber", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Tls__RecordStream__SequenceNumber(Org__BouncyCastle__Crypto__Tls__RecordStream__SequenceNumber&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Crypto__Tls__RecordStream__SequenceNumber(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Org__BouncyCastle__Crypto__Tls__RecordStream__SequenceNumber& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Tls__RecordStream__SequenceNumber& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Tls__RecordStream__SequenceNumber& operator=(Org__BouncyCastle__Crypto__Tls__RecordStream__SequenceNumber&& o) noexcept = default;
  constexpr Org__BouncyCastle__Crypto__Tls__RecordStream__SequenceNumber& operator=(Org__BouncyCastle__Crypto__Tls__RecordStream__SequenceNumber const& o) noexcept = default;
                


// Fields

 int64_t __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(int64_t value) ;

constexpr int64_t __get_value() const;

 bool __declspec(property(get=__get_exhausted, put=__set_exhausted))  exhausted;

constexpr void __set_exhausted(bool value) ;

constexpr bool __get_exhausted() const;


// Methods

/// @brief Method NextValue addr 0xf07298 size 0x7c virtual false final false
 int64_t NextValue(uint8_t alertDescription) ;

// Ctor Parameters []
explicit Org__BouncyCastle__Crypto__Tls__RecordStream__SequenceNumber() ;

/// @brief Method .ctor addr 0xf066ac size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
// Type: Org.BouncyCastle.Crypto.Tls::RecordStream
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1265))
// CS Name: Org.BouncyCastle.Crypto.Tls.RecordStream
class CORDL_TYPE RecordStream : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using SequenceNumber = Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__RecordStream__SequenceNumber;

using HandshakeHashUpdateStream = Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__RecordStream__HandshakeHashUpdateStream;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~RecordStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "RecordStream", modifiers: " const&", def_value: None }]
constexpr RecordStream(RecordStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RecordStream", modifiers: "&&", def_value: None }]
constexpr RecordStream(RecordStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RecordStream(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RecordStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RecordStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RecordStream& operator=(RecordStream&& o) noexcept = default;
  constexpr RecordStream& operator=(RecordStream const& o) noexcept = default;
                


// Fields

/// @brief Field DEFAULT_PLAINTEXT_LIMIT offset 0
static constexpr int32_t  DEFAULT_PLAINTEXT_LIMIT{16384};

/// @brief Field TLS_HEADER_SIZE offset 0
static constexpr int32_t  TLS_HEADER_SIZE{5};

/// @brief Field TLS_HEADER_TYPE_OFFSET offset 0
static constexpr int32_t  TLS_HEADER_TYPE_OFFSET{0};

/// @brief Field TLS_HEADER_VERSION_OFFSET offset 0
static constexpr int32_t  TLS_HEADER_VERSION_OFFSET{1};

/// @brief Field TLS_HEADER_LENGTH_OFFSET offset 0
static constexpr int32_t  TLS_HEADER_LENGTH_OFFSET{3};

 Org::BouncyCastle::Crypto::Tls::TlsProtocol __declspec(property(get=__get_mHandler, put=__set_mHandler))  mHandler;

constexpr void __set_mHandler(Org::BouncyCastle::Crypto::Tls::TlsProtocol value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsProtocol __get_mHandler() const;

 System::IO::Stream __declspec(property(get=__get_mInput, put=__set_mInput))  mInput;

constexpr void __set_mInput(System::IO::Stream value) ;

constexpr System::IO::Stream __get_mInput() const;

 System::IO::Stream __declspec(property(get=__get_mOutput, put=__set_mOutput))  mOutput;

constexpr void __set_mOutput(System::IO::Stream value) ;

constexpr System::IO::Stream __get_mOutput() const;

 Org::BouncyCastle::Crypto::Tls::TlsCompression __declspec(property(get=__get_mPendingCompression, put=__set_mPendingCompression))  mPendingCompression;

constexpr void __set_mPendingCompression(Org::BouncyCastle::Crypto::Tls::TlsCompression value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsCompression __get_mPendingCompression() const;

 Org::BouncyCastle::Crypto::Tls::TlsCompression __declspec(property(get=__get_mReadCompression, put=__set_mReadCompression))  mReadCompression;

constexpr void __set_mReadCompression(Org::BouncyCastle::Crypto::Tls::TlsCompression value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsCompression __get_mReadCompression() const;

 Org::BouncyCastle::Crypto::Tls::TlsCompression __declspec(property(get=__get_mWriteCompression, put=__set_mWriteCompression))  mWriteCompression;

constexpr void __set_mWriteCompression(Org::BouncyCastle::Crypto::Tls::TlsCompression value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsCompression __get_mWriteCompression() const;

 Org::BouncyCastle::Crypto::Tls::TlsCipher __declspec(property(get=__get_mPendingCipher, put=__set_mPendingCipher))  mPendingCipher;

constexpr void __set_mPendingCipher(Org::BouncyCastle::Crypto::Tls::TlsCipher value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsCipher __get_mPendingCipher() const;

 Org::BouncyCastle::Crypto::Tls::TlsCipher __declspec(property(get=__get_mReadCipher, put=__set_mReadCipher))  mReadCipher;

constexpr void __set_mReadCipher(Org::BouncyCastle::Crypto::Tls::TlsCipher value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsCipher __get_mReadCipher() const;

 Org::BouncyCastle::Crypto::Tls::TlsCipher __declspec(property(get=__get_mWriteCipher, put=__set_mWriteCipher))  mWriteCipher;

constexpr void __set_mWriteCipher(Org::BouncyCastle::Crypto::Tls::TlsCipher value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsCipher __get_mWriteCipher() const;

 Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__RecordStream__SequenceNumber __declspec(property(get=__get_mReadSeqNo, put=__set_mReadSeqNo))  mReadSeqNo;

constexpr void __set_mReadSeqNo(Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__RecordStream__SequenceNumber value) ;

constexpr Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__RecordStream__SequenceNumber __get_mReadSeqNo() const;

 Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__RecordStream__SequenceNumber __declspec(property(get=__get_mWriteSeqNo, put=__set_mWriteSeqNo))  mWriteSeqNo;

constexpr void __set_mWriteSeqNo(Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__RecordStream__SequenceNumber value) ;

constexpr Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__RecordStream__SequenceNumber __get_mWriteSeqNo() const;

 System::IO::MemoryStream __declspec(property(get=__get_mBuffer, put=__set_mBuffer))  mBuffer;

constexpr void __set_mBuffer(System::IO::MemoryStream value) ;

constexpr System::IO::MemoryStream __get_mBuffer() const;

 Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash __declspec(property(get=__get_mHandshakeHash, put=__set_mHandshakeHash))  mHandshakeHash;

constexpr void __set_mHandshakeHash(Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash __get_mHandshakeHash() const;

 Org::BouncyCastle::Utilities::IO::BaseOutputStream __declspec(property(get=__get_mHandshakeHashUpdater, put=__set_mHandshakeHashUpdater))  mHandshakeHashUpdater;

constexpr void __set_mHandshakeHashUpdater(Org::BouncyCastle::Utilities::IO::BaseOutputStream value) ;

constexpr Org::BouncyCastle::Utilities::IO::BaseOutputStream __get_mHandshakeHashUpdater() const;

 Org::BouncyCastle::Crypto::Tls::ProtocolVersion __declspec(property(get=__get_mReadVersion, put=__set_mReadVersion))  mReadVersion;

constexpr void __set_mReadVersion(Org::BouncyCastle::Crypto::Tls::ProtocolVersion value) ;

constexpr Org::BouncyCastle::Crypto::Tls::ProtocolVersion __get_mReadVersion() const;

 Org::BouncyCastle::Crypto::Tls::ProtocolVersion __declspec(property(get=__get_mWriteVersion, put=__set_mWriteVersion))  mWriteVersion;

constexpr void __set_mWriteVersion(Org::BouncyCastle::Crypto::Tls::ProtocolVersion value) ;

constexpr Org::BouncyCastle::Crypto::Tls::ProtocolVersion __get_mWriteVersion() const;

 bool __declspec(property(get=__get_mRestrictReadVersion, put=__set_mRestrictReadVersion))  mRestrictReadVersion;

constexpr void __set_mRestrictReadVersion(bool value) ;

constexpr bool __get_mRestrictReadVersion() const;

 int32_t __declspec(property(get=__get_mPlaintextLimit, put=__set_mPlaintextLimit))  mPlaintextLimit;

constexpr void __set_mPlaintextLimit(int32_t value) ;

constexpr int32_t __get_mPlaintextLimit() const;

 int32_t __declspec(property(get=__get_mCompressedLimit, put=__set_mCompressedLimit))  mCompressedLimit;

constexpr void __set_mCompressedLimit(int32_t value) ;

constexpr int32_t __get_mCompressedLimit() const;

 int32_t __declspec(property(get=__get_mCiphertextLimit, put=__set_mCiphertextLimit))  mCiphertextLimit;

constexpr void __set_mCiphertextLimit(int32_t value) ;

constexpr int32_t __get_mCiphertextLimit() const;


// Properties

 Org::BouncyCastle::Crypto::Tls::ProtocolVersion __declspec(property(get=get_ReadVersion, put=set_ReadVersion))  ReadVersion;

 Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash __declspec(property(get=get_HandshakeHash))  HandshakeHash;

 System::IO::Stream __declspec(property(get=get_HandshakeHashUpdater))  HandshakeHashUpdater;


// Methods

// Ctor Parameters [CppParam { name: "handler", ty: "Org::BouncyCastle::Crypto::Tls::TlsProtocol", modifiers: "", def_value: None }, CppParam { name: "input", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "output", ty: "System::IO::Stream", modifiers: "", def_value: None }]
explicit RecordStream(Org::BouncyCastle::Crypto::Tls::TlsProtocol handler, System::IO::Stream input, System::IO::Stream output) ;

/// @brief Method .ctor addr 0xf06540 size 0x16c virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Tls::TlsProtocol handler, System::IO::Stream input, System::IO::Stream output) ;

/// @brief Method Init addr 0xf066e4 size 0x120 virtual true final false
 void Init(Org::BouncyCastle::Crypto::Tls::TlsContext context) ;

/// @brief Method GetPlaintextLimit addr 0xf06804 size 0x8 virtual true final false
 int32_t GetPlaintextLimit() ;

/// @brief Method SetPlaintextLimit addr 0xf0680c size 0x1c virtual true final false
 void SetPlaintextLimit(int32_t plaintextLimit) ;

/// @brief Method get_ReadVersion addr 0xf06828 size 0x8 virtual true final false
 Org::BouncyCastle::Crypto::Tls::ProtocolVersion get_ReadVersion() ;

/// @brief Method set_ReadVersion addr 0xf06830 size 0x8 virtual true final false
 void set_ReadVersion(Org::BouncyCastle::Crypto::Tls::ProtocolVersion value) ;

/// @brief Method SetWriteVersion addr 0xf06838 size 0x8 virtual true final false
 void SetWriteVersion(Org::BouncyCastle::Crypto::Tls::ProtocolVersion writeVersion) ;

/// @brief Method SetRestrictReadVersion addr 0xf06840 size 0xc virtual true final false
 void SetRestrictReadVersion(bool enabled) ;

/// @brief Method SetPendingConnectionState addr 0xf0684c size 0xc virtual true final false
 void SetPendingConnectionState(Org::BouncyCastle::Crypto::Tls::TlsCompression tlsCompression, Org::BouncyCastle::Crypto::Tls::TlsCipher tlsCipher) ;

/// @brief Method SentWriteCipherSpec addr 0xf06858 size 0xc0 virtual true final false
 void SentWriteCipherSpec() ;

/// @brief Method ReceivedReadCipherSpec addr 0xf06918 size 0xc0 virtual true final false
 void ReceivedReadCipherSpec() ;

/// @brief Method FinaliseHandshake addr 0xf069d8 size 0x84 virtual true final false
 void FinaliseHandshake() ;

/// @brief Method CheckRecordHeader addr 0xf06a5c size 0x134 virtual true final false
 void CheckRecordHeader(::ArrayW<uint8_t> recordHeader) ;

/// @brief Method ReadRecord addr 0xf06c44 size 0x1b4 virtual true final false
 bool ReadRecord() ;

/// @brief Method DecodeAndVerify addr 0xf0700c size 0x28c virtual true final false
 ::ArrayW<uint8_t> DecodeAndVerify(uint8_t type, System::IO::Stream input, int32_t len) ;

/// @brief Method WriteRecord addr 0xf07368 size 0x3e8 virtual true final false
 void WriteRecord(uint8_t type, ::ArrayW<uint8_t> plaintext, int32_t plaintextOffset, int32_t plaintextLength) ;

/// @brief Method NotifyHelloComplete addr 0xf07750 size 0xac virtual true final false
 void NotifyHelloComplete() ;

/// @brief Method get_HandshakeHash addr 0xf077fc size 0x8 virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash get_HandshakeHash() ;

/// @brief Method get_HandshakeHashUpdater addr 0xf07804 size 0x8 virtual true final false
 System::IO::Stream get_HandshakeHashUpdater() ;

/// @brief Method PrepareToFinish addr 0xf0780c size 0xb0 virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash PrepareToFinish() ;

/// @brief Method SafeClose addr 0xf078bc size 0x160 virtual true final false
 void SafeClose() ;

/// @brief Method Flush addr 0xf07a1c size 0x24 virtual true final false
 void Flush() ;

/// @brief Method GetBufferContents addr 0xf07314 size 0x54 virtual false final false
 ::ArrayW<uint8_t> GetBufferContents() ;

/// @brief Method CheckType addr 0xf06b90 size 0x5c virtual false final false
static void CheckType(uint8_t type, uint8_t alertDescription) ;

/// @brief Method CheckLength addr 0xf06bec size 0x58 virtual false final false
static void CheckLength(int32_t length, int32_t limit, uint8_t alertDescription) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__RecordStream__HandshakeHashUpdateStream);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__RecordStream__HandshakeHashUpdateStream, "Org.BouncyCastle.Crypto.Tls", "RecordStream/HandshakeHashUpdateStream");
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__RecordStream__SequenceNumber);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__RecordStream__SequenceNumber, "Org.BouncyCastle.Crypto.Tls", "RecordStream/SequenceNumber");
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::RecordStream);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::RecordStream, "Org.BouncyCastle.Crypto.Tls", "RecordStream");
