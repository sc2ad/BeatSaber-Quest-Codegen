#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
namespace {
// Forward declare root types
namespace System::Net::Configuration {
class BypassElement;
}
// Type: System.Net.Configuration::BypassElement
namespace System::Net::Configuration {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16072))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8415))
// CS Name: System.Net.Configuration.BypassElement
class CORDL_TYPE BypassElement : public ::System::Configuration::ConfigurationElement {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BypassElement() = default;

// Ctor Parameters [CppParam { name: "", ty: "BypassElement", modifiers: " const&", def_value: None }]
constexpr BypassElement(BypassElement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BypassElement", modifiers: "&&", def_value: None }]
constexpr BypassElement(BypassElement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BypassElement(void* ptr) noexcept : ::System::Configuration::ConfigurationElement(ptr) {
}


  constexpr BypassElement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BypassElement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BypassElement& operator=(BypassElement&& o) noexcept = default;
  constexpr BypassElement& operator=(BypassElement const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Configuration
} // end anonymous namespace
NEED_NO_BOX(::System::Net::Configuration::BypassElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::BypassElement, "System.Net.Configuration", "BypassElement");
