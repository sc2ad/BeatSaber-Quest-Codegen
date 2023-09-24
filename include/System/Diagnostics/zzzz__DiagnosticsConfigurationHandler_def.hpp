#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Xml {
class XmlNode;
}
namespace System::Configuration {
class IConfigurationSectionHandler;
}
// Forward declare root types
namespace System::Diagnostics {
class DiagnosticsConfigurationHandler;
}
// Type: System.Diagnostics::DiagnosticsConfigurationHandler
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8433))
// CS Name: System.Diagnostics.DiagnosticsConfigurationHandler
class CORDL_TYPE DiagnosticsConfigurationHandler : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Configuration::IConfigurationSectionHandler
constexpr operator  System::Configuration::IConfigurationSectionHandler() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DiagnosticsConfigurationHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "DiagnosticsConfigurationHandler", modifiers: " const&", def_value: None }]
constexpr DiagnosticsConfigurationHandler(DiagnosticsConfigurationHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DiagnosticsConfigurationHandler", modifiers: "&&", def_value: None }]
constexpr DiagnosticsConfigurationHandler(DiagnosticsConfigurationHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DiagnosticsConfigurationHandler(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DiagnosticsConfigurationHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DiagnosticsConfigurationHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DiagnosticsConfigurationHandler& operator=(DiagnosticsConfigurationHandler&& o) noexcept = default;
  constexpr DiagnosticsConfigurationHandler& operator=(DiagnosticsConfigurationHandler const& o) noexcept = default;
                


// Methods

static System::Diagnostics::DiagnosticsConfigurationHandler New_ctor() ;

/// @brief Method .ctor addr 0x27b27f4 size 0x38 virtual false final false
 void _ctor() ;

/// @brief Method Create addr 0x27b282c size 0x38 virtual true final false
 ::bs_hook::Il2CppWrapperType Create(::bs_hook::Il2CppWrapperType parent, ::bs_hook::Il2CppWrapperType configContext, System::Xml::XmlNode section) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Diagnostics
NEED_NO_BOX(System::Diagnostics::DiagnosticsConfigurationHandler);
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::DiagnosticsConfigurationHandler, "System.Diagnostics", "DiagnosticsConfigurationHandler");
