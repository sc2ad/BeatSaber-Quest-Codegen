#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsPeer;
}
namespace Org::BouncyCastle::Crypto::Tls {
class ByteQueueStream;
}
namespace Org::BouncyCastle::Crypto::Tls {
class ByteQueue;
}
namespace System::IO {
class MemoryStream;
}
namespace System::Collections {
class IDictionary;
}
namespace System {
class Exception;
}
namespace Org::BouncyCastle::Crypto::Prng {
class IRandomGenerator;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCloseable;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsHandshakeHash;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SessionParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsKeyExchange;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SecurityParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class AbstractTlsContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSession;
}
namespace Org::BouncyCastle::Crypto::Tls {
class RecordStream;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsProtocol;
}
// Type: ::HandshakeMessage
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1291))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsProtocol::HandshakeMessage
class CORDL_TYPE Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage : public System::IO::MemoryStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage(Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage(Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage(void* ptr) noexcept : System::IO::MemoryStream(ptr) {
}


  constexpr Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage& operator=(Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage&& o) noexcept = default;
  constexpr Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage& operator=(Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage const& o) noexcept = default;
                


// Methods

static Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage New_ctor(uint8_t handshakeType) ;

/// @brief Method .ctor addr 0xf113bc size 0x8 virtual false final false
 void _ctor(uint8_t handshakeType) ;

static Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage New_ctor(uint8_t handshakeType, int32_t length) ;

/// @brief Method .ctor addr 0xf116b0 size 0x8c virtual false final false
 void _ctor(uint8_t handshakeType, int32_t length) ;

/// @brief Method Write addr 0xf12ca0 size 0x28 virtual false final false
 void Write(::ArrayW<uint8_t> data) ;

/// @brief Method WriteToRecordStream addr 0xf113c4 size 0x124 virtual false final false
 void WriteToRecordStream(Org::BouncyCastle::Crypto::Tls::TlsProtocol protocol) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
// Type: Org.BouncyCastle.Crypto.Tls::TlsProtocol
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1292))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsProtocol
class CORDL_TYPE TlsProtocol : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using HandshakeMessage = Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage;

/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsCloseable
constexpr operator  Org::BouncyCastle::Crypto::Tls::TlsCloseable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa8};

virtual ~TlsProtocol() = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsProtocol", modifiers: " const&", def_value: None }]
constexpr TlsProtocol(TlsProtocol const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsProtocol", modifiers: "&&", def_value: None }]
constexpr TlsProtocol(TlsProtocol&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsProtocol(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TlsProtocol& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TlsProtocol& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TlsProtocol& operator=(TlsProtocol&& o) noexcept = default;
  constexpr TlsProtocol& operator=(TlsProtocol const& o) noexcept = default;
                


// Fields

/// @brief Field CS_START offset 0
static constexpr int16_t  CS_START{0};

/// @brief Field CS_CLIENT_HELLO offset 0
static constexpr int16_t  CS_CLIENT_HELLO{1};

/// @brief Field CS_SERVER_HELLO offset 0
static constexpr int16_t  CS_SERVER_HELLO{2};

/// @brief Field CS_SERVER_SUPPLEMENTAL_DATA offset 0
static constexpr int16_t  CS_SERVER_SUPPLEMENTAL_DATA{3};

/// @brief Field CS_SERVER_CERTIFICATE offset 0
static constexpr int16_t  CS_SERVER_CERTIFICATE{4};

/// @brief Field CS_CERTIFICATE_STATUS offset 0
static constexpr int16_t  CS_CERTIFICATE_STATUS{5};

/// @brief Field CS_SERVER_KEY_EXCHANGE offset 0
static constexpr int16_t  CS_SERVER_KEY_EXCHANGE{6};

/// @brief Field CS_CERTIFICATE_REQUEST offset 0
static constexpr int16_t  CS_CERTIFICATE_REQUEST{7};

/// @brief Field CS_SERVER_HELLO_DONE offset 0
static constexpr int16_t  CS_SERVER_HELLO_DONE{8};

/// @brief Field CS_CLIENT_SUPPLEMENTAL_DATA offset 0
static constexpr int16_t  CS_CLIENT_SUPPLEMENTAL_DATA{9};

/// @brief Field CS_CLIENT_CERTIFICATE offset 0
static constexpr int16_t  CS_CLIENT_CERTIFICATE{10};

/// @brief Field CS_CLIENT_KEY_EXCHANGE offset 0
static constexpr int16_t  CS_CLIENT_KEY_EXCHANGE{11};

/// @brief Field CS_CERTIFICATE_VERIFY offset 0
static constexpr int16_t  CS_CERTIFICATE_VERIFY{12};

/// @brief Field CS_CLIENT_FINISHED offset 0
static constexpr int16_t  CS_CLIENT_FINISHED{13};

/// @brief Field CS_SERVER_SESSION_TICKET offset 0
static constexpr int16_t  CS_SERVER_SESSION_TICKET{14};

/// @brief Field CS_SERVER_FINISHED offset 0
static constexpr int16_t  CS_SERVER_FINISHED{15};

/// @brief Field CS_END offset 0
static constexpr int16_t  CS_END{16};

/// @brief Field ADS_MODE_1_Nsub1 offset 0
static constexpr int16_t  ADS_MODE_1_Nsub1{0};

/// @brief Field ADS_MODE_0_N offset 0
static constexpr int16_t  ADS_MODE_0_N{1};

/// @brief Field ADS_MODE_0_N_FIRSTONLY offset 0
static constexpr int16_t  ADS_MODE_0_N_FIRSTONLY{2};

 Org::BouncyCastle::Crypto::Tls::ByteQueue __declspec(property(get=__get_mApplicationDataQueue, put=__set_mApplicationDataQueue))  mApplicationDataQueue;

constexpr void __set_mApplicationDataQueue(Org::BouncyCastle::Crypto::Tls::ByteQueue value) ;

constexpr Org::BouncyCastle::Crypto::Tls::ByteQueue __get_mApplicationDataQueue() const;

 Org::BouncyCastle::Crypto::Tls::ByteQueue __declspec(property(get=__get_mAlertQueue, put=__set_mAlertQueue))  mAlertQueue;

constexpr void __set_mAlertQueue(Org::BouncyCastle::Crypto::Tls::ByteQueue value) ;

constexpr Org::BouncyCastle::Crypto::Tls::ByteQueue __get_mAlertQueue() const;

 Org::BouncyCastle::Crypto::Tls::ByteQueue __declspec(property(get=__get_mHandshakeQueue, put=__set_mHandshakeQueue))  mHandshakeQueue;

constexpr void __set_mHandshakeQueue(Org::BouncyCastle::Crypto::Tls::ByteQueue value) ;

constexpr Org::BouncyCastle::Crypto::Tls::ByteQueue __get_mHandshakeQueue() const;

 Org::BouncyCastle::Crypto::Tls::RecordStream __declspec(property(get=__get_mRecordStream, put=__set_mRecordStream))  mRecordStream;

constexpr void __set_mRecordStream(Org::BouncyCastle::Crypto::Tls::RecordStream value) ;

constexpr Org::BouncyCastle::Crypto::Tls::RecordStream __get_mRecordStream() const;

 Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_mSecureRandom, put=__set_mSecureRandom))  mSecureRandom;

constexpr void __set_mSecureRandom(Org::BouncyCastle::Security::SecureRandom value) ;

constexpr Org::BouncyCastle::Security::SecureRandom __get_mSecureRandom() const;

 Org::BouncyCastle::Crypto::Tls::TlsStream __declspec(property(get=__get_mTlsStream, put=__set_mTlsStream))  mTlsStream;

constexpr void __set_mTlsStream(Org::BouncyCastle::Crypto::Tls::TlsStream value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsStream __get_mTlsStream() const;

 bool __declspec(property(get=__get_mClosed, put=__set_mClosed))  mClosed;

constexpr void __set_mClosed(bool value) ;

constexpr bool __get_mClosed() const;

 bool __declspec(property(get=__get_mFailedWithError, put=__set_mFailedWithError))  mFailedWithError;

constexpr void __set_mFailedWithError(bool value) ;

constexpr bool __get_mFailedWithError() const;

 bool __declspec(property(get=__get_mAppDataReady, put=__set_mAppDataReady))  mAppDataReady;

constexpr void __set_mAppDataReady(bool value) ;

constexpr bool __get_mAppDataReady() const;

 bool __declspec(property(get=__get_mAppDataSplitEnabled, put=__set_mAppDataSplitEnabled))  mAppDataSplitEnabled;

constexpr void __set_mAppDataSplitEnabled(bool value) ;

constexpr bool __get_mAppDataSplitEnabled() const;

 int32_t __declspec(property(get=__get_mAppDataSplitMode, put=__set_mAppDataSplitMode))  mAppDataSplitMode;

constexpr void __set_mAppDataSplitMode(int32_t value) ;

constexpr int32_t __get_mAppDataSplitMode() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mExpectedVerifyData, put=__set_mExpectedVerifyData))  mExpectedVerifyData;

constexpr void __set_mExpectedVerifyData(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mExpectedVerifyData() const;

 Org::BouncyCastle::Crypto::Tls::TlsSession __declspec(property(get=__get_mTlsSession, put=__set_mTlsSession))  mTlsSession;

constexpr void __set_mTlsSession(Org::BouncyCastle::Crypto::Tls::TlsSession value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsSession __get_mTlsSession() const;

 Org::BouncyCastle::Crypto::Tls::SessionParameters __declspec(property(get=__get_mSessionParameters, put=__set_mSessionParameters))  mSessionParameters;

constexpr void __set_mSessionParameters(Org::BouncyCastle::Crypto::Tls::SessionParameters value) ;

constexpr Org::BouncyCastle::Crypto::Tls::SessionParameters __get_mSessionParameters() const;

 Org::BouncyCastle::Crypto::Tls::SecurityParameters __declspec(property(get=__get_mSecurityParameters, put=__set_mSecurityParameters))  mSecurityParameters;

constexpr void __set_mSecurityParameters(Org::BouncyCastle::Crypto::Tls::SecurityParameters value) ;

constexpr Org::BouncyCastle::Crypto::Tls::SecurityParameters __get_mSecurityParameters() const;

 Org::BouncyCastle::Crypto::Tls::Certificate __declspec(property(get=__get_mPeerCertificate, put=__set_mPeerCertificate))  mPeerCertificate;

constexpr void __set_mPeerCertificate(Org::BouncyCastle::Crypto::Tls::Certificate value) ;

constexpr Org::BouncyCastle::Crypto::Tls::Certificate __get_mPeerCertificate() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_mOfferedCipherSuites, put=__set_mOfferedCipherSuites))  mOfferedCipherSuites;

constexpr void __set_mOfferedCipherSuites(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_mOfferedCipherSuites() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mOfferedCompressionMethods, put=__set_mOfferedCompressionMethods))  mOfferedCompressionMethods;

constexpr void __set_mOfferedCompressionMethods(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mOfferedCompressionMethods() const;

 System::Collections::IDictionary __declspec(property(get=__get_mClientExtensions, put=__set_mClientExtensions))  mClientExtensions;

constexpr void __set_mClientExtensions(System::Collections::IDictionary value) ;

constexpr System::Collections::IDictionary __get_mClientExtensions() const;

 System::Collections::IDictionary __declspec(property(get=__get_mServerExtensions, put=__set_mServerExtensions))  mServerExtensions;

constexpr void __set_mServerExtensions(System::Collections::IDictionary value) ;

constexpr System::Collections::IDictionary __get_mServerExtensions() const;

 int16_t __declspec(property(get=__get_mConnectionState, put=__set_mConnectionState))  mConnectionState;

constexpr void __set_mConnectionState(int16_t value) ;

constexpr int16_t __get_mConnectionState() const;

 bool __declspec(property(get=__get_mResumedSession, put=__set_mResumedSession))  mResumedSession;

constexpr void __set_mResumedSession(bool value) ;

constexpr bool __get_mResumedSession() const;

 bool __declspec(property(get=__get_mReceivedChangeCipherSpec, put=__set_mReceivedChangeCipherSpec))  mReceivedChangeCipherSpec;

constexpr void __set_mReceivedChangeCipherSpec(bool value) ;

constexpr bool __get_mReceivedChangeCipherSpec() const;

 bool __declspec(property(get=__get_mSecureRenegotiation, put=__set_mSecureRenegotiation))  mSecureRenegotiation;

constexpr void __set_mSecureRenegotiation(bool value) ;

constexpr bool __get_mSecureRenegotiation() const;

 bool __declspec(property(get=__get_mAllowCertificateStatus, put=__set_mAllowCertificateStatus))  mAllowCertificateStatus;

constexpr void __set_mAllowCertificateStatus(bool value) ;

constexpr bool __get_mAllowCertificateStatus() const;

 bool __declspec(property(get=__get_mExpectSessionTicket, put=__set_mExpectSessionTicket))  mExpectSessionTicket;

constexpr void __set_mExpectSessionTicket(bool value) ;

constexpr bool __get_mExpectSessionTicket() const;

 bool __declspec(property(get=__get_mBlocking, put=__set_mBlocking))  mBlocking;

constexpr void __set_mBlocking(bool value) ;

constexpr bool __get_mBlocking() const;

 Org::BouncyCastle::Crypto::Tls::ByteQueueStream __declspec(property(get=__get_mInputBuffers, put=__set_mInputBuffers))  mInputBuffers;

constexpr void __set_mInputBuffers(Org::BouncyCastle::Crypto::Tls::ByteQueueStream value) ;

constexpr Org::BouncyCastle::Crypto::Tls::ByteQueueStream __get_mInputBuffers() const;

 Org::BouncyCastle::Crypto::Tls::ByteQueueStream __declspec(property(get=__get_mOutputBuffer, put=__set_mOutputBuffer))  mOutputBuffer;

constexpr void __set_mOutputBuffer(Org::BouncyCastle::Crypto::Tls::ByteQueueStream value) ;

constexpr Org::BouncyCastle::Crypto::Tls::ByteQueueStream __get_mOutputBuffer() const;


// Properties

 Org::BouncyCastle::Crypto::Tls::TlsContext __declspec(property(get=get_Context))  Context;

 Org::BouncyCastle::Crypto::Tls::AbstractTlsContext __declspec(property(get=get_ContextAdmin))  ContextAdmin;

 Org::BouncyCastle::Crypto::Tls::TlsPeer __declspec(property(get=get_Peer))  Peer;

 System::IO::Stream __declspec(property(get=get_Stream))  Stream;

 bool __declspec(property(get=get_IsClosed))  IsClosed;


// Methods

static Org::BouncyCastle::Crypto::Tls::TlsProtocol New_ctor(System::IO::Stream stream, Org::BouncyCastle::Security::SecureRandom secureRandom) ;

/// @brief Method .ctor addr 0xf0e620 size 0xc virtual false final false
 void _ctor(System::IO::Stream stream, Org::BouncyCastle::Security::SecureRandom secureRandom) ;

static Org::BouncyCastle::Crypto::Tls::TlsProtocol New_ctor(System::IO::Stream input, System::IO::Stream output, Org::BouncyCastle::Security::SecureRandom secureRandom) ;

/// @brief Method .ctor addr 0xf0e62c size 0x154 virtual false final false
 void _ctor(System::IO::Stream input, System::IO::Stream output, Org::BouncyCastle::Security::SecureRandom secureRandom) ;

static Org::BouncyCastle::Crypto::Tls::TlsProtocol New_ctor(Org::BouncyCastle::Security::SecureRandom secureRandom) ;

/// @brief Method .ctor addr 0xf0e780 size 0x1a0 virtual false final false
 void _ctor(Org::BouncyCastle::Security::SecureRandom secureRandom) ;

/// @brief Method get_Context addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsContext get_Context() ;

/// @brief Method get_ContextAdmin addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Crypto::Tls::AbstractTlsContext get_ContextAdmin() ;

/// @brief Method get_Peer addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsPeer get_Peer() ;

/// @brief Method HandleAlertMessage addr 0xf0e920 size 0x13c virtual true final false
 void HandleAlertMessage(uint8_t alertLevel, uint8_t alertDescription) ;

/// @brief Method HandleAlertWarningMessage addr 0xf0ea5c size 0x88 virtual true final false
 void HandleAlertWarningMessage(uint8_t alertDescription) ;

/// @brief Method HandleChangeCipherSpecMessage addr 0xf0eae4 size 0x4 virtual true final false
 void HandleChangeCipherSpecMessage() ;

/// @brief Method HandleClose addr 0xf0eae8 size 0xfc virtual true final false
 void HandleClose(bool user_canceled) ;

/// @brief Method HandleException addr 0xf0ebe4 size 0x78 virtual true final false
 void HandleException(uint8_t alertDescription, ::StringW message, System::Exception cause) ;

/// @brief Method HandleFailure addr 0xf0ec5c size 0x84 virtual true final false
 void HandleFailure() ;

/// @brief Method HandleHandshakeMessage addr 0x0 size 0xffffffffffffffff virtual true final false
 void HandleHandshakeMessage(uint8_t type, System::IO::MemoryStream buf) ;

/// @brief Method ApplyMaxFragmentLengthExtension addr 0xf0ece0 size 0x98 virtual true final false
 void ApplyMaxFragmentLengthExtension() ;

/// @brief Method CheckReceivedChangeCipherSpec addr 0xf0ed78 size 0x5c virtual true final false
 void CheckReceivedChangeCipherSpec(bool expected) ;

/// @brief Method CleanupHandshake addr 0xf0edd4 size 0x9c virtual true final false
 void CleanupHandshake() ;

/// @brief Method BlockForHandshake addr 0xf0ee70 size 0x90 virtual true final false
 void BlockForHandshake() ;

/// @brief Method CompleteHandshake addr 0xf0ef00 size 0x52c virtual true final false
 void CompleteHandshake() ;

/// @brief Method ProcessRecord addr 0xf06df8 size 0x214 virtual false final false
 void ProcessRecord(uint8_t protocol, ::ArrayW<uint8_t> buf, int32_t off, int32_t len) ;

/// @brief Method ProcessHandshakeQueue addr 0xf0f600 size 0x2dc virtual false final false
 void ProcessHandshakeQueue(Org::BouncyCastle::Crypto::Tls::ByteQueue queue) ;

/// @brief Method ProcessApplicationDataQueue addr 0xf0f49c size 0x4 virtual false final false
 void ProcessApplicationDataQueue() ;

/// @brief Method ProcessAlertQueue addr 0xf0f42c size 0x70 virtual false final false
 void ProcessAlertQueue() ;

/// @brief Method ProcessChangeCipherSpec addr 0xf0f4a0 size 0x160 virtual false final false
 void ProcessChangeCipherSpec(::ArrayW<uint8_t> buf, int32_t off, int32_t len) ;

/// @brief Method ApplicationDataAvailable addr 0xf0f8dc size 0x1c virtual true final false
 int32_t ApplicationDataAvailable() ;

/// @brief Method ReadApplicationData addr 0xf0f8f8 size 0x190 virtual true final false
 int32_t ReadApplicationData(::ArrayW<uint8_t> buf, int32_t offset, int32_t len) ;

/// @brief Method SafeCheckRecordHeader addr 0xf0fa88 size 0x1d4 virtual true final false
 void SafeCheckRecordHeader(::ArrayW<uint8_t> recordHeader) ;

/// @brief Method SafeReadRecord addr 0xf0fc5c size 0x298 virtual true final false
 void SafeReadRecord() ;

/// @brief Method SafeWriteRecord addr 0xf0fef4 size 0x1d4 virtual true final false
 void SafeWriteRecord(uint8_t type, ::ArrayW<uint8_t> buf, int32_t offset, int32_t len) ;

/// @brief Method WriteData addr 0xf100c8 size 0x1e8 virtual true final false
 void WriteData(::ArrayW<uint8_t> buf, int32_t offset, int32_t len) ;

/// @brief Method SetAppDataSplitMode addr 0xf102b0 size 0xb4 virtual true final false
 void SetAppDataSplitMode(int32_t appDataSplitMode) ;

/// @brief Method WriteHandshakeMessage addr 0xf10364 size 0x190 virtual true final false
 void WriteHandshakeMessage(::ArrayW<uint8_t> buf, int32_t off, int32_t len) ;

/// @brief Method get_Stream addr 0xf104f4 size 0x64 virtual true final false
 System::IO::Stream get_Stream() ;

/// @brief Method CloseInput addr 0xf10558 size 0x124 virtual true final false
 void CloseInput() ;

/// @brief Method OfferInput addr 0xf1067c size 0x28 virtual true final false
 void OfferInput(::ArrayW<uint8_t> input) ;

/// @brief Method OfferInput addr 0xf106a4 size 0x244 virtual true final false
 void OfferInput(::ArrayW<uint8_t> input, int32_t inputOff, int32_t inputLen) ;

/// @brief Method GetAvailableInputBytes addr 0xf108e8 size 0x6c virtual true final false
 int32_t GetAvailableInputBytes() ;

/// @brief Method ReadInput addr 0xf10954 size 0x100 virtual true final false
 int32_t ReadInput(::ArrayW<uint8_t> buffer, int32_t offset, int32_t length) ;

/// @brief Method OfferOutput addr 0xf10a54 size 0xe0 virtual true final false
 void OfferOutput(::ArrayW<uint8_t> buffer, int32_t offset, int32_t length) ;

/// @brief Method GetAvailableOutputBytes addr 0xf10b34 size 0x78 virtual true final false
 int32_t GetAvailableOutputBytes() ;

/// @brief Method ReadOutput addr 0xf10bac size 0x78 virtual true final false
 int32_t ReadOutput(::ArrayW<uint8_t> buffer, int32_t offset, int32_t length) ;

/// @brief Method InvalidateSession addr 0xf10c24 size 0xb8 virtual true final false
 void InvalidateSession() ;

/// @brief Method ProcessFinishedMessage addr 0xf10cdc size 0x11c virtual true final false
 void ProcessFinishedMessage(System::IO::MemoryStream buf) ;

/// @brief Method RaiseAlertFatal addr 0xf10e80 size 0x1d0 virtual true final false
 void RaiseAlertFatal(uint8_t alertDescription, ::StringW message, System::Exception cause) ;

/// @brief Method RaiseAlertWarning addr 0xf11050 size 0x13c virtual true final false
 void RaiseAlertWarning(uint8_t alertDescription, ::StringW message) ;

/// @brief Method SendCertificateMessage addr 0xf1118c size 0x230 virtual true final false
 void SendCertificateMessage(Org::BouncyCastle::Crypto::Tls::Certificate certificate) ;

/// @brief Method SendChangeCipherSpecMessage addr 0xf114e8 size 0x98 virtual true final false
 void SendChangeCipherSpecMessage() ;

/// @brief Method SendFinishedMessage addr 0xf11580 size 0x130 virtual true final false
 void SendFinishedMessage() ;

/// @brief Method SendSupplementalDataMessage addr 0xf1173c size 0x80 virtual true final false
 void SendSupplementalDataMessage(System::Collections::IList supplementalData) ;

/// @brief Method CreateVerifyData addr 0xf11bdc size 0x120 virtual true final false
 ::ArrayW<uint8_t> CreateVerifyData(bool isServer) ;

/// @brief Method Close addr 0xf11e9c size 0x10 virtual true final false
 void Close() ;

/// @brief Method Flush addr 0xf11eac size 0x24 virtual true final false
 void Flush() ;

/// @brief Method get_IsClosed addr 0xf11ed0 size 0x18 virtual true final false
 bool get_IsClosed() ;

/// @brief Method ProcessMaxFragmentLengthExtension addr 0xf11ee8 size 0xb0 virtual true final false
 int16_t ProcessMaxFragmentLengthExtension(System::Collections::IDictionary clientExtensions, System::Collections::IDictionary serverExtensions, uint8_t alertDescription) ;

/// @brief Method RefuseRenegotiation addr 0xf11f98 size 0xe4 virtual true final false
 void RefuseRenegotiation() ;

/// @brief Method AssertEmpty addr 0xf10df8 size 0x88 virtual false final false
static void AssertEmpty(System::IO::MemoryStream buf) ;

/// @brief Method CreateRandomBlock addr 0xf1207c size 0x114 virtual false final false
static ::ArrayW<uint8_t> CreateRandomBlock(bool useGmtUnixTime, Org::BouncyCastle::Crypto::Prng::IRandomGenerator randomGenerator) ;

/// @brief Method CreateRenegotiationInfo addr 0xf12190 size 0x58 virtual false final false
static ::ArrayW<uint8_t> CreateRenegotiationInfo(::ArrayW<uint8_t> renegotiated_connection) ;

/// @brief Method EstablishMasterSecret addr 0xf121e8 size 0x230 virtual false final false
static void EstablishMasterSecret(Org::BouncyCastle::Crypto::Tls::TlsContext context, Org::BouncyCastle::Crypto::Tls::TlsKeyExchange keyExchange) ;

/// @brief Method GetCurrentPrfHash addr 0xf11cfc size 0x1a0 virtual false final false
static ::ArrayW<uint8_t> GetCurrentPrfHash(Org::BouncyCastle::Crypto::Tls::TlsContext context, Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash handshakeHash, ::ArrayW<uint8_t> sslSender) ;

/// @brief Method ReadExtensions addr 0xf08e14 size 0x308 virtual false final false
static System::Collections::IDictionary ReadExtensions(System::IO::MemoryStream input) ;

/// @brief Method ReadSupplementalDataMessage addr 0xf12418 size 0x224 virtual false final false
static System::Collections::IList ReadSupplementalDataMessage(System::IO::MemoryStream input) ;

/// @brief Method WriteExtensions addr 0xf093dc size 0xd4 virtual false final false
static void WriteExtensions(System::IO::Stream output, System::Collections::IDictionary extensions) ;

/// @brief Method WriteSelectedExtensions addr 0xf1263c size 0x4fc virtual false final false
static void WriteSelectedExtensions(System::IO::Stream output, System::Collections::IDictionary extensions, bool selectEmpty) ;

/// @brief Method WriteSupplementalData addr 0xf117bc size 0x420 virtual false final false
static void WriteSupplementalData(System::IO::Stream output, System::Collections::IList supplementalData) ;

/// @brief Method GetPrfAlgorithm addr 0xf12b38 size 0x168 virtual false final false
static int32_t GetPrfAlgorithm(Org::BouncyCastle::Crypto::Tls::TlsContext context, int32_t ciphersuite) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage, "Org.BouncyCastle.Crypto.Tls", "TlsProtocol/HandshakeMessage");
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::TlsProtocol);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsProtocol, "Org.BouncyCastle.Crypto.Tls", "TlsProtocol");
