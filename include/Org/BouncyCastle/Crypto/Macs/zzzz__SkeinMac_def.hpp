#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Digests {
class SkeinEngine;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Macs {
class SkeinMac;
}
// Type: Org.BouncyCastle.Crypto.Macs::SkeinMac
namespace Org::BouncyCastle::Crypto::Macs {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(947))
// CS Name: Org.BouncyCastle.Crypto.Macs.SkeinMac
class CORDL_TYPE SkeinMac : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IMac
constexpr operator  Org::BouncyCastle::Crypto::IMac() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SkeinMac() = default;

// Ctor Parameters [CppParam { name: "", ty: "SkeinMac", modifiers: " const&", def_value: None }]
constexpr SkeinMac(SkeinMac const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SkeinMac", modifiers: "&&", def_value: None }]
constexpr SkeinMac(SkeinMac&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SkeinMac(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SkeinMac& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SkeinMac& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SkeinMac& operator=(SkeinMac&& o) noexcept = default;
  constexpr SkeinMac& operator=(SkeinMac const& o) noexcept = default;
                


// Fields

/// @brief Field SKEIN_256 offset 0
static constexpr int32_t  SKEIN_256{256};

/// @brief Field SKEIN_512 offset 0
static constexpr int32_t  SKEIN_512{512};

/// @brief Field SKEIN_1024 offset 0
static constexpr int32_t  SKEIN_1024{1024};

 Org::BouncyCastle::Crypto::Digests::SkeinEngine __declspec(property(get=__get_engine, put=__set_engine))  engine;

constexpr void __set_engine(Org::BouncyCastle::Crypto::Digests::SkeinEngine value) ;

constexpr Org::BouncyCastle::Crypto::Digests::SkeinEngine __get_engine() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters [CppParam { name: "stateSizeBits", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "digestSizeBits", ty: "int32_t", modifiers: "", def_value: None }]
explicit SkeinMac(int32_t stateSizeBits, int32_t digestSizeBits) ;

/// @brief Method .ctor addr 0xe84dc8 size 0x84 virtual false final false
 void _ctor(int32_t stateSizeBits, int32_t digestSizeBits) ;

// Ctor Parameters [CppParam { name: "mac", ty: "Org::BouncyCastle::Crypto::Macs::SkeinMac", modifiers: "", def_value: None }]
explicit SkeinMac(Org::BouncyCastle::Crypto::Macs::SkeinMac mac) ;

/// @brief Method .ctor addr 0xe84e4c size 0x7c virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Macs::SkeinMac mac) ;

/// @brief Method get_AlgorithmName addr 0xe84ec8 size 0x1b4 virtual true final true
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0xe8507c size 0x230 virtual true final true
 void Init(Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method GetMacSize addr 0xe852ac size 0x1c virtual true final true
 int32_t GetMacSize() ;

/// @brief Method Reset addr 0xe852c8 size 0x1c virtual true final true
 void Reset() ;

/// @brief Method Update addr 0xe852e4 size 0x1c virtual true final true
 void Update(uint8_t inByte) ;

/// @brief Method BlockUpdate addr 0xe85300 size 0x1c virtual true final true
 void BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t len) ;

/// @brief Method DoFinal addr 0xe8531c size 0x1c virtual true final true
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Macs
NEED_NO_BOX(Org::BouncyCastle::Crypto::Macs::SkeinMac);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Macs::SkeinMac, "Org.BouncyCastle.Crypto.Macs", "SkeinMac");
