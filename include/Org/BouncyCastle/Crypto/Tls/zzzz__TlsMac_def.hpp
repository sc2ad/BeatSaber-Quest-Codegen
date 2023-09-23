#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsMac;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsMac
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1311))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsMac
class CORDL_TYPE TlsMac : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~TlsMac() = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsMac", modifiers: " const&", def_value: None }]
constexpr TlsMac(TlsMac const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsMac", modifiers: "&&", def_value: None }]
constexpr TlsMac(TlsMac&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsMac(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TlsMac& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TlsMac& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TlsMac& operator=(TlsMac&& o) noexcept = default;
  constexpr TlsMac& operator=(TlsMac const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Tls::TlsContext __declspec(property(get=__get_context, put=__set_context))  context;

constexpr void __set_context(Org::BouncyCastle::Crypto::Tls::TlsContext value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsContext __get_context() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_secret, put=__set_secret))  secret;

constexpr void __set_secret(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_secret() const;

 Org::BouncyCastle::Crypto::IMac __declspec(property(get=__get_mac, put=__set_mac))  mac;

constexpr void __set_mac(Org::BouncyCastle::Crypto::IMac value) ;

constexpr Org::BouncyCastle::Crypto::IMac __get_mac() const;

 int32_t __declspec(property(get=__get_digestBlockSize, put=__set_digestBlockSize))  digestBlockSize;

constexpr void __set_digestBlockSize(int32_t value) ;

constexpr int32_t __get_digestBlockSize() const;

 int32_t __declspec(property(get=__get_digestOverhead, put=__set_digestOverhead))  digestOverhead;

constexpr void __set_digestOverhead(int32_t value) ;

constexpr int32_t __get_digestOverhead() const;

 int32_t __declspec(property(get=__get_macLength, put=__set_macLength))  macLength;

constexpr void __set_macLength(int32_t value) ;

constexpr int32_t __get_macLength() const;


// Properties

 ::ArrayW<uint8_t> __declspec(property(get=get_MacSecret))  MacSecret;

 int32_t __declspec(property(get=get_Size))  Size;


// Methods

// Ctor Parameters [CppParam { name: "context", ty: "Org::BouncyCastle::Crypto::Tls::TlsContext", modifiers: "", def_value: None }, CppParam { name: "digest", ty: "Org::BouncyCastle::Crypto::IDigest", modifiers: "", def_value: None }, CppParam { name: "key", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "keyOff", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "keyLen", ty: "int32_t", modifiers: "", def_value: None }]
explicit TlsMac(Org::BouncyCastle::Crypto::Tls::TlsContext context, Org::BouncyCastle::Crypto::IDigest digest, ::ArrayW<uint8_t> key, int32_t keyOff, int32_t keyLen) ;

/// @brief Method .ctor addr 0xf20eb4 size 0x404 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Tls::TlsContext context, Org::BouncyCastle::Crypto::IDigest digest, ::ArrayW<uint8_t> key, int32_t keyOff, int32_t keyLen) ;

/// @brief Method get_MacSecret addr 0xf21364 size 0x8 virtual true final false
 ::ArrayW<uint8_t> get_MacSecret() ;

/// @brief Method get_Size addr 0xf2136c size 0x8 virtual true final false
 int32_t get_Size() ;

/// @brief Method CalculateMac addr 0xf21374 size 0x2f4 virtual true final false
 ::ArrayW<uint8_t> CalculateMac(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t> message, int32_t offset, int32_t length) ;

/// @brief Method CalculateMacConstantTime addr 0xf2183c size 0x284 virtual true final false
 ::ArrayW<uint8_t> CalculateMacConstantTime(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t> message, int32_t offset, int32_t length, int32_t fullLength, ::ArrayW<uint8_t> dummyData) ;

/// @brief Method GetDigestBlockCount addr 0xf21ac0 size 0x10 virtual true final false
 int32_t GetDigestBlockCount(int32_t inputLength) ;

/// @brief Method Truncate addr 0xf21ad0 size 0x88 virtual true final false
 ::ArrayW<uint8_t> Truncate(::ArrayW<uint8_t> bs) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::TlsMac);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsMac, "Org.BouncyCastle.Crypto.Tls", "TlsMac");
