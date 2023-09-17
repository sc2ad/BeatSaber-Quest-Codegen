#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Net/NetworkInformation/zzzz__UnixIPInterfaceProperties_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
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
class AixNetworkInterface;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class AixIPInterfaceProperties;
}
// Type: System.Net.NetworkInformation::AixIPInterfaceProperties
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8141))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8110))
// CS Name: System.Net.NetworkInformation.AixIPInterfaceProperties
class CORDL_TYPE AixIPInterfaceProperties : public ::System::Net::NetworkInformation::UnixIPInterfaceProperties {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~AixIPInterfaceProperties() = default;

// Ctor Parameters [CppParam { name: "", ty: "AixIPInterfaceProperties", modifiers: " const&", def_value: None }]
constexpr AixIPInterfaceProperties(AixIPInterfaceProperties const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AixIPInterfaceProperties", modifiers: "&&", def_value: None }]
constexpr AixIPInterfaceProperties(AixIPInterfaceProperties&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AixIPInterfaceProperties(void* ptr) noexcept : ::System::Net::NetworkInformation::UnixIPInterfaceProperties(ptr) {
}


  constexpr AixIPInterfaceProperties& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AixIPInterfaceProperties& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AixIPInterfaceProperties& operator=(AixIPInterfaceProperties&& o) noexcept = default;
  constexpr AixIPInterfaceProperties& operator=(AixIPInterfaceProperties const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__mtu, put=__set__mtu))  _mtu;

constexpr void __set__mtu(int32_t value) ;

constexpr int32_t __get__mtu() const;


// Properties

 ::System::Net::NetworkInformation::GatewayIPAddressInformationCollection __declspec(property(get=get_GatewayAddresses))  GatewayAddresses;


// Methods

// Ctor Parameters [CppParam { name: "iface", ty: "::System::Net::NetworkInformation::AixNetworkInterface", modifiers: "", def_value: None }, CppParam { name: "addresses", ty: "::System::Collections::Generic::List_1<::System::Net::IPAddress>", modifiers: "", def_value: None }, CppParam { name: "mtu", ty: "int32_t", modifiers: "", def_value: None }]
explicit AixIPInterfaceProperties(::System::Net::NetworkInformation::AixNetworkInterface iface, ::System::Collections::Generic::List_1<::System::Net::IPAddress> addresses, int32_t mtu) ;

/// @brief Method .ctor addr 0x2859984 size 0x80 virtual false final false
 void _ctor(::System::Net::NetworkInformation::AixNetworkInterface iface, ::System::Collections::Generic::List_1<::System::Net::IPAddress> addresses, int32_t mtu) ;

/// @brief Method ParseRouteInfo_icall addr 0x2859a30 size 0x44 virtual false final false
static bool ParseRouteInfo_icall(::StringW iface, ByRef<::ArrayW<::StringW>> gw_addr_list) ;

/// @brief Method get_GatewayAddresses addr 0x2859a74 size 0x254 virtual true final false
 ::System::Net::NetworkInformation::GatewayIPAddressInformationCollection get_GatewayAddresses() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation
} // end anonymous namespace
NEED_NO_BOX(::System::Net::NetworkInformation::AixIPInterfaceProperties);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::AixIPInterfaceProperties, "System.Net.NetworkInformation", "AixIPInterfaceProperties");
