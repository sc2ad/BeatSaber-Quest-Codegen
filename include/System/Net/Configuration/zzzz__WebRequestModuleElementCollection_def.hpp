#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Configuration/zzzz__ConfigurationElementCollection_def.hpp"
// Forward declare root types
namespace System::Net::Configuration {
class WebRequestModuleElementCollection;
}
// Type: System.Net.Configuration::WebRequestModuleElementCollection
namespace System::Net::Configuration {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16076))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8431))
// CS Name: System.Net.Configuration.WebRequestModuleElementCollection
class CORDL_TYPE WebRequestModuleElementCollection : public System::Configuration::ConfigurationElementCollection {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~WebRequestModuleElementCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "WebRequestModuleElementCollection", modifiers: " const&", def_value: None }]
constexpr WebRequestModuleElementCollection(WebRequestModuleElementCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WebRequestModuleElementCollection", modifiers: "&&", def_value: None }]
constexpr WebRequestModuleElementCollection(WebRequestModuleElementCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WebRequestModuleElementCollection(void* ptr) noexcept : System::Configuration::ConfigurationElementCollection(ptr) {
}


  constexpr WebRequestModuleElementCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WebRequestModuleElementCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WebRequestModuleElementCollection& operator=(WebRequestModuleElementCollection&& o) noexcept = default;
  constexpr WebRequestModuleElementCollection& operator=(WebRequestModuleElementCollection const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit WebRequestModuleElementCollection() ;

/// @brief Method .ctor addr 0x27b27bc size 0x38 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Configuration
NEED_NO_BOX(System::Net::Configuration::WebRequestModuleElementCollection);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Configuration::WebRequestModuleElementCollection, "System.Net.Configuration", "WebRequestModuleElementCollection");
