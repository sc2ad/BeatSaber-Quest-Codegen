#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiMessage;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiMessages;
}
// Type: Org.BouncyCastle.Asn1.Cmp::PkiMessages
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(40))
// CS Name: Org.BouncyCastle.Asn1.Cmp.PkiMessages
class CORDL_TYPE PkiMessages : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PkiMessages() = default;

// Ctor Parameters [CppParam { name: "", ty: "PkiMessages", modifiers: " const&", def_value: None }]
constexpr PkiMessages(PkiMessages const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PkiMessages", modifiers: "&&", def_value: None }]
constexpr PkiMessages(PkiMessages&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PkiMessages(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr PkiMessages& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PkiMessages& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PkiMessages& operator=(PkiMessages&& o) noexcept = default;
  constexpr PkiMessages& operator=(PkiMessages const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_content, put=__set_content))  content;

constexpr void __set_content(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_content() const;


// Methods

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit PkiMessages(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xddff50 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xddcbf0 size 0x18c virtual false final false
static Org::BouncyCastle::Asn1::Cmp::PkiMessages GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "msgs", ty: "::ArrayW<Org::BouncyCastle::Asn1::Cmp::PkiMessage>", modifiers: "", def_value: None }]
explicit PkiMessages(::ArrayW<Org::BouncyCastle::Asn1::Cmp::PkiMessage> msgs) ;

/// @brief Method .ctor addr 0xddff78 size 0x7c virtual false final false
 void _ctor(::ArrayW<Org::BouncyCastle::Asn1::Cmp::PkiMessage> msgs) ;

/// @brief Method ToPkiMessageArray addr 0xddfff4 size 0xf4 virtual true final false
 ::ArrayW<Org::BouncyCastle::Asn1::Cmp::PkiMessage> ToPkiMessageArray() ;

/// @brief Method ToAsn1Object addr 0xde00e8 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cmp::PkiMessages);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cmp::PkiMessages, "Org.BouncyCastle.Asn1.Cmp", "PkiMessages");
