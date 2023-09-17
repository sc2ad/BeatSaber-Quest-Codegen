#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
namespace Mono {
class ISystemCertificateProvider;
}
// Forward declare root types
namespace Mono {
class ISystemDependencyProvider;
}
// Type: Mono::ISystemDependencyProvider
namespace Mono {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2226))
// CS Name: Mono.ISystemDependencyProvider
class CORDL_TYPE ISystemDependencyProvider : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ISystemDependencyProvider() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISystemDependencyProvider(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::Mono::ISystemCertificateProvider __declspec(property(get=get_CertificateProvider))  CertificateProvider;


// Methods

/// @brief Method get_CertificateProvider addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Mono::ISystemCertificateProvider get_CertificateProvider() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono
} // end anonymous namespace
NEED_NO_BOX(::Mono::ISystemDependencyProvider);
DEFINE_IL2CPP_ARG_TYPE(::Mono::ISystemDependencyProvider, "Mono", "ISystemDependencyProvider");
