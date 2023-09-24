#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetStringParser;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
// Type: Org.BouncyCastle.Asn1::Asn1OctetString
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(31))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(456))
// CS Name: Org.BouncyCastle.Asn1.Asn1OctetString
class CORDL_TYPE Asn1OctetString : public Org::BouncyCastle::Asn1::Asn1Object {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Asn1::Asn1OctetStringParser
constexpr operator  Org::BouncyCastle::Asn1::Asn1OctetStringParser() const noexcept;

/// @brief Convert operator to Org::BouncyCastle::Asn1::IAsn1Convertible
constexpr operator  Org::BouncyCastle::Asn1::IAsn1Convertible() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Asn1OctetString() = default;

// Ctor Parameters [CppParam { name: "", ty: "Asn1OctetString", modifiers: " const&", def_value: None }]
constexpr Asn1OctetString(Asn1OctetString const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Asn1OctetString", modifiers: "&&", def_value: None }]
constexpr Asn1OctetString(Asn1OctetString&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Asn1OctetString(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Object(ptr) {
}


  constexpr Asn1OctetString& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Asn1OctetString& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Asn1OctetString& operator=(Asn1OctetString&& o) noexcept = default;
  constexpr Asn1OctetString& operator=(Asn1OctetString const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_str, put=__set_str))  str;

constexpr void __set_str(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_str() const;


// Properties

 Org::BouncyCastle::Asn1::Asn1OctetStringParser __declspec(property(get=get_Parser))  Parser;


// Methods

/// @brief Method GetInstance addr 0x112c3b8 size 0xd4 virtual false final false
static Org::BouncyCastle::Asn1::Asn1OctetString GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool isExplicit) ;

/// @brief Method GetInstance addr 0x11255f4 size 0x2b8 virtual false final false
static Org::BouncyCastle::Asn1::Asn1OctetString GetInstance(::bs_hook::Il2CppWrapperType obj) ;

static Org::BouncyCastle::Asn1::Asn1OctetString New_ctor(::ArrayW<uint8_t> str) ;

/// @brief Method .ctor addr 0x112c5b8 size 0x78 virtual false final false
 void _ctor(::ArrayW<uint8_t> str) ;

/// @brief Method GetOctetStream addr 0x112c630 size 0x6c virtual true final true
 System::IO::Stream GetOctetStream() ;

/// @brief Method get_Parser addr 0x112c69c size 0x4 virtual false final false
 Org::BouncyCastle::Asn1::Asn1OctetStringParser get_Parser() ;

/// @brief Method GetOctets addr 0x112c6a0 size 0x8 virtual true final false
 ::ArrayW<uint8_t> GetOctets() ;

/// @brief Method Asn1GetHashCode addr 0x112c6a8 size 0x70 virtual true final false
 int32_t Asn1GetHashCode() ;

/// @brief Method Asn1Equals addr 0x112c718 size 0xec virtual true final false
 bool Asn1Equals(Org::BouncyCastle::Asn1::Asn1Object asn1Object) ;

/// @brief Method ToString addr 0x112c804 size 0x84 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(Org::BouncyCastle::Asn1::Asn1OctetString);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Asn1OctetString, "Org.BouncyCastle.Asn1", "Asn1OctetString");
