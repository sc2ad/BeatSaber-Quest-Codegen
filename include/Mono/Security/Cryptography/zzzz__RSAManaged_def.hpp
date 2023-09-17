#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__RSA_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Mono::Math {
class BigInteger;
}
namespace System::Security::Cryptography {
struct RSAParameters;
}
namespace System {
class EventArgs;
}
// Forward declare root types
namespace Mono::Security::Cryptography {
class RSAManaged;
}
namespace Mono::Security::Cryptography {
class ____Mono__Security__Cryptography__RSAManaged__KeyGeneratedEventHandler;
}
// Type: ::KeyGeneratedEventHandler
namespace Mono::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2282))
// CS Name: Mono.Security.Cryptography.RSAManaged::KeyGeneratedEventHandler
class CORDL_TYPE ____Mono__Security__Cryptography__RSAManaged__KeyGeneratedEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____Mono__Security__Cryptography__RSAManaged__KeyGeneratedEventHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Mono__Security__Cryptography__RSAManaged__KeyGeneratedEventHandler", modifiers: " const&", def_value: None }]
constexpr ____Mono__Security__Cryptography__RSAManaged__KeyGeneratedEventHandler(____Mono__Security__Cryptography__RSAManaged__KeyGeneratedEventHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Mono__Security__Cryptography__RSAManaged__KeyGeneratedEventHandler", modifiers: "&&", def_value: None }]
constexpr ____Mono__Security__Cryptography__RSAManaged__KeyGeneratedEventHandler(____Mono__Security__Cryptography__RSAManaged__KeyGeneratedEventHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Mono__Security__Cryptography__RSAManaged__KeyGeneratedEventHandler(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____Mono__Security__Cryptography__RSAManaged__KeyGeneratedEventHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Mono__Security__Cryptography__RSAManaged__KeyGeneratedEventHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Mono__Security__Cryptography__RSAManaged__KeyGeneratedEventHandler& operator=(____Mono__Security__Cryptography__RSAManaged__KeyGeneratedEventHandler&& o) noexcept = default;
  constexpr ____Mono__Security__Cryptography__RSAManaged__KeyGeneratedEventHandler& operator=(____Mono__Security__Cryptography__RSAManaged__KeyGeneratedEventHandler const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____Mono__Security__Cryptography__RSAManaged__KeyGeneratedEventHandler(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x22b7874 size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x22b79a4 size 0x14 virtual true final false
 void Invoke(::bs_hook::Il2CppWrapperType sender, ::System::EventArgs e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::Cryptography
// Type: Mono.Security.Cryptography::RSAManaged
namespace Mono::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2952))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2283))
// CS Name: Mono.Security.Cryptography.RSAManaged
class CORDL_TYPE RSAManaged : public ::System::Security::Cryptography::RSA {
public:
// Declarations
using KeyGeneratedEventHandler = ::Mono::Security::Cryptography::____Mono__Security__Cryptography__RSAManaged__KeyGeneratedEventHandler;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~RSAManaged() = default;

// Ctor Parameters [CppParam { name: "", ty: "RSAManaged", modifiers: " const&", def_value: None }]
constexpr RSAManaged(RSAManaged const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RSAManaged", modifiers: "&&", def_value: None }]
constexpr RSAManaged(RSAManaged&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RSAManaged(void* ptr) noexcept : ::System::Security::Cryptography::RSA(ptr) {
}


  constexpr RSAManaged& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RSAManaged& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RSAManaged& operator=(RSAManaged&& o) noexcept = default;
  constexpr RSAManaged& operator=(RSAManaged const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_isCRTpossible, put=__set_isCRTpossible))  isCRTpossible;

constexpr void __set_isCRTpossible(bool value) ;

constexpr bool __get_isCRTpossible() const;

 bool __declspec(property(get=__get_keyBlinding, put=__set_keyBlinding))  keyBlinding;

constexpr void __set_keyBlinding(bool value) ;

constexpr bool __get_keyBlinding() const;

 bool __declspec(property(get=__get_keypairGenerated, put=__set_keypairGenerated))  keypairGenerated;

constexpr void __set_keypairGenerated(bool value) ;

constexpr bool __get_keypairGenerated() const;

 bool __declspec(property(get=__get_m_disposed, put=__set_m_disposed))  m_disposed;

constexpr void __set_m_disposed(bool value) ;

constexpr bool __get_m_disposed() const;

 ::Mono::Math::BigInteger __declspec(property(get=__get_d, put=__set_d))  d;

constexpr void __set_d(::Mono::Math::BigInteger value) ;

constexpr ::Mono::Math::BigInteger __get_d() const;

 ::Mono::Math::BigInteger __declspec(property(get=__get_p, put=__set_p))  p;

constexpr void __set_p(::Mono::Math::BigInteger value) ;

constexpr ::Mono::Math::BigInteger __get_p() const;

 ::Mono::Math::BigInteger __declspec(property(get=__get_q, put=__set_q))  q;

constexpr void __set_q(::Mono::Math::BigInteger value) ;

constexpr ::Mono::Math::BigInteger __get_q() const;

 ::Mono::Math::BigInteger __declspec(property(get=__get_dp, put=__set_dp))  dp;

constexpr void __set_dp(::Mono::Math::BigInteger value) ;

constexpr ::Mono::Math::BigInteger __get_dp() const;

 ::Mono::Math::BigInteger __declspec(property(get=__get_dq, put=__set_dq))  dq;

constexpr void __set_dq(::Mono::Math::BigInteger value) ;

constexpr ::Mono::Math::BigInteger __get_dq() const;

 ::Mono::Math::BigInteger __declspec(property(get=__get_qInv, put=__set_qInv))  qInv;

constexpr void __set_qInv(::Mono::Math::BigInteger value) ;

constexpr ::Mono::Math::BigInteger __get_qInv() const;

 ::Mono::Math::BigInteger __declspec(property(get=__get_n, put=__set_n))  n;

constexpr void __set_n(::Mono::Math::BigInteger value) ;

constexpr ::Mono::Math::BigInteger __get_n() const;

 ::Mono::Math::BigInteger __declspec(property(get=__get_e, put=__set_e))  e;

constexpr void __set_e(::Mono::Math::BigInteger value) ;

constexpr ::Mono::Math::BigInteger __get_e() const;

 ::Mono::Security::Cryptography::____Mono__Security__Cryptography__RSAManaged__KeyGeneratedEventHandler __declspec(property(get=__get_KeyGenerated, put=__set_KeyGenerated))  KeyGenerated;

constexpr void __set_KeyGenerated(::Mono::Security::Cryptography::____Mono__Security__Cryptography__RSAManaged__KeyGeneratedEventHandler value) ;

constexpr ::Mono::Security::Cryptography::____Mono__Security__Cryptography__RSAManaged__KeyGeneratedEventHandler __get_KeyGenerated() const;


// Properties

 int32_t __declspec(property(get=get_KeySize))  KeySize;

 bool __declspec(property(get=get_PublicOnly))  PublicOnly;


// Methods

// Ctor Parameters [CppParam { name: "keySize", ty: "int32_t", modifiers: "", def_value: None }]
explicit RSAManaged(int32_t keySize) ;

/// @brief Method .ctor addr 0x22b552c size 0xf0 virtual false final false
 void _ctor(int32_t keySize) ;

/// @brief Method Finalize addr 0x22b561c size 0xa0 virtual true final false
 void Finalize() ;

/// @brief Method GenerateKeyPair addr 0x22b56bc size 0x268 virtual false final false
 void GenerateKeyPair() ;

/// @brief Method get_KeySize addr 0x22b5f34 size 0xa4 virtual true final false
 int32_t get_KeySize() ;

/// @brief Method get_PublicOnly addr 0x22b5fd8 size 0xa0 virtual false final false
 bool get_PublicOnly() ;

/// @brief Method EncryptValue addr 0x22b6128 size 0x10c virtual true final false
 ::ArrayW<uint8_t> EncryptValue(::ArrayW<uint8_t> rgb) ;

/// @brief Method ExportParameters addr 0x22b65e8 size 0x334 virtual true final false
 ::System::Security::Cryptography::RSAParameters ExportParameters(bool includePrivateParameters) ;

/// @brief Method ImportParameters addr 0x22b6a48 size 0x46c virtual true final false
 void ImportParameters(::System::Security::Cryptography::RSAParameters parameters) ;

/// @brief Method Dispose addr 0x22b6eb4 size 0x204 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method add_KeyGenerated addr 0x22b70b8 size 0x9c virtual false final false
 void add_KeyGenerated(::Mono::Security::Cryptography::____Mono__Security__Cryptography__RSAManaged__KeyGeneratedEventHandler value) ;

/// @brief Method remove_KeyGenerated addr 0x22b7154 size 0x9c virtual false final false
 void remove_KeyGenerated(::Mono::Security::Cryptography::____Mono__Security__Cryptography__RSAManaged__KeyGeneratedEventHandler value) ;

/// @brief Method ToXmlString addr 0x22b71f0 size 0x684 virtual true final false
 ::StringW ToXmlString(bool includePrivateParameters) ;

/// @brief Method GetPaddedValue addr 0x22b64e8 size 0xb0 virtual false final false
 ::ArrayW<uint8_t> GetPaddedValue(::Mono::Math::BigInteger value, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::Cryptography
} // end anonymous namespace
NEED_NO_BOX(::Mono::Security::Cryptography::RSAManaged);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::RSAManaged, "Mono.Security.Cryptography", "RSAManaged");
NEED_NO_BOX(::Mono::Security::Cryptography::____Mono__Security__Cryptography__RSAManaged__KeyGeneratedEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::____Mono__Security__Cryptography__RSAManaged__KeyGeneratedEventHandler, "Mono.Security.Cryptography", "RSAManaged/KeyGeneratedEventHandler");
