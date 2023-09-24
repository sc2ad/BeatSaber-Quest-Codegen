#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class SignatureAndHashAlgorithm;
}
// Type: Org.BouncyCastle.Crypto.Tls::SignatureAndHashAlgorithm
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1275))
// CS Name: Org.BouncyCastle.Crypto.Tls.SignatureAndHashAlgorithm
class CORDL_TYPE SignatureAndHashAlgorithm : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SignatureAndHashAlgorithm() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignatureAndHashAlgorithm", modifiers: " const&", def_value: None }]
constexpr SignatureAndHashAlgorithm(SignatureAndHashAlgorithm const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignatureAndHashAlgorithm", modifiers: "&&", def_value: None }]
constexpr SignatureAndHashAlgorithm(SignatureAndHashAlgorithm&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignatureAndHashAlgorithm(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SignatureAndHashAlgorithm& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignatureAndHashAlgorithm& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignatureAndHashAlgorithm& operator=(SignatureAndHashAlgorithm&& o) noexcept = default;
  constexpr SignatureAndHashAlgorithm& operator=(SignatureAndHashAlgorithm const& o) noexcept = default;
                


// Fields

 uint8_t __declspec(property(get=__get_mHash, put=__set_mHash))  mHash;

constexpr void __set_mHash(uint8_t value) ;

constexpr uint8_t __get_mHash() const;

 uint8_t __declspec(property(get=__get_mSignature, put=__set_mSignature))  mSignature;

constexpr void __set_mSignature(uint8_t value) ;

constexpr uint8_t __get_mSignature() const;


// Properties

 uint8_t __declspec(property(get=get_Hash))  Hash;

 uint8_t __declspec(property(get=get_Signature))  Signature;


// Methods

static Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm New_ctor(uint8_t hash, uint8_t signature) ;

/// @brief Method .ctor addr 0xf094b8 size 0x164 virtual false final false
 void _ctor(uint8_t hash, uint8_t signature) ;

/// @brief Method get_Hash addr 0xf0961c size 0x8 virtual true final false
 uint8_t get_Hash() ;

/// @brief Method get_Signature addr 0xf09624 size 0x8 virtual true final false
 uint8_t get_Signature() ;

/// @brief Method Equals addr 0xf0962c size 0xd0 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0xf096fc size 0x44 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Encode addr 0xf09740 size 0x9c virtual true final false
 void Encode(System::IO::Stream output) ;

/// @brief Method Parse addr 0xf097dc size 0xac virtual false final false
static Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm Parse(System::IO::Stream input) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm, "Org.BouncyCastle.Crypto.Tls", "SignatureAndHashAlgorithm");
