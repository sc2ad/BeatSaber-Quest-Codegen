#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECParameters;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECDomainParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::CryptoPro {
class ECGost3410NamedCurves;
}
// Type: Org.BouncyCastle.Asn1.CryptoPro::ECGost3410NamedCurves
namespace Org::BouncyCastle::Asn1::CryptoPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(126))
// CS Name: Org.BouncyCastle.Asn1.CryptoPro.ECGost3410NamedCurves
class CORDL_TYPE ECGost3410NamedCurves : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ECGost3410NamedCurves() = default;

// Ctor Parameters [CppParam { name: "", ty: "ECGost3410NamedCurves", modifiers: " const&", def_value: None }]
constexpr ECGost3410NamedCurves(ECGost3410NamedCurves const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ECGost3410NamedCurves", modifiers: "&&", def_value: None }]
constexpr ECGost3410NamedCurves(ECGost3410NamedCurves&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ECGost3410NamedCurves(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ECGost3410NamedCurves& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ECGost3410NamedCurves& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ECGost3410NamedCurves& operator=(ECGost3410NamedCurves&& o) noexcept = default;
  constexpr ECGost3410NamedCurves& operator=(ECGost3410NamedCurves const& o) noexcept = default;
                


// Fields

static ::System::Collections::IDictionary __declspec(property(get=__get_objIds, put=__set_objIds))  objIds;

static void __set_objIds(::System::Collections::IDictionary value) ;

static ::System::Collections::IDictionary __get_objIds() ;

static ::System::Collections::IDictionary __declspec(property(get=__get_parameters, put=__set_parameters))  parameters;

static void __set_parameters(::System::Collections::IDictionary value) ;

static ::System::Collections::IDictionary __get_parameters() ;

static ::System::Collections::IDictionary __declspec(property(get=__get_names, put=__set_names))  names;

static void __set_names(::System::Collections::IDictionary value) ;

static ::System::Collections::IDictionary __get_names() ;


// Properties

static ::System::Collections::IEnumerable __declspec(property(get=get_Names))  Names;


// Methods

/// @brief Method ConfigureBasepoint addr 0xdfb958 size 0x98 virtual false final false
static ::Org::BouncyCastle::Math::EC::ECPoint ConfigureBasepoint(::Org::BouncyCastle::Math::EC::ECCurve curve, ::Org::BouncyCastle::Math::BigInteger x, ::Org::BouncyCastle::Math::BigInteger y) ;

/// @brief Method ConfigureCurve addr 0xdfb9f0 size 0x4 virtual false final false
static ::Org::BouncyCastle::Math::EC::ECCurve ConfigureCurve(::Org::BouncyCastle::Math::EC::ECCurve curve) ;

// Ctor Parameters []
explicit ECGost3410NamedCurves() ;

/// @brief Method .ctor addr 0xdfb9f4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method GetByOid addr 0xdfd904 size 0x11c virtual false final false
static ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters GetByOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

/// @brief Method GetByOidX9 addr 0xdfda20 size 0x1cc virtual false final false
static ::Org::BouncyCastle::Asn1::X9::X9ECParameters GetByOidX9(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

/// @brief Method get_Names addr 0xdfdbec size 0x10c virtual false final false
static ::System::Collections::IEnumerable get_Names() ;

/// @brief Method GetByName addr 0xdfdcf8 size 0x1ec virtual false final false
static ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters GetByName(::StringW name) ;

/// @brief Method GetByNameX9 addr 0xdfdee4 size 0x144 virtual false final false
static ::Org::BouncyCastle::Asn1::X9::X9ECParameters GetByNameX9(::StringW name) ;

/// @brief Method GetName addr 0xdfe028 size 0x100 virtual false final false
static ::StringW GetName(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

/// @brief Method GetOid addr 0xdfe128 size 0x11c virtual false final false
static ::Org::BouncyCastle::Asn1::DerObjectIdentifier GetOid(::StringW name) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::CryptoPro
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410NamedCurves, "Org.BouncyCastle.Asn1.CryptoPro", "ECGost3410NamedCurves");
