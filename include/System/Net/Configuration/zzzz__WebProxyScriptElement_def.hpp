#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
// Forward declare root types
namespace System::Net::Configuration {
class WebProxyScriptElement;
}
// Type: System.Net.Configuration::WebProxyScriptElement
namespace System::Net::Configuration {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16072))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8429))
// CS Name: System.Net.Configuration.WebProxyScriptElement
class CORDL_TYPE WebProxyScriptElement : public System::Configuration::ConfigurationElement {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~WebProxyScriptElement() = default;

// Ctor Parameters [CppParam { name: "", ty: "WebProxyScriptElement", modifiers: " const&", def_value: None }]
constexpr WebProxyScriptElement(WebProxyScriptElement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WebProxyScriptElement", modifiers: "&&", def_value: None }]
constexpr WebProxyScriptElement(WebProxyScriptElement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WebProxyScriptElement(void* ptr) noexcept : System::Configuration::ConfigurationElement(ptr) {
}


  constexpr WebProxyScriptElement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WebProxyScriptElement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WebProxyScriptElement& operator=(WebProxyScriptElement&& o) noexcept = default;
  constexpr WebProxyScriptElement& operator=(WebProxyScriptElement const& o) noexcept = default;
                


// Properties

 System::Configuration::ConfigurationPropertyCollection __declspec(property(get=get_Properties))  Properties;


// Methods

static System::Net::Configuration::WebProxyScriptElement New_ctor() ;

/// @brief Method .ctor addr 0x27b26dc size 0x38 virtual false final false
 void _ctor() ;

/// @brief Method get_Properties addr 0x27b2714 size 0x38 virtual true final false
 System::Configuration::ConfigurationPropertyCollection get_Properties() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Configuration
NEED_NO_BOX(System::Net::Configuration::WebProxyScriptElement);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Configuration::WebProxyScriptElement, "System.Net.Configuration", "WebProxyScriptElement");
