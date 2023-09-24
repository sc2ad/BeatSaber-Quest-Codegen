#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__DSA_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Security::Cryptography {
struct DSAParameters;
}
namespace Mono::Security::Cryptography {
class KeyPairPersistence;
}
namespace System {
class EventArgs;
}
namespace Mono::Security::Cryptography {
class DSAManaged;
}
// Forward declare root types
namespace System::Security::Cryptography {
class DSACryptoServiceProvider;
}
// Type: System.Security.Cryptography::DSACryptoServiceProvider
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2927))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2975))
// CS Name: System.Security.Cryptography.DSACryptoServiceProvider
class CORDL_TYPE DSACryptoServiceProvider : public System::Security::Cryptography::DSA {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~DSACryptoServiceProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "DSACryptoServiceProvider", modifiers: " const&", def_value: None }]
constexpr DSACryptoServiceProvider(DSACryptoServiceProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DSACryptoServiceProvider", modifiers: "&&", def_value: None }]
constexpr DSACryptoServiceProvider(DSACryptoServiceProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DSACryptoServiceProvider(void* ptr) noexcept : System::Security::Cryptography::DSA(ptr) {
}


  constexpr DSACryptoServiceProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DSACryptoServiceProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DSACryptoServiceProvider& operator=(DSACryptoServiceProvider&& o) noexcept = default;
  constexpr DSACryptoServiceProvider& operator=(DSACryptoServiceProvider const& o) noexcept = default;
                


// Fields

 Mono::Security::Cryptography::KeyPairPersistence __declspec(property(get=__get_store, put=__set_store))  store;

constexpr void __set_store(Mono::Security::Cryptography::KeyPairPersistence value) ;

constexpr Mono::Security::Cryptography::KeyPairPersistence __get_store() const;

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

 Mono::Security::Cryptography::DSAManaged __declspec(property(get=__get_dsa, put=__set_dsa))  dsa;

constexpr void __set_dsa(Mono::Security::Cryptography::DSAManaged value) ;

constexpr Mono::Security::Cryptography::DSAManaged __get_dsa() const;

static bool __declspec(property(get=__get_useMachineKeyStore, put=__set_useMachineKeyStore))  useMachineKeyStore;

static void __set_useMachineKeyStore(bool value) ;

static bool __get_useMachineKeyStore() ;


// Properties

 int32_t __declspec(property(get=get_KeySize))  KeySize;

 bool __declspec(property(get=get_PublicOnly))  PublicOnly;


// Methods

static System::Security::Cryptography::DSACryptoServiceProvider New_ctor() ;

/// @brief Method .ctor addr 0x23031b0 size 0x2c virtual false final false
 void _ctor() ;

static System::Security::Cryptography::DSACryptoServiceProvider New_ctor(int32_t dwKeySize) ;

/// @brief Method .ctor addr 0x2305348 size 0x38 virtual false final false
 void _ctor(int32_t dwKeySize) ;

/// @brief Method Common addr 0x2305380 size 0x224 virtual false final false
 void Common(int32_t dwKeySize, bool parameters) ;

/// @brief Method Finalize addr 0x23055a4 size 0xa0 virtual true final false
 void Finalize() ;

/// @brief Method get_KeySize addr 0x2305644 size 0x20 virtual true final false
 int32_t get_KeySize() ;

/// @brief Method get_PublicOnly addr 0x2305664 size 0x1c virtual false final false
 bool get_PublicOnly() ;

/// @brief Method ExportParameters addr 0x2305680 size 0xb4 virtual true final false
 System::Security::Cryptography::DSAParameters ExportParameters(bool includePrivateParameters) ;

/// @brief Method ImportParameters addr 0x2305734 size 0x54 virtual true final false
 void ImportParameters(System::Security::Cryptography::DSAParameters parameters) ;

/// @brief Method VerifySignature addr 0x2305788 size 0x20 virtual true final false
 bool VerifySignature(::ArrayW<uint8_t> rgbHash, ::ArrayW<uint8_t> rgbSignature) ;

/// @brief Method Dispose addr 0x23057a8 size 0x54 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method OnKeyGenerated addr 0x23057fc size 0x84 virtual false final false
 void OnKeyGenerated(::bs_hook::Il2CppWrapperType sender, System::EventArgs e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::DSACryptoServiceProvider);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::DSACryptoServiceProvider, "System.Security.Cryptography", "DSACryptoServiceProvider");
