#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Org::BouncyCastle::Asn1::Cmp {
class Challenge;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class PopoDecKeyChallContent;
}
// Type: Org.BouncyCastle.Asn1.Cmp::PopoDecKeyChallContent
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(46))
// CS Name: Org.BouncyCastle.Asn1.Cmp.PopoDecKeyChallContent
class CORDL_TYPE PopoDecKeyChallContent : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PopoDecKeyChallContent() = default;

// Ctor Parameters [CppParam { name: "", ty: "PopoDecKeyChallContent", modifiers: " const&", def_value: None }]
constexpr PopoDecKeyChallContent(PopoDecKeyChallContent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PopoDecKeyChallContent", modifiers: "&&", def_value: None }]
constexpr PopoDecKeyChallContent(PopoDecKeyChallContent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PopoDecKeyChallContent(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr PopoDecKeyChallContent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PopoDecKeyChallContent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PopoDecKeyChallContent& operator=(PopoDecKeyChallContent&& o) noexcept = default;
  constexpr PopoDecKeyChallContent& operator=(PopoDecKeyChallContent const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_content, put=__set_content))  content;

constexpr void __set_content(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_content() const;


// Methods

static Org::BouncyCastle::Asn1::Cmp::PopoDecKeyChallContent New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xde0e24 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xddc2ec size 0x18c virtual false final false
static Org::BouncyCastle::Asn1::Cmp::PopoDecKeyChallContent GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method ToChallengeArray addr 0xde0e4c size 0xf4 virtual true final false
 ::ArrayW<Org::BouncyCastle::Asn1::Cmp::Challenge> ToChallengeArray() ;

/// @brief Method ToAsn1Object addr 0xde0f40 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cmp::PopoDecKeyChallContent);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cmp::PopoDecKeyChallContent, "Org.BouncyCastle.Asn1.Cmp", "PopoDecKeyChallContent");
