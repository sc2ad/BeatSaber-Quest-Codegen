#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Configuration/zzzz__ConfigurationSection_def.hpp"
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
// Forward declare root types
namespace System::Net::Configuration {
class WebRequestModulesSection;
}
// Type: System.Net.Configuration::WebRequestModulesSection
namespace System::Net::Configuration {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16073))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8430))
// CS Name: System.Net.Configuration.WebRequestModulesSection
class CORDL_TYPE WebRequestModulesSection : public System::Configuration::ConfigurationSection {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~WebRequestModulesSection() = default;

// Ctor Parameters [CppParam { name: "", ty: "WebRequestModulesSection", modifiers: " const&", def_value: None }]
constexpr WebRequestModulesSection(WebRequestModulesSection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WebRequestModulesSection", modifiers: "&&", def_value: None }]
constexpr WebRequestModulesSection(WebRequestModulesSection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WebRequestModulesSection(void* ptr) noexcept : System::Configuration::ConfigurationSection(ptr) {
}


  constexpr WebRequestModulesSection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WebRequestModulesSection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WebRequestModulesSection& operator=(WebRequestModulesSection&& o) noexcept = default;
  constexpr WebRequestModulesSection& operator=(WebRequestModulesSection const& o) noexcept = default;
                


// Properties

 System::Configuration::ConfigurationPropertyCollection __declspec(property(get=get_Properties))  Properties;


// Methods

// Ctor Parameters []
explicit WebRequestModulesSection() ;

/// @brief Method .ctor addr 0x27b274c size 0x38 virtual false final false
 void _ctor() ;

/// @brief Method get_Properties addr 0x27b2784 size 0x38 virtual true final false
 System::Configuration::ConfigurationPropertyCollection get_Properties() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Configuration
NEED_NO_BOX(System::Net::Configuration::WebRequestModulesSection);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Configuration::WebRequestModulesSection, "System.Net.Configuration", "WebRequestModulesSection");
