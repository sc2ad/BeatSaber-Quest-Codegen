#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorInfo;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Store;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class OriginatorInfoGenerator;
}
// Type: Org.BouncyCastle.Cms::OriginatorInfoGenerator
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(680))
// CS Name: Org.BouncyCastle.Cms.OriginatorInfoGenerator
class CORDL_TYPE OriginatorInfoGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OriginatorInfoGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "OriginatorInfoGenerator", modifiers: " const&", def_value: None }]
constexpr OriginatorInfoGenerator(OriginatorInfoGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OriginatorInfoGenerator", modifiers: "&&", def_value: None }]
constexpr OriginatorInfoGenerator(OriginatorInfoGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OriginatorInfoGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OriginatorInfoGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OriginatorInfoGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OriginatorInfoGenerator& operator=(OriginatorInfoGenerator&& o) noexcept = default;
  constexpr OriginatorInfoGenerator& operator=(OriginatorInfoGenerator const& o) noexcept = default;
                


// Fields

 ::System::Collections::IList __declspec(property(get=__get_origCerts, put=__set_origCerts))  origCerts;

constexpr void __set_origCerts(::System::Collections::IList value) ;

constexpr ::System::Collections::IList __get_origCerts() const;

 ::System::Collections::IList __declspec(property(get=__get_origCrls, put=__set_origCrls))  origCrls;

constexpr void __set_origCrls(::System::Collections::IList value) ;

constexpr ::System::Collections::IList __get_origCrls() const;


// Methods

// Ctor Parameters [CppParam { name: "origCert", ty: "::Org::BouncyCastle::X509::X509Certificate", modifiers: "", def_value: None }]
explicit OriginatorInfoGenerator(::Org::BouncyCastle::X509::X509Certificate origCert) ;

/// @brief Method .ctor addr 0x117b774 size 0x110 virtual false final false
 void _ctor(::Org::BouncyCastle::X509::X509Certificate origCert) ;

// Ctor Parameters [CppParam { name: "origCerts", ty: "::Org::BouncyCastle::X509::Store::IX509Store", modifiers: "", def_value: None }]
explicit OriginatorInfoGenerator(::Org::BouncyCastle::X509::Store::IX509Store origCerts) ;

/// @brief Method .ctor addr 0x117b884 size 0x30 virtual false final false
 void _ctor(::Org::BouncyCastle::X509::Store::IX509Store origCerts) ;

// Ctor Parameters [CppParam { name: "origCerts", ty: "::Org::BouncyCastle::X509::Store::IX509Store", modifiers: "", def_value: None }, CppParam { name: "origCrls", ty: "::Org::BouncyCastle::X509::Store::IX509Store", modifiers: "", def_value: None }]
explicit OriginatorInfoGenerator(::Org::BouncyCastle::X509::Store::IX509Store origCerts, ::Org::BouncyCastle::X509::Store::IX509Store origCrls) ;

/// @brief Method .ctor addr 0x117b8b4 size 0x4c virtual false final false
 void _ctor(::Org::BouncyCastle::X509::Store::IX509Store origCerts, ::Org::BouncyCastle::X509::Store::IX509Store origCrls) ;

/// @brief Method Generate addr 0x117b900 size 0x90 virtual true final false
 ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo Generate() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Cms::OriginatorInfoGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::OriginatorInfoGenerator, "Org.BouncyCastle.Cms", "OriginatorInfoGenerator");
