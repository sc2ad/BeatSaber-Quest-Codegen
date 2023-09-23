#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
// Type: Org.BouncyCastle.Asn1::Asn1Encodable
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7))
// CS Name: Org.BouncyCastle.Asn1.Asn1Encodable
class CORDL_TYPE Asn1Encodable : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Asn1::IAsn1Convertible
constexpr operator  Org::BouncyCastle::Asn1::IAsn1Convertible() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Asn1Encodable() = default;

// Ctor Parameters [CppParam { name: "", ty: "Asn1Encodable", modifiers: " const&", def_value: None }]
constexpr Asn1Encodable(Asn1Encodable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Asn1Encodable", modifiers: "&&", def_value: None }]
constexpr Asn1Encodable(Asn1Encodable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Asn1Encodable(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Asn1Encodable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Asn1Encodable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Asn1Encodable& operator=(Asn1Encodable&& o) noexcept = default;
  constexpr Asn1Encodable& operator=(Asn1Encodable const& o) noexcept = default;
                


// Fields

/// @brief Field Der offset 0
static constexpr ::ConstString  Der{u"DER"};

/// @brief Field Ber offset 0
static constexpr ::ConstString  Ber{u"BER"};


// Methods

/// @brief Method GetEncoded addr 0xdd60a4 size 0xb4 virtual false final false
 ::ArrayW<uint8_t> GetEncoded() ;

/// @brief Method GetEncoded addr 0xdd6158 size 0xf4 virtual false final false
 ::ArrayW<uint8_t> GetEncoded(::StringW encoding) ;

/// @brief Method GetDerEncoded addr 0xdd624c size 0xc0 virtual false final false
 ::ArrayW<uint8_t> GetDerEncoded() ;

/// @brief Method GetHashCode addr 0xdd630c size 0x28 virtual true final true
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0xdd6340 size 0x108 virtual true final true
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method ToAsn1Object addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

// Ctor Parameters []
explicit Asn1Encodable() ;

/// @brief Method .ctor addr 0xdd6454 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(Org::BouncyCastle::Asn1::Asn1Encodable);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Asn1Encodable, "Org.BouncyCastle.Asn1", "Asn1Encodable");
