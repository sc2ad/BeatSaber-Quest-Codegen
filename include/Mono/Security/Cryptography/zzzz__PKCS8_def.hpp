#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
namespace System::Security::Cryptography {
class RSA;
}
namespace System::Security::Cryptography {
struct DSAParameters;
}
namespace System::Security::Cryptography {
class DSA;
}
namespace System::Collections {
class ArrayList;
}
// Forward declare root types
namespace Mono::Security::Cryptography {
class Mono__Security__Cryptography__PKCS8__EncryptedPrivateKeyInfo;
}
namespace Mono::Security::Cryptography {
class Mono__Security__Cryptography__PKCS8__PrivateKeyInfo;
}
namespace Mono::Security::Cryptography {
class PKCS8;
}
// Type: ::PrivateKeyInfo
namespace Mono::Security::Cryptography {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14006))
// CS Name: Mono.Security.Cryptography.PKCS8::PrivateKeyInfo
class CORDL_TYPE Mono__Security__Cryptography__PKCS8__PrivateKeyInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Mono__Security__Cryptography__PKCS8__PrivateKeyInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Security__Cryptography__PKCS8__PrivateKeyInfo", modifiers: " const&", def_value: None }]
constexpr Mono__Security__Cryptography__PKCS8__PrivateKeyInfo(Mono__Security__Cryptography__PKCS8__PrivateKeyInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Security__Cryptography__PKCS8__PrivateKeyInfo", modifiers: "&&", def_value: None }]
constexpr Mono__Security__Cryptography__PKCS8__PrivateKeyInfo(Mono__Security__Cryptography__PKCS8__PrivateKeyInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Security__Cryptography__PKCS8__PrivateKeyInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Mono__Security__Cryptography__PKCS8__PrivateKeyInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Security__Cryptography__PKCS8__PrivateKeyInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Security__Cryptography__PKCS8__PrivateKeyInfo& operator=(Mono__Security__Cryptography__PKCS8__PrivateKeyInfo&& o) noexcept = default;
  constexpr Mono__Security__Cryptography__PKCS8__PrivateKeyInfo& operator=(Mono__Security__Cryptography__PKCS8__PrivateKeyInfo const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__version, put=__set__version))  _version;

constexpr void __set__version(int32_t value) ;

constexpr int32_t __get__version() const;

 ::StringW __declspec(property(get=__get__algorithm, put=__set__algorithm))  _algorithm;

constexpr void __set__algorithm(::StringW value) ;

constexpr ::StringW __get__algorithm() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__key, put=__set__key))  _key;

constexpr void __set__key(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__key() const;

 System::Collections::ArrayList __declspec(property(get=__get__list, put=__set__list))  _list;

constexpr void __set__list(System::Collections::ArrayList value) ;

constexpr System::Collections::ArrayList __get__list() const;


// Properties

 ::StringW __declspec(property(get=get_Algorithm))  Algorithm;

 ::ArrayW<uint8_t> __declspec(property(get=get_PrivateKey))  PrivateKey;


// Methods

// Ctor Parameters []
explicit Mono__Security__Cryptography__PKCS8__PrivateKeyInfo() ;

/// @brief Method .ctor addr 0x2299724 size 0x70 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit Mono__Security__Cryptography__PKCS8__PrivateKeyInfo(::ArrayW<uint8_t> data) ;

/// @brief Method .ctor addr 0x2299794 size 0x28 virtual false final false
 void _ctor(::ArrayW<uint8_t> data) ;

/// @brief Method get_Algorithm addr 0x2299a24 size 0x8 virtual false final false
 ::StringW get_Algorithm() ;

/// @brief Method get_PrivateKey addr 0x2299a2c size 0x74 virtual false final false
 ::ArrayW<uint8_t> get_PrivateKey() ;

/// @brief Method Decode addr 0x22997bc size 0x268 virtual false final false
 void Decode(::ArrayW<uint8_t> data) ;

/// @brief Method RemoveLeadingZero addr 0x2299aa0 size 0x9c virtual false final false
static ::ArrayW<uint8_t> RemoveLeadingZero(::ArrayW<uint8_t> bigInt) ;

/// @brief Method Normalize addr 0x2299b3c size 0xa0 virtual false final false
static ::ArrayW<uint8_t> Normalize(::ArrayW<uint8_t> bigInt, int32_t length) ;

/// @brief Method DecodeRSA addr 0x2299bdc size 0x3d0 virtual false final false
static System::Security::Cryptography::RSA DecodeRSA(::ArrayW<uint8_t> keypair) ;

/// @brief Method Encode addr 0x2299fac size 0x1fc virtual false final false
static ::ArrayW<uint8_t> Encode(System::Security::Cryptography::RSA rsa) ;

/// @brief Method DecodeDSA addr 0x229a1a8 size 0x12c virtual false final false
static System::Security::Cryptography::DSA DecodeDSA(::ArrayW<uint8_t> privateKey, System::Security::Cryptography::DSAParameters dsaParameters) ;

/// @brief Method Encode addr 0x229a2d4 size 0x4c virtual false final false
static ::ArrayW<uint8_t> Encode(System::Security::Cryptography::DSA dsa) ;

/// @brief Method Encode addr 0x229a320 size 0x128 virtual false final false
static ::ArrayW<uint8_t> Encode(System::Security::Cryptography::AsymmetricAlgorithm aa) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::Cryptography
// Type: ::EncryptedPrivateKeyInfo
namespace Mono::Security::Cryptography {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14007))
// CS Name: Mono.Security.Cryptography.PKCS8::EncryptedPrivateKeyInfo
class CORDL_TYPE Mono__Security__Cryptography__PKCS8__EncryptedPrivateKeyInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Mono__Security__Cryptography__PKCS8__EncryptedPrivateKeyInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Security__Cryptography__PKCS8__EncryptedPrivateKeyInfo", modifiers: " const&", def_value: None }]
constexpr Mono__Security__Cryptography__PKCS8__EncryptedPrivateKeyInfo(Mono__Security__Cryptography__PKCS8__EncryptedPrivateKeyInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Security__Cryptography__PKCS8__EncryptedPrivateKeyInfo", modifiers: "&&", def_value: None }]
constexpr Mono__Security__Cryptography__PKCS8__EncryptedPrivateKeyInfo(Mono__Security__Cryptography__PKCS8__EncryptedPrivateKeyInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Security__Cryptography__PKCS8__EncryptedPrivateKeyInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Mono__Security__Cryptography__PKCS8__EncryptedPrivateKeyInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Security__Cryptography__PKCS8__EncryptedPrivateKeyInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Security__Cryptography__PKCS8__EncryptedPrivateKeyInfo& operator=(Mono__Security__Cryptography__PKCS8__EncryptedPrivateKeyInfo&& o) noexcept = default;
  constexpr Mono__Security__Cryptography__PKCS8__EncryptedPrivateKeyInfo& operator=(Mono__Security__Cryptography__PKCS8__EncryptedPrivateKeyInfo const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__algorithm, put=__set__algorithm))  _algorithm;

constexpr void __set__algorithm(::StringW value) ;

constexpr ::StringW __get__algorithm() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__salt, put=__set__salt))  _salt;

constexpr void __set__salt(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__salt() const;

 int32_t __declspec(property(get=__get__iterations, put=__set__iterations))  _iterations;

constexpr void __set__iterations(int32_t value) ;

constexpr int32_t __get__iterations() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__data, put=__set__data))  _data;

constexpr void __set__data(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__data() const;


// Properties

 ::StringW __declspec(property(get=get_Algorithm))  Algorithm;

 ::ArrayW<uint8_t> __declspec(property(get=get_EncryptedData))  EncryptedData;

 ::ArrayW<uint8_t> __declspec(property(get=get_Salt))  Salt;

 int32_t __declspec(property(get=get_IterationCount))  IterationCount;


// Methods

// Ctor Parameters []
explicit Mono__Security__Cryptography__PKCS8__EncryptedPrivateKeyInfo() ;

/// @brief Method .ctor addr 0x229a448 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit Mono__Security__Cryptography__PKCS8__EncryptedPrivateKeyInfo(::ArrayW<uint8_t> data) ;

/// @brief Method .ctor addr 0x229a450 size 0x2c virtual false final false
 void _ctor(::ArrayW<uint8_t> data) ;

/// @brief Method get_Algorithm addr 0x229a744 size 0x8 virtual false final false
 ::StringW get_Algorithm() ;

/// @brief Method get_EncryptedData addr 0x229a74c size 0x74 virtual false final false
 ::ArrayW<uint8_t> get_EncryptedData() ;

/// @brief Method get_Salt addr 0x229a7c0 size 0xb4 virtual false final false
 ::ArrayW<uint8_t> get_Salt() ;

/// @brief Method get_IterationCount addr 0x229a874 size 0x8 virtual false final false
 int32_t get_IterationCount() ;

/// @brief Method Decode addr 0x229a47c size 0x2c8 virtual false final false
 void Decode(::ArrayW<uint8_t> data) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::Cryptography
// Type: Mono.Security.Cryptography::PKCS8
namespace Mono::Security::Cryptography {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14008))
// CS Name: Mono.Security.Cryptography.PKCS8
class CORDL_TYPE PKCS8 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using EncryptedPrivateKeyInfo = Mono::Security::Cryptography::Mono__Security__Cryptography__PKCS8__EncryptedPrivateKeyInfo;

using PrivateKeyInfo = Mono::Security::Cryptography::Mono__Security__Cryptography__PKCS8__PrivateKeyInfo;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PKCS8() = default;

// Ctor Parameters [CppParam { name: "", ty: "PKCS8", modifiers: " const&", def_value: None }]
constexpr PKCS8(PKCS8 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PKCS8", modifiers: "&&", def_value: None }]
constexpr PKCS8(PKCS8&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PKCS8(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PKCS8& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PKCS8& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PKCS8& operator=(PKCS8&& o) noexcept = default;
  constexpr PKCS8& operator=(PKCS8 const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::Cryptography
NEED_NO_BOX(Mono::Security::Cryptography::Mono__Security__Cryptography__PKCS8__EncryptedPrivateKeyInfo);
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Cryptography::Mono__Security__Cryptography__PKCS8__EncryptedPrivateKeyInfo, "Mono.Security.Cryptography", "PKCS8/EncryptedPrivateKeyInfo");
NEED_NO_BOX(Mono::Security::Cryptography::Mono__Security__Cryptography__PKCS8__PrivateKeyInfo);
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Cryptography::Mono__Security__Cryptography__PKCS8__PrivateKeyInfo, "Mono.Security.Cryptography", "PKCS8/PrivateKeyInfo");
NEED_NO_BOX(Mono::Security::Cryptography::PKCS8);
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Cryptography::PKCS8, "Mono.Security.Cryptography", "PKCS8");
