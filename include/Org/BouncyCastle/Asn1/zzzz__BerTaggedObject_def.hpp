#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerTaggedObject_def.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class BerTaggedObject;
}
// Type: Org.BouncyCastle.Asn1::BerTaggedObject
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(495))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(496))
// CS Name: Org.BouncyCastle.Asn1.BerTaggedObject
class CORDL_TYPE BerTaggedObject : public Org::BouncyCastle::Asn1::DerTaggedObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BerTaggedObject() = default;

// Ctor Parameters [CppParam { name: "", ty: "BerTaggedObject", modifiers: " const&", def_value: None }]
constexpr BerTaggedObject(BerTaggedObject const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BerTaggedObject", modifiers: "&&", def_value: None }]
constexpr BerTaggedObject(BerTaggedObject&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BerTaggedObject(void* ptr) noexcept : Org::BouncyCastle::Asn1::DerTaggedObject(ptr) {
}


  constexpr BerTaggedObject& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BerTaggedObject& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BerTaggedObject& operator=(BerTaggedObject&& o) noexcept = default;
  constexpr BerTaggedObject& operator=(BerTaggedObject const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "tagNo", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "obj", ty: "Org::BouncyCastle::Asn1::Asn1Encodable", modifiers: "", def_value: None }]
explicit BerTaggedObject(int32_t tagNo, Org::BouncyCastle::Asn1::Asn1Encodable obj) ;

/// @brief Method .ctor addr 0x1133ff8 size 0x44 virtual false final false
 void _ctor(int32_t tagNo, Org::BouncyCastle::Asn1::Asn1Encodable obj) ;

// Ctor Parameters [CppParam { name: "explicitly", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "tagNo", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "obj", ty: "Org::BouncyCastle::Asn1::Asn1Encodable", modifiers: "", def_value: None }]
explicit BerTaggedObject(bool explicitly, int32_t tagNo, Org::BouncyCastle::Asn1::Asn1Encodable obj) ;

/// @brief Method .ctor addr 0x112f420 size 0x8 virtual false final false
 void _ctor(bool explicitly, int32_t tagNo, Org::BouncyCastle::Asn1::Asn1Encodable obj) ;

// Ctor Parameters [CppParam { name: "tagNo", ty: "int32_t", modifiers: "", def_value: None }]
explicit BerTaggedObject(int32_t tagNo) ;

/// @brief Method .ctor addr 0x113403c size 0x74 virtual false final false
 void _ctor(int32_t tagNo) ;

/// @brief Method Encode addr 0x11340b0 size 0x5bc virtual true final false
 void Encode(Org::BouncyCastle::Asn1::DerOutputStream derOut) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(Org::BouncyCastle::Asn1::BerTaggedObject);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::BerTaggedObject, "Org.BouncyCastle.Asn1", "BerTaggedObject");
