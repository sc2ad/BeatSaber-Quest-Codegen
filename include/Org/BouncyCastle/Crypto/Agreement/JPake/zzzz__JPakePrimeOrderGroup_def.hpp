#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement::JPake {
class JPakePrimeOrderGroup;
}
// Type: Org.BouncyCastle.Crypto.Agreement.JPake::JPakePrimeOrderGroup
namespace Org::BouncyCastle::Crypto::Agreement::JPake {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(715))
// CS Name: Org.BouncyCastle.Crypto.Agreement.JPake.JPakePrimeOrderGroup
class CORDL_TYPE JPakePrimeOrderGroup : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~JPakePrimeOrderGroup() = default;

// Ctor Parameters [CppParam { name: "", ty: "JPakePrimeOrderGroup", modifiers: " const&", def_value: None }]
constexpr JPakePrimeOrderGroup(JPakePrimeOrderGroup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JPakePrimeOrderGroup", modifiers: "&&", def_value: None }]
constexpr JPakePrimeOrderGroup(JPakePrimeOrderGroup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JPakePrimeOrderGroup(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr JPakePrimeOrderGroup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JPakePrimeOrderGroup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JPakePrimeOrderGroup& operator=(JPakePrimeOrderGroup&& o) noexcept = default;
  constexpr JPakePrimeOrderGroup& operator=(JPakePrimeOrderGroup const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_p, put=__set_p))  p;

constexpr void __set_p(::Org::BouncyCastle::Math::BigInteger value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger __get_p() const;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_q, put=__set_q))  q;

constexpr void __set_q(::Org::BouncyCastle::Math::BigInteger value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger __get_q() const;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_g, put=__set_g))  g;

constexpr void __set_g(::Org::BouncyCastle::Math::BigInteger value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger __get_g() const;


// Properties

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_P))  P;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Q))  Q;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_G))  G;


// Methods

// Ctor Parameters [CppParam { name: "p", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "q", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "g", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit JPakePrimeOrderGroup(::Org::BouncyCastle::Math::BigInteger p, ::Org::BouncyCastle::Math::BigInteger q, ::Org::BouncyCastle::Math::BigInteger g) ;

/// @brief Method .ctor addr 0x118a294 size 0x8 virtual false final false
 void _ctor(::Org::BouncyCastle::Math::BigInteger p, ::Org::BouncyCastle::Math::BigInteger q, ::Org::BouncyCastle::Math::BigInteger g) ;

// Ctor Parameters [CppParam { name: "p", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "q", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "g", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "skipChecks", ty: "bool", modifiers: "", def_value: None }]
explicit JPakePrimeOrderGroup(::Org::BouncyCastle::Math::BigInteger p, ::Org::BouncyCastle::Math::BigInteger q, ::Org::BouncyCastle::Math::BigInteger g, bool skipChecks) ;

/// @brief Method .ctor addr 0x118a29c size 0x330 virtual false final false
 void _ctor(::Org::BouncyCastle::Math::BigInteger p, ::Org::BouncyCastle::Math::BigInteger q, ::Org::BouncyCastle::Math::BigInteger g, bool skipChecks) ;

/// @brief Method get_P addr 0x118a5cc size 0x8 virtual true final false
 ::Org::BouncyCastle::Math::BigInteger get_P() ;

/// @brief Method get_Q addr 0x118a5d4 size 0x8 virtual true final false
 ::Org::BouncyCastle::Math::BigInteger get_Q() ;

/// @brief Method get_G addr 0x118a5dc size 0x8 virtual true final false
 ::Org::BouncyCastle::Math::BigInteger get_G() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Agreement::JPake
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup, "Org.BouncyCastle.Crypto.Agreement.JPake", "JPakePrimeOrderGroup");
