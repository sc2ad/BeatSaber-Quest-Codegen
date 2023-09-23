#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Configuration/zzzz__ConfigurationElementCollection_def.hpp"
// Forward declare root types
namespace System::Net::Configuration {
class ConnectionManagementElementCollection;
}
// Type: System.Net.Configuration::ConnectionManagementElementCollection
namespace System::Net::Configuration {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16076))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8418))
// CS Name: System.Net.Configuration.ConnectionManagementElementCollection
class CORDL_TYPE ConnectionManagementElementCollection : public System::Configuration::ConfigurationElementCollection {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ConnectionManagementElementCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConnectionManagementElementCollection", modifiers: " const&", def_value: None }]
constexpr ConnectionManagementElementCollection(ConnectionManagementElementCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConnectionManagementElementCollection", modifiers: "&&", def_value: None }]
constexpr ConnectionManagementElementCollection(ConnectionManagementElementCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConnectionManagementElementCollection(void* ptr) noexcept : System::Configuration::ConfigurationElementCollection(ptr) {
}


  constexpr ConnectionManagementElementCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConnectionManagementElementCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConnectionManagementElementCollection& operator=(ConnectionManagementElementCollection&& o) noexcept = default;
  constexpr ConnectionManagementElementCollection& operator=(ConnectionManagementElementCollection const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ConnectionManagementElementCollection() ;

/// @brief Method .ctor addr 0x27b2244 size 0x38 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Configuration
NEED_NO_BOX(System::Net::Configuration::ConnectionManagementElementCollection);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Configuration::ConnectionManagementElementCollection, "System.Net.Configuration", "ConnectionManagementElementCollection");
