#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Configuration/zzzz__ConfigurationSection_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
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
class IgnoreSection;
}
// Type: System.Configuration::IgnoreSection
namespace System::Configuration {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16073))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16079))
// CS Name: System.Configuration.IgnoreSection
class CORDL_TYPE IgnoreSection : public System::Configuration::ConfigurationSection {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~IgnoreSection() = default;

// Ctor Parameters [CppParam { name: "", ty: "IgnoreSection", modifiers: " const&", def_value: None }]
constexpr IgnoreSection(IgnoreSection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IgnoreSection", modifiers: "&&", def_value: None }]
constexpr IgnoreSection(IgnoreSection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IgnoreSection(void* ptr) noexcept : System::Configuration::ConfigurationSection(ptr) {
}


  constexpr IgnoreSection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IgnoreSection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IgnoreSection& operator=(IgnoreSection&& o) noexcept = default;
  constexpr IgnoreSection& operator=(IgnoreSection const& o) noexcept = default;
                


// Properties

 System::Configuration::ConfigurationPropertyCollection __declspec(property(get=get_Properties))  Properties;


// Methods

// Ctor Parameters []
explicit IgnoreSection() ;

/// @brief Method .ctor addr 0x267b57c size 0x38 virtual false final false
 void _ctor() ;

/// @brief Method get_Properties addr 0x267b5b4 size 0x38 virtual true final false
 System::Configuration::ConfigurationPropertyCollection get_Properties() ;

/// @brief Method DeserializeSection addr 0x267b5ec size 0x38 virtual true final false
 void DeserializeSection(System::Xml::XmlReader xmlReader) ;

/// @brief Method IsModified addr 0x267b624 size 0x38 virtual true final false
 bool IsModified() ;

/// @brief Method Reset addr 0x267b65c size 0x38 virtual true final false
 void Reset(System::Configuration::ConfigurationElement parentSection) ;

/// @brief Method ResetModified addr 0x267b694 size 0x38 virtual true final false
 void ResetModified() ;

/// @brief Method SerializeSection addr 0x267b6cc size 0x38 virtual true final false
 ::StringW SerializeSection(System::Configuration::ConfigurationElement parentSection, ::StringW name, System::Configuration::ConfigurationSaveMode saveMode) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Configuration
NEED_NO_BOX(System::Configuration::IgnoreSection);
DEFINE_IL2CPP_ARG_TYPE(System::Configuration::IgnoreSection, "System.Configuration", "IgnoreSection");
