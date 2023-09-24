#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Net/NetworkInformation/zzzz__UnixIPInterfaceProperties_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Net::NetworkInformation {
class MacOsNetworkInterface;
}
namespace System::Net {
class IPAddress;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Net::NetworkInformation {
class GatewayIPAddressInformationCollection;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class MacOsIPInterfaceProperties;
}
// Type: System.Net.NetworkInformation::MacOsIPInterfaceProperties
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8141))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8129))
// CS Name: System.Net.NetworkInformation.MacOsIPInterfaceProperties
class CORDL_TYPE MacOsIPInterfaceProperties : public System::Net::NetworkInformation::UnixIPInterfaceProperties {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MacOsIPInterfaceProperties() = default;

// Ctor Parameters [CppParam { name: "", ty: "MacOsIPInterfaceProperties", modifiers: " const&", def_value: None }]
constexpr MacOsIPInterfaceProperties(MacOsIPInterfaceProperties const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MacOsIPInterfaceProperties", modifiers: "&&", def_value: None }]
constexpr MacOsIPInterfaceProperties(MacOsIPInterfaceProperties&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MacOsIPInterfaceProperties(void* ptr) noexcept : System::Net::NetworkInformation::UnixIPInterfaceProperties(ptr) {
}


  constexpr MacOsIPInterfaceProperties& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MacOsIPInterfaceProperties& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MacOsIPInterfaceProperties& operator=(MacOsIPInterfaceProperties&& o) noexcept = default;
  constexpr MacOsIPInterfaceProperties& operator=(MacOsIPInterfaceProperties const& o) noexcept = default;
                


// Properties

 System::Net::NetworkInformation::GatewayIPAddressInformationCollection __declspec(property(get=get_GatewayAddresses))  GatewayAddresses;


// Methods

static System::Net::NetworkInformation::MacOsIPInterfaceProperties New_ctor(System::Net::NetworkInformation::MacOsNetworkInterface iface, System::Collections::Generic::List_1<System::Net::IPAddress> addresses) ;

/// @brief Method .ctor addr 0x285cbfc size 0x70 virtual false final false
 void _ctor(System::Net::NetworkInformation::MacOsNetworkInterface iface, System::Collections::Generic::List_1<System::Net::IPAddress> addresses) ;

/// @brief Method ParseRouteInfo_icall addr 0x285cc6c size 0x4 virtual false final false
static bool ParseRouteInfo_icall(::StringW iface, ByRef<::ArrayW<::StringW>> gw_addr_list) ;

/// @brief Method get_GatewayAddresses addr 0x285cc70 size 0x22c virtual true final false
 System::Net::NetworkInformation::GatewayIPAddressInformationCollection get_GatewayAddresses() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation
NEED_NO_BOX(System::Net::NetworkInformation::MacOsIPInterfaceProperties);
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::MacOsIPInterfaceProperties, "System.Net.NetworkInformation", "MacOsIPInterfaceProperties");
