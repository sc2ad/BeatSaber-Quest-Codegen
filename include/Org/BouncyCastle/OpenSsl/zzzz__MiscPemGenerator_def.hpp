#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Utilities::IO::Pem {
class PemObjectGenerator;
}
namespace Org::BouncyCastle::Utilities::IO::Pem {
class PemObject;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::OpenSsl {
class MiscPemGenerator;
}
// Type: Org.BouncyCastle.OpenSsl::MiscPemGenerator
namespace Org::BouncyCastle::OpenSsl {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1682))
// CS Name: Org.BouncyCastle.OpenSsl.MiscPemGenerator
class CORDL_TYPE MiscPemGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator
constexpr operator  ::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MiscPemGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "MiscPemGenerator", modifiers: " const&", def_value: None }]
constexpr MiscPemGenerator(MiscPemGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MiscPemGenerator", modifiers: "&&", def_value: None }]
constexpr MiscPemGenerator(MiscPemGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MiscPemGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MiscPemGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MiscPemGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MiscPemGenerator& operator=(MiscPemGenerator&& o) noexcept = default;
  constexpr MiscPemGenerator& operator=(MiscPemGenerator const& o) noexcept = default;
                


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_obj, put=__set_obj))  obj;

constexpr void __set_obj(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_obj() const;

 ::StringW __declspec(property(get=__get_algorithm, put=__set_algorithm))  algorithm;

constexpr void __set_algorithm(::StringW value) ;

constexpr ::StringW __get_algorithm() const;

 ::ArrayW<char16_t> __declspec(property(get=__get_password, put=__set_password))  password;

constexpr void __set_password(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get_password() const;

 ::Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_random, put=__set_random))  random;

constexpr void __set_random(::Org::BouncyCastle::Security::SecureRandom value) ;

constexpr ::Org::BouncyCastle::Security::SecureRandom __get_random() const;


// Methods

// Ctor Parameters [CppParam { name: "obj", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
explicit MiscPemGenerator(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method .ctor addr 0x1043c68 size 0x28 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "obj", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "algorithm", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "password", ty: "::ArrayW<char16_t>", modifiers: "", def_value: None }, CppParam { name: "random", ty: "::Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
explicit MiscPemGenerator(::bs_hook::Il2CppWrapperType obj, ::StringW algorithm, ::ArrayW<char16_t> password, ::Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method .ctor addr 0x1043c90 size 0x40 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType obj, ::StringW algorithm, ::ArrayW<char16_t> password, ::Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method CreatePemObject addr 0x1043cd0 size 0x66c virtual false final false
static ::Org::BouncyCastle::Utilities::IO::Pem::PemObject CreatePemObject(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method CreatePemObject addr 0x1044824 size 0x5c4 virtual false final false
static ::Org::BouncyCastle::Utilities::IO::Pem::PemObject CreatePemObject(::bs_hook::Il2CppWrapperType obj, ::StringW algorithm, ::ArrayW<char16_t> password, ::Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method EncodePrivateKey addr 0x104433c size 0x4e8 virtual false final false
static ::ArrayW<uint8_t> EncodePrivateKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter akp, ByRef<::StringW> keyType) ;

/// @brief Method Generate addr 0x10452e4 size 0xf4 virtual true final true
 ::Org::BouncyCastle::Utilities::IO::Pem::PemObject Generate() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::OpenSsl
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::OpenSsl::MiscPemGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::OpenSsl::MiscPemGenerator, "Org.BouncyCastle.OpenSsl", "MiscPemGenerator");
