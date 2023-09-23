#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class Asn1Tags;
}
// Type: Org.BouncyCastle.Asn1::Asn1Tags
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(470))
// CS Name: Org.BouncyCastle.Asn1.Asn1Tags
class CORDL_TYPE Asn1Tags : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Asn1Tags() = default;

// Ctor Parameters [CppParam { name: "", ty: "Asn1Tags", modifiers: " const&", def_value: None }]
constexpr Asn1Tags(Asn1Tags const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Asn1Tags", modifiers: "&&", def_value: None }]
constexpr Asn1Tags(Asn1Tags&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Asn1Tags(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Asn1Tags& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Asn1Tags& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Asn1Tags& operator=(Asn1Tags&& o) noexcept = default;
  constexpr Asn1Tags& operator=(Asn1Tags const& o) noexcept = default;
                


// Fields

/// @brief Field Boolean offset 0
static constexpr int32_t  Boolean{1};

/// @brief Field Integer offset 0
static constexpr int32_t  Integer{2};

/// @brief Field BitString offset 0
static constexpr int32_t  BitString{3};

/// @brief Field OctetString offset 0
static constexpr int32_t  OctetString{4};

/// @brief Field Null offset 0
static constexpr int32_t  Null{5};

/// @brief Field ObjectIdentifier offset 0
static constexpr int32_t  ObjectIdentifier{6};

/// @brief Field External offset 0
static constexpr int32_t  External{8};

/// @brief Field Enumerated offset 0
static constexpr int32_t  Enumerated{10};

/// @brief Field Sequence offset 0
static constexpr int32_t  Sequence{16};

/// @brief Field SequenceOf offset 0
static constexpr int32_t  SequenceOf{16};

/// @brief Field Set offset 0
static constexpr int32_t  Set{17};

/// @brief Field SetOf offset 0
static constexpr int32_t  SetOf{17};

/// @brief Field NumericString offset 0
static constexpr int32_t  NumericString{18};

/// @brief Field PrintableString offset 0
static constexpr int32_t  PrintableString{19};

/// @brief Field T61String offset 0
static constexpr int32_t  T61String{20};

/// @brief Field VideotexString offset 0
static constexpr int32_t  VideotexString{21};

/// @brief Field IA5String offset 0
static constexpr int32_t  IA5String{22};

/// @brief Field UtcTime offset 0
static constexpr int32_t  UtcTime{23};

/// @brief Field GeneralizedTime offset 0
static constexpr int32_t  GeneralizedTime{24};

/// @brief Field GraphicString offset 0
static constexpr int32_t  GraphicString{25};

/// @brief Field VisibleString offset 0
static constexpr int32_t  VisibleString{26};

/// @brief Field GeneralString offset 0
static constexpr int32_t  GeneralString{27};

/// @brief Field UniversalString offset 0
static constexpr int32_t  UniversalString{28};

/// @brief Field BmpString offset 0
static constexpr int32_t  BmpString{30};

/// @brief Field Utf8String offset 0
static constexpr int32_t  Utf8String{12};

/// @brief Field Constructed offset 0
static constexpr int32_t  Constructed{32};

/// @brief Field Application offset 0
static constexpr int32_t  Application{64};

/// @brief Field Tagged offset 0
static constexpr int32_t  Tagged{128};


// Methods

// Ctor Parameters []
explicit Asn1Tags() ;

/// @brief Method .ctor addr 0x1130214 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(Org::BouncyCastle::Asn1::Asn1Tags);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Asn1Tags, "Org.BouncyCastle.Asn1", "Asn1Tags");
