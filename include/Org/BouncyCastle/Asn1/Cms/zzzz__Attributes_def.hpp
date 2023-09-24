#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace Org::BouncyCastle::Asn1::Cms {
class Attribute;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class Attributes;
}
// Type: Org.BouncyCastle.Asn1.Cms::Attributes
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(56))
// CS Name: Org.BouncyCastle.Asn1.Cms.Attributes
class CORDL_TYPE Attributes : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Attributes() = default;

// Ctor Parameters [CppParam { name: "", ty: "Attributes", modifiers: " const&", def_value: None }]
constexpr Attributes(Attributes const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Attributes", modifiers: "&&", def_value: None }]
constexpr Attributes(Attributes&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Attributes(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr Attributes& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Attributes& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Attributes& operator=(Attributes&& o) noexcept = default;
  constexpr Attributes& operator=(Attributes const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=__get_attributes, put=__set_attributes))  attributes;

constexpr void __set_attributes(Org::BouncyCastle::Asn1::Asn1Set value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Set __get_attributes() const;


// Methods

static Org::BouncyCastle::Asn1::Cms::Attributes New_ctor(Org::BouncyCastle::Asn1::Asn1Set attributes) ;

/// @brief Method .ctor addr 0xde2e28 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Set attributes) ;

static Org::BouncyCastle::Asn1::Cms::Attributes New_ctor(Org::BouncyCastle::Asn1::Asn1EncodableVector v) ;

/// @brief Method .ctor addr 0xde2e50 size 0x7c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1EncodableVector v) ;

/// @brief Method GetInstance addr 0xde2ecc size 0xa8 virtual false final false
static Org::BouncyCastle::Asn1::Cms::Attributes GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetAttributes addr 0xde2f74 size 0xf0 virtual true final false
 ::ArrayW<Org::BouncyCastle::Asn1::Cms::Attribute> GetAttributes() ;

/// @brief Method ToAsn1Object addr 0xde3064 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cms::Attributes);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cms::Attributes, "Org.BouncyCastle.Asn1.Cms", "Attributes");
