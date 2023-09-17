#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Net/NetworkInformation/zzzz__MacOsNetworkInterfaceAPI_def.hpp"
namespace {
// Forward declare root types
namespace System::Net::NetworkInformation {
class FreeBSDNetworkInterfaceAPI;
}
// Type: System.Net.NetworkInformation::FreeBSDNetworkInterfaceAPI
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8130))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8116))
// CS Name: System.Net.NetworkInformation.FreeBSDNetworkInterfaceAPI
class CORDL_TYPE FreeBSDNetworkInterfaceAPI : public ::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~FreeBSDNetworkInterfaceAPI() = default;

// Ctor Parameters [CppParam { name: "", ty: "FreeBSDNetworkInterfaceAPI", modifiers: " const&", def_value: None }]
constexpr FreeBSDNetworkInterfaceAPI(FreeBSDNetworkInterfaceAPI const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FreeBSDNetworkInterfaceAPI", modifiers: "&&", def_value: None }]
constexpr FreeBSDNetworkInterfaceAPI(FreeBSDNetworkInterfaceAPI&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FreeBSDNetworkInterfaceAPI(void* ptr) noexcept : ::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI(ptr) {
}


  constexpr FreeBSDNetworkInterfaceAPI& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FreeBSDNetworkInterfaceAPI& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FreeBSDNetworkInterfaceAPI& operator=(FreeBSDNetworkInterfaceAPI&& o) noexcept = default;
  constexpr FreeBSDNetworkInterfaceAPI& operator=(FreeBSDNetworkInterfaceAPI const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit FreeBSDNetworkInterfaceAPI() ;

/// @brief Method .ctor addr 0x285b2ac size 0x20 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation
} // end anonymous namespace
NEED_NO_BOX(::System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI, "System.Net.NetworkInformation", "FreeBSDNetworkInterfaceAPI");
