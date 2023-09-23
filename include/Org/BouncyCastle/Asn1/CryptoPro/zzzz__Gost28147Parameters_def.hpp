#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::CryptoPro {
class Gost28147Parameters;
}
// Type: Org.BouncyCastle.Asn1.CryptoPro::Gost28147Parameters
namespace Org::BouncyCastle::Asn1::CryptoPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(128))
// CS Name: Org.BouncyCastle.Asn1.CryptoPro.Gost28147Parameters
class CORDL_TYPE Gost28147Parameters : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Gost28147Parameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "Gost28147Parameters", modifiers: " const&", def_value: None }]
constexpr Gost28147Parameters(Gost28147Parameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Gost28147Parameters", modifiers: "&&", def_value: None }]
constexpr Gost28147Parameters(Gost28147Parameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Gost28147Parameters(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr Gost28147Parameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Gost28147Parameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Gost28147Parameters& operator=(Gost28147Parameters&& o) noexcept = default;
  constexpr Gost28147Parameters& operator=(Gost28147Parameters const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_iv, put=__set_iv))  iv;

constexpr void __set_iv(Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr Org::BouncyCastle::Asn1::Asn1OctetString __get_iv() const;

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_paramSet, put=__set_paramSet))  paramSet;

constexpr void __set_paramSet(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier __get_paramSet() const;


// Methods

/// @brief Method GetInstance addr 0xdfe834 size 0x18 virtual false final false
static Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

/// @brief Method GetInstance addr 0xdfe84c size 0x178 virtual false final false
static Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit Gost28147Parameters(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdfe9c4 size 0x130 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method ToAsn1Object addr 0xdfeaf4 size 0xf0 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::CryptoPro
NEED_NO_BOX(Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::CryptoPro::Gost28147Parameters, "Org.BouncyCastle.Asn1.CryptoPro", "Gost28147Parameters");
