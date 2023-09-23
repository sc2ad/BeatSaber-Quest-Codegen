#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1::Pkcs {
class ContentInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::Pkcs {
class MacData;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class Pfx;
}
// Type: Org.BouncyCastle.Asn1.Pkcs::Pfx
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(243))
// CS Name: Org.BouncyCastle.Asn1.Pkcs.Pfx
class CORDL_TYPE Pfx : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Pfx() = default;

// Ctor Parameters [CppParam { name: "", ty: "Pfx", modifiers: " const&", def_value: None }]
constexpr Pfx(Pfx const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Pfx", modifiers: "&&", def_value: None }]
constexpr Pfx(Pfx&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Pfx(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr Pfx& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Pfx& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Pfx& operator=(Pfx&& o) noexcept = default;
  constexpr Pfx& operator=(Pfx const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Pkcs::ContentInfo __declspec(property(get=__get_contentInfo, put=__set_contentInfo))  contentInfo;

constexpr void __set_contentInfo(Org::BouncyCastle::Asn1::Pkcs::ContentInfo value) ;

constexpr Org::BouncyCastle::Asn1::Pkcs::ContentInfo __get_contentInfo() const;

 Org::BouncyCastle::Asn1::Pkcs::MacData __declspec(property(get=__get_macData, put=__set_macData))  macData;

constexpr void __set_macData(Org::BouncyCastle::Asn1::Pkcs::MacData value) ;

constexpr Org::BouncyCastle::Asn1::Pkcs::MacData __get_macData() const;


// Properties

 Org::BouncyCastle::Asn1::Pkcs::ContentInfo __declspec(property(get=get_AuthSafe))  AuthSafe;

 Org::BouncyCastle::Asn1::Pkcs::MacData __declspec(property(get=get_MacData))  MacData;


// Methods

/// @brief Method GetInstance addr 0xefc688 size 0xa4 virtual false final false
static Org::BouncyCastle::Asn1::Pkcs::Pfx GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit Pfx(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xefc72c size 0xfc virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "contentInfo", ty: "Org::BouncyCastle::Asn1::Pkcs::ContentInfo", modifiers: "", def_value: None }, CppParam { name: "macData", ty: "Org::BouncyCastle::Asn1::Pkcs::MacData", modifiers: "", def_value: None }]
explicit Pfx(Org::BouncyCastle::Asn1::Pkcs::ContentInfo contentInfo, Org::BouncyCastle::Asn1::Pkcs::MacData macData) ;

/// @brief Method .ctor addr 0xefc828 size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Pkcs::ContentInfo contentInfo, Org::BouncyCastle::Asn1::Pkcs::MacData macData) ;

/// @brief Method get_AuthSafe addr 0xefc854 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Pkcs::ContentInfo get_AuthSafe() ;

/// @brief Method get_MacData addr 0xefc85c size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Pkcs::MacData get_MacData() ;

/// @brief Method ToAsn1Object addr 0xefc864 size 0x1a0 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(Org::BouncyCastle::Asn1::Pkcs::Pfx);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Pkcs::Pfx, "Org.BouncyCastle.Asn1.Pkcs", "Pfx");
