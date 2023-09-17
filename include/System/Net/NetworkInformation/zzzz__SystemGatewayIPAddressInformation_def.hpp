#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Net/NetworkInformation/zzzz__GatewayIPAddressInformation_def.hpp"
namespace {
namespace System::Net {
class IPAddress;
}
namespace System::Net::NetworkInformation {
class GatewayIPAddressInformationCollection;
}
namespace System::Net::NetworkInformation {
class IPAddressCollection;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class SystemGatewayIPAddressInformation;
}
// Type: System.Net.NetworkInformation::SystemGatewayIPAddressInformation
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8096))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8106))
// CS Name: System.Net.NetworkInformation.SystemGatewayIPAddressInformation
class CORDL_TYPE SystemGatewayIPAddressInformation : public ::System::Net::NetworkInformation::GatewayIPAddressInformation {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SystemGatewayIPAddressInformation() = default;

// Ctor Parameters [CppParam { name: "", ty: "SystemGatewayIPAddressInformation", modifiers: " const&", def_value: None }]
constexpr SystemGatewayIPAddressInformation(SystemGatewayIPAddressInformation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SystemGatewayIPAddressInformation", modifiers: "&&", def_value: None }]
constexpr SystemGatewayIPAddressInformation(SystemGatewayIPAddressInformation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SystemGatewayIPAddressInformation(void* ptr) noexcept : ::System::Net::NetworkInformation::GatewayIPAddressInformation(ptr) {
}


  constexpr SystemGatewayIPAddressInformation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SystemGatewayIPAddressInformation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SystemGatewayIPAddressInformation& operator=(SystemGatewayIPAddressInformation&& o) noexcept = default;
  constexpr SystemGatewayIPAddressInformation& operator=(SystemGatewayIPAddressInformation const& o) noexcept = default;
                


// Fields

 ::System::Net::IPAddress __declspec(property(get=__get_address, put=__set_address))  address;

constexpr void __set_address(::System::Net::IPAddress value) ;

constexpr ::System::Net::IPAddress __get_address() const;


// Methods

// Ctor Parameters [CppParam { name: "address", ty: "::System::Net::IPAddress", modifiers: "", def_value: None }]
explicit SystemGatewayIPAddressInformation(::System::Net::IPAddress address) ;

/// @brief Method .ctor addr 0x28592f8 size 0x28 virtual false final false
 void _ctor(::System::Net::IPAddress address) ;

/// @brief Method ToGatewayIpAddressInformationCollection addr 0x2859320 size 0x2f0 virtual false final false
static ::System::Net::NetworkInformation::GatewayIPAddressInformationCollection ToGatewayIpAddressInformationCollection(::System::Net::NetworkInformation::IPAddressCollection addresses) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation
} // end anonymous namespace
NEED_NO_BOX(::System::Net::NetworkInformation::SystemGatewayIPAddressInformation);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::SystemGatewayIPAddressInformation, "System.Net.NetworkInformation", "SystemGatewayIPAddressInformation");
