#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X500 {
class DirectoryString;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
class AdditionalInformationSyntax;
}
// Type: Org.BouncyCastle.Asn1.IsisMtt.X509::AdditionalInformationSyntax
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(182))
// CS Name: Org.BouncyCastle.Asn1.IsisMtt.X509.AdditionalInformationSyntax
class CORDL_TYPE AdditionalInformationSyntax : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AdditionalInformationSyntax() = default;

// Ctor Parameters [CppParam { name: "", ty: "AdditionalInformationSyntax", modifiers: " const&", def_value: None }]
constexpr AdditionalInformationSyntax(AdditionalInformationSyntax const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AdditionalInformationSyntax", modifiers: "&&", def_value: None }]
constexpr AdditionalInformationSyntax(AdditionalInformationSyntax&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AdditionalInformationSyntax(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr AdditionalInformationSyntax& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AdditionalInformationSyntax& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AdditionalInformationSyntax& operator=(AdditionalInformationSyntax&& o) noexcept = default;
  constexpr AdditionalInformationSyntax& operator=(AdditionalInformationSyntax const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X500::DirectoryString __declspec(property(get=__get_information, put=__set_information))  information;

constexpr void __set_information(Org::BouncyCastle::Asn1::X500::DirectoryString value) ;

constexpr Org::BouncyCastle::Asn1::X500::DirectoryString __get_information() const;


// Properties

 Org::BouncyCastle::Asn1::X500::DirectoryString __declspec(property(get=get_Information))  Information;


// Methods

/// @brief Method GetInstance addr 0xee8638 size 0x158 virtual false final false
static Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax GetInstance(::bs_hook::Il2CppWrapperType obj) ;

static Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax New_ctor(Org::BouncyCastle::Asn1::X500::DirectoryString information) ;

/// @brief Method .ctor addr 0xee8790 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X500::DirectoryString information) ;

static Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax New_ctor(::StringW information) ;

/// @brief Method .ctor addr 0xee87b8 size 0x7c virtual false final false
 void _ctor(::StringW information) ;

/// @brief Method get_Information addr 0xee8834 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::X500::DirectoryString get_Information() ;

/// @brief Method ToAsn1Object addr 0xee883c size 0x20 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::IsisMtt::X509
NEED_NO_BOX(Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::IsisMtt::X509::AdditionalInformationSyntax, "Org.BouncyCastle.Asn1.IsisMtt.X509", "AdditionalInformationSyntax");
