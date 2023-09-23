#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
// Forward declare root types
namespace System::Net::Configuration {
class Ipv6Element;
}
// Type: System.Net.Configuration::Ipv6Element
namespace System::Net::Configuration {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16072))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8423))
// CS Name: System.Net.Configuration.Ipv6Element
class CORDL_TYPE Ipv6Element : public System::Configuration::ConfigurationElement {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Ipv6Element() = default;

// Ctor Parameters [CppParam { name: "", ty: "Ipv6Element", modifiers: " const&", def_value: None }]
constexpr Ipv6Element(Ipv6Element const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Ipv6Element", modifiers: "&&", def_value: None }]
constexpr Ipv6Element(Ipv6Element&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Ipv6Element(void* ptr) noexcept : System::Configuration::ConfigurationElement(ptr) {
}


  constexpr Ipv6Element& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Ipv6Element& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Ipv6Element& operator=(Ipv6Element&& o) noexcept = default;
  constexpr Ipv6Element& operator=(Ipv6Element const& o) noexcept = default;
                


// Properties

 System::Configuration::ConfigurationPropertyCollection __declspec(property(get=get_Properties))  Properties;


// Methods

// Ctor Parameters []
explicit Ipv6Element() ;

/// @brief Method .ctor addr 0x27b2474 size 0x38 virtual false final false
 void _ctor() ;

/// @brief Method get_Properties addr 0x27b24ac size 0x38 virtual true final false
 System::Configuration::ConfigurationPropertyCollection get_Properties() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Configuration
NEED_NO_BOX(System::Net::Configuration::Ipv6Element);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Configuration::Ipv6Element, "System.Net.Configuration", "Ipv6Element");
