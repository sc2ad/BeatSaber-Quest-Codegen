#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Org::BouncyCastle::Asn1::X509 {
class DisplayText;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class NoticeReference;
}
// Type: Org.BouncyCastle.Asn1.X509::NoticeReference
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(371))
// CS Name: Org.BouncyCastle.Asn1.X509.NoticeReference
class CORDL_TYPE NoticeReference : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~NoticeReference() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoticeReference", modifiers: " const&", def_value: None }]
constexpr NoticeReference(NoticeReference const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoticeReference", modifiers: "&&", def_value: None }]
constexpr NoticeReference(NoticeReference&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoticeReference(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr NoticeReference& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoticeReference& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoticeReference& operator=(NoticeReference&& o) noexcept = default;
  constexpr NoticeReference& operator=(NoticeReference const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X509::DisplayText __declspec(property(get=__get_organization, put=__set_organization))  organization;

constexpr void __set_organization(Org::BouncyCastle::Asn1::X509::DisplayText value) ;

constexpr Org::BouncyCastle::Asn1::X509::DisplayText __get_organization() const;

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_noticeNumbers, put=__set_noticeNumbers))  noticeNumbers;

constexpr void __set_noticeNumbers(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_noticeNumbers() const;


// Properties

 Org::BouncyCastle::Asn1::X509::DisplayText __declspec(property(get=get_Organization))  Organization;


// Methods

/// @brief Method ConvertVector addr 0x1108ce0 size 0x47c virtual false final false
static Org::BouncyCastle::Asn1::Asn1EncodableVector ConvertVector(System::Collections::IList numbers) ;

// Ctor Parameters [CppParam { name: "organization", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "numbers", ty: "System::Collections::IList", modifiers: "", def_value: None }]
explicit NoticeReference(::StringW organization, System::Collections::IList numbers) ;

/// @brief Method .ctor addr 0x110915c size 0x30 virtual false final false
 void _ctor(::StringW organization, System::Collections::IList numbers) ;

// Ctor Parameters [CppParam { name: "organization", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "noticeNumbers", ty: "Org::BouncyCastle::Asn1::Asn1EncodableVector", modifiers: "", def_value: None }]
explicit NoticeReference(::StringW organization, Org::BouncyCastle::Asn1::Asn1EncodableVector noticeNumbers) ;

/// @brief Method .ctor addr 0x110918c size 0x78 virtual false final false
 void _ctor(::StringW organization, Org::BouncyCastle::Asn1::Asn1EncodableVector noticeNumbers) ;

// Ctor Parameters [CppParam { name: "organization", ty: "Org::BouncyCastle::Asn1::X509::DisplayText", modifiers: "", def_value: None }, CppParam { name: "noticeNumbers", ty: "Org::BouncyCastle::Asn1::Asn1EncodableVector", modifiers: "", def_value: None }]
explicit NoticeReference(Org::BouncyCastle::Asn1::X509::DisplayText organization, Org::BouncyCastle::Asn1::Asn1EncodableVector noticeNumbers) ;

/// @brief Method .ctor addr 0x1109204 size 0x84 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::DisplayText organization, Org::BouncyCastle::Asn1::Asn1EncodableVector noticeNumbers) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit NoticeReference(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0x1109288 size 0x11c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0x11093a4 size 0xa4 virtual false final false
static Org::BouncyCastle::Asn1::X509::NoticeReference GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_Organization addr 0x1109448 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::X509::DisplayText get_Organization() ;

/// @brief Method GetNoticeNumbers addr 0x1109450 size 0x114 virtual true final false
 ::ArrayW<Org::BouncyCastle::Asn1::DerInteger> GetNoticeNumbers() ;

/// @brief Method ToAsn1Object addr 0x1109564 size 0xf0 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::NoticeReference);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::NoticeReference, "Org.BouncyCastle.Asn1.X509", "NoticeReference");
