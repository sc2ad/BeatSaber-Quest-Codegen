#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class GeneralDigest;
}
// Type: Org.BouncyCastle.Crypto.Digests::GeneralDigest
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(750))
// CS Name: Org.BouncyCastle.Crypto.Digests.GeneralDigest
class CORDL_TYPE GeneralDigest : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IDigest
constexpr operator  ::Org::BouncyCastle::Crypto::IDigest() const noexcept;

/// @brief Convert operator to ::Org::BouncyCastle::Utilities::IMemoable
constexpr operator  ::Org::BouncyCastle::Utilities::IMemoable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GeneralDigest() = default;

// Ctor Parameters [CppParam { name: "", ty: "GeneralDigest", modifiers: " const&", def_value: None }]
constexpr GeneralDigest(GeneralDigest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GeneralDigest", modifiers: "&&", def_value: None }]
constexpr GeneralDigest(GeneralDigest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GeneralDigest(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GeneralDigest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GeneralDigest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GeneralDigest& operator=(GeneralDigest&& o) noexcept = default;
  constexpr GeneralDigest& operator=(GeneralDigest const& o) noexcept = default;
                


// Fields

/// @brief Field BYTE_LENGTH offset 0
static constexpr int32_t  BYTE_LENGTH{64};

 ::ArrayW<uint8_t> __declspec(property(get=__get_xBuf, put=__set_xBuf))  xBuf;

constexpr void __set_xBuf(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_xBuf() const;

 int32_t __declspec(property(get=__get_xBufOff, put=__set_xBufOff))  xBufOff;

constexpr void __set_xBufOff(int32_t value) ;

constexpr int32_t __get_xBufOff() const;

 int64_t __declspec(property(get=__get_byteCount, put=__set_byteCount))  byteCount;

constexpr void __set_byteCount(int64_t value) ;

constexpr int64_t __get_byteCount() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters []
explicit GeneralDigest() ;

/// @brief Method .ctor addr 0x119637c size 0x5c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "t", ty: "::Org::BouncyCastle::Crypto::Digests::GeneralDigest", modifiers: "", def_value: None }]
explicit GeneralDigest(::Org::BouncyCastle::Crypto::Digests::GeneralDigest t) ;

/// @brief Method .ctor addr 0x11963d8 size 0x78 virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::Digests::GeneralDigest t) ;

/// @brief Method CopyIn addr 0x1196450 size 0x54 virtual false final false
 void CopyIn(::Org::BouncyCastle::Crypto::Digests::GeneralDigest t) ;

/// @brief Method Update addr 0x11964a4 size 0x80 virtual true final true
 void Update(uint8_t input) ;

/// @brief Method BlockUpdate addr 0x1196524 size 0x1c0 virtual true final true
 void BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) ;

/// @brief Method Finish addr 0x11966e4 size 0x64 virtual false final false
 void Finish() ;

/// @brief Method Reset addr 0x1196748 size 0x30 virtual true final false
 void Reset() ;

/// @brief Method GetByteLength addr 0x1196778 size 0x8 virtual true final true
 int32_t GetByteLength() ;

/// @brief Method ProcessWord addr 0x0 size 0xffffffffffffffff virtual true final false
 void ProcessWord(::ArrayW<uint8_t> input, int32_t inOff) ;

/// @brief Method ProcessLength addr 0x0 size 0xffffffffffffffff virtual true final false
 void ProcessLength(int64_t bitLength) ;

/// @brief Method ProcessBlock addr 0x0 size 0xffffffffffffffff virtual true final false
 void ProcessBlock() ;

/// @brief Method get_AlgorithmName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method GetDigestSize addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetDigestSize() ;

/// @brief Method DoFinal addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Org::BouncyCastle::Utilities::IMemoable Copy() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final false
 void Reset(::Org::BouncyCastle::Utilities::IMemoable t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Digests
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::GeneralDigest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::GeneralDigest, "Org.BouncyCastle.Crypto.Digests", "GeneralDigest");
