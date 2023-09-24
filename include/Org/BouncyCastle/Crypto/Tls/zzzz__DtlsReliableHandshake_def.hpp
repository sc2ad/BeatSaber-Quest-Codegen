#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__RecordLayerBuffer;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsRecordLayer;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Timeout;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Retransmit;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsHandshakeHash;
}
namespace System::Collections {
class IList;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Message;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsHandshakeRetransmit;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsReliableHandshake;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Message;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__RecordLayerBuffer;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Retransmit;
}
// Type: ::Message
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1230))
// CS Name: Org.BouncyCastle.Crypto.Tls.DtlsReliableHandshake::Message
class CORDL_TYPE Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Message : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Message() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Message", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Message(Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Message const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Message", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Message(Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Message&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Message(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Message& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Message& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Message& operator=(Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Message&& o) noexcept = default;
  constexpr Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Message& operator=(Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Message const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_mMessageSeq, put=__set_mMessageSeq))  mMessageSeq;

constexpr void __set_mMessageSeq(int32_t value) ;

constexpr int32_t __get_mMessageSeq() const;

 uint8_t __declspec(property(get=__get_mMsgType, put=__set_mMsgType))  mMsgType;

constexpr void __set_mMsgType(uint8_t value) ;

constexpr uint8_t __get_mMsgType() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mBody, put=__set_mBody))  mBody;

constexpr void __set_mBody(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mBody() const;


// Properties

 int32_t __declspec(property(get=get_Seq))  Seq;

 uint8_t __declspec(property(get=get_Type))  Type;

 ::ArrayW<uint8_t> __declspec(property(get=get_Body))  Body;


// Methods

static Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Message New_ctor(int32_t message_seq, uint8_t msg_type, ::ArrayW<uint8_t> body) ;

/// @brief Method .ctor addr 0xee0bc0 size 0x40 virtual false final false
 void _ctor(int32_t message_seq, uint8_t msg_type, ::ArrayW<uint8_t> body) ;

/// @brief Method get_Seq addr 0xee213c size 0x8 virtual false final false
 int32_t get_Seq() ;

/// @brief Method get_Type addr 0xee2144 size 0x8 virtual false final false
 uint8_t get_Type() ;

/// @brief Method get_Body addr 0xee214c size 0x8 virtual false final false
 ::ArrayW<uint8_t> get_Body() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
// Type: ::RecordLayerBuffer
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1231))
// CS Name: Org.BouncyCastle.Crypto.Tls.DtlsReliableHandshake::RecordLayerBuffer
class CORDL_TYPE Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__RecordLayerBuffer : public System::IO::MemoryStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__RecordLayerBuffer() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__RecordLayerBuffer", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__RecordLayerBuffer(Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__RecordLayerBuffer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__RecordLayerBuffer", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__RecordLayerBuffer(Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__RecordLayerBuffer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__RecordLayerBuffer(void* ptr) noexcept : System::IO::MemoryStream(ptr) {
}


  constexpr Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__RecordLayerBuffer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__RecordLayerBuffer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__RecordLayerBuffer& operator=(Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__RecordLayerBuffer&& o) noexcept = default;
  constexpr Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__RecordLayerBuffer& operator=(Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__RecordLayerBuffer const& o) noexcept = default;
                


// Methods

static Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__RecordLayerBuffer New_ctor(int32_t size) ;

/// @brief Method .ctor addr 0xee2080 size 0x8 virtual false final false
 void _ctor(int32_t size) ;

/// @brief Method SendToRecordLayer addr 0xee2088 size 0xb4 virtual false final false
 void SendToRecordLayer(Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer recordLayer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
// Type: ::Retransmit
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1232))
// CS Name: Org.BouncyCastle.Crypto.Tls.DtlsReliableHandshake::Retransmit
class CORDL_TYPE Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Retransmit : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit
constexpr operator  Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Retransmit() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Retransmit", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Retransmit(Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Retransmit const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Retransmit", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Retransmit(Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Retransmit&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Retransmit(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Retransmit& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Retransmit& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Retransmit& operator=(Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Retransmit&& o) noexcept = default;
  constexpr Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Retransmit& operator=(Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Retransmit const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake __declspec(property(get=__get_mOuter, put=__set_mOuter))  mOuter;

constexpr void __set_mOuter(Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake value) ;

constexpr Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake __get_mOuter() const;


// Methods

static Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Retransmit New_ctor(Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake outer) ;

/// @brief Method .ctor addr 0xee177c size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake outer) ;

/// @brief Method ReceivedHandshakeRecord addr 0xee2154 size 0x2c virtual true final true
 void ReceivedHandshakeRecord(int32_t epoch, ::ArrayW<uint8_t> buf, int32_t off, int32_t len) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
// Type: Org.BouncyCastle.Crypto.Tls::DtlsReliableHandshake
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1233))
// CS Name: Org.BouncyCastle.Crypto.Tls.DtlsReliableHandshake
class CORDL_TYPE DtlsReliableHandshake : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Retransmit = Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Retransmit;

using RecordLayerBuffer = Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__RecordLayerBuffer;

using Message = Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Message;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~DtlsReliableHandshake() = default;

// Ctor Parameters [CppParam { name: "", ty: "DtlsReliableHandshake", modifiers: " const&", def_value: None }]
constexpr DtlsReliableHandshake(DtlsReliableHandshake const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DtlsReliableHandshake", modifiers: "&&", def_value: None }]
constexpr DtlsReliableHandshake(DtlsReliableHandshake&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DtlsReliableHandshake(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DtlsReliableHandshake& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DtlsReliableHandshake& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DtlsReliableHandshake& operator=(DtlsReliableHandshake&& o) noexcept = default;
  constexpr DtlsReliableHandshake& operator=(DtlsReliableHandshake const& o) noexcept = default;
                


// Fields

/// @brief Field MaxReceiveAhead offset 0
static constexpr int32_t  MaxReceiveAhead{16};

/// @brief Field MessageHeaderLength offset 0
static constexpr int32_t  MessageHeaderLength{12};

/// @brief Field InitialResendMillis offset 0
static constexpr int32_t  InitialResendMillis{1000};

/// @brief Field MaxResendMillis offset 0
static constexpr int32_t  MaxResendMillis{60000};

 Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer __declspec(property(get=__get_mRecordLayer, put=__set_mRecordLayer))  mRecordLayer;

constexpr void __set_mRecordLayer(Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer value) ;

constexpr Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer __get_mRecordLayer() const;

 Org::BouncyCastle::Crypto::Tls::Timeout __declspec(property(get=__get_mHandshakeTimeout, put=__set_mHandshakeTimeout))  mHandshakeTimeout;

constexpr void __set_mHandshakeTimeout(Org::BouncyCastle::Crypto::Tls::Timeout value) ;

constexpr Org::BouncyCastle::Crypto::Tls::Timeout __get_mHandshakeTimeout() const;

 Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash __declspec(property(get=__get_mHandshakeHash, put=__set_mHandshakeHash))  mHandshakeHash;

constexpr void __set_mHandshakeHash(Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash __get_mHandshakeHash() const;

 System::Collections::IDictionary __declspec(property(get=__get_mCurrentInboundFlight, put=__set_mCurrentInboundFlight))  mCurrentInboundFlight;

constexpr void __set_mCurrentInboundFlight(System::Collections::IDictionary value) ;

constexpr System::Collections::IDictionary __get_mCurrentInboundFlight() const;

 System::Collections::IDictionary __declspec(property(get=__get_mPreviousInboundFlight, put=__set_mPreviousInboundFlight))  mPreviousInboundFlight;

constexpr void __set_mPreviousInboundFlight(System::Collections::IDictionary value) ;

constexpr System::Collections::IDictionary __get_mPreviousInboundFlight() const;

 System::Collections::IList __declspec(property(get=__get_mOutboundFlight, put=__set_mOutboundFlight))  mOutboundFlight;

constexpr void __set_mOutboundFlight(System::Collections::IList value) ;

constexpr System::Collections::IList __get_mOutboundFlight() const;

 int32_t __declspec(property(get=__get_mResendMillis, put=__set_mResendMillis))  mResendMillis;

constexpr void __set_mResendMillis(int32_t value) ;

constexpr int32_t __get_mResendMillis() const;

 Org::BouncyCastle::Crypto::Tls::Timeout __declspec(property(get=__get_mResendTimeout, put=__set_mResendTimeout))  mResendTimeout;

constexpr void __set_mResendTimeout(Org::BouncyCastle::Crypto::Tls::Timeout value) ;

constexpr Org::BouncyCastle::Crypto::Tls::Timeout __get_mResendTimeout() const;

 int32_t __declspec(property(get=__get_mMessageSeq, put=__set_mMessageSeq))  mMessageSeq;

constexpr void __set_mMessageSeq(int32_t value) ;

constexpr int32_t __get_mMessageSeq() const;

 int32_t __declspec(property(get=__get_mNextReceiveSeq, put=__set_mNextReceiveSeq))  mNextReceiveSeq;

constexpr void __set_mNextReceiveSeq(int32_t value) ;

constexpr int32_t __get_mNextReceiveSeq() const;


// Properties

 Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash __declspec(property(get=get_HandshakeHash))  HandshakeHash;


// Methods

static Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake New_ctor(Org::BouncyCastle::Crypto::Tls::TlsContext context, Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer transport, int32_t timeoutMillis) ;

/// @brief Method .ctor addr 0xedb970 size 0x14c virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Tls::TlsContext context, Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer transport, int32_t timeoutMillis) ;

/// @brief Method NotifyHelloComplete addr 0xedc154 size 0xac virtual false final false
 void NotifyHelloComplete() ;

/// @brief Method get_HandshakeHash addr 0xee0830 size 0x8 virtual false final false
 Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash get_HandshakeHash() ;

/// @brief Method PrepareToFinish addr 0xedc310 size 0xb0 virtual false final false
 Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash PrepareToFinish() ;

/// @brief Method SendMessage addr 0xedbabc size 0x1d0 virtual false final false
 void SendMessage(uint8_t msg_type, ::ArrayW<uint8_t> body) ;

/// @brief Method ReceiveMessageBody addr 0xedc200 size 0x6c virtual false final false
 ::ArrayW<uint8_t> ReceiveMessageBody(uint8_t msg_type) ;

/// @brief Method ReceiveMessage addr 0xedbc8c size 0x2f4 virtual false final false
 Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Message ReceiveMessage() ;

/// @brief Method Finish addr 0xedc26c size 0xa4 virtual false final false
 void Finish() ;

/// @brief Method ResetHandshakeMessagesDigest addr 0xedc0b0 size 0xa4 virtual false final false
 void ResetHandshakeMessagesDigest() ;

/// @brief Method BackOff addr 0xee17a4 size 0x5c virtual false final false
 int32_t BackOff(int32_t timeoutMillis) ;

/// @brief Method CheckInboundFlight addr 0xee0838 size 0x388 virtual false final false
 void CheckInboundFlight() ;

/// @brief Method GetPendingMessage addr 0xee0f50 size 0x19c virtual false final false
 Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Message GetPendingMessage() ;

/// @brief Method PrepareInboundFlight addr 0xee0f24 size 0x2c virtual false final false
 void PrepareInboundFlight(System::Collections::IDictionary nextFlight) ;

/// @brief Method ProcessRecord addr 0xee12ec size 0x490 virtual false final false
 void ProcessRecord(int32_t windowSize, int32_t epoch, ::ArrayW<uint8_t> buf, int32_t off, int32_t len) ;

/// @brief Method ResendOutboundFlight addr 0xee10ec size 0x200 virtual false final false
 void ResendOutboundFlight() ;

/// @brief Method UpdateHandshakeMessagesDigest addr 0xee0d14 size 0x210 virtual false final false
 Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Message UpdateHandshakeMessagesDigest(Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Message message) ;

/// @brief Method WriteMessage addr 0xee0c00 size 0x114 virtual false final false
 void WriteMessage(Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Message message) ;

/// @brief Method WriteHandshakeFragment addr 0xee1f58 size 0x128 virtual false final false
 void WriteHandshakeFragment(Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Message message, int32_t fragment_offset, int32_t fragment_length) ;

/// @brief Method CheckAll addr 0xee1b9c size 0x3bc virtual false final false
static bool CheckAll(System::Collections::IDictionary inboundFlight) ;

/// @brief Method ResetAll addr 0xee1800 size 0x39c virtual false final false
static void ResetAll(System::Collections::IDictionary inboundFlight) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::DtlsReliableHandshake, "Org.BouncyCastle.Crypto.Tls", "DtlsReliableHandshake");
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Message);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Message, "Org.BouncyCastle.Crypto.Tls", "DtlsReliableHandshake/Message");
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__RecordLayerBuffer);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__RecordLayerBuffer, "Org.BouncyCastle.Crypto.Tls", "DtlsReliableHandshake/RecordLayerBuffer");
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Retransmit);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__DtlsReliableHandshake__Retransmit, "Org.BouncyCastle.Crypto.Tls", "DtlsReliableHandshake/Retransmit");
