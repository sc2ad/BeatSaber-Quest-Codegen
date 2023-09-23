#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralNames;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class IetfAttrSyntax;
}
// Type: Org.BouncyCastle.Asn1.X509::IetfAttrSyntax
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(365))
// CS Name: Org.BouncyCastle.Asn1.X509.IetfAttrSyntax
class CORDL_TYPE IetfAttrSyntax : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~IetfAttrSyntax() = default;

// Ctor Parameters [CppParam { name: "", ty: "IetfAttrSyntax", modifiers: " const&", def_value: None }]
constexpr IetfAttrSyntax(IetfAttrSyntax const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IetfAttrSyntax", modifiers: "&&", def_value: None }]
constexpr IetfAttrSyntax(IetfAttrSyntax&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IetfAttrSyntax(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr IetfAttrSyntax& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IetfAttrSyntax& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IetfAttrSyntax& operator=(IetfAttrSyntax&& o) noexcept = default;
  constexpr IetfAttrSyntax& operator=(IetfAttrSyntax const& o) noexcept = default;
                


// Fields

/// @brief Field ValueOctets offset 0
static constexpr int32_t  ValueOctets{1};

/// @brief Field ValueOid offset 0
static constexpr int32_t  ValueOid{2};

/// @brief Field ValueUtf8 offset 0
static constexpr int32_t  ValueUtf8{3};

 Org::BouncyCastle::Asn1::X509::GeneralNames __declspec(property(get=__get_policyAuthority, put=__set_policyAuthority))  policyAuthority;

constexpr void __set_policyAuthority(Org::BouncyCastle::Asn1::X509::GeneralNames value) ;

constexpr Org::BouncyCastle::Asn1::X509::GeneralNames __get_policyAuthority() const;

 Org::BouncyCastle::Asn1::Asn1EncodableVector __declspec(property(get=__get_values, put=__set_values))  values;

constexpr void __set_values(Org::BouncyCastle::Asn1::Asn1EncodableVector value) ;

constexpr Org::BouncyCastle::Asn1::Asn1EncodableVector __get_values() const;

 int32_t __declspec(property(get=__get_valueChoice, put=__set_valueChoice))  valueChoice;

constexpr void __set_valueChoice(int32_t value) ;

constexpr int32_t __get_valueChoice() const;


// Properties

 Org::BouncyCastle::Asn1::X509::GeneralNames __declspec(property(get=get_PolicyAuthority))  PolicyAuthority;

 int32_t __declspec(property(get=get_ValueType))  ValueType;


// Methods

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit IetfAttrSyntax(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0x11062dc size 0x67c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_PolicyAuthority addr 0x1106958 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::GeneralNames get_PolicyAuthority() ;

/// @brief Method get_ValueType addr 0x1106960 size 0x8 virtual false final false
 int32_t get_ValueType() ;

/// @brief Method GetValues addr 0x1106968 size 0x348 virtual false final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetValues() ;

/// @brief Method ToAsn1Object addr 0x1106cb0 size 0xe0 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::IetfAttrSyntax);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::IetfAttrSyntax, "Org.BouncyCastle.Asn1.X509", "IetfAttrSyntax");
