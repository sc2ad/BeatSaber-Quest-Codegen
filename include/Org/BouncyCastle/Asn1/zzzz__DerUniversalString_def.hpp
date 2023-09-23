#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerStringBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerUniversalString;
}
// Type: Org.BouncyCastle.Asn1::DerUniversalString
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(33))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(518))
// CS Name: Org.BouncyCastle.Asn1.DerUniversalString
class CORDL_TYPE DerUniversalString : public Org::BouncyCastle::Asn1::DerStringBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DerUniversalString() = default;

// Ctor Parameters [CppParam { name: "", ty: "DerUniversalString", modifiers: " const&", def_value: None }]
constexpr DerUniversalString(DerUniversalString const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DerUniversalString", modifiers: "&&", def_value: None }]
constexpr DerUniversalString(DerUniversalString&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DerUniversalString(void* ptr) noexcept : Org::BouncyCastle::Asn1::DerStringBase(ptr) {
}


  constexpr DerUniversalString& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DerUniversalString& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DerUniversalString& operator=(DerUniversalString&& o) noexcept = default;
  constexpr DerUniversalString& operator=(DerUniversalString const& o) noexcept = default;
                


// Fields

static ::ArrayW<char16_t> __declspec(property(get=__get_table, put=__set_table))  table;

static void __set_table(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_table() ;

 ::ArrayW<uint8_t> __declspec(property(get=__get_str, put=__set_str))  str;

constexpr void __set_str(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_str() const;


// Methods

/// @brief Method GetInstance addr 0x1139388 size 0xf0 virtual false final false
static Org::BouncyCastle::Asn1::DerUniversalString GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetInstance addr 0x1139478 size 0xfc virtual false final false
static Org::BouncyCastle::Asn1::DerUniversalString GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool isExplicit) ;

// Ctor Parameters [CppParam { name: "str", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit DerUniversalString(::ArrayW<uint8_t> str) ;

/// @brief Method .ctor addr 0x112c1d4 size 0x78 virtual false final false
 void _ctor(::ArrayW<uint8_t> str) ;

/// @brief Method GetString addr 0x1139574 size 0x16c virtual true final false
 ::StringW GetString() ;

/// @brief Method GetOctets addr 0x11396e0 size 0x78 virtual false final false
 ::ArrayW<uint8_t> GetOctets() ;

/// @brief Method Encode addr 0x1139758 size 0x24 virtual true final false
 void Encode(Org::BouncyCastle::Asn1::DerOutputStream derOut) ;

/// @brief Method Asn1Equals addr 0x113977c size 0xc8 virtual true final false
 bool Asn1Equals(Org::BouncyCastle::Asn1::Asn1Object asn1Object) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(Org::BouncyCastle::Asn1::DerUniversalString);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerUniversalString, "Org.BouncyCastle.Asn1", "DerUniversalString");
