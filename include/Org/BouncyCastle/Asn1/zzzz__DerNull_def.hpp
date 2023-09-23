#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Null_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerNull;
}
// Type: Org.BouncyCastle.Asn1::DerNull
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(454))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(477))
// CS Name: Org.BouncyCastle.Asn1.DerNull
class CORDL_TYPE DerNull : public Org::BouncyCastle::Asn1::Asn1Null {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DerNull() = default;

// Ctor Parameters [CppParam { name: "", ty: "DerNull", modifiers: " const&", def_value: None }]
constexpr DerNull(DerNull const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DerNull", modifiers: "&&", def_value: None }]
constexpr DerNull(DerNull&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DerNull(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Null(ptr) {
}


  constexpr DerNull& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DerNull& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DerNull& operator=(DerNull&& o) noexcept = default;
  constexpr DerNull& operator=(DerNull const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::DerNull __declspec(property(get=__get_Instance, put=__set_Instance))  Instance;

static void __set_Instance(Org::BouncyCastle::Asn1::DerNull value) ;

static Org::BouncyCastle::Asn1::DerNull __get_Instance() ;

 ::ArrayW<uint8_t> __declspec(property(get=__get_zeroBytes, put=__set_zeroBytes))  zeroBytes;

constexpr void __set_zeroBytes(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_zeroBytes() const;


// Methods

// Ctor Parameters []
explicit DerNull() ;

/// @brief Method .ctor addr 0x1130ed0 size 0x58 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "dummy", ty: "int32_t", modifiers: "", def_value: None }]
explicit DerNull(int32_t dummy) ;

/// @brief Method .ctor addr 0x1130f28 size 0x58 virtual false final false
 void _ctor(int32_t dummy) ;

/// @brief Method Encode addr 0x1130f80 size 0x24 virtual true final false
 void Encode(Org::BouncyCastle::Asn1::DerOutputStream derOut) ;

/// @brief Method Asn1Equals addr 0x1130fa4 size 0x78 virtual true final false
 bool Asn1Equals(Org::BouncyCastle::Asn1::Asn1Object asn1Object) ;

/// @brief Method Asn1GetHashCode addr 0x113101c size 0x8 virtual true final false
 int32_t Asn1GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(Org::BouncyCastle::Asn1::DerNull);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerNull, "Org.BouncyCastle.Asn1", "DerNull");
