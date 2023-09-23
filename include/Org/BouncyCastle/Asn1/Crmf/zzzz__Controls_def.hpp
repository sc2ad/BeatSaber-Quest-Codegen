#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class AttributeTypeAndValue;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class Controls;
}
// Type: Org.BouncyCastle.Asn1.Crmf::Controls
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(109))
// CS Name: Org.BouncyCastle.Asn1.Crmf.Controls
class CORDL_TYPE Controls : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Controls() = default;

// Ctor Parameters [CppParam { name: "", ty: "Controls", modifiers: " const&", def_value: None }]
constexpr Controls(Controls const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Controls", modifiers: "&&", def_value: None }]
constexpr Controls(Controls&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Controls(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr Controls& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Controls& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Controls& operator=(Controls&& o) noexcept = default;
  constexpr Controls& operator=(Controls const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_content, put=__set_content))  content;

constexpr void __set_content(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_content() const;


// Methods

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit Controls(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdf7650 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xdf679c size 0x18c virtual false final false
static Org::BouncyCastle::Asn1::Crmf::Controls GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "atvs", ty: "::ArrayW<Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue>", modifiers: "", def_value: None }]
explicit Controls(::ArrayW<Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue> atvs) ;

/// @brief Method .ctor addr 0xdf7678 size 0x7c virtual false final false
 void _ctor(::ArrayW<Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue> atvs) ;

/// @brief Method ToAttributeTypeAndValueArray addr 0xdf76f4 size 0xf4 virtual true final false
 ::ArrayW<Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue> ToAttributeTypeAndValueArray() ;

/// @brief Method ToAsn1Object addr 0xdf77e8 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(Org::BouncyCastle::Asn1::Crmf::Controls);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Crmf::Controls, "Org.BouncyCastle.Asn1.Crmf", "Controls");
