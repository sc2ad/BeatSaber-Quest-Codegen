#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class InfoTypeAndValue;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class GenRepContent;
}
// Type: Org.BouncyCastle.Asn1.Cmp::GenRepContent
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(24))
// CS Name: Org.BouncyCastle.Asn1.Cmp.GenRepContent
class CORDL_TYPE GenRepContent : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GenRepContent() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenRepContent", modifiers: " const&", def_value: None }]
constexpr GenRepContent(GenRepContent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenRepContent", modifiers: "&&", def_value: None }]
constexpr GenRepContent(GenRepContent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenRepContent(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr GenRepContent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenRepContent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenRepContent& operator=(GenRepContent&& o) noexcept = default;
  constexpr GenRepContent& operator=(GenRepContent const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_content, put=__set_content))  content;

constexpr void __set_content(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_content() const;


// Methods

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit GenRepContent(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdda914 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xdda93c size 0x18c virtual false final false
static Org::BouncyCastle::Asn1::Cmp::GenRepContent GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "itv", ty: "::ArrayW<Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue>", modifiers: "", def_value: None }]
explicit GenRepContent(::ArrayW<Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue> itv) ;

/// @brief Method .ctor addr 0xddaac8 size 0x7c virtual false final false
 void _ctor(::ArrayW<Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue> itv) ;

/// @brief Method ToInfoTypeAndValueArray addr 0xddab44 size 0xf4 virtual true final false
 ::ArrayW<Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue> ToInfoTypeAndValueArray() ;

/// @brief Method ToAsn1Object addr 0xddac38 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cmp::GenRepContent);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cmp::GenRepContent, "Org.BouncyCastle.Asn1.Cmp", "GenRepContent");
