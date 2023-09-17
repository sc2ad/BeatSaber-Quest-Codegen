#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class IBlockResult;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Operators {
class DefaultSignatureResult;
}
// Type: Org.BouncyCastle.Crypto.Operators::DefaultSignatureResult
namespace Org::BouncyCastle::Crypto::Operators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1000))
// CS Name: Org.BouncyCastle.Crypto.Operators.DefaultSignatureResult
class CORDL_TYPE DefaultSignatureResult : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IBlockResult
constexpr operator  ::Org::BouncyCastle::Crypto::IBlockResult() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DefaultSignatureResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultSignatureResult", modifiers: " const&", def_value: None }]
constexpr DefaultSignatureResult(DefaultSignatureResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultSignatureResult", modifiers: "&&", def_value: None }]
constexpr DefaultSignatureResult(DefaultSignatureResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultSignatureResult(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DefaultSignatureResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultSignatureResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultSignatureResult& operator=(DefaultSignatureResult&& o) noexcept = default;
  constexpr DefaultSignatureResult& operator=(DefaultSignatureResult const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Crypto::ISigner __declspec(property(get=__get_mSigner, put=__set_mSigner))  mSigner;

constexpr void __set_mSigner(::Org::BouncyCastle::Crypto::ISigner value) ;

constexpr ::Org::BouncyCastle::Crypto::ISigner __get_mSigner() const;


// Methods

// Ctor Parameters [CppParam { name: "signer", ty: "::Org::BouncyCastle::Crypto::ISigner", modifiers: "", def_value: None }]
explicit DefaultSignatureResult(::Org::BouncyCastle::Crypto::ISigner signer) ;

/// @brief Method .ctor addr 0xea0c4c size 0x28 virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::ISigner signer) ;

/// @brief Method Collect addr 0xea0c74 size 0xa4 virtual true final true
 ::ArrayW<uint8_t> Collect() ;

/// @brief Method Collect addr 0xea0d18 size 0x40 virtual true final true
 int32_t Collect(::ArrayW<uint8_t> sig, int32_t sigOff) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Operators
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult, "Org.BouncyCastle.Crypto.Operators", "DefaultSignatureResult");
