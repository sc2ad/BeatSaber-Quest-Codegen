#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class CmpCertificate;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class CAKeyUpdAnnContent;
}
// Type: Org.BouncyCastle.Asn1.Cmp::CAKeyUpdAnnContent
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10))
// CS Name: Org.BouncyCastle.Asn1.Cmp.CAKeyUpdAnnContent
class CORDL_TYPE CAKeyUpdAnnContent : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~CAKeyUpdAnnContent() = default;

// Ctor Parameters [CppParam { name: "", ty: "CAKeyUpdAnnContent", modifiers: " const&", def_value: None }]
constexpr CAKeyUpdAnnContent(CAKeyUpdAnnContent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CAKeyUpdAnnContent", modifiers: "&&", def_value: None }]
constexpr CAKeyUpdAnnContent(CAKeyUpdAnnContent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CAKeyUpdAnnContent(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr CAKeyUpdAnnContent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CAKeyUpdAnnContent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CAKeyUpdAnnContent& operator=(CAKeyUpdAnnContent&& o) noexcept = default;
  constexpr CAKeyUpdAnnContent& operator=(CAKeyUpdAnnContent const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Cmp::CmpCertificate __declspec(property(get=__get_oldWithNew, put=__set_oldWithNew))  oldWithNew;

constexpr void __set_oldWithNew(Org::BouncyCastle::Asn1::Cmp::CmpCertificate value) ;

constexpr Org::BouncyCastle::Asn1::Cmp::CmpCertificate __get_oldWithNew() const;

 Org::BouncyCastle::Asn1::Cmp::CmpCertificate __declspec(property(get=__get_newWithOld, put=__set_newWithOld))  newWithOld;

constexpr void __set_newWithOld(Org::BouncyCastle::Asn1::Cmp::CmpCertificate value) ;

constexpr Org::BouncyCastle::Asn1::Cmp::CmpCertificate __get_newWithOld() const;

 Org::BouncyCastle::Asn1::Cmp::CmpCertificate __declspec(property(get=__get_newWithNew, put=__set_newWithNew))  newWithNew;

constexpr void __set_newWithNew(Org::BouncyCastle::Asn1::Cmp::CmpCertificate value) ;

constexpr Org::BouncyCastle::Asn1::Cmp::CmpCertificate __get_newWithNew() const;


// Properties

 Org::BouncyCastle::Asn1::Cmp::CmpCertificate __declspec(property(get=get_OldWithNew))  OldWithNew;

 Org::BouncyCastle::Asn1::Cmp::CmpCertificate __declspec(property(get=get_NewWithOld))  NewWithOld;

 Org::BouncyCastle::Asn1::Cmp::CmpCertificate __declspec(property(get=get_NewWithNew))  NewWithNew;


// Methods

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit CAKeyUpdAnnContent(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdd6d58 size 0x80 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xdd6fb4 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_OldWithNew addr 0xdd713c size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Cmp::CmpCertificate get_OldWithNew() ;

/// @brief Method get_NewWithOld addr 0xdd7144 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Cmp::CmpCertificate get_NewWithOld() ;

/// @brief Method get_NewWithNew addr 0xdd714c size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Cmp::CmpCertificate get_NewWithNew() ;

/// @brief Method ToAsn1Object addr 0xdd7154 size 0x11c virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cmp::CAKeyUpdAnnContent, "Org.BouncyCastle.Asn1.Cmp", "CAKeyUpdAnnContent");
