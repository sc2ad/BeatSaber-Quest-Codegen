#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1::Cms {
class KeyTransRecipientInfo;
}
namespace Org::BouncyCastle::Asn1::Cms {
class OtherRecipientInfo;
}
namespace Org::BouncyCastle::Asn1::Cms {
class PasswordRecipientInfo;
}
namespace Org::BouncyCastle::Asn1::Cms {
class KeyAgreeRecipientInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1::Cms {
class KekRecipientInfo;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class RecipientInfo;
}
// Type: Org.BouncyCastle.Asn1.Cms::RecipientInfo
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(90))
// CS Name: Org.BouncyCastle.Asn1.Cms.RecipientInfo
class CORDL_TYPE RecipientInfo : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Asn1::IAsn1Choice
constexpr operator  Org::BouncyCastle::Asn1::IAsn1Choice() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~RecipientInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "RecipientInfo", modifiers: " const&", def_value: None }]
constexpr RecipientInfo(RecipientInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RecipientInfo", modifiers: "&&", def_value: None }]
constexpr RecipientInfo(RecipientInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RecipientInfo(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr RecipientInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RecipientInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RecipientInfo& operator=(RecipientInfo&& o) noexcept = default;
  constexpr RecipientInfo& operator=(RecipientInfo const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=__get_info, put=__set_info))  info;

constexpr void __set_info(Org::BouncyCastle::Asn1::Asn1Encodable value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Encodable __get_info() const;


// Properties

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_Version))  Version;

 bool __declspec(property(get=get_IsTagged))  IsTagged;

 Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=get_Info))  Info;


// Methods

// Ctor Parameters [CppParam { name: "info", ty: "Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo", modifiers: "", def_value: None }]
explicit RecipientInfo(Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo info) ;

/// @brief Method .ctor addr 0xdef99c size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo info) ;

// Ctor Parameters [CppParam { name: "info", ty: "Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo", modifiers: "", def_value: None }]
explicit RecipientInfo(Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo info) ;

/// @brief Method .ctor addr 0xdef9c4 size 0x84 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo info) ;

// Ctor Parameters [CppParam { name: "info", ty: "Org::BouncyCastle::Asn1::Cms::KekRecipientInfo", modifiers: "", def_value: None }]
explicit RecipientInfo(Org::BouncyCastle::Asn1::Cms::KekRecipientInfo info) ;

/// @brief Method .ctor addr 0xdefa48 size 0x84 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Cms::KekRecipientInfo info) ;

// Ctor Parameters [CppParam { name: "info", ty: "Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo", modifiers: "", def_value: None }]
explicit RecipientInfo(Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo info) ;

/// @brief Method .ctor addr 0xdefacc size 0x84 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo info) ;

// Ctor Parameters [CppParam { name: "info", ty: "Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo", modifiers: "", def_value: None }]
explicit RecipientInfo(Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo info) ;

/// @brief Method .ctor addr 0xdefb50 size 0x84 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo info) ;

// Ctor Parameters [CppParam { name: "info", ty: "Org::BouncyCastle::Asn1::Asn1Object", modifiers: "", def_value: None }]
explicit RecipientInfo(Org::BouncyCastle::Asn1::Asn1Object info) ;

/// @brief Method .ctor addr 0xdefbd4 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Object info) ;

/// @brief Method GetInstance addr 0xdea4f4 size 0x1b4 virtual false final false
static Org::BouncyCastle::Asn1::Cms::RecipientInfo GetInstance(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method get_Version addr 0xdea6a8 size 0x16c virtual false final false
 Org::BouncyCastle::Asn1::DerInteger get_Version() ;

/// @brief Method get_IsTagged addr 0xdefc20 size 0x7c virtual false final false
 bool get_IsTagged() ;

/// @brief Method get_Info addr 0xdefc9c size 0x140 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Encodable get_Info() ;

/// @brief Method GetKekInfo addr 0xdefbfc size 0x24 virtual false final false
 Org::BouncyCastle::Asn1::Cms::KekRecipientInfo GetKekInfo(Org::BouncyCastle::Asn1::Asn1TaggedObject o) ;

/// @brief Method ToAsn1Object addr 0xdefddc size 0x20 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cms::RecipientInfo);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cms::RecipientInfo, "Org.BouncyCastle.Asn1.Cms", "RecipientInfo");
