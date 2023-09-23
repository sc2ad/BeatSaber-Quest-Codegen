#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class IVerifierFactory;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Crypto {
class IVerifierFactoryProvider;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Operators {
class Asn1VerifierFactoryProvider;
}
// Type: Org.BouncyCastle.Crypto.Operators::Asn1VerifierFactoryProvider
namespace Org::BouncyCastle::Crypto::Operators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(996))
// CS Name: Org.BouncyCastle.Crypto.Operators.Asn1VerifierFactoryProvider
class CORDL_TYPE Asn1VerifierFactoryProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IVerifierFactoryProvider
constexpr operator  Org::BouncyCastle::Crypto::IVerifierFactoryProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Asn1VerifierFactoryProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "Asn1VerifierFactoryProvider", modifiers: " const&", def_value: None }]
constexpr Asn1VerifierFactoryProvider(Asn1VerifierFactoryProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Asn1VerifierFactoryProvider", modifiers: "&&", def_value: None }]
constexpr Asn1VerifierFactoryProvider(Asn1VerifierFactoryProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Asn1VerifierFactoryProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Asn1VerifierFactoryProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Asn1VerifierFactoryProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Asn1VerifierFactoryProvider& operator=(Asn1VerifierFactoryProvider&& o) noexcept = default;
  constexpr Asn1VerifierFactoryProvider& operator=(Asn1VerifierFactoryProvider const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::AsymmetricKeyParameter __declspec(property(get=__get_publicKey, put=__set_publicKey))  publicKey;

constexpr void __set_publicKey(Org::BouncyCastle::Crypto::AsymmetricKeyParameter value) ;

constexpr Org::BouncyCastle::Crypto::AsymmetricKeyParameter __get_publicKey() const;


// Properties

 System::Collections::IEnumerable __declspec(property(get=get_SignatureAlgNames))  SignatureAlgNames;


// Methods

// Ctor Parameters [CppParam { name: "publicKey", ty: "Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }]
explicit Asn1VerifierFactoryProvider(Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey) ;

/// @brief Method .ctor addr 0xe9ff1c size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey) ;

/// @brief Method CreateVerifierFactory addr 0xe9ff44 size 0xc4 virtual true final true
 Org::BouncyCastle::Crypto::IVerifierFactory CreateVerifierFactory(::bs_hook::Il2CppWrapperType algorithmDetails) ;

/// @brief Method get_SignatureAlgNames addr 0xea0008 size 0x4c virtual false final false
 System::Collections::IEnumerable get_SignatureAlgNames() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Operators
NEED_NO_BOX(Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider, "Org.BouncyCastle.Crypto.Operators", "Asn1VerifierFactoryProvider");
