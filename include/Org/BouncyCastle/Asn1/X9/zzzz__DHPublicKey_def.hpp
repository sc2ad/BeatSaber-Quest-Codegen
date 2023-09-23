#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X9 {
class DHPublicKey;
}
// Type: Org.BouncyCastle.Asn1.X9::DHPublicKey
namespace Org::BouncyCastle::Asn1::X9 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(412))
// CS Name: Org.BouncyCastle.Asn1.X9.DHPublicKey
class CORDL_TYPE DHPublicKey : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DHPublicKey() = default;

// Ctor Parameters [CppParam { name: "", ty: "DHPublicKey", modifiers: " const&", def_value: None }]
constexpr DHPublicKey(DHPublicKey const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DHPublicKey", modifiers: "&&", def_value: None }]
constexpr DHPublicKey(DHPublicKey&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DHPublicKey(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr DHPublicKey& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DHPublicKey& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DHPublicKey& operator=(DHPublicKey&& o) noexcept = default;
  constexpr DHPublicKey& operator=(DHPublicKey const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_y, put=__set_y))  y;

constexpr void __set_y(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_y() const;


// Properties

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_Y))  Y;


// Methods

/// @brief Method GetInstance addr 0x111e4a0 size 0x18 virtual false final false
static Org::BouncyCastle::Asn1::X9::DHPublicKey GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool isExplicit) ;

/// @brief Method GetInstance addr 0x111e4b8 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::X9::DHPublicKey GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "y", ty: "Org::BouncyCastle::Asn1::DerInteger", modifiers: "", def_value: None }]
explicit DHPublicKey(Org::BouncyCastle::Asn1::DerInteger y) ;

/// @brief Method .ctor addr 0x111e640 size 0x78 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerInteger y) ;

/// @brief Method get_Y addr 0x111e6b8 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerInteger get_Y() ;

/// @brief Method ToAsn1Object addr 0x111e6c0 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X9
NEED_NO_BOX(Org::BouncyCastle::Asn1::X9::DHPublicKey);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X9::DHPublicKey, "Org.BouncyCastle.Asn1.X9", "DHPublicKey");
