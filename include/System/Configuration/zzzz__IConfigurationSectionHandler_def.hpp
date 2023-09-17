#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace {
// Forward declare root types
namespace System::Configuration {
class IConfigurationSectionHandler;
}
// Type: System.Configuration::IConfigurationSectionHandler
namespace System::Configuration {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8414))
// CS Name: System.Configuration.IConfigurationSectionHandler
class CORDL_TYPE IConfigurationSectionHandler : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IConfigurationSectionHandler() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IConfigurationSectionHandler(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Configuration
} // end anonymous namespace
NEED_NO_BOX(::System::Configuration::IConfigurationSectionHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Configuration::IConfigurationSectionHandler, "System.Configuration", "IConfigurationSectionHandler");
