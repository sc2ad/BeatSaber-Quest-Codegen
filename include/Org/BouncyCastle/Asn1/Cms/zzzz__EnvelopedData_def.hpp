#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::Cms {
class EncryptedContentInfo;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1::Cms {
class Attributes;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class EnvelopedData;
}
// Type: Org.BouncyCastle.Asn1.Cms::EnvelopedData
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(71))
// CS Name: Org.BouncyCastle.Asn1.Cms.EnvelopedData
class CORDL_TYPE EnvelopedData : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~EnvelopedData() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvelopedData", modifiers: " const&", def_value: None }]
constexpr EnvelopedData(EnvelopedData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvelopedData", modifiers: "&&", def_value: None }]
constexpr EnvelopedData(EnvelopedData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnvelopedData(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr EnvelopedData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnvelopedData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnvelopedData& operator=(EnvelopedData&& o) noexcept = default;
  constexpr EnvelopedData& operator=(EnvelopedData const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(::Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger __get_version() const;

 ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo __declspec(property(get=__get_originatorInfo, put=__set_originatorInfo))  originatorInfo;

constexpr void __set_originatorInfo(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo __get_originatorInfo() const;

 ::Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=__get_recipientInfos, put=__set_recipientInfos))  recipientInfos;

constexpr void __set_recipientInfos(::Org::BouncyCastle::Asn1::Asn1Set value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Set __get_recipientInfos() const;

 ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo __declspec(property(get=__get_encryptedContentInfo, put=__set_encryptedContentInfo))  encryptedContentInfo;

constexpr void __set_encryptedContentInfo(::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo __get_encryptedContentInfo() const;

 ::Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=__get_unprotectedAttrs, put=__set_unprotectedAttrs))  unprotectedAttrs;

constexpr void __set_unprotectedAttrs(::Org::BouncyCastle::Asn1::Asn1Set value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Set __get_unprotectedAttrs() const;


// Properties

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_Version))  Version;

 ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo __declspec(property(get=get_OriginatorInfo))  OriginatorInfo;

 ::Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=get_RecipientInfos))  RecipientInfos;

 ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo __declspec(property(get=get_EncryptedContentInfo))  EncryptedContentInfo;

 ::Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=get_UnprotectedAttrs))  UnprotectedAttrs;


// Methods

// Ctor Parameters [CppParam { name: "originatorInfo", ty: "::Org::BouncyCastle::Asn1::Cms::OriginatorInfo", modifiers: "", def_value: None }, CppParam { name: "recipientInfos", ty: "::Org::BouncyCastle::Asn1::Asn1Set", modifiers: "", def_value: None }, CppParam { name: "encryptedContentInfo", ty: "::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo", modifiers: "", def_value: None }, CppParam { name: "unprotectedAttrs", ty: "::Org::BouncyCastle::Asn1::Asn1Set", modifiers: "", def_value: None }]
explicit EnvelopedData(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo originatorInfo, ::Org::BouncyCastle::Asn1::Asn1Set recipientInfos, ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo encryptedContentInfo, ::Org::BouncyCastle::Asn1::Asn1Set unprotectedAttrs) ;

/// @brief Method .ctor addr 0xde9c18 size 0xb0 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo originatorInfo, ::Org::BouncyCastle::Asn1::Asn1Set recipientInfos, ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo encryptedContentInfo, ::Org::BouncyCastle::Asn1::Asn1Set unprotectedAttrs) ;

// Ctor Parameters [CppParam { name: "originatorInfo", ty: "::Org::BouncyCastle::Asn1::Cms::OriginatorInfo", modifiers: "", def_value: None }, CppParam { name: "recipientInfos", ty: "::Org::BouncyCastle::Asn1::Asn1Set", modifiers: "", def_value: None }, CppParam { name: "encryptedContentInfo", ty: "::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo", modifiers: "", def_value: None }, CppParam { name: "unprotectedAttrs", ty: "::Org::BouncyCastle::Asn1::Cms::Attributes", modifiers: "", def_value: None }]
explicit EnvelopedData(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo originatorInfo, ::Org::BouncyCastle::Asn1::Asn1Set recipientInfos, ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo encryptedContentInfo, ::Org::BouncyCastle::Asn1::Cms::Attributes unprotectedAttrs) ;

/// @brief Method .ctor addr 0xde9fa8 size 0xc8 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo originatorInfo, ::Org::BouncyCastle::Asn1::Asn1Set recipientInfos, ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo encryptedContentInfo, ::Org::BouncyCastle::Asn1::Cms::Attributes unprotectedAttrs) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit EnvelopedData(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdea070 size 0x1fc virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xdea26c size 0x18 virtual false final false
static ::Org::BouncyCastle::Asn1::Cms::EnvelopedData GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

/// @brief Method GetInstance addr 0xdea284 size 0xa4 virtual false final false
static ::Org::BouncyCastle::Asn1::Cms::EnvelopedData GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_Version addr 0xdea328 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::DerInteger get_Version() ;

/// @brief Method get_OriginatorInfo addr 0xdea330 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo get_OriginatorInfo() ;

/// @brief Method get_RecipientInfos addr 0xdea338 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Asn1Set get_RecipientInfos() ;

/// @brief Method get_EncryptedContentInfo addr 0xdea340 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo get_EncryptedContentInfo() ;

/// @brief Method get_UnprotectedAttrs addr 0xdea348 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Asn1Set get_UnprotectedAttrs() ;

/// @brief Method ToAsn1Object addr 0xdea350 size 0x1a4 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

/// @brief Method CalculateVersion addr 0xde9cc8 size 0x2e0 virtual false final false
static int32_t CalculateVersion(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo originatorInfo, ::Org::BouncyCastle::Asn1::Asn1Set recipientInfos, ::Org::BouncyCastle::Asn1::Asn1Set unprotectedAttrs) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cms
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::EnvelopedData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::EnvelopedData, "Org.BouncyCastle.Asn1.Cms", "EnvelopedData");
