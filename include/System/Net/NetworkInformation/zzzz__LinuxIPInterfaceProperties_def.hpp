#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Net/NetworkInformation/zzzz__UnixIPInterfaceProperties_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Net::NetworkInformation {
class GatewayIPAddressInformationCollection;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Net {
class IPAddress;
}
namespace System::Net::NetworkInformation {
class LinuxNetworkInterface;
}
namespace System::Net::NetworkInformation {
class IPAddressCollection;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class LinuxIPInterfaceProperties;
}
// Type: System.Net.NetworkInformation::LinuxIPInterfaceProperties
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8141))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8118))
// CS Name: System.Net.NetworkInformation.LinuxIPInterfaceProperties
class CORDL_TYPE LinuxIPInterfaceProperties : public ::System::Net::NetworkInformation::UnixIPInterfaceProperties {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~LinuxIPInterfaceProperties() = default;

// Ctor Parameters [CppParam { name: "", ty: "LinuxIPInterfaceProperties", modifiers: " const&", def_value: None }]
constexpr LinuxIPInterfaceProperties(LinuxIPInterfaceProperties const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LinuxIPInterfaceProperties", modifiers: "&&", def_value: None }]
constexpr LinuxIPInterfaceProperties(LinuxIPInterfaceProperties&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LinuxIPInterfaceProperties(void* ptr) noexcept : ::System::Net::NetworkInformation::UnixIPInterfaceProperties(ptr) {
}


  constexpr LinuxIPInterfaceProperties& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LinuxIPInterfaceProperties& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LinuxIPInterfaceProperties& operator=(LinuxIPInterfaceProperties&& o) noexcept = default;
  constexpr LinuxIPInterfaceProperties& operator=(LinuxIPInterfaceProperties const& o) noexcept = default;
                


// Properties

 ::System::Net::NetworkInformation::GatewayIPAddressInformationCollection __declspec(property(get=get_GatewayAddresses))  GatewayAddresses;


// Methods

// Ctor Parameters [CppParam { name: "iface", ty: "::System::Net::NetworkInformation::LinuxNetworkInterface", modifiers: "", def_value: None }, CppParam { name: "addresses", ty: "::System::Collections::Generic::List_1<::System::Net::IPAddress>", modifiers: "", def_value: None }]
explicit LinuxIPInterfaceProperties(::System::Net::NetworkInformation::LinuxNetworkInterface iface, ::System::Collections::Generic::List_1<::System::Net::IPAddress> addresses) ;

/// @brief Method .ctor addr 0x285b3a0 size 0x70 virtual false final false
 void _ctor(::System::Net::NetworkInformation::LinuxNetworkInterface iface, ::System::Collections::Generic::List_1<::System::Net::IPAddress> addresses) ;

/// @brief Method ParseRouteInfo addr 0x285b410 size 0x488 virtual false final false
 ::System::Net::NetworkInformation::IPAddressCollection ParseRouteInfo(::StringW iface) ;

/// @brief Method get_GatewayAddresses addr 0x285b898 size 0x3c virtual true final false
 ::System::Net::NetworkInformation::GatewayIPAddressInformationCollection get_GatewayAddresses() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation
} // end anonymous namespace
NEED_NO_BOX(::System::Net::NetworkInformation::LinuxIPInterfaceProperties);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::LinuxIPInterfaceProperties, "System.Net.NetworkInformation", "LinuxIPInterfaceProperties");
