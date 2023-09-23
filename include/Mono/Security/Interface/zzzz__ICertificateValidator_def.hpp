#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
// Forward declare root types
namespace Mono::Security::Interface {
class ICertificateValidator;
}
// Type: Mono.Security.Interface::ICertificateValidator
namespace Mono::Security::Interface {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13987))
// CS Name: Mono.Security.Interface.ICertificateValidator
class CORDL_TYPE ICertificateValidator : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ICertificateValidator() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ICertificateValidator(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::Interface
NEED_NO_BOX(Mono::Security::Interface::ICertificateValidator);
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Interface::ICertificateValidator, "Mono.Security.Interface", "ICertificateValidator");
