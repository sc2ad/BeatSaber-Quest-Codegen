#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1 {
class DerBoolean;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class BasicConstraints;
}
// Type: Org.BouncyCastle.Asn1.X509::BasicConstraints
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(346))
// CS Name: Org.BouncyCastle.Asn1.X509.BasicConstraints
class CORDL_TYPE BasicConstraints : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BasicConstraints() = default;

// Ctor Parameters [CppParam { name: "", ty: "BasicConstraints", modifiers: " const&", def_value: None }]
constexpr BasicConstraints(BasicConstraints const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BasicConstraints", modifiers: "&&", def_value: None }]
constexpr BasicConstraints(BasicConstraints&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BasicConstraints(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr BasicConstraints& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BasicConstraints& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BasicConstraints& operator=(BasicConstraints&& o) noexcept = default;
  constexpr BasicConstraints& operator=(BasicConstraints const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::DerBoolean __declspec(property(get=__get_cA, put=__set_cA))  cA;

constexpr void __set_cA(::Org::BouncyCastle::Asn1::DerBoolean value) ;

constexpr ::Org::BouncyCastle::Asn1::DerBoolean __get_cA() const;

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_pathLenConstraint, put=__set_pathLenConstraint))  pathLenConstraint;

constexpr void __set_pathLenConstraint(::Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger __get_pathLenConstraint() const;


// Properties

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_PathLenConstraint))  PathLenConstraint;


// Methods

/// @brief Method GetInstance addr 0xff937c size 0x18 virtual false final false
static ::Org::BouncyCastle::Asn1::X509::BasicConstraints GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

/// @brief Method GetInstance addr 0xff9394 size 0xf0 virtual false final false
static ::Org::BouncyCastle::Asn1::X509::BasicConstraints GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method FromExtensions addr 0xff9640 size 0x68 virtual false final false
static ::Org::BouncyCastle::Asn1::X509::BasicConstraints FromExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions extensions) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit BasicConstraints(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xff9484 size 0x1bc virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "cA", ty: "bool", modifiers: "", def_value: None }]
explicit BasicConstraints(bool cA) ;

/// @brief Method .ctor addr 0xff96a8 size 0x74 virtual false final false
 void _ctor(bool cA) ;

// Ctor Parameters [CppParam { name: "pathLenConstraint", ty: "int32_t", modifiers: "", def_value: None }]
explicit BasicConstraints(int32_t pathLenConstraint) ;

/// @brief Method .ctor addr 0xff971c size 0xb0 virtual false final false
 void _ctor(int32_t pathLenConstraint) ;

/// @brief Method IsCA addr 0xff97cc size 0x14 virtual false final false
 bool IsCA() ;

/// @brief Method get_PathLenConstraint addr 0xff97e0 size 0x14 virtual false final false
 ::Org::BouncyCastle::Math::BigInteger get_PathLenConstraint() ;

/// @brief Method ToAsn1Object addr 0xff97f4 size 0x138 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

/// @brief Method ToString addr 0xff992c size 0x204 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::BasicConstraints);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::BasicConstraints, "Org.BouncyCastle.Asn1.X509", "BasicConstraints");
