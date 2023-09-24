#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Crypto {
class IVerifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Operators {
class DefaultVerifierResult;
}
// Type: Org.BouncyCastle.Crypto.Operators::DefaultVerifierResult
namespace Org::BouncyCastle::Crypto::Operators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1003))
// CS Name: Org.BouncyCastle.Crypto.Operators.DefaultVerifierResult
class CORDL_TYPE DefaultVerifierResult : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IVerifier
constexpr operator  Org::BouncyCastle::Crypto::IVerifier() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DefaultVerifierResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultVerifierResult", modifiers: " const&", def_value: None }]
constexpr DefaultVerifierResult(DefaultVerifierResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultVerifierResult", modifiers: "&&", def_value: None }]
constexpr DefaultVerifierResult(DefaultVerifierResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultVerifierResult(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DefaultVerifierResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultVerifierResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultVerifierResult& operator=(DefaultVerifierResult&& o) noexcept = default;
  constexpr DefaultVerifierResult& operator=(DefaultVerifierResult const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::ISigner __declspec(property(get=__get_mSigner, put=__set_mSigner))  mSigner;

constexpr void __set_mSigner(Org::BouncyCastle::Crypto::ISigner value) ;

constexpr Org::BouncyCastle::Crypto::ISigner __get_mSigner() const;


// Methods

static Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult New_ctor(Org::BouncyCastle::Crypto::ISigner signer) ;

/// @brief Method .ctor addr 0xea0de4 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::ISigner signer) ;

/// @brief Method IsVerified addr 0xea0e0c size 0xac virtual true final true
 bool IsVerified(::ArrayW<uint8_t> signature) ;

/// @brief Method IsVerified addr 0xea0eb8 size 0x88 virtual true final true
 bool IsVerified(::ArrayW<uint8_t> sig, int32_t sigOff, int32_t sigLen) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Operators
NEED_NO_BOX(Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult, "Org.BouncyCastle.Crypto.Operators", "DefaultVerifierResult");
