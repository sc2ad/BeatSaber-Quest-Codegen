#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Misc {
class IdeaCbcPar;
}
// Type: Org.BouncyCastle.Asn1.Misc::IdeaCbcPar
namespace Org::BouncyCastle::Asn1::Misc {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(196))
// CS Name: Org.BouncyCastle.Asn1.Misc.IdeaCbcPar
class CORDL_TYPE IdeaCbcPar : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~IdeaCbcPar() = default;

// Ctor Parameters [CppParam { name: "", ty: "IdeaCbcPar", modifiers: " const&", def_value: None }]
constexpr IdeaCbcPar(IdeaCbcPar const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IdeaCbcPar", modifiers: "&&", def_value: None }]
constexpr IdeaCbcPar(IdeaCbcPar&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IdeaCbcPar(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr IdeaCbcPar& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IdeaCbcPar& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IdeaCbcPar& operator=(IdeaCbcPar&& o) noexcept = default;
  constexpr IdeaCbcPar& operator=(IdeaCbcPar const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_iv, put=__set_iv))  iv;

constexpr void __set_iv(::Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString __get_iv() const;


// Methods

/// @brief Method GetInstance addr 0xeee0e4 size 0x148 virtual false final false
static ::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar GetInstance(::bs_hook::Il2CppWrapperType o) ;

// Ctor Parameters [CppParam { name: "iv", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit IdeaCbcPar(::ArrayW<uint8_t> iv) ;

/// @brief Method .ctor addr 0xeee310 size 0x7c virtual false final false
 void _ctor(::ArrayW<uint8_t> iv) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit IdeaCbcPar(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xeee22c size 0xe4 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetIV addr 0xeee38c size 0x18 virtual false final false
 ::ArrayW<uint8_t> GetIV() ;

/// @brief Method ToAsn1Object addr 0xeee3a4 size 0x108 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Misc
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Misc::IdeaCbcPar, "Org.BouncyCastle.Asn1.Misc", "IdeaCbcPar");
