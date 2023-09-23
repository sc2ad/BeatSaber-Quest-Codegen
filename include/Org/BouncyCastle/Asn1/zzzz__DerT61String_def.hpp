#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerStringBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
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
class DerT61String;
}
// Type: Org.BouncyCastle.Asn1::DerT61String
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(33))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(517))
// CS Name: Org.BouncyCastle.Asn1.DerT61String
class CORDL_TYPE DerT61String : public Org::BouncyCastle::Asn1::DerStringBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DerT61String() = default;

// Ctor Parameters [CppParam { name: "", ty: "DerT61String", modifiers: " const&", def_value: None }]
constexpr DerT61String(DerT61String const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DerT61String", modifiers: "&&", def_value: None }]
constexpr DerT61String(DerT61String&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DerT61String(void* ptr) noexcept : Org::BouncyCastle::Asn1::DerStringBase(ptr) {
}


  constexpr DerT61String& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DerT61String& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DerT61String& operator=(DerT61String&& o) noexcept = default;
  constexpr DerT61String& operator=(DerT61String const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_str, put=__set_str))  str;

constexpr void __set_str(::StringW value) ;

constexpr ::StringW __get_str() const;


// Methods

/// @brief Method GetInstance addr 0x1139054 size 0xf0 virtual false final false
static Org::BouncyCastle::Asn1::DerT61String GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetInstance addr 0x1139144 size 0xe8 virtual false final false
static Org::BouncyCastle::Asn1::DerT61String GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool isExplicit) ;

// Ctor Parameters [CppParam { name: "str", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit DerT61String(::ArrayW<uint8_t> str) ;

/// @brief Method .ctor addr 0x112c1b0 size 0x24 virtual false final false
 void _ctor(::ArrayW<uint8_t> str) ;

// Ctor Parameters [CppParam { name: "str", ty: "::StringW", modifiers: "", def_value: None }]
explicit DerT61String(::StringW str) ;

/// @brief Method .ctor addr 0x113922c size 0x78 virtual false final false
 void _ctor(::StringW str) ;

/// @brief Method GetString addr 0x11392a4 size 0x8 virtual true final false
 ::StringW GetString() ;

/// @brief Method Encode addr 0x11392ac size 0x30 virtual true final false
 void Encode(Org::BouncyCastle::Asn1::DerOutputStream derOut) ;

/// @brief Method GetOctets addr 0x11392dc size 0xc virtual false final false
 ::ArrayW<uint8_t> GetOctets() ;

/// @brief Method Asn1Equals addr 0x11392e8 size 0xa0 virtual true final false
 bool Asn1Equals(Org::BouncyCastle::Asn1::Asn1Object asn1Object) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(Org::BouncyCastle::Asn1::DerT61String);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerT61String, "Org.BouncyCastle.Asn1", "DerT61String");
