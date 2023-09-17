#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Utilities::IO::Pem {
class PemObject;
}
namespace Org::BouncyCastle::Utilities::IO::Pem {
class PemObjectGenerator;
}
// Forward declare root types
namespace Org::BouncyCastle::OpenSsl {
class Pkcs8Generator;
}
// Type: Org.BouncyCastle.OpenSsl::Pkcs8Generator
namespace Org::BouncyCastle::OpenSsl {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1692))
// CS Name: Org.BouncyCastle.OpenSsl.Pkcs8Generator
class CORDL_TYPE Pkcs8Generator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator
constexpr operator  ::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Pkcs8Generator() = default;

// Ctor Parameters [CppParam { name: "", ty: "Pkcs8Generator", modifiers: " const&", def_value: None }]
constexpr Pkcs8Generator(Pkcs8Generator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Pkcs8Generator", modifiers: "&&", def_value: None }]
constexpr Pkcs8Generator(Pkcs8Generator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Pkcs8Generator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Pkcs8Generator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Pkcs8Generator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Pkcs8Generator& operator=(Pkcs8Generator&& o) noexcept = default;
  constexpr Pkcs8Generator& operator=(Pkcs8Generator const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_PbeSha1_RC4_128, put=__set_PbeSha1_RC4_128))  PbeSha1_RC4_128;

static void __set_PbeSha1_RC4_128(::StringW value) ;

static ::StringW __get_PbeSha1_RC4_128() ;

static ::StringW __declspec(property(get=__get_PbeSha1_RC4_40, put=__set_PbeSha1_RC4_40))  PbeSha1_RC4_40;

static void __set_PbeSha1_RC4_40(::StringW value) ;

static ::StringW __get_PbeSha1_RC4_40() ;

static ::StringW __declspec(property(get=__get_PbeSha1_3DES, put=__set_PbeSha1_3DES))  PbeSha1_3DES;

static void __set_PbeSha1_3DES(::StringW value) ;

static ::StringW __get_PbeSha1_3DES() ;

static ::StringW __declspec(property(get=__get_PbeSha1_2DES, put=__set_PbeSha1_2DES))  PbeSha1_2DES;

static void __set_PbeSha1_2DES(::StringW value) ;

static ::StringW __get_PbeSha1_2DES() ;

static ::StringW __declspec(property(get=__get_PbeSha1_RC2_128, put=__set_PbeSha1_RC2_128))  PbeSha1_RC2_128;

static void __set_PbeSha1_RC2_128(::StringW value) ;

static ::StringW __get_PbeSha1_RC2_128() ;

static ::StringW __declspec(property(get=__get_PbeSha1_RC2_40, put=__set_PbeSha1_RC2_40))  PbeSha1_RC2_40;

static void __set_PbeSha1_RC2_40(::StringW value) ;

static ::StringW __get_PbeSha1_RC2_40() ;

 ::ArrayW<char16_t> __declspec(property(get=__get_password, put=__set_password))  password;

constexpr void __set_password(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get_password() const;

 ::StringW __declspec(property(get=__get_algorithm, put=__set_algorithm))  algorithm;

constexpr void __set_algorithm(::StringW value) ;

constexpr ::StringW __get_algorithm() const;

 int32_t __declspec(property(get=__get_iterationCount, put=__set_iterationCount))  iterationCount;

constexpr void __set_iterationCount(int32_t value) ;

constexpr int32_t __get_iterationCount() const;

 ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter __declspec(property(get=__get_privKey, put=__set_privKey))  privKey;

constexpr void __set_privKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter value) ;

constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter __get_privKey() const;

 ::Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_random, put=__set_random))  random;

constexpr void __set_random(::Org::BouncyCastle::Security::SecureRandom value) ;

constexpr ::Org::BouncyCastle::Security::SecureRandom __get_random() const;


// Properties

 ::Org::BouncyCastle::Security::SecureRandom __declspec(property(put=set_SecureRandom))  SecureRandom;

 ::ArrayW<char16_t> __declspec(property(put=set_Password))  Password;

 int32_t __declspec(property(put=set_IterationCount))  IterationCount;


// Methods

// Ctor Parameters [CppParam { name: "privKey", ty: "::Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }]
explicit Pkcs8Generator(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter privKey) ;

/// @brief Method .ctor addr 0x1048e0c size 0x28 virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter privKey) ;

// Ctor Parameters [CppParam { name: "privKey", ty: "::Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }, CppParam { name: "algorithm", ty: "::StringW", modifiers: "", def_value: None }]
explicit Pkcs8Generator(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter privKey, ::StringW algorithm) ;

/// @brief Method .ctor addr 0x1048e34 size 0x38 virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter privKey, ::StringW algorithm) ;

/// @brief Method set_SecureRandom addr 0x1048e6c size 0x8 virtual false final false
 void set_SecureRandom(::Org::BouncyCastle::Security::SecureRandom value) ;

/// @brief Method set_Password addr 0x1048e74 size 0x8 virtual false final false
 void set_Password(::ArrayW<char16_t> value) ;

/// @brief Method set_IterationCount addr 0x1048e7c size 0x8 virtual false final false
 void set_IterationCount(int32_t value) ;

/// @brief Method Generate addr 0x1048e84 size 0x270 virtual true final true
 ::Org::BouncyCastle::Utilities::IO::Pem::PemObject Generate() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::OpenSsl
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::OpenSsl::Pkcs8Generator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::OpenSsl::Pkcs8Generator, "Org.BouncyCastle.OpenSsl", "Pkcs8Generator");
