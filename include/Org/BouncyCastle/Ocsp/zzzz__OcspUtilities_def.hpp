#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Ocsp {
class OcspUtilities;
}
// Type: Org.BouncyCastle.Ocsp::OcspUtilities
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1620))
// CS Name: Org.BouncyCastle.Ocsp.OcspUtilities
class CORDL_TYPE OcspUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OcspUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "OcspUtilities", modifiers: " const&", def_value: None }]
constexpr OcspUtilities(OcspUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OcspUtilities", modifiers: "&&", def_value: None }]
constexpr OcspUtilities(OcspUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OcspUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OcspUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OcspUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OcspUtilities& operator=(OcspUtilities&& o) noexcept = default;
  constexpr OcspUtilities& operator=(OcspUtilities const& o) noexcept = default;
                


// Fields

static System::Collections::IDictionary __declspec(property(get=__get_algorithms, put=__set_algorithms))  algorithms;

static void __set_algorithms(System::Collections::IDictionary value) ;

static System::Collections::IDictionary __get_algorithms() ;

static System::Collections::IDictionary __declspec(property(get=__get_oids, put=__set_oids))  oids;

static void __set_oids(System::Collections::IDictionary value) ;

static System::Collections::IDictionary __get_oids() ;

static Org::BouncyCastle::Utilities::Collections::ISet __declspec(property(get=__get_noParams, put=__set_noParams))  noParams;

static void __set_noParams(Org::BouncyCastle::Utilities::Collections::ISet value) ;

static Org::BouncyCastle::Utilities::Collections::ISet __get_noParams() ;


// Properties

static System::Collections::IEnumerable __declspec(property(get=get_AlgNames))  AlgNames;


// Methods

/// @brief Method GetAlgorithmOid addr 0x10158b8 size 0x20c virtual false final false
static Org::BouncyCastle::Asn1::DerObjectIdentifier GetAlgorithmOid(::StringW algorithmName) ;

/// @brief Method GetAlgorithmName addr 0x100ffa4 size 0x198 virtual false final false
static ::StringW GetAlgorithmName(Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

/// @brief Method GetSigAlgID addr 0x1012514 size 0x16c virtual false final false
static Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier GetSigAlgID(Org::BouncyCastle::Asn1::DerObjectIdentifier sigOid) ;

/// @brief Method get_AlgNames addr 0x1012818 size 0x10c virtual false final false
static System::Collections::IEnumerable get_AlgNames() ;

static Org::BouncyCastle::Ocsp::OcspUtilities New_ctor() ;

/// @brief Method .ctor addr 0x10188e8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Ocsp
NEED_NO_BOX(Org::BouncyCastle::Ocsp::OcspUtilities);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Ocsp::OcspUtilities, "Org.BouncyCastle.Ocsp", "OcspUtilities");
