#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObjectParser;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
// Type: Org.BouncyCastle.Asn1::Asn1TaggedObject
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(31))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(469))
// CS Name: Org.BouncyCastle.Asn1.Asn1TaggedObject
class CORDL_TYPE Asn1TaggedObject : public ::Org::BouncyCastle::Asn1::Asn1Object {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser
constexpr operator  ::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser() const noexcept;

/// @brief Convert operator to ::Org::BouncyCastle::Asn1::IAsn1Convertible
constexpr operator  ::Org::BouncyCastle::Asn1::IAsn1Convertible() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Asn1TaggedObject() = default;

// Ctor Parameters [CppParam { name: "", ty: "Asn1TaggedObject", modifiers: " const&", def_value: None }]
constexpr Asn1TaggedObject(Asn1TaggedObject const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Asn1TaggedObject", modifiers: "&&", def_value: None }]
constexpr Asn1TaggedObject(Asn1TaggedObject&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Asn1TaggedObject(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Object(ptr) {
}


  constexpr Asn1TaggedObject& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Asn1TaggedObject& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Asn1TaggedObject& operator=(Asn1TaggedObject&& o) noexcept = default;
  constexpr Asn1TaggedObject& operator=(Asn1TaggedObject const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_tagNo, put=__set_tagNo))  tagNo;

constexpr void __set_tagNo(int32_t value) ;

constexpr int32_t __get_tagNo() const;

 bool __declspec(property(get=__get_explicitly, put=__set_explicitly))  explicitly;

constexpr void __set_explicitly(bool value) ;

constexpr bool __get_explicitly() const;

 ::Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=__get_obj, put=__set_obj))  obj;

constexpr void __set_obj(::Org::BouncyCastle::Asn1::Asn1Encodable value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable __get_obj() const;


// Properties

 int32_t __declspec(property(get=get_TagNo))  TagNo;


// Methods

/// @brief Method IsConstructed addr 0x112faa8 size 0x130 virtual false final false
static bool IsConstructed(bool isExplicit, ::Org::BouncyCastle::Asn1::Asn1Object obj) ;

/// @brief Method GetInstance addr 0x112fbd8 size 0x78 virtual false final false
static ::Org::BouncyCastle::Asn1::Asn1TaggedObject GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

/// @brief Method GetInstance addr 0x112fc50 size 0x100 virtual false final false
static ::Org::BouncyCastle::Asn1::Asn1TaggedObject GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "tagNo", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "obj", ty: "::Org::BouncyCastle::Asn1::Asn1Encodable", modifiers: "", def_value: None }]
explicit Asn1TaggedObject(int32_t tagNo, ::Org::BouncyCastle::Asn1::Asn1Encodable obj) ;

/// @brief Method .ctor addr 0x112fd50 size 0x44 virtual false final false
 void _ctor(int32_t tagNo, ::Org::BouncyCastle::Asn1::Asn1Encodable obj) ;

// Ctor Parameters [CppParam { name: "explicitly", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "tagNo", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "obj", ty: "::Org::BouncyCastle::Asn1::Asn1Encodable", modifiers: "", def_value: None }]
explicit Asn1TaggedObject(bool explicitly, int32_t tagNo, ::Org::BouncyCastle::Asn1::Asn1Encodable obj) ;

/// @brief Method .ctor addr 0x112fd94 size 0x8c virtual false final false
 void _ctor(bool explicitly, int32_t tagNo, ::Org::BouncyCastle::Asn1::Asn1Encodable obj) ;

/// @brief Method Asn1Equals addr 0x112fe20 size 0xf8 virtual true final false
 bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object asn1Object) ;

/// @brief Method Asn1GetHashCode addr 0x112ff18 size 0x3c virtual true final false
 int32_t Asn1GetHashCode() ;

/// @brief Method get_TagNo addr 0x112ff54 size 0x8 virtual true final true
 int32_t get_TagNo() ;

/// @brief Method IsExplicit addr 0x112ff5c size 0x8 virtual false final false
 bool IsExplicit() ;

/// @brief Method IsEmpty addr 0x112ff64 size 0x8 virtual false final false
 bool IsEmpty() ;

/// @brief Method GetObject addr 0x111fa04 size 0x18 virtual false final false
 ::Org::BouncyCastle::Asn1::Asn1Object GetObject() ;

/// @brief Method GetObjectParser addr 0x112ff6c size 0x130 virtual true final true
 ::Org::BouncyCastle::Asn1::IAsn1Convertible GetObjectParser(int32_t tag, bool isExplicit) ;

/// @brief Method ToString addr 0x113009c size 0x178 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Asn1TaggedObject);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Asn1TaggedObject, "Org.BouncyCastle.Asn1", "Asn1TaggedObject");
