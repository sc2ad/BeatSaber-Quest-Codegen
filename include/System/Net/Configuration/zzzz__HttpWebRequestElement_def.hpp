#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
// Forward declare root types
namespace System::Net::Configuration {
class HttpWebRequestElement;
}
// Type: System.Net.Configuration::HttpWebRequestElement
namespace System::Net::Configuration {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16072))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8422))
// CS Name: System.Net.Configuration.HttpWebRequestElement
class CORDL_TYPE HttpWebRequestElement : public System::Configuration::ConfigurationElement {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HttpWebRequestElement() = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpWebRequestElement", modifiers: " const&", def_value: None }]
constexpr HttpWebRequestElement(HttpWebRequestElement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpWebRequestElement", modifiers: "&&", def_value: None }]
constexpr HttpWebRequestElement(HttpWebRequestElement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HttpWebRequestElement(void* ptr) noexcept : System::Configuration::ConfigurationElement(ptr) {
}


  constexpr HttpWebRequestElement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HttpWebRequestElement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HttpWebRequestElement& operator=(HttpWebRequestElement&& o) noexcept = default;
  constexpr HttpWebRequestElement& operator=(HttpWebRequestElement const& o) noexcept = default;
                


// Properties

 System::Configuration::ConfigurationPropertyCollection __declspec(property(get=get_Properties))  Properties;


// Methods

// Ctor Parameters []
explicit HttpWebRequestElement() ;

/// @brief Method .ctor addr 0x27b2404 size 0x38 virtual false final false
 void _ctor() ;

/// @brief Method get_Properties addr 0x27b243c size 0x38 virtual true final false
 System::Configuration::ConfigurationPropertyCollection get_Properties() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Configuration
NEED_NO_BOX(System::Net::Configuration::HttpWebRequestElement);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Configuration::HttpWebRequestElement, "System.Net.Configuration", "HttpWebRequestElement");
