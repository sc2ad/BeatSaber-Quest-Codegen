#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Configuration/zzzz__ConfigurationElementCollection_def.hpp"
// Forward declare root types
namespace System::Net::Configuration {
class BypassElementCollection;
}
// Type: System.Net.Configuration::BypassElementCollection
namespace System::Net::Configuration {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16076))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8416))
// CS Name: System.Net.Configuration.BypassElementCollection
class CORDL_TYPE BypassElementCollection : public System::Configuration::ConfigurationElementCollection {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BypassElementCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "BypassElementCollection", modifiers: " const&", def_value: None }]
constexpr BypassElementCollection(BypassElementCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BypassElementCollection", modifiers: "&&", def_value: None }]
constexpr BypassElementCollection(BypassElementCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BypassElementCollection(void* ptr) noexcept : System::Configuration::ConfigurationElementCollection(ptr) {
}


  constexpr BypassElementCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BypassElementCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BypassElementCollection& operator=(BypassElementCollection&& o) noexcept = default;
  constexpr BypassElementCollection& operator=(BypassElementCollection const& o) noexcept = default;
                


// Methods

static System::Net::Configuration::BypassElementCollection New_ctor() ;

/// @brief Method .ctor addr 0x27b220c size 0x38 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Configuration
NEED_NO_BOX(System::Net::Configuration::BypassElementCollection);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Configuration::BypassElementCollection, "System.Net.Configuration", "BypassElementCollection");
