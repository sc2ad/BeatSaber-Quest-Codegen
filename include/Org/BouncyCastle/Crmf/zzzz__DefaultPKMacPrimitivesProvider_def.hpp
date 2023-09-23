#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Crmf {
class IPKMacPrimitivesProvider;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
// Forward declare root types
namespace Org::BouncyCastle::Crmf {
class DefaultPKMacPrimitivesProvider;
}
// Type: Org.BouncyCastle.Crmf::DefaultPKMacPrimitivesProvider
namespace Org::BouncyCastle::Crmf {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(700))
// CS Name: Org.BouncyCastle.Crmf.DefaultPKMacPrimitivesProvider
class CORDL_TYPE DefaultPKMacPrimitivesProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider
constexpr operator  Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DefaultPKMacPrimitivesProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultPKMacPrimitivesProvider", modifiers: " const&", def_value: None }]
constexpr DefaultPKMacPrimitivesProvider(DefaultPKMacPrimitivesProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultPKMacPrimitivesProvider", modifiers: "&&", def_value: None }]
constexpr DefaultPKMacPrimitivesProvider(DefaultPKMacPrimitivesProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultPKMacPrimitivesProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DefaultPKMacPrimitivesProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultPKMacPrimitivesProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultPKMacPrimitivesProvider& operator=(DefaultPKMacPrimitivesProvider&& o) noexcept = default;
  constexpr DefaultPKMacPrimitivesProvider& operator=(DefaultPKMacPrimitivesProvider const& o) noexcept = default;
                


// Methods

/// @brief Method CreateDigest addr 0x11855a8 size 0x78 virtual true final true
 Org::BouncyCastle::Crypto::IDigest CreateDigest(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier digestAlg) ;

/// @brief Method CreateMac addr 0x1185620 size 0x78 virtual true final true
 Org::BouncyCastle::Crypto::IMac CreateMac(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier macAlg) ;

// Ctor Parameters []
explicit DefaultPKMacPrimitivesProvider() ;

/// @brief Method .ctor addr 0x1185698 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crmf
NEED_NO_BOX(Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider, "Org.BouncyCastle.Crmf", "DefaultPKMacPrimitivesProvider");
