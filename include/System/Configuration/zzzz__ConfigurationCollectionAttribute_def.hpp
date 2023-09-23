#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace System {
class Type;
}
// Forward declare root types
namespace System::Configuration {
class ConfigurationCollectionAttribute;
}
// Type: System.Configuration::ConfigurationCollectionAttribute
namespace System::Configuration {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16077))
// CS Name: System.Configuration.ConfigurationCollectionAttribute
class CORDL_TYPE ConfigurationCollectionAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ConfigurationCollectionAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConfigurationCollectionAttribute", modifiers: " const&", def_value: None }]
constexpr ConfigurationCollectionAttribute(ConfigurationCollectionAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConfigurationCollectionAttribute", modifiers: "&&", def_value: None }]
constexpr ConfigurationCollectionAttribute(ConfigurationCollectionAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConfigurationCollectionAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr ConfigurationCollectionAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConfigurationCollectionAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConfigurationCollectionAttribute& operator=(ConfigurationCollectionAttribute&& o) noexcept = default;
  constexpr ConfigurationCollectionAttribute& operator=(ConfigurationCollectionAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "itemType", ty: "System::Type", modifiers: "", def_value: None }]
explicit ConfigurationCollectionAttribute(System::Type itemType) ;

/// @brief Method .ctor addr 0x267b578 size 0x4 virtual false final false
 void _ctor(System::Type itemType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Configuration
NEED_NO_BOX(System::Configuration::ConfigurationCollectionAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Configuration::ConfigurationCollectionAttribute, "System.Configuration", "ConfigurationCollectionAttribute");
