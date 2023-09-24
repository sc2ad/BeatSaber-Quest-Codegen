#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::X509::Store {
class IX509Store;
}
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorInfo;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class OriginatorInformation;
}
// Type: Org.BouncyCastle.Cms::OriginatorInformation
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(681))
// CS Name: Org.BouncyCastle.Cms.OriginatorInformation
class CORDL_TYPE OriginatorInformation : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~OriginatorInformation() = default;

// Ctor Parameters [CppParam { name: "", ty: "OriginatorInformation", modifiers: " const&", def_value: None }]
constexpr OriginatorInformation(OriginatorInformation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OriginatorInformation", modifiers: "&&", def_value: None }]
constexpr OriginatorInformation(OriginatorInformation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OriginatorInformation(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OriginatorInformation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OriginatorInformation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OriginatorInformation& operator=(OriginatorInformation&& o) noexcept = default;
  constexpr OriginatorInformation& operator=(OriginatorInformation const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Cms::OriginatorInfo __declspec(property(get=__get_originatorInfo, put=__set_originatorInfo))  originatorInfo;

constexpr void __set_originatorInfo(Org::BouncyCastle::Asn1::Cms::OriginatorInfo value) ;

constexpr Org::BouncyCastle::Asn1::Cms::OriginatorInfo __get_originatorInfo() const;


// Methods

static Org::BouncyCastle::Cms::OriginatorInformation New_ctor(Org::BouncyCastle::Asn1::Cms::OriginatorInfo originatorInfo) ;

/// @brief Method .ctor addr 0x117b990 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Cms::OriginatorInfo originatorInfo) ;

/// @brief Method GetCertificates addr 0x117b9b8 size 0x50c virtual true final false
 Org::BouncyCastle::X509::Store::IX509Store GetCertificates() ;

/// @brief Method GetCrls addr 0x117bec4 size 0x50c virtual true final false
 Org::BouncyCastle::X509::Store::IX509Store GetCrls() ;

/// @brief Method ToAsn1Structure addr 0x117c3d0 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Cms::OriginatorInfo ToAsn1Structure() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(Org::BouncyCastle::Cms::OriginatorInformation);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::OriginatorInformation, "Org.BouncyCastle.Cms", "OriginatorInformation");
