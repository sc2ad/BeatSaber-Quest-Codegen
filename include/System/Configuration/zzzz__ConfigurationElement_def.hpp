#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
// Forward declare root types
namespace System::Configuration {
class ConfigurationElement;
}
// Type: System.Configuration::ConfigurationElement
namespace System::Configuration {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16072))
// CS Name: System.Configuration.ConfigurationElement
class CORDL_TYPE ConfigurationElement : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ConfigurationElement() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConfigurationElement", modifiers: " const&", def_value: None }]
constexpr ConfigurationElement(ConfigurationElement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConfigurationElement", modifiers: "&&", def_value: None }]
constexpr ConfigurationElement(ConfigurationElement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConfigurationElement(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ConfigurationElement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConfigurationElement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConfigurationElement& operator=(ConfigurationElement&& o) noexcept = default;
  constexpr ConfigurationElement& operator=(ConfigurationElement const& o) noexcept = default;
                


// Properties

 ::System::Configuration::ConfigurationPropertyCollection __declspec(property(get=get_Properties))  Properties;


// Methods

/// @brief Method get_Properties addr 0x267b3b8 size 0x38 virtual true final false
 ::System::Configuration::ConfigurationPropertyCollection get_Properties() ;

/// @brief Method IsModified addr 0x267b3f0 size 0x38 virtual true final false
 bool IsModified() ;

/// @brief Method Reset addr 0x267b428 size 0x38 virtual true final false
 void Reset(::System::Configuration::ConfigurationElement parentElement) ;

/// @brief Method ResetModified addr 0x267b460 size 0x38 virtual true final false
 void ResetModified() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Configuration
} // end anonymous namespace
NEED_NO_BOX(::System::Configuration::ConfigurationElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Configuration::ConfigurationElement, "System.Configuration", "ConfigurationElement");
