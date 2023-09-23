#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Type: Org.BouncyCastle.Asn1::Asn1Object
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(31))
// CS Name: Org.BouncyCastle.Asn1.Asn1Object
class CORDL_TYPE Asn1Object : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Asn1Object() = default;

// Ctor Parameters [CppParam { name: "", ty: "Asn1Object", modifiers: " const&", def_value: None }]
constexpr Asn1Object(Asn1Object const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Asn1Object", modifiers: "&&", def_value: None }]
constexpr Asn1Object(Asn1Object&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Asn1Object(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr Asn1Object& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Asn1Object& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Asn1Object& operator=(Asn1Object&& o) noexcept = default;
  constexpr Asn1Object& operator=(Asn1Object const& o) noexcept = default;
                


// Methods

/// @brief Method FromByteArray addr 0xddd174 size 0x20c virtual false final false
static Org::BouncyCastle::Asn1::Asn1Object FromByteArray(::ArrayW<uint8_t> data) ;

/// @brief Method FromStream addr 0xddd380 size 0x12c virtual false final false
static Org::BouncyCastle::Asn1::Asn1Object FromStream(System::IO::Stream inStr) ;

/// @brief Method ToAsn1Object addr 0xddd4ac size 0x4 virtual true final true
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

/// @brief Method Encode addr 0x0 size 0xffffffffffffffff virtual true final false
 void Encode(Org::BouncyCastle::Asn1::DerOutputStream derOut) ;

/// @brief Method Asn1Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Asn1Equals(Org::BouncyCastle::Asn1::Asn1Object asn1Object) ;

/// @brief Method Asn1GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Asn1GetHashCode() ;

/// @brief Method CallAsn1Equals addr 0xdd6448 size 0xc virtual false final false
 bool CallAsn1Equals(Org::BouncyCastle::Asn1::Asn1Object obj) ;

/// @brief Method CallAsn1GetHashCode addr 0xdd6334 size 0xc virtual false final false
 int32_t CallAsn1GetHashCode() ;

// Ctor Parameters []
explicit Asn1Object() ;

/// @brief Method .ctor addr 0xddd4b0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(Org::BouncyCastle::Asn1::Asn1Object);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Asn1Object, "Org.BouncyCastle.Asn1", "Asn1Object");
