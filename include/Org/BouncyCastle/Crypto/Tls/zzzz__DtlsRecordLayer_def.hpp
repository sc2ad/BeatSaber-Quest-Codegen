#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Tls {
class Timeout;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipher;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsEpoch;
}
namespace Org::BouncyCastle::Crypto::Tls {
class ProtocolVersion;
}
namespace Org::BouncyCastle::Crypto::Tls {
class ByteQueue;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsPeer;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DatagramTransport;
}
namespace System {
class Exception;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCloseable;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsHandshakeRetransmit;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsRecordLayer;
}
// Type: Org.BouncyCastle.Crypto.Tls::DtlsRecordLayer
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1229))
// CS Name: Org.BouncyCastle.Crypto.Tls.DtlsRecordLayer
class CORDL_TYPE DtlsRecordLayer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::DatagramTransport
constexpr operator  Org::BouncyCastle::Crypto::Tls::DatagramTransport() const noexcept;

/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsCloseable
constexpr operator  Org::BouncyCastle::Crypto::Tls::TlsCloseable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~DtlsRecordLayer() = default;

// Ctor Parameters [CppParam { name: "", ty: "DtlsRecordLayer", modifiers: " const&", def_value: None }]
constexpr DtlsRecordLayer(DtlsRecordLayer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DtlsRecordLayer", modifiers: "&&", def_value: None }]
constexpr DtlsRecordLayer(DtlsRecordLayer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DtlsRecordLayer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DtlsRecordLayer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DtlsRecordLayer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DtlsRecordLayer& operator=(DtlsRecordLayer&& o) noexcept = default;
  constexpr DtlsRecordLayer& operator=(DtlsRecordLayer const& o) noexcept = default;
                


// Fields

/// @brief Field RECORD_HEADER_LENGTH offset 0
static constexpr int32_t  RECORD_HEADER_LENGTH{13};

/// @brief Field MAX_FRAGMENT_LENGTH offset 0
static constexpr int32_t  MAX_FRAGMENT_LENGTH{16384};

/// @brief Field TCP_MSL offset 0
static constexpr int64_t  TCP_MSL{120000};

/// @brief Field RETRANSMIT_TIMEOUT offset 0
static constexpr int64_t  RETRANSMIT_TIMEOUT{240000};

 Org::BouncyCastle::Crypto::Tls::DatagramTransport __declspec(property(get=__get_mTransport, put=__set_mTransport))  mTransport;

constexpr void __set_mTransport(Org::BouncyCastle::Crypto::Tls::DatagramTransport value) ;

constexpr Org::BouncyCastle::Crypto::Tls::DatagramTransport __get_mTransport() const;

 Org::BouncyCastle::Crypto::Tls::TlsContext __declspec(property(get=__get_mContext, put=__set_mContext))  mContext;

constexpr void __set_mContext(Org::BouncyCastle::Crypto::Tls::TlsContext value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsContext __get_mContext() const;

 Org::BouncyCastle::Crypto::Tls::TlsPeer __declspec(property(get=__get_mPeer, put=__set_mPeer))  mPeer;

constexpr void __set_mPeer(Org::BouncyCastle::Crypto::Tls::TlsPeer value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsPeer __get_mPeer() const;

 Org::BouncyCastle::Crypto::Tls::ByteQueue __declspec(property(get=__get_mRecordQueue, put=__set_mRecordQueue))  mRecordQueue;

constexpr void __set_mRecordQueue(Org::BouncyCastle::Crypto::Tls::ByteQueue value) ;

constexpr Org::BouncyCastle::Crypto::Tls::ByteQueue __get_mRecordQueue() const;

 bool __declspec(property(get=__get_mClosed, put=__set_mClosed))  mClosed;

constexpr void __set_mClosed(bool value) ;

constexpr bool __get_mClosed() const;

 bool __declspec(property(get=__get_mFailed, put=__set_mFailed))  mFailed;

constexpr void __set_mFailed(bool value) ;

constexpr bool __get_mFailed() const;

 Org::BouncyCastle::Crypto::Tls::ProtocolVersion __declspec(property(get=__get_mReadVersion, put=__set_mReadVersion))  mReadVersion;

constexpr void __set_mReadVersion(Org::BouncyCastle::Crypto::Tls::ProtocolVersion value) ;

constexpr Org::BouncyCastle::Crypto::Tls::ProtocolVersion __get_mReadVersion() const;

 Org::BouncyCastle::Crypto::Tls::ProtocolVersion __declspec(property(get=__get_mWriteVersion, put=__set_mWriteVersion))  mWriteVersion;

constexpr void __set_mWriteVersion(Org::BouncyCastle::Crypto::Tls::ProtocolVersion value) ;

constexpr Org::BouncyCastle::Crypto::Tls::ProtocolVersion __get_mWriteVersion() const;

 bool __declspec(property(get=__get_mInHandshake, put=__set_mInHandshake))  mInHandshake;

constexpr void __set_mInHandshake(bool value) ;

constexpr bool __get_mInHandshake() const;

 int32_t __declspec(property(get=__get_mPlaintextLimit, put=__set_mPlaintextLimit))  mPlaintextLimit;

constexpr void __set_mPlaintextLimit(int32_t value) ;

constexpr int32_t __get_mPlaintextLimit() const;

 Org::BouncyCastle::Crypto::Tls::DtlsEpoch __declspec(property(get=__get_mCurrentEpoch, put=__set_mCurrentEpoch))  mCurrentEpoch;

constexpr void __set_mCurrentEpoch(Org::BouncyCastle::Crypto::Tls::DtlsEpoch value) ;

constexpr Org::BouncyCastle::Crypto::Tls::DtlsEpoch __get_mCurrentEpoch() const;

 Org::BouncyCastle::Crypto::Tls::DtlsEpoch __declspec(property(get=__get_mPendingEpoch, put=__set_mPendingEpoch))  mPendingEpoch;

constexpr void __set_mPendingEpoch(Org::BouncyCastle::Crypto::Tls::DtlsEpoch value) ;

constexpr Org::BouncyCastle::Crypto::Tls::DtlsEpoch __get_mPendingEpoch() const;

 Org::BouncyCastle::Crypto::Tls::DtlsEpoch __declspec(property(get=__get_mReadEpoch, put=__set_mReadEpoch))  mReadEpoch;

constexpr void __set_mReadEpoch(Org::BouncyCastle::Crypto::Tls::DtlsEpoch value) ;

constexpr Org::BouncyCastle::Crypto::Tls::DtlsEpoch __get_mReadEpoch() const;

 Org::BouncyCastle::Crypto::Tls::DtlsEpoch __declspec(property(get=__get_mWriteEpoch, put=__set_mWriteEpoch))  mWriteEpoch;

constexpr void __set_mWriteEpoch(Org::BouncyCastle::Crypto::Tls::DtlsEpoch value) ;

constexpr Org::BouncyCastle::Crypto::Tls::DtlsEpoch __get_mWriteEpoch() const;

 Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit __declspec(property(get=__get_mRetransmit, put=__set_mRetransmit))  mRetransmit;

constexpr void __set_mRetransmit(Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit value) ;

constexpr Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit __get_mRetransmit() const;

 Org::BouncyCastle::Crypto::Tls::DtlsEpoch __declspec(property(get=__get_mRetransmitEpoch, put=__set_mRetransmitEpoch))  mRetransmitEpoch;

constexpr void __set_mRetransmitEpoch(Org::BouncyCastle::Crypto::Tls::DtlsEpoch value) ;

constexpr Org::BouncyCastle::Crypto::Tls::DtlsEpoch __get_mRetransmitEpoch() const;

 Org::BouncyCastle::Crypto::Tls::Timeout __declspec(property(get=__get_mRetransmitTimeout, put=__set_mRetransmitTimeout))  mRetransmitTimeout;

constexpr void __set_mRetransmitTimeout(Org::BouncyCastle::Crypto::Tls::Timeout value) ;

constexpr Org::BouncyCastle::Crypto::Tls::Timeout __get_mRetransmitTimeout() const;


// Properties

 bool __declspec(property(get=get_IsClosed))  IsClosed;

 int32_t __declspec(property(get=get_ReadEpoch))  ReadEpoch;

 Org::BouncyCastle::Crypto::Tls::ProtocolVersion __declspec(property(get=get_ReadVersion, put=set_ReadVersion))  ReadVersion;


// Methods

/// @brief Method SendDatagram addr 0xedee60 size 0xc0 virtual false final false
static void SendDatagram(Org::BouncyCastle::Crypto::Tls::DatagramTransport sender, ::ArrayW<uint8_t> buf, int32_t off, int32_t len) ;

// Ctor Parameters [CppParam { name: "transport", ty: "Org::BouncyCastle::Crypto::Tls::DatagramTransport", modifiers: "", def_value: None }, CppParam { name: "context", ty: "Org::BouncyCastle::Crypto::Tls::TlsContext", modifiers: "", def_value: None }, CppParam { name: "peer", ty: "Org::BouncyCastle::Crypto::Tls::TlsPeer", modifiers: "", def_value: None }, CppParam { name: "contentType", ty: "uint8_t", modifiers: "", def_value: None }]
explicit DtlsRecordLayer(Org::BouncyCastle::Crypto::Tls::DatagramTransport transport, Org::BouncyCastle::Crypto::Tls::TlsContext context, Org::BouncyCastle::Crypto::Tls::TlsPeer peer, uint8_t contentType) ;

/// @brief Method .ctor addr 0xeda454 size 0x13c virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Tls::DatagramTransport transport, Org::BouncyCastle::Crypto::Tls::TlsContext context, Org::BouncyCastle::Crypto::Tls::TlsPeer peer, uint8_t contentType) ;

/// @brief Method get_IsClosed addr 0xedef20 size 0x18 virtual false final false
 bool get_IsClosed() ;

/// @brief Method SetPlaintextLimit addr 0xedef38 size 0x24 virtual true final false
 void SetPlaintextLimit(int32_t plaintextLimit) ;

/// @brief Method get_ReadEpoch addr 0xedef5c size 0x1c virtual true final false
 int32_t get_ReadEpoch() ;

/// @brief Method get_ReadVersion addr 0xedef78 size 0x18 virtual true final false
 Org::BouncyCastle::Crypto::Tls::ProtocolVersion get_ReadVersion() ;

/// @brief Method set_ReadVersion addr 0xedef90 size 0x24 virtual true final false
 void set_ReadVersion(Org::BouncyCastle::Crypto::Tls::ProtocolVersion value) ;

/// @brief Method SetWriteVersion addr 0xedefb4 size 0x24 virtual true final false
 void SetWriteVersion(Org::BouncyCastle::Crypto::Tls::ProtocolVersion writeVersion) ;

/// @brief Method InitPendingEpoch addr 0xedefd8 size 0xc0 virtual true final false
 void InitPendingEpoch(Org::BouncyCastle::Crypto::Tls::TlsCipher pendingCipher) ;

/// @brief Method HandshakeSuccessful addr 0xedf098 size 0xdc virtual true final false
 void HandshakeSuccessful(Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit retransmit) ;

/// @brief Method ResetWriteEpoch addr 0xedf174 size 0x14 virtual true final false
 void ResetWriteEpoch() ;

/// @brief Method GetReceiveLimit addr 0xedf188 size 0x170 virtual true final false
 int32_t GetReceiveLimit() ;

/// @brief Method GetSendLimit addr 0xedf2f8 size 0x174 virtual true final false
 int32_t GetSendLimit() ;

/// @brief Method Receive addr 0xedf46c size 0x1c4 virtual true final false
 int32_t Receive(::ArrayW<uint8_t> buf, int32_t off, int32_t len, int32_t waitMillis) ;

/// @brief Method Send addr 0xedfd60 size 0x178 virtual true final false
 void Send(::ArrayW<uint8_t> buf, int32_t off, int32_t len) ;

/// @brief Method Close addr 0xee0158 size 0x84 virtual true final false
 void Close() ;

/// @brief Method Failed addr 0xee0338 size 0x40 virtual true final false
 void Failed() ;

/// @brief Method Fail addr 0xee0378 size 0xcc virtual true final false
 void Fail(uint8_t alertDescription) ;

/// @brief Method Warn addr 0xee0570 size 0x14 virtual true final false
 void Warn(uint8_t alertDescription, ::StringW message) ;

/// @brief Method CloseTransport addr 0xee01dc size 0x15c virtual false final false
 void CloseTransport() ;

/// @brief Method RaiseAlert addr 0xee0444 size 0x12c virtual false final false
 void RaiseAlert(uint8_t alertLevel, uint8_t alertDescription, ::StringW message, System::Exception cause) ;

/// @brief Method ReceiveDatagram addr 0xee0584 size 0x194 virtual false final false
 int32_t ReceiveDatagram(::ArrayW<uint8_t> buf, int32_t off, int32_t len, int32_t waitMillis) ;

/// @brief Method ProcessRecord addr 0xedf800 size 0x560 virtual false final false
 int32_t ProcessRecord(int32_t received, ::ArrayW<uint8_t> record, ::ArrayW<uint8_t> buf, int32_t off) ;

/// @brief Method ReceiveRecord addr 0xedf630 size 0x1d0 virtual false final false
 int32_t ReceiveRecord(::ArrayW<uint8_t> buf, int32_t off, int32_t len, int32_t waitMillis) ;

/// @brief Method SendRecord addr 0xedfed8 size 0x280 virtual false final false
 void SendRecord(uint8_t contentType, ::ArrayW<uint8_t> buf, int32_t off, int32_t len) ;

/// @brief Method GetMacSequenceNumber addr 0xee075c size 0x8 virtual false final false
static int64_t GetMacSequenceNumber(int32_t epoch, int64_t sequence_number) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer, "Org.BouncyCastle.Crypto.Tls", "DtlsRecordLayer");
