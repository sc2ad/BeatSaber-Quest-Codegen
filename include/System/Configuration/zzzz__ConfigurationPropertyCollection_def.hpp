#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
// Type: System.Configuration::ConfigurationPropertyCollection
namespace System::Configuration {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16075))
// CS Name: System.Configuration.ConfigurationPropertyCollection
class CORDL_TYPE ConfigurationPropertyCollection : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ConfigurationPropertyCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConfigurationPropertyCollection", modifiers: " const&", def_value: None }]
constexpr ConfigurationPropertyCollection(ConfigurationPropertyCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConfigurationPropertyCollection", modifiers: "&&", def_value: None }]
constexpr ConfigurationPropertyCollection(ConfigurationPropertyCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConfigurationPropertyCollection(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ConfigurationPropertyCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConfigurationPropertyCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConfigurationPropertyCollection& operator=(ConfigurationPropertyCollection&& o) noexcept = default;
  constexpr ConfigurationPropertyCollection& operator=(ConfigurationPropertyCollection const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Configuration
} // end anonymous namespace
NEED_NO_BOX(::System::Configuration::ConfigurationPropertyCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Configuration::ConfigurationPropertyCollection, "System.Configuration", "ConfigurationPropertyCollection");
