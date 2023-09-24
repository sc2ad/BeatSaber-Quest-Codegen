#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Configuration/zzzz__ConfigurationSectionGroup_def.hpp"
// Forward declare root types
namespace System::Net::Configuration {
class NetSectionGroup;
}
// Type: System.Net.Configuration::NetSectionGroup
namespace System::Net::Configuration {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16078))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8424))
// CS Name: System.Net.Configuration.NetSectionGroup
class CORDL_TYPE NetSectionGroup : public System::Configuration::ConfigurationSectionGroup {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NetSectionGroup() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetSectionGroup", modifiers: " const&", def_value: None }]
constexpr NetSectionGroup(NetSectionGroup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetSectionGroup", modifiers: "&&", def_value: None }]
constexpr NetSectionGroup(NetSectionGroup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetSectionGroup(void* ptr) noexcept : System::Configuration::ConfigurationSectionGroup(ptr) {
}


  constexpr NetSectionGroup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetSectionGroup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetSectionGroup& operator=(NetSectionGroup&& o) noexcept = default;
  constexpr NetSectionGroup& operator=(NetSectionGroup const& o) noexcept = default;
                


// Methods

static System::Net::Configuration::NetSectionGroup New_ctor() ;

/// @brief Method .ctor addr 0x27b24e4 size 0x38 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Configuration
NEED_NO_BOX(System::Net::Configuration::NetSectionGroup);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Configuration::NetSectionGroup, "System.Net.Configuration", "NetSectionGroup");
