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
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerGeneralString;
}
// Type: Org.BouncyCastle.Asn1::DerGeneralString
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(33))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(507))
// CS Name: Org.BouncyCastle.Asn1.DerGeneralString
class CORDL_TYPE DerGeneralString : public Org::BouncyCastle::Asn1::DerStringBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DerGeneralString() = default;

// Ctor Parameters [CppParam { name: "", ty: "DerGeneralString", modifiers: " const&", def_value: None }]
constexpr DerGeneralString(DerGeneralString const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DerGeneralString", modifiers: "&&", def_value: None }]
constexpr DerGeneralString(DerGeneralString&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DerGeneralString(void* ptr) noexcept : Org::BouncyCastle::Asn1::DerStringBase(ptr) {
}


  constexpr DerGeneralString& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DerGeneralString& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DerGeneralString& operator=(DerGeneralString&& o) noexcept = default;
  constexpr DerGeneralString& operator=(DerGeneralString const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_str, put=__set_str))  str;

constexpr void __set_str(::StringW value) ;

constexpr ::StringW __get_str() const;


// Methods

/// @brief Method GetInstance addr 0x11375d8 size 0xf0 virtual false final false
static Org::BouncyCastle::Asn1::DerGeneralString GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetInstance addr 0x11376c8 size 0x140 virtual false final false
static Org::BouncyCastle::Asn1::DerGeneralString GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool isExplicit) ;

static Org::BouncyCastle::Asn1::DerGeneralString New_ctor(::ArrayW<uint8_t> str) ;

/// @brief Method .ctor addr 0x112c0c4 size 0x24 virtual false final false
 void _ctor(::ArrayW<uint8_t> str) ;

static Org::BouncyCastle::Asn1::DerGeneralString New_ctor(::StringW str) ;

/// @brief Method .ctor addr 0x1137808 size 0x78 virtual false final false
 void _ctor(::StringW str) ;

/// @brief Method GetString addr 0x1137880 size 0x8 virtual true final false
 ::StringW GetString() ;

/// @brief Method GetOctets addr 0x1137888 size 0xc virtual false final false
 ::ArrayW<uint8_t> GetOctets() ;

/// @brief Method Encode addr 0x1137894 size 0x30 virtual true final false
 void Encode(Org::BouncyCastle::Asn1::DerOutputStream derOut) ;

/// @brief Method Asn1Equals addr 0x11378c4 size 0xa0 virtual true final false
 bool Asn1Equals(Org::BouncyCastle::Asn1::Asn1Object asn1Object) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(Org::BouncyCastle::Asn1::DerGeneralString);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerGeneralString, "Org.BouncyCastle.Asn1", "DerGeneralString");
