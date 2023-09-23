#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Crypto {
class IStreamCalculator;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Crypto::IO {
class SignerSink;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Operators {
class DefaultVerifierCalculator;
}
// Type: Org.BouncyCastle.Crypto.Operators::DefaultVerifierCalculator
namespace Org::BouncyCastle::Crypto::Operators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1001))
// CS Name: Org.BouncyCastle.Crypto.Operators.DefaultVerifierCalculator
class CORDL_TYPE DefaultVerifierCalculator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IStreamCalculator
constexpr operator  Org::BouncyCastle::Crypto::IStreamCalculator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DefaultVerifierCalculator() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultVerifierCalculator", modifiers: " const&", def_value: None }]
constexpr DefaultVerifierCalculator(DefaultVerifierCalculator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultVerifierCalculator", modifiers: "&&", def_value: None }]
constexpr DefaultVerifierCalculator(DefaultVerifierCalculator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultVerifierCalculator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DefaultVerifierCalculator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultVerifierCalculator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultVerifierCalculator& operator=(DefaultVerifierCalculator&& o) noexcept = default;
  constexpr DefaultVerifierCalculator& operator=(DefaultVerifierCalculator const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::IO::SignerSink __declspec(property(get=__get_mSignerSink, put=__set_mSignerSink))  mSignerSink;

constexpr void __set_mSignerSink(Org::BouncyCastle::Crypto::IO::SignerSink value) ;

constexpr Org::BouncyCastle::Crypto::IO::SignerSink __get_mSignerSink() const;


// Properties

 System::IO::Stream __declspec(property(get=get_Stream))  Stream;


// Methods

// Ctor Parameters [CppParam { name: "signer", ty: "Org::BouncyCastle::Crypto::ISigner", modifiers: "", def_value: None }]
explicit DefaultVerifierCalculator(Org::BouncyCastle::Crypto::ISigner signer) ;

/// @brief Method .ctor addr 0xe9fea0 size 0x7c virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::ISigner signer) ;

/// @brief Method get_Stream addr 0xea0d58 size 0x8 virtual true final true
 System::IO::Stream get_Stream() ;

/// @brief Method GetResult addr 0xea0d60 size 0x84 virtual true final true
 ::bs_hook::Il2CppWrapperType GetResult() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Operators
NEED_NO_BOX(Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator, "Org.BouncyCastle.Crypto.Operators", "DefaultVerifierCalculator");
