#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Pkix {
class PkixCertPathBuilderResult;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace System {
class Exception;
}
namespace Org::BouncyCastle::Pkix {
class PkixBuilderParameters;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::X509 {
class IX509AttributeCertificate;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixAttrCertPathBuilder;
}
// Type: Org.BouncyCastle.Pkix::PkixAttrCertPathBuilder
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1711))
// CS Name: Org.BouncyCastle.Pkix.PkixAttrCertPathBuilder
class CORDL_TYPE PkixAttrCertPathBuilder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PkixAttrCertPathBuilder() = default;

// Ctor Parameters [CppParam { name: "", ty: "PkixAttrCertPathBuilder", modifiers: " const&", def_value: None }]
constexpr PkixAttrCertPathBuilder(PkixAttrCertPathBuilder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PkixAttrCertPathBuilder", modifiers: "&&", def_value: None }]
constexpr PkixAttrCertPathBuilder(PkixAttrCertPathBuilder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PkixAttrCertPathBuilder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PkixAttrCertPathBuilder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PkixAttrCertPathBuilder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PkixAttrCertPathBuilder& operator=(PkixAttrCertPathBuilder&& o) noexcept = default;
  constexpr PkixAttrCertPathBuilder& operator=(PkixAttrCertPathBuilder const& o) noexcept = default;
                


// Fields

 ::System::Exception __declspec(property(get=__get_certPathException, put=__set_certPathException))  certPathException;

constexpr void __set_certPathException(::System::Exception value) ;

constexpr ::System::Exception __get_certPathException() const;


// Methods

/// @brief Method Build addr 0x105c5c0 size 0xee0 virtual true final false
 ::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult Build(::Org::BouncyCastle::Pkix::PkixBuilderParameters pkixParams) ;

/// @brief Method Build addr 0x105e4b8 size 0xc40 virtual false final false
 ::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult Build(::Org::BouncyCastle::X509::IX509AttributeCertificate attrCert, ::Org::BouncyCastle::X509::X509Certificate tbvCert, ::Org::BouncyCastle::Pkix::PkixBuilderParameters pkixParams, ::System::Collections::IList tbvPath) ;

// Ctor Parameters []
explicit PkixAttrCertPathBuilder() ;

/// @brief Method .ctor addr 0x105fa50 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Pkix
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder, "Org.BouncyCastle.Pkix", "PkixAttrCertPathBuilder");
