#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X9 {
class KeySpecificInfo;
}
// Type: Org.BouncyCastle.Asn1.X9::KeySpecificInfo
namespace Org::BouncyCastle::Asn1::X9 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(415))
// CS Name: Org.BouncyCastle.Asn1.X9.KeySpecificInfo
class CORDL_TYPE KeySpecificInfo : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~KeySpecificInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "KeySpecificInfo", modifiers: " const&", def_value: None }]
constexpr KeySpecificInfo(KeySpecificInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KeySpecificInfo", modifiers: "&&", def_value: None }]
constexpr KeySpecificInfo(KeySpecificInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KeySpecificInfo(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr KeySpecificInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KeySpecificInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KeySpecificInfo& operator=(KeySpecificInfo&& o) noexcept = default;
  constexpr KeySpecificInfo& operator=(KeySpecificInfo const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_algorithm, put=__set_algorithm))  algorithm;

constexpr void __set_algorithm(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier __get_algorithm() const;

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_counter, put=__set_counter))  counter;

constexpr void __set_counter(Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr Org::BouncyCastle::Asn1::Asn1OctetString __get_counter() const;


// Properties

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_Algorithm))  Algorithm;

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=get_Counter))  Counter;


// Methods

static Org::BouncyCastle::Asn1::X9::KeySpecificInfo New_ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier algorithm, Org::BouncyCastle::Asn1::Asn1OctetString counter) ;

/// @brief Method .ctor addr 0x111f23c size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier algorithm, Org::BouncyCastle::Asn1::Asn1OctetString counter) ;

static Org::BouncyCastle::Asn1::X9::KeySpecificInfo New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0x111f268 size 0x2b8 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_Algorithm addr 0x111f520 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerObjectIdentifier get_Algorithm() ;

/// @brief Method get_Counter addr 0x111f528 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1OctetString get_Counter() ;

/// @brief Method ToAsn1Object addr 0x111f530 size 0xec virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X9
NEED_NO_BOX(Org::BouncyCastle::Asn1::X9::KeySpecificInfo);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X9::KeySpecificInfo, "Org.BouncyCastle.Asn1.X9", "KeySpecificInfo");
