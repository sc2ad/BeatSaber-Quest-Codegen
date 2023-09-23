#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class PopoDecKeyRespContent;
}
// Type: Org.BouncyCastle.Asn1.Cmp::PopoDecKeyRespContent
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(47))
// CS Name: Org.BouncyCastle.Asn1.Cmp.PopoDecKeyRespContent
class CORDL_TYPE PopoDecKeyRespContent : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PopoDecKeyRespContent() = default;

// Ctor Parameters [CppParam { name: "", ty: "PopoDecKeyRespContent", modifiers: " const&", def_value: None }]
constexpr PopoDecKeyRespContent(PopoDecKeyRespContent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PopoDecKeyRespContent", modifiers: "&&", def_value: None }]
constexpr PopoDecKeyRespContent(PopoDecKeyRespContent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PopoDecKeyRespContent(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr PopoDecKeyRespContent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PopoDecKeyRespContent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PopoDecKeyRespContent& operator=(PopoDecKeyRespContent&& o) noexcept = default;
  constexpr PopoDecKeyRespContent& operator=(PopoDecKeyRespContent const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_content, put=__set_content))  content;

constexpr void __set_content(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_content() const;


// Methods

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit PopoDecKeyRespContent(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xde0f48 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xddc478 size 0x18c virtual false final false
static Org::BouncyCastle::Asn1::Cmp::PopoDecKeyRespContent GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method ToDerIntegerArray addr 0xde0f70 size 0xf8 virtual true final false
 ::ArrayW<Org::BouncyCastle::Asn1::DerInteger> ToDerIntegerArray() ;

/// @brief Method ToAsn1Object addr 0xde1068 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cmp::PopoDecKeyRespContent);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cmp::PopoDecKeyRespContent, "Org.BouncyCastle.Asn1.Cmp", "PopoDecKeyRespContent");
