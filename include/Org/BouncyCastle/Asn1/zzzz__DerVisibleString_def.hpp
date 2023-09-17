#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerStringBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerVisibleString;
}
// Type: Org.BouncyCastle.Asn1::DerVisibleString
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(33))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(522))
// CS Name: Org.BouncyCastle.Asn1.DerVisibleString
class CORDL_TYPE DerVisibleString : public ::Org::BouncyCastle::Asn1::DerStringBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DerVisibleString() = default;

// Ctor Parameters [CppParam { name: "", ty: "DerVisibleString", modifiers: " const&", def_value: None }]
constexpr DerVisibleString(DerVisibleString const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DerVisibleString", modifiers: "&&", def_value: None }]
constexpr DerVisibleString(DerVisibleString&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DerVisibleString(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::DerStringBase(ptr) {
}


  constexpr DerVisibleString& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DerVisibleString& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DerVisibleString& operator=(DerVisibleString&& o) noexcept = default;
  constexpr DerVisibleString& operator=(DerVisibleString const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_str, put=__set_str))  str;

constexpr void __set_str(::StringW value) ;

constexpr ::StringW __get_str() const;


// Methods

/// @brief Method GetInstance addr 0x113ac20 size 0x1c8 virtual false final false
static ::Org::BouncyCastle::Asn1::DerVisibleString GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetInstance addr 0x113ade8 size 0x28 virtual false final false
static ::Org::BouncyCastle::Asn1::DerVisibleString GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

// Ctor Parameters [CppParam { name: "str", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit DerVisibleString(::ArrayW<uint8_t> str) ;

/// @brief Method .ctor addr 0x112c34c size 0x24 virtual false final false
 void _ctor(::ArrayW<uint8_t> str) ;

// Ctor Parameters [CppParam { name: "str", ty: "::StringW", modifiers: "", def_value: None }]
explicit DerVisibleString(::StringW str) ;

/// @brief Method .ctor addr 0x113ae10 size 0x78 virtual false final false
 void _ctor(::StringW str) ;

/// @brief Method GetString addr 0x113ae88 size 0x8 virtual true final false
 ::StringW GetString() ;

/// @brief Method GetOctets addr 0x113ae90 size 0xc virtual false final false
 ::ArrayW<uint8_t> GetOctets() ;

/// @brief Method Encode addr 0x113ae9c size 0x30 virtual true final false
 void Encode(::Org::BouncyCastle::Asn1::DerOutputStream derOut) ;

/// @brief Method Asn1Equals addr 0x113aecc size 0xa0 virtual true final false
 bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object asn1Object) ;

/// @brief Method Asn1GetHashCode addr 0x113af6c size 0x1c virtual true final false
 int32_t Asn1GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerVisibleString);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerVisibleString, "Org.BouncyCastle.Asn1", "DerVisibleString");
