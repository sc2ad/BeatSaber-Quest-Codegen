#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::IO {
class DigestSink;
}
// Type: Org.BouncyCastle.Crypto.IO::DigestSink
namespace Org::BouncyCastle::Crypto::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(484))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(928))
// CS Name: Org.BouncyCastle.Crypto.IO.DigestSink
class CORDL_TYPE DigestSink : public ::Org::BouncyCastle::Utilities::IO::BaseOutputStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~DigestSink() = default;

// Ctor Parameters [CppParam { name: "", ty: "DigestSink", modifiers: " const&", def_value: None }]
constexpr DigestSink(DigestSink const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DigestSink", modifiers: "&&", def_value: None }]
constexpr DigestSink(DigestSink&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DigestSink(void* ptr) noexcept : ::Org::BouncyCastle::Utilities::IO::BaseOutputStream(ptr) {
}


  constexpr DigestSink& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DigestSink& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DigestSink& operator=(DigestSink&& o) noexcept = default;
  constexpr DigestSink& operator=(DigestSink const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Crypto::IDigest __declspec(property(get=__get_mDigest, put=__set_mDigest))  mDigest;

constexpr void __set_mDigest(::Org::BouncyCastle::Crypto::IDigest value) ;

constexpr ::Org::BouncyCastle::Crypto::IDigest __get_mDigest() const;


// Properties

 ::Org::BouncyCastle::Crypto::IDigest __declspec(property(get=get_Digest))  Digest;


// Methods

// Ctor Parameters [CppParam { name: "digest", ty: "::Org::BouncyCastle::Crypto::IDigest", modifiers: "", def_value: None }]
explicit DigestSink(::Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method .ctor addr 0xe7b9dc size 0x28 virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method get_Digest addr 0xe7ba04 size 0x8 virtual true final false
 ::Org::BouncyCastle::Crypto::IDigest get_Digest() ;

/// @brief Method WriteByte addr 0xe7ba0c size 0xac virtual true final false
 void WriteByte(uint8_t b) ;

/// @brief Method Write addr 0xe7bab8 size 0xdc virtual true final false
 void Write(::ArrayW<uint8_t> buf, int32_t off, int32_t len) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::IO
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IO::DigestSink);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IO::DigestSink, "Org.BouncyCastle.Crypto.IO", "DigestSink");
