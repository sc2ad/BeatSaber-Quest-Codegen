#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Org::BouncyCastle::Asn1::X509 {
class DisplayText;
}
namespace Org::BouncyCastle::Asn1::X509 {
class NoticeReference;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class UserNotice;
}
// Type: Org.BouncyCastle.Asn1.X509::UserNotice
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(395))
// CS Name: Org.BouncyCastle.Asn1.X509.UserNotice
class CORDL_TYPE UserNotice : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~UserNotice() = default;

// Ctor Parameters [CppParam { name: "", ty: "UserNotice", modifiers: " const&", def_value: None }]
constexpr UserNotice(UserNotice const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UserNotice", modifiers: "&&", def_value: None }]
constexpr UserNotice(UserNotice&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UserNotice(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr UserNotice& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UserNotice& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UserNotice& operator=(UserNotice&& o) noexcept = default;
  constexpr UserNotice& operator=(UserNotice const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X509::NoticeReference __declspec(property(get=__get_noticeRef, put=__set_noticeRef))  noticeRef;

constexpr void __set_noticeRef(Org::BouncyCastle::Asn1::X509::NoticeReference value) ;

constexpr Org::BouncyCastle::Asn1::X509::NoticeReference __get_noticeRef() const;

 Org::BouncyCastle::Asn1::X509::DisplayText __declspec(property(get=__get_explicitText, put=__set_explicitText))  explicitText;

constexpr void __set_explicitText(Org::BouncyCastle::Asn1::X509::DisplayText value) ;

constexpr Org::BouncyCastle::Asn1::X509::DisplayText __get_explicitText() const;


// Properties

 Org::BouncyCastle::Asn1::X509::NoticeReference __declspec(property(get=get_NoticeRef))  NoticeRef;

 Org::BouncyCastle::Asn1::X509::DisplayText __declspec(property(get=get_ExplicitText))  ExplicitText;


// Methods

static Org::BouncyCastle::Asn1::X509::UserNotice New_ctor(Org::BouncyCastle::Asn1::X509::NoticeReference noticeRef, Org::BouncyCastle::Asn1::X509::DisplayText explicitText) ;

/// @brief Method .ctor addr 0x11102c0 size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::NoticeReference noticeRef, Org::BouncyCastle::Asn1::X509::DisplayText explicitText) ;

static Org::BouncyCastle::Asn1::X509::UserNotice New_ctor(Org::BouncyCastle::Asn1::X509::NoticeReference noticeRef, ::StringW str) ;

/// @brief Method .ctor addr 0x11102ec size 0x7c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::NoticeReference noticeRef, ::StringW str) ;

static Org::BouncyCastle::Asn1::X509::UserNotice New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0x1110368 size 0x208 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0x1110570 size 0xa4 virtual false final false
static Org::BouncyCastle::Asn1::X509::UserNotice GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_NoticeRef addr 0x1110614 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::X509::NoticeReference get_NoticeRef() ;

/// @brief Method get_ExplicitText addr 0x111061c size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::X509::DisplayText get_ExplicitText() ;

/// @brief Method ToAsn1Object addr 0x1110624 size 0x134 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::UserNotice);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::UserNotice, "Org.BouncyCastle.Asn1.X509", "UserNotice");
