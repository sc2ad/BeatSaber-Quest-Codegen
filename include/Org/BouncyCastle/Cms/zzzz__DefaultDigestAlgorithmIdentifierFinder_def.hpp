#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class DefaultDigestAlgorithmIdentifierFinder;
}
// Type: Org.BouncyCastle.Cms::DefaultDigestAlgorithmIdentifierFinder
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(659))
// CS Name: Org.BouncyCastle.Cms.DefaultDigestAlgorithmIdentifierFinder
class CORDL_TYPE DefaultDigestAlgorithmIdentifierFinder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DefaultDigestAlgorithmIdentifierFinder() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultDigestAlgorithmIdentifierFinder", modifiers: " const&", def_value: None }]
constexpr DefaultDigestAlgorithmIdentifierFinder(DefaultDigestAlgorithmIdentifierFinder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultDigestAlgorithmIdentifierFinder", modifiers: "&&", def_value: None }]
constexpr DefaultDigestAlgorithmIdentifierFinder(DefaultDigestAlgorithmIdentifierFinder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultDigestAlgorithmIdentifierFinder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DefaultDigestAlgorithmIdentifierFinder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultDigestAlgorithmIdentifierFinder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultDigestAlgorithmIdentifierFinder& operator=(DefaultDigestAlgorithmIdentifierFinder&& o) noexcept = default;
  constexpr DefaultDigestAlgorithmIdentifierFinder& operator=(DefaultDigestAlgorithmIdentifierFinder const& o) noexcept = default;
                


// Fields

static System::Collections::IDictionary __declspec(property(get=__get_digestOids, put=__set_digestOids))  digestOids;

static void __set_digestOids(System::Collections::IDictionary value) ;

static System::Collections::IDictionary __get_digestOids() ;

static System::Collections::IDictionary __declspec(property(get=__get_digestNameToOids, put=__set_digestNameToOids))  digestNameToOids;

static void __set_digestNameToOids(System::Collections::IDictionary value) ;

static System::Collections::IDictionary __get_digestNameToOids() ;


// Methods

/// @brief Method find addr 0x1162174 size 0x264 virtual false final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier find(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier sigAlgId) ;

/// @brief Method find addr 0x11721ac size 0x19c virtual false final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier find(::StringW digAlgName) ;

static Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder New_ctor() ;

/// @brief Method .ctor addr 0x116216c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder, "Org.BouncyCastle.Cms", "DefaultDigestAlgorithmIdentifierFinder");
