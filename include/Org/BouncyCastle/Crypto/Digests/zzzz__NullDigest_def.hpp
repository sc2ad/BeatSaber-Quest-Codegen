#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::IO {
class MemoryStream;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class NullDigest;
}
// Type: Org.BouncyCastle.Crypto.Digests::NullDigest
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(761))
// CS Name: Org.BouncyCastle.Crypto.Digests.NullDigest
class CORDL_TYPE NullDigest : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IDigest
constexpr operator  ::Org::BouncyCastle::Crypto::IDigest() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~NullDigest() = default;

// Ctor Parameters [CppParam { name: "", ty: "NullDigest", modifiers: " const&", def_value: None }]
constexpr NullDigest(NullDigest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NullDigest", modifiers: "&&", def_value: None }]
constexpr NullDigest(NullDigest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NullDigest(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NullDigest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NullDigest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NullDigest& operator=(NullDigest&& o) noexcept = default;
  constexpr NullDigest& operator=(NullDigest const& o) noexcept = default;
                


// Fields

 ::System::IO::MemoryStream __declspec(property(get=__get_bOut, put=__set_bOut))  bOut;

constexpr void __set_bOut(::System::IO::MemoryStream value) ;

constexpr ::System::IO::MemoryStream __get_bOut() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

/// @brief Method get_AlgorithmName addr 0x119ebb8 size 0x40 virtual true final true
 ::StringW get_AlgorithmName() ;

/// @brief Method GetByteLength addr 0x119ebf8 size 0x8 virtual true final true
 int32_t GetByteLength() ;

/// @brief Method GetDigestSize addr 0x119ec00 size 0x24 virtual true final true
 int32_t GetDigestSize() ;

/// @brief Method Update addr 0x119ec24 size 0x24 virtual true final true
 void Update(uint8_t b) ;

/// @brief Method BlockUpdate addr 0x119ec48 size 0x24 virtual true final true
 void BlockUpdate(::ArrayW<uint8_t> inBytes, int32_t inOff, int32_t len) ;

/// @brief Method DoFinal addr 0x119ec6c size 0xc4 virtual true final true
 int32_t DoFinal(::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method Reset addr 0x119ed30 size 0x28 virtual true final true
 void Reset() ;

// Ctor Parameters []
explicit NullDigest() ;

/// @brief Method .ctor addr 0x119ed58 size 0x68 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Digests
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::NullDigest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::NullDigest, "Org.BouncyCastle.Crypto.Digests", "NullDigest");
