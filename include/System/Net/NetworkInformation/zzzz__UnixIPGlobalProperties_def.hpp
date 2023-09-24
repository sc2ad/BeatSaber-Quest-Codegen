#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Net/NetworkInformation/zzzz__CommonUnixIPGlobalProperties_def.hpp"
// Forward declare root types
namespace System::Net::NetworkInformation {
class UnixIPGlobalProperties;
}
// Type: System.Net.NetworkInformation::UnixIPGlobalProperties
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8136))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8137))
// CS Name: System.Net.NetworkInformation.UnixIPGlobalProperties
class CORDL_TYPE UnixIPGlobalProperties : public System::Net::NetworkInformation::CommonUnixIPGlobalProperties {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnixIPGlobalProperties() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnixIPGlobalProperties", modifiers: " const&", def_value: None }]
constexpr UnixIPGlobalProperties(UnixIPGlobalProperties const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnixIPGlobalProperties", modifiers: "&&", def_value: None }]
constexpr UnixIPGlobalProperties(UnixIPGlobalProperties&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnixIPGlobalProperties(void* ptr) noexcept : System::Net::NetworkInformation::CommonUnixIPGlobalProperties(ptr) {
}


  constexpr UnixIPGlobalProperties& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnixIPGlobalProperties& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnixIPGlobalProperties& operator=(UnixIPGlobalProperties&& o) noexcept = default;
  constexpr UnixIPGlobalProperties& operator=(UnixIPGlobalProperties const& o) noexcept = default;
                


// Methods

static System::Net::NetworkInformation::UnixIPGlobalProperties New_ctor() ;

/// @brief Method .ctor addr 0x285df10 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation
NEED_NO_BOX(System::Net::NetworkInformation::UnixIPGlobalProperties);
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::UnixIPGlobalProperties, "System.Net.NetworkInformation", "UnixIPGlobalProperties");
