#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
// Forward declare root types
namespace System::Configuration {
class ConfigurationElementCollection;
}
// Type: System.Configuration::ConfigurationElementCollection
namespace System::Configuration {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16072))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16076))
// CS Name: System.Configuration.ConfigurationElementCollection
class CORDL_TYPE ConfigurationElementCollection : public System::Configuration::ConfigurationElement {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ConfigurationElementCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConfigurationElementCollection", modifiers: " const&", def_value: None }]
constexpr ConfigurationElementCollection(ConfigurationElementCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConfigurationElementCollection", modifiers: "&&", def_value: None }]
constexpr ConfigurationElementCollection(ConfigurationElementCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConfigurationElementCollection(void* ptr) noexcept : System::Configuration::ConfigurationElement(ptr) {
}


  constexpr ConfigurationElementCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConfigurationElementCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConfigurationElementCollection& operator=(ConfigurationElementCollection&& o) noexcept = default;
  constexpr ConfigurationElementCollection& operator=(ConfigurationElementCollection const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Configuration
NEED_NO_BOX(System::Configuration::ConfigurationElementCollection);
DEFINE_IL2CPP_ARG_TYPE(System::Configuration::ConfigurationElementCollection, "System.Configuration", "ConfigurationElementCollection");
