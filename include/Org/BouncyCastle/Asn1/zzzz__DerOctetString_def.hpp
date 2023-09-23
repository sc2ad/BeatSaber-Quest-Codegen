#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerOctetString;
}
// Type: Org.BouncyCastle.Asn1::DerOctetString
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(456))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(479))
// CS Name: Org.BouncyCastle.Asn1.DerOctetString
class CORDL_TYPE DerOctetString : public Org::BouncyCastle::Asn1::Asn1OctetString {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DerOctetString() = default;

// Ctor Parameters [CppParam { name: "", ty: "DerOctetString", modifiers: " const&", def_value: None }]
constexpr DerOctetString(DerOctetString const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DerOctetString", modifiers: "&&", def_value: None }]
constexpr DerOctetString(DerOctetString&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DerOctetString(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1OctetString(ptr) {
}


  constexpr DerOctetString& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DerOctetString& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DerOctetString& operator=(DerOctetString&& o) noexcept = default;
  constexpr DerOctetString& operator=(DerOctetString const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "str", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit DerOctetString(::ArrayW<uint8_t> str) ;

/// @brief Method .ctor addr 0x1126da4 size 0x4 virtual false final false
 void _ctor(::ArrayW<uint8_t> str) ;

// Ctor Parameters [CppParam { name: "obj", ty: "Org::BouncyCastle::Asn1::IAsn1Convertible", modifiers: "", def_value: None }]
explicit DerOctetString(Org::BouncyCastle::Asn1::IAsn1Convertible obj) ;

/// @brief Method .ctor addr 0x113125c size 0xac virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::IAsn1Convertible obj) ;

// Ctor Parameters [CppParam { name: "obj", ty: "Org::BouncyCastle::Asn1::Asn1Encodable", modifiers: "", def_value: None }]
explicit DerOctetString(Org::BouncyCastle::Asn1::Asn1Encodable obj) ;

/// @brief Method .ctor addr 0x1131308 size 0x64 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Encodable obj) ;

/// @brief Method Encode addr 0x113136c size 0x24 virtual true final false
 void Encode(Org::BouncyCastle::Asn1::DerOutputStream derOut) ;

/// @brief Method Encode addr 0x1131390 size 0x70 virtual false final false
static void Encode(Org::BouncyCastle::Asn1::DerOutputStream derOut, ::ArrayW<uint8_t> bytes, int32_t offset, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(Org::BouncyCastle::Asn1::DerOctetString);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerOctetString, "Org.BouncyCastle.Asn1", "DerOctetString");
