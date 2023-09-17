#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace System::Configuration {
class ConfigurationSectionGroup;
}
// Type: System.Configuration::ConfigurationSectionGroup
namespace System::Configuration {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16078))
// CS Name: System.Configuration.ConfigurationSectionGroup
class CORDL_TYPE ConfigurationSectionGroup : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ConfigurationSectionGroup() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConfigurationSectionGroup", modifiers: " const&", def_value: None }]
constexpr ConfigurationSectionGroup(ConfigurationSectionGroup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConfigurationSectionGroup", modifiers: "&&", def_value: None }]
constexpr ConfigurationSectionGroup(ConfigurationSectionGroup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConfigurationSectionGroup(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ConfigurationSectionGroup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConfigurationSectionGroup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConfigurationSectionGroup& operator=(ConfigurationSectionGroup&& o) noexcept = default;
  constexpr ConfigurationSectionGroup& operator=(ConfigurationSectionGroup const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Configuration
} // end anonymous namespace
NEED_NO_BOX(::System::Configuration::ConfigurationSectionGroup);
DEFINE_IL2CPP_ARG_TYPE(::System::Configuration::ConfigurationSectionGroup, "System.Configuration", "ConfigurationSectionGroup");
