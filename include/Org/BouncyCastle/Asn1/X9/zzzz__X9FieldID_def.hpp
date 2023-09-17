#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X9 {
class X9FieldID;
}
// Type: Org.BouncyCastle.Asn1.X9::X9FieldID
namespace Org::BouncyCastle::Asn1::X9 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(446))
// CS Name: Org.BouncyCastle.Asn1.X9.X9FieldID
class CORDL_TYPE X9FieldID : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~X9FieldID() = default;

// Ctor Parameters [CppParam { name: "", ty: "X9FieldID", modifiers: " const&", def_value: None }]
constexpr X9FieldID(X9FieldID const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X9FieldID", modifiers: "&&", def_value: None }]
constexpr X9FieldID(X9FieldID&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X9FieldID(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr X9FieldID& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X9FieldID& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X9FieldID& operator=(X9FieldID&& o) noexcept = default;
  constexpr X9FieldID& operator=(X9FieldID const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_id, put=__set_id))  id;

constexpr void __set_id(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_id() const;

 ::Org::BouncyCastle::Asn1::Asn1Object __declspec(property(get=__get_parameters, put=__set_parameters))  parameters;

constexpr void __set_parameters(::Org::BouncyCastle::Asn1::Asn1Object value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Object __get_parameters() const;


// Properties

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_Identifier))  Identifier;

 ::Org::BouncyCastle::Asn1::Asn1Object __declspec(property(get=get_Parameters))  Parameters;


// Methods

// Ctor Parameters [CppParam { name: "primeP", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit X9FieldID(::Org::BouncyCastle::Math::BigInteger primeP) ;

/// @brief Method .ctor addr 0x112650c size 0xb0 virtual false final false
 void _ctor(::Org::BouncyCastle::Math::BigInteger primeP) ;

// Ctor Parameters [CppParam { name: "m", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "k1", ty: "int32_t", modifiers: "", def_value: None }]
explicit X9FieldID(int32_t m, int32_t k1) ;

/// @brief Method .ctor addr 0x11265bc size 0xc virtual false final false
 void _ctor(int32_t m, int32_t k1) ;

// Ctor Parameters [CppParam { name: "m", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "k1", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "k2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "k3", ty: "int32_t", modifiers: "", def_value: None }]
explicit X9FieldID(int32_t m, int32_t k1, int32_t k2, int32_t k3) ;

/// @brief Method .ctor addr 0x11265c8 size 0x3e4 virtual false final false
 void _ctor(int32_t m, int32_t k1, int32_t k2, int32_t k3) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit X9FieldID(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0x1127278 size 0xbc virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0x112636c size 0xa0 virtual false final false
static ::Org::BouncyCastle::Asn1::X9::X9FieldID GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_Identifier addr 0x1127334 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::DerObjectIdentifier get_Identifier() ;

/// @brief Method get_Parameters addr 0x112733c size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Asn1Object get_Parameters() ;

/// @brief Method ToAsn1Object addr 0x1127344 size 0xec virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X9
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X9::X9FieldID);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X9::X9FieldID, "Org.BouncyCastle.Asn1.X9", "X9FieldID");
