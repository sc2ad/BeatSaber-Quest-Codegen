#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECParameters;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Null;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X9 {
class X962Parameters;
}
// Type: Org.BouncyCastle.Asn1.X9::X962Parameters
namespace Org::BouncyCastle::Asn1::X9 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(441))
// CS Name: Org.BouncyCastle.Asn1.X9.X962Parameters
class CORDL_TYPE X962Parameters : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Asn1::IAsn1Choice
constexpr operator  Org::BouncyCastle::Asn1::IAsn1Choice() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~X962Parameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "X962Parameters", modifiers: " const&", def_value: None }]
constexpr X962Parameters(X962Parameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X962Parameters", modifiers: "&&", def_value: None }]
constexpr X962Parameters(X962Parameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X962Parameters(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr X962Parameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X962Parameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X962Parameters& operator=(X962Parameters&& o) noexcept = default;
  constexpr X962Parameters& operator=(X962Parameters const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Asn1Object __declspec(property(get=__get__params, put=__set__params))  _params;

constexpr void __set__params(Org::BouncyCastle::Asn1::Asn1Object value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Object __get__params() const;


// Properties

 bool __declspec(property(get=get_IsNamedCurve))  IsNamedCurve;

 bool __declspec(property(get=get_IsImplicitlyCA))  IsImplicitlyCA;

 Org::BouncyCastle::Asn1::Asn1Object __declspec(property(get=get_Parameters))  Parameters;


// Methods

/// @brief Method GetInstance addr 0x1124888 size 0x2bc virtual false final false
static Org::BouncyCastle::Asn1::X9::X962Parameters GetInstance(::bs_hook::Il2CppWrapperType obj) ;

static Org::BouncyCastle::Asn1::X9::X962Parameters New_ctor(Org::BouncyCastle::Asn1::X9::X9ECParameters ecParameters) ;

/// @brief Method .ctor addr 0x1124b6c size 0x40 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X9::X9ECParameters ecParameters) ;

static Org::BouncyCastle::Asn1::X9::X962Parameters New_ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier namedCurve) ;

/// @brief Method .ctor addr 0x1124bac size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier namedCurve) ;

static Org::BouncyCastle::Asn1::X9::X962Parameters New_ctor(Org::BouncyCastle::Asn1::Asn1Null obj) ;

/// @brief Method .ctor addr 0x1124bd4 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Null obj) ;

static Org::BouncyCastle::Asn1::X9::X962Parameters New_ctor(Org::BouncyCastle::Asn1::Asn1Object obj) ;

/// @brief Method .ctor addr 0x1124b44 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Object obj) ;

/// @brief Method get_IsNamedCurve addr 0x1124bfc size 0x7c virtual false final false
 bool get_IsNamedCurve() ;

/// @brief Method get_IsImplicitlyCA addr 0x1124c78 size 0x7c virtual false final false
 bool get_IsImplicitlyCA() ;

/// @brief Method get_Parameters addr 0x1124cf4 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Object get_Parameters() ;

/// @brief Method ToAsn1Object addr 0x1124cfc size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X9
NEED_NO_BOX(Org::BouncyCastle::Asn1::X9::X962Parameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X9::X962Parameters, "Org.BouncyCastle.Asn1.X9", "X962Parameters");
