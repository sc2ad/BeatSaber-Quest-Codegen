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
class DerVideotexString;
}
// Type: Org.BouncyCastle.Asn1::DerVideotexString
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(33))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(521))
// CS Name: Org.BouncyCastle.Asn1.DerVideotexString
class CORDL_TYPE DerVideotexString : public Org::BouncyCastle::Asn1::DerStringBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DerVideotexString() = default;

// Ctor Parameters [CppParam { name: "", ty: "DerVideotexString", modifiers: " const&", def_value: None }]
constexpr DerVideotexString(DerVideotexString const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DerVideotexString", modifiers: "&&", def_value: None }]
constexpr DerVideotexString(DerVideotexString&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DerVideotexString(void* ptr) noexcept : Org::BouncyCastle::Asn1::DerStringBase(ptr) {
}


  constexpr DerVideotexString& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DerVideotexString& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DerVideotexString& operator=(DerVideotexString&& o) noexcept = default;
  constexpr DerVideotexString& operator=(DerVideotexString const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_mString, put=__set_mString))  mString;

constexpr void __set_mString(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mString() const;


// Methods

/// @brief Method GetInstance addr 0x113a720 size 0x220 virtual false final false
static Org::BouncyCastle::Asn1::DerVideotexString GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetInstance addr 0x113a940 size 0x130 virtual false final false
static Org::BouncyCastle::Asn1::DerVideotexString GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool isExplicit) ;

// Ctor Parameters [CppParam { name: "encoding", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit DerVideotexString(::ArrayW<uint8_t> encoding) ;

/// @brief Method .ctor addr 0x112c2d4 size 0x78 virtual false final false
 void _ctor(::ArrayW<uint8_t> encoding) ;

/// @brief Method GetString addr 0x113aa70 size 0xc virtual true final false
 ::StringW GetString() ;

/// @brief Method GetOctets addr 0x113aa7c size 0x5c virtual false final false
 ::ArrayW<uint8_t> GetOctets() ;

/// @brief Method Encode addr 0x113aad8 size 0x24 virtual true final false
 void Encode(Org::BouncyCastle::Asn1::DerOutputStream derOut) ;

/// @brief Method Asn1GetHashCode addr 0x113aafc size 0x5c virtual true final false
 int32_t Asn1GetHashCode() ;

/// @brief Method Asn1Equals addr 0x113ab58 size 0xc8 virtual true final false
 bool Asn1Equals(Org::BouncyCastle::Asn1::Asn1Object asn1Object) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(Org::BouncyCastle::Asn1::DerVideotexString);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerVideotexString, "Org.BouncyCastle.Asn1", "DerVideotexString");
