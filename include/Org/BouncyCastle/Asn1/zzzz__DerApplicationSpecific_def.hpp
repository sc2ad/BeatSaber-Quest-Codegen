#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerApplicationSpecific;
}
// Type: Org.BouncyCastle.Asn1::DerApplicationSpecific
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(31))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(471))
// CS Name: Org.BouncyCastle.Asn1.DerApplicationSpecific
class CORDL_TYPE DerApplicationSpecific : public ::Org::BouncyCastle::Asn1::Asn1Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DerApplicationSpecific() = default;

// Ctor Parameters [CppParam { name: "", ty: "DerApplicationSpecific", modifiers: " const&", def_value: None }]
constexpr DerApplicationSpecific(DerApplicationSpecific const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DerApplicationSpecific", modifiers: "&&", def_value: None }]
constexpr DerApplicationSpecific(DerApplicationSpecific&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DerApplicationSpecific(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Object(ptr) {
}


  constexpr DerApplicationSpecific& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DerApplicationSpecific& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DerApplicationSpecific& operator=(DerApplicationSpecific&& o) noexcept = default;
  constexpr DerApplicationSpecific& operator=(DerApplicationSpecific const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_isConstructed, put=__set_isConstructed))  isConstructed;

constexpr void __set_isConstructed(bool value) ;

constexpr bool __get_isConstructed() const;

 int32_t __declspec(property(get=__get_tag, put=__set_tag))  tag;

constexpr void __set_tag(int32_t value) ;

constexpr int32_t __get_tag() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_octets, put=__set_octets))  octets;

constexpr void __set_octets(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_octets() const;


// Properties

 int32_t __declspec(property(get=get_ApplicationTag))  ApplicationTag;


// Methods

// Ctor Parameters [CppParam { name: "isConstructed", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "tag", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "octets", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit DerApplicationSpecific(bool isConstructed, int32_t tag, ::ArrayW<uint8_t> octets) ;

/// @brief Method .ctor addr 0x11299dc size 0x40 virtual false final false
 void _ctor(bool isConstructed, int32_t tag, ::ArrayW<uint8_t> octets) ;

// Ctor Parameters [CppParam { name: "tag", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "octets", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit DerApplicationSpecific(int32_t tag, ::ArrayW<uint8_t> octets) ;

/// @brief Method .ctor addr 0x113021c size 0x34 virtual false final false
 void _ctor(int32_t tag, ::ArrayW<uint8_t> octets) ;

// Ctor Parameters [CppParam { name: "tag", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "obj", ty: "::Org::BouncyCastle::Asn1::Asn1Encodable", modifiers: "", def_value: None }]
explicit DerApplicationSpecific(int32_t tag, ::Org::BouncyCastle::Asn1::Asn1Encodable obj) ;

/// @brief Method .ctor addr 0x1130250 size 0x10 virtual false final false
 void _ctor(int32_t tag, ::Org::BouncyCastle::Asn1::Asn1Encodable obj) ;

// Ctor Parameters [CppParam { name: "isExplicit", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "tag", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "obj", ty: "::Org::BouncyCastle::Asn1::Asn1Encodable", modifiers: "", def_value: None }]
explicit DerApplicationSpecific(bool isExplicit, int32_t tag, ::Org::BouncyCastle::Asn1::Asn1Encodable obj) ;

/// @brief Method .ctor addr 0x1130260 size 0xf8 virtual false final false
 void _ctor(bool isExplicit, int32_t tag, ::Org::BouncyCastle::Asn1::Asn1Encodable obj) ;

// Ctor Parameters [CppParam { name: "tagNo", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "vec", ty: "::Org::BouncyCastle::Asn1::Asn1EncodableVector", modifiers: "", def_value: None }]
explicit DerApplicationSpecific(int32_t tagNo, ::Org::BouncyCastle::Asn1::Asn1EncodableVector vec) ;

/// @brief Method .ctor addr 0x1130424 size 0x1d0 virtual false final false
 void _ctor(int32_t tagNo, ::Org::BouncyCastle::Asn1::Asn1EncodableVector vec) ;

/// @brief Method GetLengthOfHeader addr 0x1130358 size 0xcc virtual false final false
 int32_t GetLengthOfHeader(::ArrayW<uint8_t> data) ;

/// @brief Method IsConstructed addr 0x11305f4 size 0x8 virtual false final false
 bool IsConstructed() ;

/// @brief Method GetContents addr 0x11305fc size 0x8 virtual false final false
 ::ArrayW<uint8_t> GetContents() ;

/// @brief Method get_ApplicationTag addr 0x1130604 size 0x8 virtual false final false
 int32_t get_ApplicationTag() ;

/// @brief Method GetObject addr 0x113060c size 0xc virtual false final false
 ::Org::BouncyCastle::Asn1::Asn1Object GetObject() ;

/// @brief Method GetObject addr 0x1130618 size 0xbc virtual false final false
 ::Org::BouncyCastle::Asn1::Asn1Object GetObject(int32_t derTagNo) ;

/// @brief Method Encode addr 0x113081c size 0x38 virtual true final false
 void Encode(::Org::BouncyCastle::Asn1::DerOutputStream derOut) ;

/// @brief Method Asn1Equals addr 0x1130854 size 0xe8 virtual true final false
 bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object asn1Object) ;

/// @brief Method Asn1GetHashCode addr 0x113093c size 0xa4 virtual true final false
 int32_t Asn1GetHashCode() ;

/// @brief Method ReplaceTagNumber addr 0x11306d4 size 0x148 virtual false final false
 ::ArrayW<uint8_t> ReplaceTagNumber(int32_t newTag, ::ArrayW<uint8_t> input) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerApplicationSpecific);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerApplicationSpecific, "Org.BouncyCastle.Asn1", "DerApplicationSpecific");
