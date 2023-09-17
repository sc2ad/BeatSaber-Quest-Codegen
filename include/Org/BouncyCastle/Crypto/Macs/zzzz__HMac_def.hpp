#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Macs {
class HMac;
}
// Type: Org.BouncyCastle.Crypto.Macs::HMac
namespace Org::BouncyCastle::Crypto::Macs {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(943))
// CS Name: Org.BouncyCastle.Crypto.Macs.HMac
class CORDL_TYPE HMac : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IMac
constexpr operator  ::Org::BouncyCastle::Crypto::IMac() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~HMac() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMac", modifiers: " const&", def_value: None }]
constexpr HMac(HMac const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMac", modifiers: "&&", def_value: None }]
constexpr HMac(HMac&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMac(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMac& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMac& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMac& operator=(HMac&& o) noexcept = default;
  constexpr HMac& operator=(HMac const& o) noexcept = default;
                


// Fields

/// @brief Field IPAD offset 0
static constexpr uint8_t  IPAD{54u};

/// @brief Field OPAD offset 0
static constexpr uint8_t  OPAD{92u};

 ::Org::BouncyCastle::Crypto::IDigest __declspec(property(get=__get_digest, put=__set_digest))  digest;

constexpr void __set_digest(::Org::BouncyCastle::Crypto::IDigest value) ;

constexpr ::Org::BouncyCastle::Crypto::IDigest __get_digest() const;

 int32_t __declspec(property(get=__get_digestSize, put=__set_digestSize))  digestSize;

constexpr void __set_digestSize(int32_t value) ;

constexpr int32_t __get_digestSize() const;

 int32_t __declspec(property(get=__get_blockLength, put=__set_blockLength))  blockLength;

constexpr void __set_blockLength(int32_t value) ;

constexpr int32_t __get_blockLength() const;

 ::Org::BouncyCastle::Utilities::IMemoable __declspec(property(get=__get_ipadState, put=__set_ipadState))  ipadState;

constexpr void __set_ipadState(::Org::BouncyCastle::Utilities::IMemoable value) ;

constexpr ::Org::BouncyCastle::Utilities::IMemoable __get_ipadState() const;

 ::Org::BouncyCastle::Utilities::IMemoable __declspec(property(get=__get_opadState, put=__set_opadState))  opadState;

constexpr void __set_opadState(::Org::BouncyCastle::Utilities::IMemoable value) ;

constexpr ::Org::BouncyCastle::Utilities::IMemoable __get_opadState() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_inputPad, put=__set_inputPad))  inputPad;

constexpr void __set_inputPad(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_inputPad() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_outputBuf, put=__set_outputBuf))  outputBuf;

constexpr void __set_outputBuf(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_outputBuf() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters [CppParam { name: "digest", ty: "::Org::BouncyCastle::Crypto::IDigest", modifiers: "", def_value: None }]
explicit HMac(::Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method .ctor addr 0xe81b40 size 0x15c virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method get_AlgorithmName addr 0xe81c9c size 0xc0 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method GetUnderlyingDigest addr 0xe81d5c size 0x8 virtual true final false
 ::Org::BouncyCastle::Crypto::IDigest GetUnderlyingDigest() ;

/// @brief Method Init addr 0xe81d64 size 0x528 virtual true final false
 void Init(::Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method GetMacSize addr 0xe822dc size 0x8 virtual true final false
 int32_t GetMacSize() ;

/// @brief Method Update addr 0xe822e4 size 0xac virtual true final false
 void Update(uint8_t input) ;

/// @brief Method BlockUpdate addr 0xe82390 size 0xc4 virtual true final false
 void BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t len) ;

/// @brief Method DoFinal addr 0xe82454 size 0x4a8 virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe828fc size 0x120 virtual true final false
 void Reset() ;

/// @brief Method XorPad addr 0xe8228c size 0x50 virtual false final false
static void XorPad(::ArrayW<uint8_t> pad, int32_t len, uint8_t n) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Macs
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Macs::HMac);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Macs::HMac, "Org.BouncyCastle.Crypto.Macs", "HMac");
