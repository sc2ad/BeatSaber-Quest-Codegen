#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Pkix {
class PkixBuilderParameters;
}
namespace System {
class Exception;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Pkix {
class PkixCertPathBuilderResult;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixCertPathBuilder;
}
// Type: Org.BouncyCastle.Pkix::PkixCertPathBuilder
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1716))
// CS Name: Org.BouncyCastle.Pkix.PkixCertPathBuilder
class CORDL_TYPE PkixCertPathBuilder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PkixCertPathBuilder() = default;

// Ctor Parameters [CppParam { name: "", ty: "PkixCertPathBuilder", modifiers: " const&", def_value: None }]
constexpr PkixCertPathBuilder(PkixCertPathBuilder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PkixCertPathBuilder", modifiers: "&&", def_value: None }]
constexpr PkixCertPathBuilder(PkixCertPathBuilder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PkixCertPathBuilder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PkixCertPathBuilder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PkixCertPathBuilder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PkixCertPathBuilder& operator=(PkixCertPathBuilder&& o) noexcept = default;
  constexpr PkixCertPathBuilder& operator=(PkixCertPathBuilder const& o) noexcept = default;
                


// Fields

 ::System::Exception __declspec(property(get=__get_certPathException, put=__set_certPathException))  certPathException;

constexpr void __set_certPathException(::System::Exception value) ;

constexpr ::System::Exception __get_certPathException() const;


// Methods

/// @brief Method Build addr 0x1066828 size 0x8dc virtual true final false
 ::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult Build(::Org::BouncyCastle::Pkix::PkixBuilderParameters pkixParams) ;

/// @brief Method Build addr 0x1067104 size 0xbb4 virtual true final false
 ::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult Build(::Org::BouncyCastle::X509::X509Certificate tbvCert, ::Org::BouncyCastle::Pkix::PkixBuilderParameters pkixParams, ::System::Collections::IList tbvPath) ;

// Ctor Parameters []
explicit PkixCertPathBuilder() ;

/// @brief Method .ctor addr 0x1067cc0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Pkix
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Pkix::PkixCertPathBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkix::PkixCertPathBuilder, "Org.BouncyCastle.Pkix", "PkixCertPathBuilder");
