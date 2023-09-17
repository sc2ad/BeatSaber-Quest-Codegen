#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class PbeParametersGenerator;
}
// Type: Org.BouncyCastle.Crypto::PbeParametersGenerator
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(916))
// CS Name: Org.BouncyCastle.Crypto.PbeParametersGenerator
class CORDL_TYPE PbeParametersGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~PbeParametersGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "PbeParametersGenerator", modifiers: " const&", def_value: None }]
constexpr PbeParametersGenerator(PbeParametersGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PbeParametersGenerator", modifiers: "&&", def_value: None }]
constexpr PbeParametersGenerator(PbeParametersGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PbeParametersGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PbeParametersGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PbeParametersGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PbeParametersGenerator& operator=(PbeParametersGenerator&& o) noexcept = default;
  constexpr PbeParametersGenerator& operator=(PbeParametersGenerator const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_mPassword, put=__set_mPassword))  mPassword;

constexpr void __set_mPassword(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mPassword() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mSalt, put=__set_mSalt))  mSalt;

constexpr void __set_mSalt(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mSalt() const;

 int32_t __declspec(property(get=__get_mIterationCount, put=__set_mIterationCount))  mIterationCount;

constexpr void __set_mIterationCount(int32_t value) ;

constexpr int32_t __get_mIterationCount() const;


// Properties

 ::ArrayW<uint8_t> __declspec(property(get=get_Password))  Password;

 ::ArrayW<uint8_t> __declspec(property(get=get_Salt))  Salt;

 int32_t __declspec(property(get=get_IterationCount))  IterationCount;


// Methods

// Ctor Parameters []
explicit PbeParametersGenerator() ;

/// @brief Method .ctor addr 0xe7672c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Init addr 0xe76734 size 0x100 virtual true final false
 void Init(::ArrayW<uint8_t> password, ::ArrayW<uint8_t> salt, int32_t iterationCount) ;

/// @brief Method get_Password addr 0xe76834 size 0x5c virtual true final false
 ::ArrayW<uint8_t> get_Password() ;

/// @brief Method GetPassword addr 0xe76890 size 0xc virtual false final false
 ::ArrayW<uint8_t> GetPassword() ;

/// @brief Method get_Salt addr 0xe7689c size 0x5c virtual true final false
 ::ArrayW<uint8_t> get_Salt() ;

/// @brief Method GetSalt addr 0xe768f8 size 0xc virtual false final false
 ::ArrayW<uint8_t> GetSalt() ;

/// @brief Method get_IterationCount addr 0xe76904 size 0x8 virtual true final false
 int32_t get_IterationCount() ;

/// @brief Method GenerateDerivedParameters addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Org::BouncyCastle::Crypto::ICipherParameters GenerateDerivedParameters(int32_t keySize) ;

/// @brief Method GenerateDerivedParameters addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Org::BouncyCastle::Crypto::ICipherParameters GenerateDerivedParameters(::StringW algorithm, int32_t keySize) ;

/// @brief Method GenerateDerivedParameters addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Org::BouncyCastle::Crypto::ICipherParameters GenerateDerivedParameters(int32_t keySize, int32_t ivSize) ;

/// @brief Method GenerateDerivedParameters addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Org::BouncyCastle::Crypto::ICipherParameters GenerateDerivedParameters(::StringW algorithm, int32_t keySize, int32_t ivSize) ;

/// @brief Method GenerateDerivedMacParameters addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Org::BouncyCastle::Crypto::ICipherParameters GenerateDerivedMacParameters(int32_t keySize) ;

/// @brief Method Pkcs5PasswordToBytes addr 0xe7690c size 0x60 virtual false final false
static ::ArrayW<uint8_t> Pkcs5PasswordToBytes(::ArrayW<char16_t> password) ;

/// @brief Method Pkcs5PasswordToBytes addr 0xe7696c size 0x60 virtual false final false
static ::ArrayW<uint8_t> Pkcs5PasswordToBytes(::StringW password) ;

/// @brief Method Pkcs5PasswordToUtf8Bytes addr 0xe769cc size 0x78 virtual false final false
static ::ArrayW<uint8_t> Pkcs5PasswordToUtf8Bytes(::ArrayW<char16_t> password) ;

/// @brief Method Pkcs5PasswordToUtf8Bytes addr 0xe76a44 size 0x78 virtual false final false
static ::ArrayW<uint8_t> Pkcs5PasswordToUtf8Bytes(::StringW password) ;

/// @brief Method Pkcs12PasswordToBytes addr 0xe76abc size 0x8 virtual false final false
static ::ArrayW<uint8_t> Pkcs12PasswordToBytes(::ArrayW<char16_t> password) ;

/// @brief Method Pkcs12PasswordToBytes addr 0xe76ac4 size 0xbc virtual false final false
static ::ArrayW<uint8_t> Pkcs12PasswordToBytes(::ArrayW<char16_t> password, bool wrongPkcs12Zero) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::PbeParametersGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::PbeParametersGenerator, "Org.BouncyCastle.Crypto", "PbeParametersGenerator");
