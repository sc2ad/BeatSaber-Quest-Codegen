#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace Org::BouncyCastle::Crypto::Digests {
class Dstu7564Digest;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Macs {
class Dstu7564Mac;
}
// Type: Org.BouncyCastle.Crypto.Macs::Dstu7564Mac
namespace Org::BouncyCastle::Crypto::Macs {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(939))
// CS Name: Org.BouncyCastle.Crypto.Macs.Dstu7564Mac
class CORDL_TYPE Dstu7564Mac : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IMac
constexpr operator  ::Org::BouncyCastle::Crypto::IMac() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Dstu7564Mac() = default;

// Ctor Parameters [CppParam { name: "", ty: "Dstu7564Mac", modifiers: " const&", def_value: None }]
constexpr Dstu7564Mac(Dstu7564Mac const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Dstu7564Mac", modifiers: "&&", def_value: None }]
constexpr Dstu7564Mac(Dstu7564Mac&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Dstu7564Mac(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Dstu7564Mac& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Dstu7564Mac& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Dstu7564Mac& operator=(Dstu7564Mac&& o) noexcept = default;
  constexpr Dstu7564Mac& operator=(Dstu7564Mac const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest __declspec(property(get=__get_engine, put=__set_engine))  engine;

constexpr void __set_engine(::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest value) ;

constexpr ::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest __get_engine() const;

 int32_t __declspec(property(get=__get_macSize, put=__set_macSize))  macSize;

constexpr void __set_macSize(int32_t value) ;

constexpr int32_t __get_macSize() const;

 uint64_t __declspec(property(get=__get_inputLength, put=__set_inputLength))  inputLength;

constexpr void __set_inputLength(uint64_t value) ;

constexpr uint64_t __get_inputLength() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_paddedKey, put=__set_paddedKey))  paddedKey;

constexpr void __set_paddedKey(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_paddedKey() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_invertedKey, put=__set_invertedKey))  invertedKey;

constexpr void __set_invertedKey(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_invertedKey() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

/// @brief Method get_AlgorithmName addr 0xe7fb60 size 0x40 virtual true final true
 ::StringW get_AlgorithmName() ;

// Ctor Parameters [CppParam { name: "macSizeBits", ty: "int32_t", modifiers: "", def_value: None }]
explicit Dstu7564Mac(int32_t macSizeBits) ;

/// @brief Method .ctor addr 0xe7fba0 size 0x90 virtual false final false
 void _ctor(int32_t macSizeBits) ;

/// @brief Method Init addr 0xe7fc30 size 0x17c virtual true final true
 void Init(::Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method GetMacSize addr 0xe7ff60 size 0x8 virtual true final true
 int32_t GetMacSize() ;

/// @brief Method BlockUpdate addr 0xe7ff68 size 0x118 virtual true final true
 void BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t len) ;

/// @brief Method Update addr 0xe80080 size 0x38 virtual true final true
 void Update(uint8_t input) ;

/// @brief Method DoFinal addr 0xe800b8 size 0x12c virtual true final true
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe802fc size 0x5c virtual true final true
 void Reset() ;

/// @brief Method Pad addr 0xe801e4 size 0x118 virtual false final false
 void Pad() ;

/// @brief Method PadKey addr 0xe7fdac size 0x1b4 virtual false final false
 ::ArrayW<uint8_t> PadKey(::ArrayW<uint8_t> input) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Macs
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac, "Org.BouncyCastle.Crypto.Macs", "Dstu7564Mac");
