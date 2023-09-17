#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class AsymmetricCipherKeyPair;
}
// Type: Org.BouncyCastle.Crypto::AsymmetricCipherKeyPair
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1340))
// CS Name: Org.BouncyCastle.Crypto.AsymmetricCipherKeyPair
class CORDL_TYPE AsymmetricCipherKeyPair : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AsymmetricCipherKeyPair() = default;

// Ctor Parameters [CppParam { name: "", ty: "AsymmetricCipherKeyPair", modifiers: " const&", def_value: None }]
constexpr AsymmetricCipherKeyPair(AsymmetricCipherKeyPair const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AsymmetricCipherKeyPair", modifiers: "&&", def_value: None }]
constexpr AsymmetricCipherKeyPair(AsymmetricCipherKeyPair&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AsymmetricCipherKeyPair(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AsymmetricCipherKeyPair& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AsymmetricCipherKeyPair& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AsymmetricCipherKeyPair& operator=(AsymmetricCipherKeyPair&& o) noexcept = default;
  constexpr AsymmetricCipherKeyPair& operator=(AsymmetricCipherKeyPair const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter __declspec(property(get=__get_publicParameter, put=__set_publicParameter))  publicParameter;

constexpr void __set_publicParameter(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter value) ;

constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter __get_publicParameter() const;

 ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter __declspec(property(get=__get_privateParameter, put=__set_privateParameter))  privateParameter;

constexpr void __set_privateParameter(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter value) ;

constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter __get_privateParameter() const;


// Properties

 ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter __declspec(property(get=get_Public))  Public;

 ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter __declspec(property(get=get_Private))  Private;


// Methods

// Ctor Parameters [CppParam { name: "publicParameter", ty: "::Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }, CppParam { name: "privateParameter", ty: "::Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }]
explicit AsymmetricCipherKeyPair(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicParameter, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateParameter) ;

/// @brief Method .ctor addr 0xf359c4 size 0xdc virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicParameter, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateParameter) ;

/// @brief Method get_Public addr 0xf35aa0 size 0x8 virtual false final false
 ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter get_Public() ;

/// @brief Method get_Private addr 0xf35aa8 size 0x8 virtual false final false
 ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter get_Private() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair, "Org.BouncyCastle.Crypto", "AsymmetricCipherKeyPair");
