#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SignatureAndHashAlgorithm;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DigitallySigned;
}
// Type: Org.BouncyCastle.Crypto.Tls::DigitallySigned
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1221))
// CS Name: Org.BouncyCastle.Crypto.Tls.DigitallySigned
class CORDL_TYPE DigitallySigned : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DigitallySigned() = default;

// Ctor Parameters [CppParam { name: "", ty: "DigitallySigned", modifiers: " const&", def_value: None }]
constexpr DigitallySigned(DigitallySigned const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DigitallySigned", modifiers: "&&", def_value: None }]
constexpr DigitallySigned(DigitallySigned&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DigitallySigned(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DigitallySigned& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DigitallySigned& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DigitallySigned& operator=(DigitallySigned&& o) noexcept = default;
  constexpr DigitallySigned& operator=(DigitallySigned const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm __declspec(property(get=__get_mAlgorithm, put=__set_mAlgorithm))  mAlgorithm;

constexpr void __set_mAlgorithm(Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm value) ;

constexpr Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm __get_mAlgorithm() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mSignature, put=__set_mSignature))  mSignature;

constexpr void __set_mSignature(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mSignature() const;


// Properties

 Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm __declspec(property(get=get_Algorithm))  Algorithm;

 ::ArrayW<uint8_t> __declspec(property(get=get_Signature))  Signature;


// Methods

// Ctor Parameters [CppParam { name: "algorithm", ty: "Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm", modifiers: "", def_value: None }, CppParam { name: "signature", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit DigitallySigned(Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm algorithm, ::ArrayW<uint8_t> signature) ;

/// @brief Method .ctor addr 0xed9780 size 0x7c virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm algorithm, ::ArrayW<uint8_t> signature) ;

/// @brief Method get_Algorithm addr 0xed97fc size 0x8 virtual true final false
 Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm get_Algorithm() ;

/// @brief Method get_Signature addr 0xed9804 size 0x8 virtual true final false
 ::ArrayW<uint8_t> get_Signature() ;

/// @brief Method Encode addr 0xed980c size 0x7c virtual true final false
 void Encode(System::IO::Stream output) ;

/// @brief Method Parse addr 0xecc4c4 size 0xdc virtual false final false
static Org::BouncyCastle::Crypto::Tls::DigitallySigned Parse(Org::BouncyCastle::Crypto::Tls::TlsContext context, System::IO::Stream input) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::DigitallySigned);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::DigitallySigned, "Org.BouncyCastle.Crypto.Tls", "DigitallySigned");
