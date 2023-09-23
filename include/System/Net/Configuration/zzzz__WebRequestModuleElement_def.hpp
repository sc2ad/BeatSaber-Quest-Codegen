#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
// Forward declare root types
namespace System::Net::Configuration {
class WebRequestModuleElement;
}
// Type: System.Net.Configuration::WebRequestModuleElement
namespace System::Net::Configuration {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16072))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8432))
// CS Name: System.Net.Configuration.WebRequestModuleElement
class CORDL_TYPE WebRequestModuleElement : public System::Configuration::ConfigurationElement {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~WebRequestModuleElement() = default;

// Ctor Parameters [CppParam { name: "", ty: "WebRequestModuleElement", modifiers: " const&", def_value: None }]
constexpr WebRequestModuleElement(WebRequestModuleElement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WebRequestModuleElement", modifiers: "&&", def_value: None }]
constexpr WebRequestModuleElement(WebRequestModuleElement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WebRequestModuleElement(void* ptr) noexcept : System::Configuration::ConfigurationElement(ptr) {
}


  constexpr WebRequestModuleElement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WebRequestModuleElement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WebRequestModuleElement& operator=(WebRequestModuleElement&& o) noexcept = default;
  constexpr WebRequestModuleElement& operator=(WebRequestModuleElement const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Configuration
NEED_NO_BOX(System::Net::Configuration::WebRequestModuleElement);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Configuration::WebRequestModuleElement, "System.Net.Configuration", "WebRequestModuleElement");
