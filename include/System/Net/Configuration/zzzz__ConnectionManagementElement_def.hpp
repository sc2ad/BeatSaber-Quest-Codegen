#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
namespace {
// Forward declare root types
namespace System::Net::Configuration {
class ConnectionManagementElement;
}
// Type: System.Net.Configuration::ConnectionManagementElement
namespace System::Net::Configuration {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16072))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8417))
// CS Name: System.Net.Configuration.ConnectionManagementElement
class CORDL_TYPE ConnectionManagementElement : public ::System::Configuration::ConfigurationElement {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ConnectionManagementElement() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConnectionManagementElement", modifiers: " const&", def_value: None }]
constexpr ConnectionManagementElement(ConnectionManagementElement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConnectionManagementElement", modifiers: "&&", def_value: None }]
constexpr ConnectionManagementElement(ConnectionManagementElement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConnectionManagementElement(void* ptr) noexcept : ::System::Configuration::ConfigurationElement(ptr) {
}


  constexpr ConnectionManagementElement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConnectionManagementElement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConnectionManagementElement& operator=(ConnectionManagementElement&& o) noexcept = default;
  constexpr ConnectionManagementElement& operator=(ConnectionManagementElement const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Configuration
} // end anonymous namespace
NEED_NO_BOX(::System::Net::Configuration::ConnectionManagementElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::ConnectionManagementElement, "System.Net.Configuration", "ConnectionManagementElement");
