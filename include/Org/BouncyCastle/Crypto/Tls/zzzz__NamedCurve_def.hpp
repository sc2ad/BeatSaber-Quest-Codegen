#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class NamedCurve;
}
// Type: Org.BouncyCastle.Crypto.Tls::NamedCurve
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1255))
// CS Name: Org.BouncyCastle.Crypto.Tls.NamedCurve
class CORDL_TYPE NamedCurve : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NamedCurve() = default;

// Ctor Parameters [CppParam { name: "", ty: "NamedCurve", modifiers: " const&", def_value: None }]
constexpr NamedCurve(NamedCurve const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NamedCurve", modifiers: "&&", def_value: None }]
constexpr NamedCurve(NamedCurve&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NamedCurve(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NamedCurve& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NamedCurve& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NamedCurve& operator=(NamedCurve&& o) noexcept = default;
  constexpr NamedCurve& operator=(NamedCurve const& o) noexcept = default;
                


// Fields

/// @brief Field sect163k1 offset 0
static constexpr int32_t  sect163k1{1};

/// @brief Field sect163r1 offset 0
static constexpr int32_t  sect163r1{2};

/// @brief Field sect163r2 offset 0
static constexpr int32_t  sect163r2{3};

/// @brief Field sect193r1 offset 0
static constexpr int32_t  sect193r1{4};

/// @brief Field sect193r2 offset 0
static constexpr int32_t  sect193r2{5};

/// @brief Field sect233k1 offset 0
static constexpr int32_t  sect233k1{6};

/// @brief Field sect233r1 offset 0
static constexpr int32_t  sect233r1{7};

/// @brief Field sect239k1 offset 0
static constexpr int32_t  sect239k1{8};

/// @brief Field sect283k1 offset 0
static constexpr int32_t  sect283k1{9};

/// @brief Field sect283r1 offset 0
static constexpr int32_t  sect283r1{10};

/// @brief Field sect409k1 offset 0
static constexpr int32_t  sect409k1{11};

/// @brief Field sect409r1 offset 0
static constexpr int32_t  sect409r1{12};

/// @brief Field sect571k1 offset 0
static constexpr int32_t  sect571k1{13};

/// @brief Field sect571r1 offset 0
static constexpr int32_t  sect571r1{14};

/// @brief Field secp160k1 offset 0
static constexpr int32_t  secp160k1{15};

/// @brief Field secp160r1 offset 0
static constexpr int32_t  secp160r1{16};

/// @brief Field secp160r2 offset 0
static constexpr int32_t  secp160r2{17};

/// @brief Field secp192k1 offset 0
static constexpr int32_t  secp192k1{18};

/// @brief Field secp192r1 offset 0
static constexpr int32_t  secp192r1{19};

/// @brief Field secp224k1 offset 0
static constexpr int32_t  secp224k1{20};

/// @brief Field secp224r1 offset 0
static constexpr int32_t  secp224r1{21};

/// @brief Field secp256k1 offset 0
static constexpr int32_t  secp256k1{22};

/// @brief Field secp256r1 offset 0
static constexpr int32_t  secp256r1{23};

/// @brief Field secp384r1 offset 0
static constexpr int32_t  secp384r1{24};

/// @brief Field secp521r1 offset 0
static constexpr int32_t  secp521r1{25};

/// @brief Field brainpoolP256r1 offset 0
static constexpr int32_t  brainpoolP256r1{26};

/// @brief Field brainpoolP384r1 offset 0
static constexpr int32_t  brainpoolP384r1{27};

/// @brief Field brainpoolP512r1 offset 0
static constexpr int32_t  brainpoolP512r1{28};

/// @brief Field arbitrary_explicit_prime_curves offset 0
static constexpr int32_t  arbitrary_explicit_prime_curves{65281};

/// @brief Field arbitrary_explicit_char2_curves offset 0
static constexpr int32_t  arbitrary_explicit_char2_curves{65282};


// Methods

/// @brief Method IsValid addr 0xf04d54 size 0x28 virtual false final false
static bool IsValid(int32_t namedCurve) ;

/// @brief Method RefersToASpecificNamedCurve addr 0xf04d7c size 0x14 virtual false final false
static bool RefersToASpecificNamedCurve(int32_t namedCurve) ;

// Ctor Parameters []
explicit NamedCurve() ;

/// @brief Method .ctor addr 0xf04d90 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::NamedCurve);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::NamedCurve, "Org.BouncyCastle.Crypto.Tls", "NamedCurve");
