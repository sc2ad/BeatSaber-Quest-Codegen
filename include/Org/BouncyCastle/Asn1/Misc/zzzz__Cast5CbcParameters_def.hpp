#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Misc {
class Cast5CbcParameters;
}
// Type: Org.BouncyCastle.Asn1.Misc::Cast5CbcParameters
namespace Org::BouncyCastle::Asn1::Misc {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(195))
// CS Name: Org.BouncyCastle.Asn1.Misc.Cast5CbcParameters
class CORDL_TYPE Cast5CbcParameters : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Cast5CbcParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "Cast5CbcParameters", modifiers: " const&", def_value: None }]
constexpr Cast5CbcParameters(Cast5CbcParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Cast5CbcParameters", modifiers: "&&", def_value: None }]
constexpr Cast5CbcParameters(Cast5CbcParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Cast5CbcParameters(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr Cast5CbcParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Cast5CbcParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Cast5CbcParameters& operator=(Cast5CbcParameters&& o) noexcept = default;
  constexpr Cast5CbcParameters& operator=(Cast5CbcParameters const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_keyLength, put=__set_keyLength))  keyLength;

constexpr void __set_keyLength(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_keyLength() const;

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_iv, put=__set_iv))  iv;

constexpr void __set_iv(Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr Org::BouncyCastle::Asn1::Asn1OctetString __get_iv() const;


// Properties

 int32_t __declspec(property(get=get_KeyLength))  KeyLength;


// Methods

/// @brief Method GetInstance addr 0xeedb9c size 0x148 virtual false final false
static Org::BouncyCastle::Asn1::Misc::Cast5CbcParameters GetInstance(::bs_hook::Il2CppWrapperType o) ;

static Org::BouncyCastle::Asn1::Misc::Cast5CbcParameters New_ctor(::ArrayW<uint8_t> iv, int32_t keyLength) ;

/// @brief Method .ctor addr 0xeedeac size 0xb4 virtual false final false
 void _ctor(::ArrayW<uint8_t> iv, int32_t keyLength) ;

static Org::BouncyCastle::Asn1::Misc::Cast5CbcParameters New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xeedce4 size 0x1c8 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetIV addr 0xeedf60 size 0x78 virtual false final false
 ::ArrayW<uint8_t> GetIV() ;

/// @brief Method get_KeyLength addr 0xeedfd8 size 0x1c virtual false final false
 int32_t get_KeyLength() ;

/// @brief Method ToAsn1Object addr 0xeedff4 size 0xf0 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Misc
NEED_NO_BOX(Org::BouncyCastle::Asn1::Misc::Cast5CbcParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Misc::Cast5CbcParameters, "Org.BouncyCastle.Asn1.Misc", "Cast5CbcParameters");
