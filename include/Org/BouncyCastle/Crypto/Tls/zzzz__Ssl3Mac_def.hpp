#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class Ssl3Mac;
}
// Type: Org.BouncyCastle.Crypto.Tls::Ssl3Mac
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1283))
// CS Name: Org.BouncyCastle.Crypto.Tls.Ssl3Mac
class CORDL_TYPE Ssl3Mac : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IMac
constexpr operator  Org::BouncyCastle::Crypto::IMac() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Ssl3Mac() = default;

// Ctor Parameters [CppParam { name: "", ty: "Ssl3Mac", modifiers: " const&", def_value: None }]
constexpr Ssl3Mac(Ssl3Mac const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Ssl3Mac", modifiers: "&&", def_value: None }]
constexpr Ssl3Mac(Ssl3Mac&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Ssl3Mac(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Ssl3Mac& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Ssl3Mac& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Ssl3Mac& operator=(Ssl3Mac&& o) noexcept = default;
  constexpr Ssl3Mac& operator=(Ssl3Mac const& o) noexcept = default;
                


// Fields

/// @brief Field IPAD_BYTE offset 0
static constexpr uint8_t  IPAD_BYTE{54u};

/// @brief Field OPAD_BYTE offset 0
static constexpr uint8_t  OPAD_BYTE{92u};

static ::ArrayW<uint8_t> __declspec(property(get=__get_IPAD, put=__set_IPAD))  IPAD;

static void __set_IPAD(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_IPAD() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_OPAD, put=__set_OPAD))  OPAD;

static void __set_OPAD(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_OPAD() ;

 Org::BouncyCastle::Crypto::IDigest __declspec(property(get=__get_digest, put=__set_digest))  digest;

constexpr void __set_digest(Org::BouncyCastle::Crypto::IDigest value) ;

constexpr Org::BouncyCastle::Crypto::IDigest __get_digest() const;

 int32_t __declspec(property(get=__get_padLength, put=__set_padLength))  padLength;

constexpr void __set_padLength(int32_t value) ;

constexpr int32_t __get_padLength() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_secret, put=__set_secret))  secret;

constexpr void __set_secret(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_secret() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

static Org::BouncyCastle::Crypto::Tls::Ssl3Mac New_ctor(Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method .ctor addr 0xf0abd4 size 0xcc virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method get_AlgorithmName addr 0xf0aca0 size 0xc0 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0xf0ad60 size 0xd8 virtual true final false
 void Init(Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method GetMacSize addr 0xf0ae38 size 0xa4 virtual true final false
 int32_t GetMacSize() ;

/// @brief Method Update addr 0xf0aedc size 0xac virtual true final false
 void Update(uint8_t input) ;

/// @brief Method BlockUpdate addr 0xf0af88 size 0xc4 virtual true final false
 void BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t len) ;

/// @brief Method DoFinal addr 0xf0b04c size 0x37c virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xf0b3c8 size 0x1d4 virtual true final false
 void Reset() ;

/// @brief Method GenPad addr 0xf0b59c size 0x98 virtual false final false
static ::ArrayW<uint8_t> GenPad(uint8_t b, int32_t count) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::Ssl3Mac);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::Ssl3Mac, "Org.BouncyCastle.Crypto.Tls", "Ssl3Mac");
