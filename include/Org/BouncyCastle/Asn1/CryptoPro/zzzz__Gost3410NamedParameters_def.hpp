#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Asn1::CryptoPro {
class Gost3410ParamSetParameters;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::CryptoPro {
class Gost3410NamedParameters;
}
// Type: Org.BouncyCastle.Asn1.CryptoPro::Gost3410NamedParameters
namespace Org::BouncyCastle::Asn1::CryptoPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(129))
// CS Name: Org.BouncyCastle.Asn1.CryptoPro.Gost3410NamedParameters
class CORDL_TYPE Gost3410NamedParameters : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Gost3410NamedParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "Gost3410NamedParameters", modifiers: " const&", def_value: None }]
constexpr Gost3410NamedParameters(Gost3410NamedParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Gost3410NamedParameters", modifiers: "&&", def_value: None }]
constexpr Gost3410NamedParameters(Gost3410NamedParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Gost3410NamedParameters(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Gost3410NamedParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Gost3410NamedParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Gost3410NamedParameters& operator=(Gost3410NamedParameters&& o) noexcept = default;
  constexpr Gost3410NamedParameters& operator=(Gost3410NamedParameters const& o) noexcept = default;
                


// Fields

static ::System::Collections::IDictionary __declspec(property(get=__get_objIds, put=__set_objIds))  objIds;

static void __set_objIds(::System::Collections::IDictionary value) ;

static ::System::Collections::IDictionary __get_objIds() ;

static ::System::Collections::IDictionary __declspec(property(get=__get_parameters, put=__set_parameters))  parameters;

static void __set_parameters(::System::Collections::IDictionary value) ;

static ::System::Collections::IDictionary __get_parameters() ;

static ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters __declspec(property(get=__get_cryptoProA, put=__set_cryptoProA))  cryptoProA;

static void __set_cryptoProA(::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters value) ;

static ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters __get_cryptoProA() ;

static ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters __declspec(property(get=__get_cryptoProB, put=__set_cryptoProB))  cryptoProB;

static void __set_cryptoProB(::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters value) ;

static ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters __get_cryptoProB() ;

static ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters __declspec(property(get=__get_cryptoProXchA, put=__set_cryptoProXchA))  cryptoProXchA;

static void __set_cryptoProXchA(::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters value) ;

static ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters __get_cryptoProXchA() ;


// Properties

static ::System::Collections::IEnumerable __declspec(property(get=get_Names))  Names;


// Methods

// Ctor Parameters []
explicit Gost3410NamedParameters() ;

/// @brief Method .ctor addr 0xdfebe4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method GetByOid addr 0xdff340 size 0x11c virtual false final false
static ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters GetByOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

/// @brief Method get_Names addr 0xdff45c size 0x10c virtual false final false
static ::System::Collections::IEnumerable get_Names() ;

/// @brief Method GetByName addr 0xdff568 size 0x1ec virtual false final false
static ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters GetByName(::StringW name) ;

/// @brief Method GetOid addr 0xdff754 size 0x11c virtual false final false
static ::Org::BouncyCastle::Asn1::DerObjectIdentifier GetOid(::StringW name) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::CryptoPro
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters, "Org.BouncyCastle.Asn1.CryptoPro", "Gost3410NamedParameters");
