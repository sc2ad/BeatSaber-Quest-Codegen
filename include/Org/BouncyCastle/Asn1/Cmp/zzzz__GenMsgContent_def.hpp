#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Org::BouncyCastle::Asn1::Cmp {
class InfoTypeAndValue;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class GenMsgContent;
}
// Type: Org.BouncyCastle.Asn1.Cmp::GenMsgContent
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(23))
// CS Name: Org.BouncyCastle.Asn1.Cmp.GenMsgContent
class CORDL_TYPE GenMsgContent : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GenMsgContent() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenMsgContent", modifiers: " const&", def_value: None }]
constexpr GenMsgContent(GenMsgContent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenMsgContent", modifiers: "&&", def_value: None }]
constexpr GenMsgContent(GenMsgContent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenMsgContent(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr GenMsgContent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenMsgContent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenMsgContent& operator=(GenMsgContent&& o) noexcept = default;
  constexpr GenMsgContent& operator=(GenMsgContent const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_content, put=__set_content))  content;

constexpr void __set_content(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_content() const;


// Methods

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit GenMsgContent(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdda460 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xdda488 size 0x18c virtual false final false
static Org::BouncyCastle::Asn1::Cmp::GenMsgContent GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "itv", ty: "::ArrayW<Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue>", modifiers: "", def_value: None }]
explicit GenMsgContent(::ArrayW<Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue> itv) ;

/// @brief Method .ctor addr 0xdda614 size 0x7c virtual false final false
 void _ctor(::ArrayW<Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue> itv) ;

/// @brief Method ToInfoTypeAndValueArray addr 0xdda690 size 0xf4 virtual true final false
 ::ArrayW<Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue> ToInfoTypeAndValueArray() ;

/// @brief Method ToAsn1Object addr 0xdda90c size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cmp::GenMsgContent);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cmp::GenMsgContent, "Org.BouncyCastle.Asn1.Cmp", "GenMsgContent");
