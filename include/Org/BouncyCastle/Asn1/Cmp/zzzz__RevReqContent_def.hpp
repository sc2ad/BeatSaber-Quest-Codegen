#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class RevDetails;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class RevReqContent;
}
// Type: Org.BouncyCastle.Asn1.Cmp::RevReqContent
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(53))
// CS Name: Org.BouncyCastle.Asn1.Cmp.RevReqContent
class CORDL_TYPE RevReqContent : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~RevReqContent() = default;

// Ctor Parameters [CppParam { name: "", ty: "RevReqContent", modifiers: " const&", def_value: None }]
constexpr RevReqContent(RevReqContent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RevReqContent", modifiers: "&&", def_value: None }]
constexpr RevReqContent(RevReqContent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RevReqContent(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr RevReqContent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RevReqContent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RevReqContent& operator=(RevReqContent&& o) noexcept = default;
  constexpr RevReqContent& operator=(RevReqContent const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_content, put=__set_content))  content;

constexpr void __set_content(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_content() const;


// Methods

static Org::BouncyCastle::Asn1::Cmp::RevReqContent New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xde2368 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xddc604 size 0x18c virtual false final false
static Org::BouncyCastle::Asn1::Cmp::RevReqContent GetInstance(::bs_hook::Il2CppWrapperType obj) ;

static Org::BouncyCastle::Asn1::Cmp::RevReqContent New_ctor(::ArrayW<Org::BouncyCastle::Asn1::Cmp::RevDetails> revDetails) ;

/// @brief Method .ctor addr 0xde2390 size 0x7c virtual false final false
 void _ctor(::ArrayW<Org::BouncyCastle::Asn1::Cmp::RevDetails> revDetails) ;

/// @brief Method ToRevDetailsArray addr 0xde240c size 0xf4 virtual true final false
 ::ArrayW<Org::BouncyCastle::Asn1::Cmp::RevDetails> ToRevDetailsArray() ;

/// @brief Method ToAsn1Object addr 0xde2500 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cmp::RevReqContent);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cmp::RevReqContent, "Org.BouncyCastle.Asn1.Cmp", "RevReqContent");
