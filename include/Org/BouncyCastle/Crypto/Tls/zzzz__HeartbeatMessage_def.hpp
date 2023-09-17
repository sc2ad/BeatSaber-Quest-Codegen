#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class HeartbeatMessage;
}
namespace Org::BouncyCastle::Crypto::Tls {
class ____Org__BouncyCastle__Crypto__Tls__HeartbeatMessage__PayloadBuffer;
}
// Type: ::PayloadBuffer
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1248))
// CS Name: Org.BouncyCastle.Crypto.Tls.HeartbeatMessage::PayloadBuffer
class CORDL_TYPE ____Org__BouncyCastle__Crypto__Tls__HeartbeatMessage__PayloadBuffer : public ::System::IO::MemoryStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~____Org__BouncyCastle__Crypto__Tls__HeartbeatMessage__PayloadBuffer() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Org__BouncyCastle__Crypto__Tls__HeartbeatMessage__PayloadBuffer", modifiers: " const&", def_value: None }]
constexpr ____Org__BouncyCastle__Crypto__Tls__HeartbeatMessage__PayloadBuffer(____Org__BouncyCastle__Crypto__Tls__HeartbeatMessage__PayloadBuffer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Org__BouncyCastle__Crypto__Tls__HeartbeatMessage__PayloadBuffer", modifiers: "&&", def_value: None }]
constexpr ____Org__BouncyCastle__Crypto__Tls__HeartbeatMessage__PayloadBuffer(____Org__BouncyCastle__Crypto__Tls__HeartbeatMessage__PayloadBuffer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Org__BouncyCastle__Crypto__Tls__HeartbeatMessage__PayloadBuffer(void* ptr) noexcept : ::System::IO::MemoryStream(ptr) {
}


  constexpr ____Org__BouncyCastle__Crypto__Tls__HeartbeatMessage__PayloadBuffer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Org__BouncyCastle__Crypto__Tls__HeartbeatMessage__PayloadBuffer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Org__BouncyCastle__Crypto__Tls__HeartbeatMessage__PayloadBuffer& operator=(____Org__BouncyCastle__Crypto__Tls__HeartbeatMessage__PayloadBuffer&& o) noexcept = default;
  constexpr ____Org__BouncyCastle__Crypto__Tls__HeartbeatMessage__PayloadBuffer& operator=(____Org__BouncyCastle__Crypto__Tls__HeartbeatMessage__PayloadBuffer const& o) noexcept = default;
                


// Methods

/// @brief Method ToTruncatedByteArray addr 0xf04c70 size 0xa8 virtual false final false
 ::ArrayW<uint8_t> ToTruncatedByteArray(int32_t payloadLength) ;

// Ctor Parameters []
explicit ____Org__BouncyCastle__Crypto__Tls__HeartbeatMessage__PayloadBuffer() ;

/// @brief Method .ctor addr 0xf04c68 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
// Type: Org.BouncyCastle.Crypto.Tls::HeartbeatMessage
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1249))
// CS Name: Org.BouncyCastle.Crypto.Tls.HeartbeatMessage
class CORDL_TYPE HeartbeatMessage : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using PayloadBuffer = ::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__HeartbeatMessage__PayloadBuffer;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~HeartbeatMessage() = default;

// Ctor Parameters [CppParam { name: "", ty: "HeartbeatMessage", modifiers: " const&", def_value: None }]
constexpr HeartbeatMessage(HeartbeatMessage const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HeartbeatMessage", modifiers: "&&", def_value: None }]
constexpr HeartbeatMessage(HeartbeatMessage&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HeartbeatMessage(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HeartbeatMessage& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HeartbeatMessage& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HeartbeatMessage& operator=(HeartbeatMessage&& o) noexcept = default;
  constexpr HeartbeatMessage& operator=(HeartbeatMessage const& o) noexcept = default;
                


// Fields

 uint8_t __declspec(property(get=__get_mType, put=__set_mType))  mType;

constexpr void __set_mType(uint8_t value) ;

constexpr uint8_t __get_mType() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mPayload, put=__set_mPayload))  mPayload;

constexpr void __set_mPayload(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mPayload() const;

 int32_t __declspec(property(get=__get_mPaddingLength, put=__set_mPaddingLength))  mPaddingLength;

constexpr void __set_mPaddingLength(int32_t value) ;

constexpr int32_t __get_mPaddingLength() const;


// Methods

// Ctor Parameters [CppParam { name: "type", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "payload", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "paddingLength", ty: "int32_t", modifiers: "", def_value: None }]
explicit HeartbeatMessage(uint8_t type, ::ArrayW<uint8_t> payload, int32_t paddingLength) ;

/// @brief Method .ctor addr 0xf04760 size 0x130 virtual false final false
 void _ctor(uint8_t type, ::ArrayW<uint8_t> payload, int32_t paddingLength) ;

/// @brief Method Encode addr 0xf048a4 size 0x1fc virtual true final false
 void Encode(::Org::BouncyCastle::Crypto::Tls::TlsContext context, ::System::IO::Stream output) ;

/// @brief Method Parse addr 0xf04aa0 size 0x1c8 virtual false final false
static ::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage Parse(::System::IO::Stream input) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::HeartbeatMessage, "Org.BouncyCastle.Crypto.Tls", "HeartbeatMessage");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__HeartbeatMessage__PayloadBuffer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::____Org__BouncyCastle__Crypto__Tls__HeartbeatMessage__PayloadBuffer, "Org.BouncyCastle.Crypto.Tls", "HeartbeatMessage/PayloadBuffer");
