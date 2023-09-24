#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
// Forward declare root types
namespace System::Net::Configuration {
class PerformanceCountersElement;
}
// Type: System.Net.Configuration::PerformanceCountersElement
namespace System::Net::Configuration {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16072))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8426))
// CS Name: System.Net.Configuration.PerformanceCountersElement
class CORDL_TYPE PerformanceCountersElement : public System::Configuration::ConfigurationElement {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PerformanceCountersElement() = default;

// Ctor Parameters [CppParam { name: "", ty: "PerformanceCountersElement", modifiers: " const&", def_value: None }]
constexpr PerformanceCountersElement(PerformanceCountersElement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PerformanceCountersElement", modifiers: "&&", def_value: None }]
constexpr PerformanceCountersElement(PerformanceCountersElement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PerformanceCountersElement(void* ptr) noexcept : System::Configuration::ConfigurationElement(ptr) {
}


  constexpr PerformanceCountersElement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PerformanceCountersElement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PerformanceCountersElement& operator=(PerformanceCountersElement&& o) noexcept = default;
  constexpr PerformanceCountersElement& operator=(PerformanceCountersElement const& o) noexcept = default;
                


// Properties

 System::Configuration::ConfigurationPropertyCollection __declspec(property(get=get_Properties))  Properties;


// Methods

static System::Net::Configuration::PerformanceCountersElement New_ctor() ;

/// @brief Method .ctor addr 0x27b258c size 0x38 virtual false final false
 void _ctor() ;

/// @brief Method get_Properties addr 0x27b25c4 size 0x38 virtual true final false
 System::Configuration::ConfigurationPropertyCollection get_Properties() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Configuration
NEED_NO_BOX(System::Net::Configuration::PerformanceCountersElement);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Configuration::PerformanceCountersElement, "System.Net.Configuration", "PerformanceCountersElement");
