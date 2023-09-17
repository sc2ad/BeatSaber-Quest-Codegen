#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__RSA_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Security::Cryptography {
struct RSAParameters;
}
namespace System::Security::Cryptography {
class CspParameters;
}
namespace System::Security::Cryptography {
struct CspProviderFlags;
}
namespace Mono::Security::Cryptography {
class KeyPairPersistence;
}
namespace System {
class EventArgs;
}
namespace Mono::Security::Cryptography {
class RSAManaged;
}
// Forward declare root types
namespace System::Security::Cryptography {
class RSACryptoServiceProvider;
}
// Type: System.Security.Cryptography::RSACryptoServiceProvider
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2952))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2953))
// CS Name: System.Security.Cryptography.RSACryptoServiceProvider
class CORDL_TYPE RSACryptoServiceProvider : public ::System::Security::Cryptography::RSA {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~RSACryptoServiceProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "RSACryptoServiceProvider", modifiers: " const&", def_value: None }]
constexpr RSACryptoServiceProvider(RSACryptoServiceProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RSACryptoServiceProvider", modifiers: "&&", def_value: None }]
constexpr RSACryptoServiceProvider(RSACryptoServiceProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RSACryptoServiceProvider(void* ptr) noexcept : ::System::Security::Cryptography::RSA(ptr) {
}


  constexpr RSACryptoServiceProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RSACryptoServiceProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RSACryptoServiceProvider& operator=(RSACryptoServiceProvider&& o) noexcept = default;
  constexpr RSACryptoServiceProvider& operator=(RSACryptoServiceProvider const& o) noexcept = default;
                


// Fields

static ::System::Security::Cryptography::CspProviderFlags __declspec(property(get=__get_s_UseMachineKeyStore, put=__set_s_UseMachineKeyStore))  s_UseMachineKeyStore;

static void __set_s_UseMachineKeyStore(::System::Security::Cryptography::CspProviderFlags value) ;

static ::System::Security::Cryptography::CspProviderFlags __get_s_UseMachineKeyStore() ;

 ::Mono::Security::Cryptography::KeyPairPersistence __declspec(property(get=__get_store, put=__set_store))  store;

constexpr void __set_store(::Mono::Security::Cryptography::KeyPairPersistence value) ;

constexpr ::Mono::Security::Cryptography::KeyPairPersistence __get_store() const;

 bool __declspec(property(get=__get_persistKey, put=__set_persistKey))  persistKey;

constexpr void __set_persistKey(bool value) ;

constexpr bool __get_persistKey() const;

 bool __declspec(property(get=__get_persisted, put=__set_persisted))  persisted;

constexpr void __set_persisted(bool value) ;

constexpr bool __get_persisted() const;

 bool __declspec(property(get=__get_privateKeyExportable, put=__set_privateKeyExportable))  privateKeyExportable;

constexpr void __set_privateKeyExportable(bool value) ;

constexpr bool __get_privateKeyExportable() const;

 bool __declspec(property(get=__get_m_disposed, put=__set_m_disposed))  m_disposed;

constexpr void __set_m_disposed(bool value) ;

constexpr bool __get_m_disposed() const;

 ::Mono::Security::Cryptography::RSAManaged __declspec(property(get=__get_rsa, put=__set_rsa))  rsa;

constexpr void __set_rsa(::Mono::Security::Cryptography::RSAManaged value) ;

constexpr ::Mono::Security::Cryptography::RSAManaged __get_rsa() const;


// Properties

static bool __declspec(property(get=get_UseMachineKeyStore))  UseMachineKeyStore;

 int32_t __declspec(property(get=get_KeySize))  KeySize;

 bool __declspec(property(get=get_PublicOnly))  PublicOnly;


// Methods

/// @brief Method get_UseMachineKeyStore addr 0x22faee0 size 0x54 virtual false final false
static bool get_UseMachineKeyStore() ;

// Ctor Parameters []
explicit RSACryptoServiceProvider() ;

/// @brief Method .ctor addr 0x22fa4c0 size 0x2c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "parameters", ty: "::System::Security::Cryptography::CspParameters", modifiers: "", def_value: None }]
explicit RSACryptoServiceProvider(::System::Security::Cryptography::CspParameters parameters) ;

/// @brief Method .ctor addr 0x22faf6c size 0xc virtual false final false
 void _ctor(::System::Security::Cryptography::CspParameters parameters) ;

// Ctor Parameters [CppParam { name: "dwKeySize", ty: "int32_t", modifiers: "", def_value: None }]
explicit RSACryptoServiceProvider(int32_t dwKeySize) ;

/// @brief Method .ctor addr 0x22faf34 size 0x38 virtual false final false
 void _ctor(int32_t dwKeySize) ;

// Ctor Parameters [CppParam { name: "dwKeySize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "parameters", ty: "::System::Security::Cryptography::CspParameters", modifiers: "", def_value: None }]
explicit RSACryptoServiceProvider(int32_t dwKeySize, ::System::Security::Cryptography::CspParameters parameters) ;

/// @brief Method .ctor addr 0x22faf78 size 0x5c virtual false final false
 void _ctor(int32_t dwKeySize, ::System::Security::Cryptography::CspParameters parameters) ;

/// @brief Method Common addr 0x22fafd4 size 0x21c virtual false final false
 void Common(int32_t dwKeySize, bool parameters) ;

/// @brief Method Common addr 0x22fb1f0 size 0x120 virtual false final false
 void Common(::System::Security::Cryptography::CspParameters p) ;

/// @brief Method Finalize addr 0x22fb310 size 0xa0 virtual true final false
 void Finalize() ;

/// @brief Method get_KeySize addr 0x22fb3b0 size 0x20 virtual true final false
 int32_t get_KeySize() ;

/// @brief Method get_PublicOnly addr 0x22fb3d0 size 0x1c virtual false final false
 bool get_PublicOnly() ;

/// @brief Method EncryptValue addr 0x22fb3ec size 0x20 virtual true final false
 ::ArrayW<uint8_t> EncryptValue(::ArrayW<uint8_t> rgb) ;

/// @brief Method ExportParameters addr 0x22fb40c size 0x140 virtual true final false
 ::System::Security::Cryptography::RSAParameters ExportParameters(bool includePrivateParameters) ;

/// @brief Method ImportParameters addr 0x22fb54c size 0x54 virtual true final false
 void ImportParameters(::System::Security::Cryptography::RSAParameters parameters) ;

/// @brief Method GetHashNameFromOID addr 0x22fb5a0 size 0x1cc virtual false final false
 ::StringW GetHashNameFromOID(::StringW oid) ;

/// @brief Method VerifyHash addr 0x22fb76c size 0x128 virtual false final false
 bool VerifyHash(::ArrayW<uint8_t> rgbHash, ::StringW str, ::ArrayW<uint8_t> rgbSignature) ;

/// @brief Method Dispose addr 0x22fb894 size 0x54 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method OnKeyGenerated addr 0x22fb8e8 size 0x84 virtual false final false
 void OnKeyGenerated(::bs_hook::Il2CppWrapperType sender, ::System::EventArgs e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
} // end anonymous namespace
NEED_NO_BOX(::System::Security::Cryptography::RSACryptoServiceProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RSACryptoServiceProvider, "System.Security.Cryptography", "RSACryptoServiceProvider");
