#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
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
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class EncryptedData;
}
// Type: Org.BouncyCastle.Asn1.Cms::EncryptedData
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(70))
// CS Name: Org.BouncyCastle.Asn1.Cms.EncryptedData
class CORDL_TYPE EncryptedData : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~EncryptedData() = default;

// Ctor Parameters [CppParam { name: "", ty: "EncryptedData", modifiers: " const&", def_value: None }]
constexpr EncryptedData(EncryptedData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EncryptedData", modifiers: "&&", def_value: None }]
constexpr EncryptedData(EncryptedData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EncryptedData(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr EncryptedData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EncryptedData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EncryptedData& operator=(EncryptedData&& o) noexcept = default;
  constexpr EncryptedData& operator=(EncryptedData const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_version() const;

 Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo __declspec(property(get=__get_encryptedContentInfo, put=__set_encryptedContentInfo))  encryptedContentInfo;

constexpr void __set_encryptedContentInfo(Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo value) ;

constexpr Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo __get_encryptedContentInfo() const;

 Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=__get_unprotectedAttrs, put=__set_unprotectedAttrs))  unprotectedAttrs;

constexpr void __set_unprotectedAttrs(Org::BouncyCastle::Asn1::Asn1Set value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Set __get_unprotectedAttrs() const;


// Properties

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_Version))  Version;

 Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo __declspec(property(get=get_EncryptedContentInfo))  EncryptedContentInfo;

 Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=get_UnprotectedAttrs))  UnprotectedAttrs;


// Methods

/// @brief Method GetInstance addr 0xde95fc size 0x178 virtual false final false
static Org::BouncyCastle::Asn1::Cms::EncryptedData GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "encInfo", ty: "Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo", modifiers: "", def_value: None }]
explicit EncryptedData(Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo encInfo) ;

/// @brief Method .ctor addr 0xde99a8 size 0x8 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo encInfo) ;

// Ctor Parameters [CppParam { name: "encInfo", ty: "Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo", modifiers: "", def_value: None }, CppParam { name: "unprotectedAttrs", ty: "Org::BouncyCastle::Asn1::Asn1Set", modifiers: "", def_value: None }]
explicit EncryptedData(Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo encInfo, Org::BouncyCastle::Asn1::Asn1Set unprotectedAttrs) ;

/// @brief Method .ctor addr 0xde99b0 size 0xe0 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo encInfo, Org::BouncyCastle::Asn1::Asn1Set unprotectedAttrs) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit EncryptedData(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xde9774 size 0x234 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_Version addr 0xde9a90 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::DerInteger get_Version() ;

/// @brief Method get_EncryptedContentInfo addr 0xde9a98 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Cms::EncryptedContentInfo get_EncryptedContentInfo() ;

/// @brief Method get_UnprotectedAttrs addr 0xde9aa0 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Set get_UnprotectedAttrs() ;

/// @brief Method ToAsn1Object addr 0xde9aa8 size 0x170 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cms::EncryptedData);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cms::EncryptedData, "Org.BouncyCastle.Asn1.Cms", "EncryptedData");
