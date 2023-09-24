#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/X9/zzzz__X9ECParametersHolder_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECPoint;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECParametersHolder;
}
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECParameters;
}
namespace Org::BouncyCastle::Asn1::Anssi {
class Org__BouncyCastle__Asn1__Anssi__AnssiNamedCurves__Frp256v1Holder;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Anssi {
class AnssiNamedCurves;
}
namespace Org::BouncyCastle::Asn1::Anssi {
class Org__BouncyCastle__Asn1__Anssi__AnssiNamedCurves__Frp256v1Holder;
}
// Type: ::Frp256v1Holder
namespace Org::BouncyCastle::Asn1::Anssi {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1))
// CS Name: Org.BouncyCastle.Asn1.Anssi.AnssiNamedCurves::Frp256v1Holder
class CORDL_TYPE Org__BouncyCastle__Asn1__Anssi__AnssiNamedCurves__Frp256v1Holder : public Org::BouncyCastle::Asn1::X9::X9ECParametersHolder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Org__BouncyCastle__Asn1__Anssi__AnssiNamedCurves__Frp256v1Holder() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Asn1__Anssi__AnssiNamedCurves__Frp256v1Holder", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Asn1__Anssi__AnssiNamedCurves__Frp256v1Holder(Org__BouncyCastle__Asn1__Anssi__AnssiNamedCurves__Frp256v1Holder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Asn1__Anssi__AnssiNamedCurves__Frp256v1Holder", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Asn1__Anssi__AnssiNamedCurves__Frp256v1Holder(Org__BouncyCastle__Asn1__Anssi__AnssiNamedCurves__Frp256v1Holder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Asn1__Anssi__AnssiNamedCurves__Frp256v1Holder(void* ptr) noexcept : Org::BouncyCastle::Asn1::X9::X9ECParametersHolder(ptr) {
}


  constexpr Org__BouncyCastle__Asn1__Anssi__AnssiNamedCurves__Frp256v1Holder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Asn1__Anssi__AnssiNamedCurves__Frp256v1Holder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Asn1__Anssi__AnssiNamedCurves__Frp256v1Holder& operator=(Org__BouncyCastle__Asn1__Anssi__AnssiNamedCurves__Frp256v1Holder&& o) noexcept = default;
  constexpr Org__BouncyCastle__Asn1__Anssi__AnssiNamedCurves__Frp256v1Holder& operator=(Org__BouncyCastle__Asn1__Anssi__AnssiNamedCurves__Frp256v1Holder const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::X9::X9ECParametersHolder __declspec(property(get=__get_Instance, put=__set_Instance))  Instance;

static void __set_Instance(Org::BouncyCastle::Asn1::X9::X9ECParametersHolder value) ;

static Org::BouncyCastle::Asn1::X9::X9ECParametersHolder __get_Instance() ;


// Methods

static Org::BouncyCastle::Asn1::Anssi::Org__BouncyCastle__Asn1__Anssi__AnssiNamedCurves__Frp256v1Holder New_ctor() ;

/// @brief Method .ctor addr 0xdd56fc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method CreateParameters addr 0xdd570c size 0x1d4 virtual true final false
 Org::BouncyCastle::Asn1::X9::X9ECParameters CreateParameters() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Anssi
// Type: Org.BouncyCastle.Asn1.Anssi::AnssiNamedCurves
namespace Org::BouncyCastle::Asn1::Anssi {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2))
// CS Name: Org.BouncyCastle.Asn1.Anssi.AnssiNamedCurves
class CORDL_TYPE AnssiNamedCurves : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Frp256v1Holder = Org::BouncyCastle::Asn1::Anssi::Org__BouncyCastle__Asn1__Anssi__AnssiNamedCurves__Frp256v1Holder;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AnssiNamedCurves() = default;

// Ctor Parameters [CppParam { name: "", ty: "AnssiNamedCurves", modifiers: " const&", def_value: None }]
constexpr AnssiNamedCurves(AnssiNamedCurves const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AnssiNamedCurves", modifiers: "&&", def_value: None }]
constexpr AnssiNamedCurves(AnssiNamedCurves&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AnssiNamedCurves(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AnssiNamedCurves& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AnssiNamedCurves& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AnssiNamedCurves& operator=(AnssiNamedCurves&& o) noexcept = default;
  constexpr AnssiNamedCurves& operator=(AnssiNamedCurves const& o) noexcept = default;
                


// Fields

static System::Collections::IDictionary __declspec(property(get=__get_objIds, put=__set_objIds))  objIds;

static void __set_objIds(System::Collections::IDictionary value) ;

static System::Collections::IDictionary __get_objIds() ;

static System::Collections::IDictionary __declspec(property(get=__get_curves, put=__set_curves))  curves;

static void __set_curves(System::Collections::IDictionary value) ;

static System::Collections::IDictionary __get_curves() ;

static System::Collections::IDictionary __declspec(property(get=__get_names, put=__set_names))  names;

static void __set_names(System::Collections::IDictionary value) ;

static System::Collections::IDictionary __get_names() ;


// Properties

static System::Collections::IEnumerable __declspec(property(get=get_Names))  Names;


// Methods

/// @brief Method ConfigureBasepoint addr 0xdd4c74 size 0xf0 virtual false final false
static Org::BouncyCastle::Asn1::X9::X9ECPoint ConfigureBasepoint(Org::BouncyCastle::Math::EC::ECCurve curve, ::StringW encoding) ;

/// @brief Method ConfigureCurve addr 0xdd4d64 size 0x4 virtual false final false
static Org::BouncyCastle::Math::EC::ECCurve ConfigureCurve(Org::BouncyCastle::Math::EC::ECCurve curve) ;

/// @brief Method FromHex addr 0xdd4d68 size 0xa0 virtual false final false
static Org::BouncyCastle::Math::BigInteger FromHex(::StringW hex) ;

/// @brief Method DefineCurve addr 0xdd4e08 size 0x210 virtual false final false
static void DefineCurve(::StringW name, Org::BouncyCastle::Asn1::DerObjectIdentifier oid, Org::BouncyCastle::Asn1::X9::X9ECParametersHolder holder) ;

/// @brief Method GetByName addr 0xdd5134 size 0x80 virtual false final false
static Org::BouncyCastle::Asn1::X9::X9ECParameters GetByName(::StringW name) ;

/// @brief Method GetByOid addr 0xdd5308 size 0x128 virtual false final false
static Org::BouncyCastle::Asn1::X9::X9ECParameters GetByOid(Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

/// @brief Method GetOid addr 0xdd51b4 size 0x154 virtual false final false
static Org::BouncyCastle::Asn1::DerObjectIdentifier GetOid(::StringW name) ;

/// @brief Method GetName addr 0xdd54e8 size 0x100 virtual false final false
static ::StringW GetName(Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

/// @brief Method get_Names addr 0xdd55e8 size 0x10c virtual false final false
static System::Collections::IEnumerable get_Names() ;

static Org::BouncyCastle::Asn1::Anssi::AnssiNamedCurves New_ctor() ;

/// @brief Method .ctor addr 0xdd56f4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Anssi
NEED_NO_BOX(Org::BouncyCastle::Asn1::Anssi::AnssiNamedCurves);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Anssi::AnssiNamedCurves, "Org.BouncyCastle.Asn1.Anssi", "AnssiNamedCurves");
NEED_NO_BOX(Org::BouncyCastle::Asn1::Anssi::Org__BouncyCastle__Asn1__Anssi__AnssiNamedCurves__Frp256v1Holder);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Anssi::Org__BouncyCastle__Asn1__Anssi__AnssiNamedCurves__Frp256v1Holder, "Org.BouncyCastle.Asn1.Anssi", "AnssiNamedCurves/Frp256v1Holder");
