#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiConfirmContent;
}
// Type: Org.BouncyCastle.Asn1.Cmp::PkiConfirmContent
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(30))
// CS Name: Org.BouncyCastle.Asn1.Cmp.PkiConfirmContent
class CORDL_TYPE PkiConfirmContent : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PkiConfirmContent() = default;

// Ctor Parameters [CppParam { name: "", ty: "PkiConfirmContent", modifiers: " const&", def_value: None }]
constexpr PkiConfirmContent(PkiConfirmContent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PkiConfirmContent", modifiers: "&&", def_value: None }]
constexpr PkiConfirmContent(PkiConfirmContent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PkiConfirmContent(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr PkiConfirmContent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PkiConfirmContent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PkiConfirmContent& operator=(PkiConfirmContent&& o) noexcept = default;
  constexpr PkiConfirmContent& operator=(PkiConfirmContent const& o) noexcept = default;
                


// Methods

/// @brief Method GetInstance addr 0xddcaa0 size 0x150 virtual false final false
static Org::BouncyCastle::Asn1::Cmp::PkiConfirmContent GetInstance(::bs_hook::Il2CppWrapperType obj) ;

static Org::BouncyCastle::Asn1::Cmp::PkiConfirmContent New_ctor() ;

/// @brief Method .ctor addr 0xddd114 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method ToAsn1Object addr 0xddd11c size 0x58 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cmp::PkiConfirmContent);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cmp::PkiConfirmContent, "Org.BouncyCastle.Asn1.Cmp", "PkiConfirmContent");
