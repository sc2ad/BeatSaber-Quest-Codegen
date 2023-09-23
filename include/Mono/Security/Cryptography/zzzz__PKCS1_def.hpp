#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Security::Cryptography {
class HashAlgorithm;
}
namespace System::Security::Cryptography {
class RSA;
}
// Forward declare root types
namespace Mono::Security::Cryptography {
class PKCS1;
}
// Type: Mono.Security.Cryptography::PKCS1
namespace Mono::Security::Cryptography {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14005))
// CS Name: Mono.Security.Cryptography.PKCS1
class CORDL_TYPE PKCS1 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PKCS1() = default;

// Ctor Parameters [CppParam { name: "", ty: "PKCS1", modifiers: " const&", def_value: None }]
constexpr PKCS1(PKCS1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PKCS1", modifiers: "&&", def_value: None }]
constexpr PKCS1(PKCS1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PKCS1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PKCS1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PKCS1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PKCS1& operator=(PKCS1&& o) noexcept = default;
  constexpr PKCS1& operator=(PKCS1 const& o) noexcept = default;
                


// Fields

static ::ArrayW<uint8_t> __declspec(property(get=__get_emptySHA1, put=__set_emptySHA1))  emptySHA1;

static void __set_emptySHA1(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_emptySHA1() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_emptySHA256, put=__set_emptySHA256))  emptySHA256;

static void __set_emptySHA256(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_emptySHA256() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_emptySHA384, put=__set_emptySHA384))  emptySHA384;

static void __set_emptySHA384(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_emptySHA384() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_emptySHA512, put=__set_emptySHA512))  emptySHA512;

static void __set_emptySHA512(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_emptySHA512() ;


// Methods

/// @brief Method Compare addr 0x229865c size 0x74 virtual false final false
static bool Compare(::ArrayW<uint8_t> array1, ::ArrayW<uint8_t> array2) ;

/// @brief Method I2OSP addr 0x22986d0 size 0x8c virtual false final false
static ::ArrayW<uint8_t> I2OSP(::ArrayW<uint8_t> x, int32_t size) ;

/// @brief Method OS2IP addr 0x229875c size 0xbc virtual false final false
static ::ArrayW<uint8_t> OS2IP(::ArrayW<uint8_t> x) ;

/// @brief Method RSAVP1 addr 0x2298818 size 0x1c virtual false final false
static ::ArrayW<uint8_t> RSAVP1(System::Security::Cryptography::RSA rsa, ::ArrayW<uint8_t> s) ;

/// @brief Method Verify_v15 addr 0x2298834 size 0x1e0 virtual false final false
static bool Verify_v15(System::Security::Cryptography::RSA rsa, System::Security::Cryptography::HashAlgorithm hash, ::ArrayW<uint8_t> hashValue, ::ArrayW<uint8_t> signature, bool tryNonStandardEncoding) ;

/// @brief Method Encode_v15 addr 0x2298a14 size 0x348 virtual false final false
static ::ArrayW<uint8_t> Encode_v15(System::Security::Cryptography::HashAlgorithm hash, ::ArrayW<uint8_t> hashValue, int32_t emLength) ;

/// @brief Method HashNameFromOid addr 0x2298d5c size 0x394 virtual false final false
static ::StringW HashNameFromOid(::StringW oid, bool throwOnError) ;

/// @brief Method CreateFromOid addr 0x229916c size 0x5c virtual false final false
static System::Security::Cryptography::HashAlgorithm CreateFromOid(::StringW oid) ;

/// @brief Method CreateFromName addr 0x22991c8 size 0x40c virtual false final false
static System::Security::Cryptography::HashAlgorithm CreateFromName(::StringW name) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::Cryptography
NEED_NO_BOX(Mono::Security::Cryptography::PKCS1);
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Cryptography::PKCS1, "Mono.Security.Cryptography", "PKCS1");
