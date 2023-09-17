#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Abc {
class ZTauElement;
}
// Type: Org.BouncyCastle.Math.EC.Abc::ZTauElement
namespace Org::BouncyCastle::Math::EC::Abc {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1358))
// CS Name: Org.BouncyCastle.Math.EC.Abc.ZTauElement
class CORDL_TYPE ZTauElement : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ZTauElement() = default;

// Ctor Parameters [CppParam { name: "", ty: "ZTauElement", modifiers: " const&", def_value: None }]
constexpr ZTauElement(ZTauElement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ZTauElement", modifiers: "&&", def_value: None }]
constexpr ZTauElement(ZTauElement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ZTauElement(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ZTauElement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ZTauElement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ZTauElement& operator=(ZTauElement&& o) noexcept = default;
  constexpr ZTauElement& operator=(ZTauElement const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_u, put=__set_u))  u;

constexpr void __set_u(::Org::BouncyCastle::Math::BigInteger value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger __get_u() const;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_v, put=__set_v))  v;

constexpr void __set_v(::Org::BouncyCastle::Math::BigInteger value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger __get_v() const;


// Methods

// Ctor Parameters [CppParam { name: "u", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "v", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit ZTauElement(::Org::BouncyCastle::Math::BigInteger u, ::Org::BouncyCastle::Math::BigInteger v) ;

/// @brief Method .ctor addr 0xf3a7f0 size 0x2c virtual false final false
 void _ctor(::Org::BouncyCastle::Math::BigInteger u, ::Org::BouncyCastle::Math::BigInteger v) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Abc
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Abc::ZTauElement);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Abc::ZTauElement, "Org.BouncyCastle.Math.EC.Abc", "ZTauElement");
