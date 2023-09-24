#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Security::Cryptography {
class RSA;
}
// Forward declare root types
namespace Mono::Security::Authenticode {
class PrivateKey;
}
// Type: Mono.Security.Authenticode::PrivateKey
namespace Mono::Security::Authenticode {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14014))
// CS Name: Mono.Security.Authenticode.PrivateKey
class CORDL_TYPE PrivateKey : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~PrivateKey() = default;

// Ctor Parameters [CppParam { name: "", ty: "PrivateKey", modifiers: " const&", def_value: None }]
constexpr PrivateKey(PrivateKey const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PrivateKey", modifiers: "&&", def_value: None }]
constexpr PrivateKey(PrivateKey&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PrivateKey(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PrivateKey& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PrivateKey& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PrivateKey& operator=(PrivateKey&& o) noexcept = default;
  constexpr PrivateKey& operator=(PrivateKey const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_encrypted, put=__set_encrypted))  encrypted;

constexpr void __set_encrypted(bool value) ;

constexpr bool __get_encrypted() const;

 System::Security::Cryptography::RSA __declspec(property(get=__get_rsa, put=__set_rsa))  rsa;

constexpr void __set_rsa(System::Security::Cryptography::RSA value) ;

constexpr System::Security::Cryptography::RSA __get_rsa() const;

 bool __declspec(property(get=__get_weak, put=__set_weak))  weak;

constexpr void __set_weak(bool value) ;

constexpr bool __get_weak() const;

 int32_t __declspec(property(get=__get_keyType, put=__set_keyType))  keyType;

constexpr void __set_keyType(int32_t value) ;

constexpr int32_t __get_keyType() const;


// Properties

 System::Security::Cryptography::RSA __declspec(property(get=get_RSA))  RSA;


// Methods

static Mono::Security::Authenticode::PrivateKey New_ctor(::ArrayW<uint8_t> data, ::StringW password) ;

/// @brief Method .ctor addr 0x229f268 size 0xe4 virtual false final false
 void _ctor(::ArrayW<uint8_t> data, ::StringW password) ;

/// @brief Method get_RSA addr 0x229f79c size 0x8 virtual false final false
 System::Security::Cryptography::RSA get_RSA() ;

/// @brief Method DeriveKey addr 0x229f7a4 size 0x118 virtual false final false
 ::ArrayW<uint8_t> DeriveKey(::ArrayW<uint8_t> salt, ::StringW password) ;

/// @brief Method Decode addr 0x229f34c size 0x450 virtual false final false
 bool Decode(::ArrayW<uint8_t> pvk, ::StringW password) ;

/// @brief Method CreateFromFile addr 0x229f8bc size 0x8 virtual false final false
static Mono::Security::Authenticode::PrivateKey CreateFromFile(::StringW filename) ;

/// @brief Method CreateFromFile addr 0x229f8c4 size 0x2bc virtual false final false
static Mono::Security::Authenticode::PrivateKey CreateFromFile(::StringW filename, ::StringW password) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::Authenticode
NEED_NO_BOX(Mono::Security::Authenticode::PrivateKey);
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Authenticode::PrivateKey, "Mono.Security.Authenticode", "PrivateKey");
