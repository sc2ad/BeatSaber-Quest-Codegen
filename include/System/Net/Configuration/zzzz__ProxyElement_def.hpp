#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
// Forward declare root types
namespace System::Net::Configuration {
class ProxyElement;
}
// Type: System.Net.Configuration::ProxyElement
namespace System::Net::Configuration {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16072))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8421))
// CS Name: System.Net.Configuration.ProxyElement
class CORDL_TYPE ProxyElement : public System::Configuration::ConfigurationElement {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ProxyElement() = default;

// Ctor Parameters [CppParam { name: "", ty: "ProxyElement", modifiers: " const&", def_value: None }]
constexpr ProxyElement(ProxyElement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ProxyElement", modifiers: "&&", def_value: None }]
constexpr ProxyElement(ProxyElement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ProxyElement(void* ptr) noexcept : System::Configuration::ConfigurationElement(ptr) {
}


  constexpr ProxyElement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ProxyElement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ProxyElement& operator=(ProxyElement&& o) noexcept = default;
  constexpr ProxyElement& operator=(ProxyElement const& o) noexcept = default;
                


// Properties

 System::Configuration::ConfigurationPropertyCollection __declspec(property(get=get_Properties))  Properties;


// Methods

// Ctor Parameters []
explicit ProxyElement() ;

/// @brief Method .ctor addr 0x27b2394 size 0x38 virtual false final false
 void _ctor() ;

/// @brief Method get_Properties addr 0x27b23cc size 0x38 virtual true final false
 System::Configuration::ConfigurationPropertyCollection get_Properties() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Configuration
NEED_NO_BOX(System::Net::Configuration::ProxyElement);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Configuration::ProxyElement, "System.Net.Configuration", "ProxyElement");
