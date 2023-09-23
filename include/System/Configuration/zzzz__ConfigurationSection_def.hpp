#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Configuration {
class ConfigurationElement;
}
namespace System::Configuration {
struct ConfigurationSaveMode;
}
namespace System::Xml {
class XmlReader;
}
// Forward declare root types
namespace System::Configuration {
class ConfigurationSection;
}
// Type: System.Configuration::ConfigurationSection
namespace System::Configuration {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16072))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16073))
// CS Name: System.Configuration.ConfigurationSection
class CORDL_TYPE ConfigurationSection : public System::Configuration::ConfigurationElement {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ConfigurationSection() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConfigurationSection", modifiers: " const&", def_value: None }]
constexpr ConfigurationSection(ConfigurationSection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConfigurationSection", modifiers: "&&", def_value: None }]
constexpr ConfigurationSection(ConfigurationSection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConfigurationSection(void* ptr) noexcept : System::Configuration::ConfigurationElement(ptr) {
}


  constexpr ConfigurationSection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConfigurationSection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConfigurationSection& operator=(ConfigurationSection&& o) noexcept = default;
  constexpr ConfigurationSection& operator=(ConfigurationSection const& o) noexcept = default;
                


// Methods

/// @brief Method DeserializeSection addr 0x267b498 size 0x38 virtual true final false
 void DeserializeSection(System::Xml::XmlReader reader) ;

/// @brief Method IsModified addr 0x267b4d0 size 0x38 virtual true final false
 bool IsModified() ;

/// @brief Method ResetModified addr 0x267b508 size 0x38 virtual true final false
 void ResetModified() ;

/// @brief Method SerializeSection addr 0x267b540 size 0x38 virtual true final false
 ::StringW SerializeSection(System::Configuration::ConfigurationElement parentElement, ::StringW name, System::Configuration::ConfigurationSaveMode saveMode) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Configuration
NEED_NO_BOX(System::Configuration::ConfigurationSection);
DEFINE_IL2CPP_ARG_TYPE(System::Configuration::ConfigurationSection, "System.Configuration", "ConfigurationSection");
