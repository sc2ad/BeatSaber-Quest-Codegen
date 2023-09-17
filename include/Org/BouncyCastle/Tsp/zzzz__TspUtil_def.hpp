#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Cms {
class SignerInformation;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace System::Collections {
class IList;
}
namespace System::Collections {
class ICollection;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
// Forward declare root types
namespace Org::BouncyCastle::Tsp {
class TspUtil;
}
// Type: Org.BouncyCastle.Tsp::TspUtil
namespace Org::BouncyCastle::Tsp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1775))
// CS Name: Org.BouncyCastle.Tsp.TspUtil
class CORDL_TYPE TspUtil : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TspUtil() = default;

// Ctor Parameters [CppParam { name: "", ty: "TspUtil", modifiers: " const&", def_value: None }]
constexpr TspUtil(TspUtil const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TspUtil", modifiers: "&&", def_value: None }]
constexpr TspUtil(TspUtil&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TspUtil(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TspUtil& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TspUtil& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TspUtil& operator=(TspUtil&& o) noexcept = default;
  constexpr TspUtil& operator=(TspUtil const& o) noexcept = default;
                


// Fields

static ::Org::BouncyCastle::Utilities::Collections::ISet __declspec(property(get=__get_EmptySet, put=__set_EmptySet))  EmptySet;

static void __set_EmptySet(::Org::BouncyCastle::Utilities::Collections::ISet value) ;

static ::Org::BouncyCastle::Utilities::Collections::ISet __get_EmptySet() ;

static ::System::Collections::IList __declspec(property(get=__get_EmptyList, put=__set_EmptyList))  EmptyList;

static void __set_EmptyList(::System::Collections::IList value) ;

static ::System::Collections::IList __get_EmptyList() ;

static ::System::Collections::IDictionary __declspec(property(get=__get_digestLengths, put=__set_digestLengths))  digestLengths;

static void __set_digestLengths(::System::Collections::IDictionary value) ;

static ::System::Collections::IDictionary __get_digestLengths() ;

static ::System::Collections::IDictionary __declspec(property(get=__get_digestNames, put=__set_digestNames))  digestNames;

static void __set_digestNames(::System::Collections::IDictionary value) ;

static ::System::Collections::IDictionary __get_digestNames() ;


// Methods

/// @brief Method GetSignatureTimestamps addr 0x10c9cb4 size 0x9c8 virtual false final false
static ::System::Collections::ICollection GetSignatureTimestamps(::Org::BouncyCastle::Cms::SignerInformation signerInfo) ;

/// @brief Method ValidateCertificate addr 0x10c7260 size 0x374 virtual false final false
static void ValidateCertificate(::Org::BouncyCastle::X509::X509Certificate cert) ;

/// @brief Method GetDigestAlgName addr 0x10ca67c size 0x108 virtual false final false
static ::StringW GetDigestAlgName(::StringW digestAlgOID) ;

/// @brief Method GetDigestLength addr 0x10c39f4 size 0x1e4 virtual false final false
static int32_t GetDigestLength(::StringW digestAlgOID) ;

/// @brief Method CreateDigestInstance addr 0x10ca784 size 0x8c virtual false final false
static ::Org::BouncyCastle::Crypto::IDigest CreateDigestInstance(::StringW digestAlgOID) ;

/// @brief Method GetCriticalExtensionOids addr 0x10ca810 size 0xb4 virtual false final false
static ::Org::BouncyCastle::Utilities::Collections::ISet GetCriticalExtensionOids(::Org::BouncyCastle::Asn1::X509::X509Extensions extensions) ;

/// @brief Method GetNonCriticalExtensionOids addr 0x10cabe8 size 0xb4 virtual false final false
static ::Org::BouncyCastle::Utilities::Collections::ISet GetNonCriticalExtensionOids(::Org::BouncyCastle::Asn1::X509::X509Extensions extensions) ;

/// @brief Method GetExtensionOids addr 0x10c3c70 size 0xb0 virtual false final false
static ::System::Collections::IList GetExtensionOids(::Org::BouncyCastle::Asn1::X509::X509Extensions extensions) ;

// Ctor Parameters []
explicit TspUtil() ;

/// @brief Method .ctor addr 0x10cac9c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Tsp
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Tsp::TspUtil);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Tsp::TspUtil, "Org.BouncyCastle.Tsp", "TspUtil");
