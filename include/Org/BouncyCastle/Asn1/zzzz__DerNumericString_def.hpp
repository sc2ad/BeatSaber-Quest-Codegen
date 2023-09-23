#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerStringBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerNumericString;
}
// Type: Org.BouncyCastle.Asn1::DerNumericString
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(33))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(510))
// CS Name: Org.BouncyCastle.Asn1.DerNumericString
class CORDL_TYPE DerNumericString : public Org::BouncyCastle::Asn1::DerStringBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DerNumericString() = default;

// Ctor Parameters [CppParam { name: "", ty: "DerNumericString", modifiers: " const&", def_value: None }]
constexpr DerNumericString(DerNumericString const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DerNumericString", modifiers: "&&", def_value: None }]
constexpr DerNumericString(DerNumericString&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DerNumericString(void* ptr) noexcept : Org::BouncyCastle::Asn1::DerStringBase(ptr) {
}


  constexpr DerNumericString& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DerNumericString& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DerNumericString& operator=(DerNumericString&& o) noexcept = default;
  constexpr DerNumericString& operator=(DerNumericString const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_str, put=__set_str))  str;

constexpr void __set_str(::StringW value) ;

constexpr ::StringW __get_str() const;


// Methods

/// @brief Method GetInstance addr 0x11380fc size 0xf0 virtual false final false
static Org::BouncyCastle::Asn1::DerNumericString GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetInstance addr 0x11381ec size 0xec virtual false final false
static Org::BouncyCastle::Asn1::DerNumericString GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool isExplicit) ;

// Ctor Parameters [CppParam { name: "str", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit DerNumericString(::ArrayW<uint8_t> str) ;

/// @brief Method .ctor addr 0x112c160 size 0x28 virtual false final false
 void _ctor(::ArrayW<uint8_t> str) ;

// Ctor Parameters [CppParam { name: "str", ty: "::StringW", modifiers: "", def_value: None }]
explicit DerNumericString(::StringW str) ;

/// @brief Method .ctor addr 0x11383b0 size 0x8 virtual false final false
 void _ctor(::StringW str) ;

// Ctor Parameters [CppParam { name: "str", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "validate", ty: "bool", modifiers: "", def_value: None }]
explicit DerNumericString(::StringW str, bool validate) ;

/// @brief Method .ctor addr 0x11382d8 size 0xd8 virtual false final false
 void _ctor(::StringW str, bool validate) ;

/// @brief Method GetString addr 0x113847c size 0x8 virtual true final false
 ::StringW GetString() ;

/// @brief Method GetOctets addr 0x1138484 size 0xc virtual false final false
 ::ArrayW<uint8_t> GetOctets() ;

/// @brief Method Encode addr 0x1138490 size 0x30 virtual true final false
 void Encode(Org::BouncyCastle::Asn1::DerOutputStream derOut) ;

/// @brief Method Asn1Equals addr 0x11384c0 size 0xa0 virtual true final false
 bool Asn1Equals(Org::BouncyCastle::Asn1::Asn1Object asn1Object) ;

/// @brief Method IsNumericString addr 0x11383b8 size 0xc4 virtual false final false
static bool IsNumericString(::StringW str) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(Org::BouncyCastle::Asn1::DerNumericString);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerNumericString, "Org.BouncyCastle.Asn1", "DerNumericString");
