#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__DSA_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Mono::Math {
class BigInteger;
}
namespace System::Security::Cryptography {
class RandomNumberGenerator;
}
namespace System::Security::Cryptography {
struct DSAParameters;
}
namespace System {
class EventArgs;
}
// Forward declare root types
namespace Mono::Security::Cryptography {
class DSAManaged;
}
namespace Mono::Security::Cryptography {
class ____Mono__Security__Cryptography__DSAManaged__KeyGeneratedEventHandler;
}
// Type: ::KeyGeneratedEventHandler
namespace Mono::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2285))
// CS Name: Mono.Security.Cryptography.DSAManaged::KeyGeneratedEventHandler
class CORDL_TYPE ____Mono__Security__Cryptography__DSAManaged__KeyGeneratedEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____Mono__Security__Cryptography__DSAManaged__KeyGeneratedEventHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Mono__Security__Cryptography__DSAManaged__KeyGeneratedEventHandler", modifiers: " const&", def_value: None }]
constexpr ____Mono__Security__Cryptography__DSAManaged__KeyGeneratedEventHandler(____Mono__Security__Cryptography__DSAManaged__KeyGeneratedEventHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Mono__Security__Cryptography__DSAManaged__KeyGeneratedEventHandler", modifiers: "&&", def_value: None }]
constexpr ____Mono__Security__Cryptography__DSAManaged__KeyGeneratedEventHandler(____Mono__Security__Cryptography__DSAManaged__KeyGeneratedEventHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Mono__Security__Cryptography__DSAManaged__KeyGeneratedEventHandler(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____Mono__Security__Cryptography__DSAManaged__KeyGeneratedEventHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Mono__Security__Cryptography__DSAManaged__KeyGeneratedEventHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Mono__Security__Cryptography__DSAManaged__KeyGeneratedEventHandler& operator=(____Mono__Security__Cryptography__DSAManaged__KeyGeneratedEventHandler&& o) noexcept = default;
  constexpr ____Mono__Security__Cryptography__DSAManaged__KeyGeneratedEventHandler& operator=(____Mono__Security__Cryptography__DSAManaged__KeyGeneratedEventHandler const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____Mono__Security__Cryptography__DSAManaged__KeyGeneratedEventHandler(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x22bad78 size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x22baea8 size 0x14 virtual true final false
 void Invoke(::bs_hook::Il2CppWrapperType sender, ::System::EventArgs e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::Cryptography
// Type: Mono.Security.Cryptography::DSAManaged
namespace Mono::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2927))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2286))
// CS Name: Mono.Security.Cryptography.DSAManaged
class CORDL_TYPE DSAManaged : public ::System::Security::Cryptography::DSA {
public:
// Declarations
using KeyGeneratedEventHandler = ::Mono::Security::Cryptography::____Mono__Security__Cryptography__DSAManaged__KeyGeneratedEventHandler;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~DSAManaged() = default;

// Ctor Parameters [CppParam { name: "", ty: "DSAManaged", modifiers: " const&", def_value: None }]
constexpr DSAManaged(DSAManaged const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DSAManaged", modifiers: "&&", def_value: None }]
constexpr DSAManaged(DSAManaged&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DSAManaged(void* ptr) noexcept : ::System::Security::Cryptography::DSA(ptr) {
}


  constexpr DSAManaged& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DSAManaged& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DSAManaged& operator=(DSAManaged&& o) noexcept = default;
  constexpr DSAManaged& operator=(DSAManaged const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_keypairGenerated, put=__set_keypairGenerated))  keypairGenerated;

constexpr void __set_keypairGenerated(bool value) ;

constexpr bool __get_keypairGenerated() const;

 bool __declspec(property(get=__get_m_disposed, put=__set_m_disposed))  m_disposed;

constexpr void __set_m_disposed(bool value) ;

constexpr bool __get_m_disposed() const;

 ::Mono::Math::BigInteger __declspec(property(get=__get_p, put=__set_p))  p;

constexpr void __set_p(::Mono::Math::BigInteger value) ;

constexpr ::Mono::Math::BigInteger __get_p() const;

 ::Mono::Math::BigInteger __declspec(property(get=__get_q, put=__set_q))  q;

constexpr void __set_q(::Mono::Math::BigInteger value) ;

constexpr ::Mono::Math::BigInteger __get_q() const;

 ::Mono::Math::BigInteger __declspec(property(get=__get_g, put=__set_g))  g;

constexpr void __set_g(::Mono::Math::BigInteger value) ;

constexpr ::Mono::Math::BigInteger __get_g() const;

 ::Mono::Math::BigInteger __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(::Mono::Math::BigInteger value) ;

constexpr ::Mono::Math::BigInteger __get_x() const;

 ::Mono::Math::BigInteger __declspec(property(get=__get_y, put=__set_y))  y;

constexpr void __set_y(::Mono::Math::BigInteger value) ;

constexpr ::Mono::Math::BigInteger __get_y() const;

 ::Mono::Math::BigInteger __declspec(property(get=__get_j, put=__set_j))  j;

constexpr void __set_j(::Mono::Math::BigInteger value) ;

constexpr ::Mono::Math::BigInteger __get_j() const;

 ::Mono::Math::BigInteger __declspec(property(get=__get_seed, put=__set_seed))  seed;

constexpr void __set_seed(::Mono::Math::BigInteger value) ;

constexpr ::Mono::Math::BigInteger __get_seed() const;

 int32_t __declspec(property(get=__get_counter, put=__set_counter))  counter;

constexpr void __set_counter(int32_t value) ;

constexpr int32_t __get_counter() const;

 bool __declspec(property(get=__get_j_missing, put=__set_j_missing))  j_missing;

constexpr void __set_j_missing(bool value) ;

constexpr bool __get_j_missing() const;

 ::System::Security::Cryptography::RandomNumberGenerator __declspec(property(get=__get_rng, put=__set_rng))  rng;

constexpr void __set_rng(::System::Security::Cryptography::RandomNumberGenerator value) ;

constexpr ::System::Security::Cryptography::RandomNumberGenerator __get_rng() const;

 ::Mono::Security::Cryptography::____Mono__Security__Cryptography__DSAManaged__KeyGeneratedEventHandler __declspec(property(get=__get_KeyGenerated, put=__set_KeyGenerated))  KeyGenerated;

constexpr void __set_KeyGenerated(::Mono::Security::Cryptography::____Mono__Security__Cryptography__DSAManaged__KeyGeneratedEventHandler value) ;

constexpr ::Mono::Security::Cryptography::____Mono__Security__Cryptography__DSAManaged__KeyGeneratedEventHandler __get_KeyGenerated() const;


// Properties

 ::System::Security::Cryptography::RandomNumberGenerator __declspec(property(get=get_Random))  Random;

 int32_t __declspec(property(get=get_KeySize))  KeySize;

 bool __declspec(property(get=get_PublicOnly))  PublicOnly;


// Methods

// Ctor Parameters [CppParam { name: "dwKeySize", ty: "int32_t", modifiers: "", def_value: None }]
explicit DSAManaged(int32_t dwKeySize) ;

/// @brief Method .ctor addr 0x22b91f8 size 0xe0 virtual false final false
 void _ctor(int32_t dwKeySize) ;

/// @brief Method Finalize addr 0x22b92d8 size 0xa0 virtual true final false
 void Finalize() ;

/// @brief Method Generate addr 0x22b9378 size 0x4c virtual false final false
 void Generate() ;

/// @brief Method GenerateKeyPair addr 0x22b98ec size 0xe0 virtual false final false
 void GenerateKeyPair() ;

/// @brief Method add addr 0x22b9b08 size 0xa4 virtual false final false
 void add(::ArrayW<uint8_t> a, ::ArrayW<uint8_t> b, int32_t value) ;

/// @brief Method GenerateParams addr 0x22b93c4 size 0x528 virtual false final false
 void GenerateParams(int32_t keyLength) ;

/// @brief Method get_Random addr 0x22b9bac size 0x20 virtual false final false
 ::System::Security::Cryptography::RandomNumberGenerator get_Random() ;

/// @brief Method get_KeySize addr 0x22b9ee0 size 0x2c virtual true final false
 int32_t get_KeySize() ;

/// @brief Method get_PublicOnly addr 0x22b9f0c size 0x74 virtual false final false
 bool get_PublicOnly() ;

/// @brief Method NormalizeArray addr 0x22b9f80 size 0xa4 virtual false final false
 ::ArrayW<uint8_t> NormalizeArray(::ArrayW<uint8_t> array) ;

/// @brief Method ExportParameters addr 0x22ba024 size 0x278 virtual true final false
 ::System::Security::Cryptography::DSAParameters ExportParameters(bool includePrivateParameters) ;

/// @brief Method ImportParameters addr 0x22ba308 size 0x2a8 virtual true final false
 void ImportParameters(::System::Security::Cryptography::DSAParameters parameters) ;

/// @brief Method VerifySignature addr 0x22ba5b0 size 0x4c0 virtual true final false
 bool VerifySignature(::ArrayW<uint8_t> rgbHash, ::ArrayW<uint8_t> rgbSignature) ;

/// @brief Method Dispose addr 0x22baa70 size 0x1d0 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method add_KeyGenerated addr 0x22bac40 size 0x9c virtual false final false
 void add_KeyGenerated(::Mono::Security::Cryptography::____Mono__Security__Cryptography__DSAManaged__KeyGeneratedEventHandler value) ;

/// @brief Method remove_KeyGenerated addr 0x22bacdc size 0x9c virtual false final false
 void remove_KeyGenerated(::Mono::Security::Cryptography::____Mono__Security__Cryptography__DSAManaged__KeyGeneratedEventHandler value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::Cryptography
} // end anonymous namespace
NEED_NO_BOX(::Mono::Security::Cryptography::DSAManaged);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::DSAManaged, "Mono.Security.Cryptography", "DSAManaged");
NEED_NO_BOX(::Mono::Security::Cryptography::____Mono__Security__Cryptography__DSAManaged__KeyGeneratedEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::____Mono__Security__Cryptography__DSAManaged__KeyGeneratedEventHandler, "Mono.Security.Cryptography", "DSAManaged/KeyGeneratedEventHandler");
