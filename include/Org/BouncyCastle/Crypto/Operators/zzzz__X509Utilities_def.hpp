#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::Pkcs {
class RsassaPssParameters;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Null;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Operators {
class X509Utilities;
}
// Type: Org.BouncyCastle.Crypto.Operators::X509Utilities
namespace Org::BouncyCastle::Crypto::Operators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(990))
// CS Name: Org.BouncyCastle.Crypto.Operators.X509Utilities
class CORDL_TYPE X509Utilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~X509Utilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Utilities", modifiers: " const&", def_value: None }]
constexpr X509Utilities(X509Utilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Utilities", modifiers: "&&", def_value: None }]
constexpr X509Utilities(X509Utilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509Utilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509Utilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509Utilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509Utilities& operator=(X509Utilities&& o) noexcept = default;
  constexpr X509Utilities& operator=(X509Utilities const& o) noexcept = default;
                


// Fields

static ::Org::BouncyCastle::Asn1::Asn1Null __declspec(property(get=__get_derNull, put=__set_derNull))  derNull;

static void __set_derNull(::Org::BouncyCastle::Asn1::Asn1Null value) ;

static ::Org::BouncyCastle::Asn1::Asn1Null __get_derNull() ;

static ::System::Collections::IDictionary __declspec(property(get=__get_algorithms, put=__set_algorithms))  algorithms;

static void __set_algorithms(::System::Collections::IDictionary value) ;

static ::System::Collections::IDictionary __get_algorithms() ;

static ::System::Collections::IDictionary __declspec(property(get=__get_exParams, put=__set_exParams))  exParams;

static void __set_exParams(::System::Collections::IDictionary value) ;

static ::System::Collections::IDictionary __get_exParams() ;

static ::Org::BouncyCastle::Utilities::Collections::ISet __declspec(property(get=__get_noParams, put=__set_noParams))  noParams;

static void __set_noParams(::Org::BouncyCastle::Utilities::Collections::ISet value) ;

static ::Org::BouncyCastle::Utilities::Collections::ISet __get_noParams() ;


// Methods

/// @brief Method GetDigestAlgName addr 0xe9ecf8 size 0x370 virtual false final false
static ::StringW GetDigestAlgName(::Org::BouncyCastle::Asn1::DerObjectIdentifier digestAlgOID) ;

/// @brief Method GetSignatureName addr 0xe9f068 size 0x298 virtual false final false
static ::StringW GetSignatureName(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier sigAlgId) ;

/// @brief Method CreatePssParams addr 0xe9ebcc size 0x12c virtual false final false
static ::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters CreatePssParams(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier hashAlgId, int32_t saltSize) ;

/// @brief Method GetAlgorithmOid addr 0xe9f300 size 0x20c virtual false final false
static ::Org::BouncyCastle::Asn1::DerObjectIdentifier GetAlgorithmOid(::StringW algorithmName) ;

/// @brief Method GetSigAlgID addr 0xe9f50c size 0x330 virtual false final false
static ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier GetSigAlgID(::Org::BouncyCastle::Asn1::DerObjectIdentifier sigOid, ::StringW algorithmName) ;

/// @brief Method GetAlgNames addr 0xe9f83c size 0x10c virtual false final false
static ::System::Collections::IEnumerable GetAlgNames() ;

// Ctor Parameters []
explicit X509Utilities() ;

/// @brief Method .ctor addr 0xe9f948 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Operators
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Operators::X509Utilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Operators::X509Utilities, "Org.BouncyCastle.Crypto.Operators", "X509Utilities");
