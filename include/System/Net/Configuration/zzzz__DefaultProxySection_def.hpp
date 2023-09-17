#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Configuration/zzzz__ConfigurationSection_def.hpp"
namespace {
namespace System::Configuration {
class ConfigurationElement;
}
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
// Forward declare root types
namespace System::Net::Configuration {
class DefaultProxySection;
}
// Type: System.Net.Configuration::DefaultProxySection
namespace System::Net::Configuration {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16073))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8420))
// CS Name: System.Net.Configuration.DefaultProxySection
class CORDL_TYPE DefaultProxySection : public ::System::Configuration::ConfigurationSection {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DefaultProxySection() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultProxySection", modifiers: " const&", def_value: None }]
constexpr DefaultProxySection(DefaultProxySection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultProxySection", modifiers: "&&", def_value: None }]
constexpr DefaultProxySection(DefaultProxySection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultProxySection(void* ptr) noexcept : ::System::Configuration::ConfigurationSection(ptr) {
}


  constexpr DefaultProxySection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultProxySection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultProxySection& operator=(DefaultProxySection&& o) noexcept = default;
  constexpr DefaultProxySection& operator=(DefaultProxySection const& o) noexcept = default;
                


// Properties

 ::System::Configuration::ConfigurationPropertyCollection __declspec(property(get=get_Properties))  Properties;


// Methods

// Ctor Parameters []
explicit DefaultProxySection() ;

/// @brief Method .ctor addr 0x27b22ec size 0x38 virtual false final false
 void _ctor() ;

/// @brief Method get_Properties addr 0x27b2324 size 0x38 virtual true final false
 ::System::Configuration::ConfigurationPropertyCollection get_Properties() ;

/// @brief Method Reset addr 0x27b235c size 0x38 virtual true final false
 void Reset(::System::Configuration::ConfigurationElement parentElement) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Configuration
} // end anonymous namespace
NEED_NO_BOX(::System::Net::Configuration::DefaultProxySection);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::DefaultProxySection, "System.Net.Configuration", "DefaultProxySection");
