#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectPublicKeyInfo;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class SubjectPublicKeyInfoFactory;
}
// Type: Org.BouncyCastle.X509::SubjectPublicKeyInfoFactory
namespace Org::BouncyCastle::X509 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1857))
// CS Name: Org.BouncyCastle.X509.SubjectPublicKeyInfoFactory
class CORDL_TYPE SubjectPublicKeyInfoFactory : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SubjectPublicKeyInfoFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "SubjectPublicKeyInfoFactory", modifiers: " const&", def_value: None }]
constexpr SubjectPublicKeyInfoFactory(SubjectPublicKeyInfoFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SubjectPublicKeyInfoFactory", modifiers: "&&", def_value: None }]
constexpr SubjectPublicKeyInfoFactory(SubjectPublicKeyInfoFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SubjectPublicKeyInfoFactory(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SubjectPublicKeyInfoFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SubjectPublicKeyInfoFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SubjectPublicKeyInfoFactory& operator=(SubjectPublicKeyInfoFactory&& o) noexcept = default;
  constexpr SubjectPublicKeyInfoFactory& operator=(SubjectPublicKeyInfoFactory const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit SubjectPublicKeyInfoFactory() ;

/// @brief Method .ctor addr 0x10eb028 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method CreateSubjectPublicKeyInfo addr 0x10eb030 size 0xdbc virtual false final false
static Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo CreateSubjectPublicKeyInfo(Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey) ;

/// @brief Method ExtractBytes addr 0x10ebef8 size 0xc0 virtual false final false
static void ExtractBytes(::ArrayW<uint8_t> encKey, int32_t offset, Org::BouncyCastle::Math::BigInteger bI) ;

/// @brief Method ExtractBytes addr 0x10ebdec size 0x10c virtual false final false
static void ExtractBytes(::ArrayW<uint8_t> encKey, int32_t size, int32_t offSet, Org::BouncyCastle::Math::BigInteger bI) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::X509
NEED_NO_BOX(Org::BouncyCastle::X509::SubjectPublicKeyInfoFactory);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::X509::SubjectPublicKeyInfoFactory, "Org.BouncyCastle.X509", "SubjectPublicKeyInfoFactory");
