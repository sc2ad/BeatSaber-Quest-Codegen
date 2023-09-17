#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto::Operators {
class WrapperProvider;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Operators {
class RsaOaepWrapperProvider;
}
// Type: Org.BouncyCastle.Crypto.Operators::RsaOaepWrapperProvider
namespace Org::BouncyCastle::Crypto::Operators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(989))
// CS Name: Org.BouncyCastle.Crypto.Operators.RsaOaepWrapperProvider
class CORDL_TYPE RsaOaepWrapperProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::Operators::WrapperProvider
constexpr operator  ::Org::BouncyCastle::Crypto::Operators::WrapperProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~RsaOaepWrapperProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "RsaOaepWrapperProvider", modifiers: " const&", def_value: None }]
constexpr RsaOaepWrapperProvider(RsaOaepWrapperProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RsaOaepWrapperProvider", modifiers: "&&", def_value: None }]
constexpr RsaOaepWrapperProvider(RsaOaepWrapperProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RsaOaepWrapperProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RsaOaepWrapperProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RsaOaepWrapperProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RsaOaepWrapperProvider& operator=(RsaOaepWrapperProvider&& o) noexcept = default;
  constexpr RsaOaepWrapperProvider& operator=(RsaOaepWrapperProvider const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_digestOid, put=__set_digestOid))  digestOid;

constexpr void __set_digestOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_digestOid() const;


// Methods

// Ctor Parameters [CppParam { name: "digestOid", ty: "::Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }]
explicit RsaOaepWrapperProvider(::Org::BouncyCastle::Asn1::DerObjectIdentifier digestOid) ;

/// @brief Method .ctor addr 0xe9bf30 size 0x28 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier digestOid) ;

/// @brief Method Org.BouncyCastle.Crypto.Operators.WrapperProvider.CreateWrapper addr 0xe9c648 size 0x7c virtual true final true
 ::bs_hook::Il2CppWrapperType Org_BouncyCastle_Crypto_Operators_WrapperProvider_CreateWrapper(bool forWrapping, ::Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Operators
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider, "Org.BouncyCastle.Crypto.Operators", "RsaOaepWrapperProvider");
