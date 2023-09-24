#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::IO {
class SignerSink;
}
// Type: Org.BouncyCastle.Crypto.IO::SignerSink
namespace Org::BouncyCastle::Crypto::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(484))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(932))
// CS Name: Org.BouncyCastle.Crypto.IO.SignerSink
class CORDL_TYPE SignerSink : public Org::BouncyCastle::Utilities::IO::BaseOutputStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~SignerSink() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignerSink", modifiers: " const&", def_value: None }]
constexpr SignerSink(SignerSink const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignerSink", modifiers: "&&", def_value: None }]
constexpr SignerSink(SignerSink&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignerSink(void* ptr) noexcept : Org::BouncyCastle::Utilities::IO::BaseOutputStream(ptr) {
}


  constexpr SignerSink& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignerSink& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignerSink& operator=(SignerSink&& o) noexcept = default;
  constexpr SignerSink& operator=(SignerSink const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::ISigner __declspec(property(get=__get_mSigner, put=__set_mSigner))  mSigner;

constexpr void __set_mSigner(Org::BouncyCastle::Crypto::ISigner value) ;

constexpr Org::BouncyCastle::Crypto::ISigner __get_mSigner() const;


// Properties

 Org::BouncyCastle::Crypto::ISigner __declspec(property(get=get_Signer))  Signer;


// Methods

static Org::BouncyCastle::Crypto::IO::SignerSink New_ctor(Org::BouncyCastle::Crypto::ISigner signer) ;

/// @brief Method .ctor addr 0xe7c8a4 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::ISigner signer) ;

/// @brief Method get_Signer addr 0xe7c8cc size 0x8 virtual true final false
 Org::BouncyCastle::Crypto::ISigner get_Signer() ;

/// @brief Method WriteByte addr 0xe7c8d4 size 0xac virtual true final false
 void WriteByte(uint8_t b) ;

/// @brief Method Write addr 0xe7c980 size 0xdc virtual true final false
 void Write(::ArrayW<uint8_t> buf, int32_t off, int32_t len) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::IO
NEED_NO_BOX(Org::BouncyCastle::Crypto::IO::SignerSink);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::IO::SignerSink, "Org.BouncyCastle.Crypto.IO", "SignerSink");
