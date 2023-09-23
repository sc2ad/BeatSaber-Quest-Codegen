#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Net/NetworkInformation/zzzz__NetworkInterface_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Net::NetworkInformation {
class IPInterfaceProperties;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Net {
class IPAddress;
}
namespace System::Net::NetworkInformation {
struct NetworkInterfaceType;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class UnixNetworkInterface;
}
// Type: System.Net.NetworkInformation::UnixNetworkInterface
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8103))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8143))
// CS Name: System.Net.NetworkInformation.UnixNetworkInterface
class CORDL_TYPE UnixNetworkInterface : public System::Net::NetworkInformation::NetworkInterface {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~UnixNetworkInterface() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnixNetworkInterface", modifiers: " const&", def_value: None }]
constexpr UnixNetworkInterface(UnixNetworkInterface const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnixNetworkInterface", modifiers: "&&", def_value: None }]
constexpr UnixNetworkInterface(UnixNetworkInterface&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnixNetworkInterface(void* ptr) noexcept : System::Net::NetworkInformation::NetworkInterface(ptr) {
}


  constexpr UnixNetworkInterface& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnixNetworkInterface& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnixNetworkInterface& operator=(UnixNetworkInterface&& o) noexcept = default;
  constexpr UnixNetworkInterface& operator=(UnixNetworkInterface const& o) noexcept = default;
                


// Fields

 System::Net::NetworkInformation::IPInterfaceProperties __declspec(property(get=__get_ipproperties, put=__set_ipproperties))  ipproperties;

constexpr void __set_ipproperties(System::Net::NetworkInformation::IPInterfaceProperties value) ;

constexpr System::Net::NetworkInformation::IPInterfaceProperties __get_ipproperties() const;

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 System::Collections::Generic::List_1<System::Net::IPAddress> __declspec(property(get=__get_addresses, put=__set_addresses))  addresses;

constexpr void __set_addresses(System::Collections::Generic::List_1<System::Net::IPAddress> value) ;

constexpr System::Collections::Generic::List_1<System::Net::IPAddress> __get_addresses() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_macAddress, put=__set_macAddress))  macAddress;

constexpr void __set_macAddress(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_macAddress() const;

 System::Net::NetworkInformation::NetworkInterfaceType __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(System::Net::NetworkInformation::NetworkInterfaceType value) ;

constexpr System::Net::NetworkInformation::NetworkInterfaceType __get_type() const;


// Properties

 ::StringW __declspec(property(get=get_Name))  Name;

 System::Net::NetworkInformation::NetworkInterfaceType __declspec(property(get=get_NetworkInterfaceType))  NetworkInterfaceType;


// Methods

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }]
explicit UnixNetworkInterface(::StringW name) ;

/// @brief Method .ctor addr 0x285b184 size 0x90 virtual false final false
 void _ctor(::StringW name) ;

/// @brief Method AddAddress addr 0x285b0c0 size 0xa8 virtual false final false
 void AddAddress(System::Net::IPAddress address) ;

/// @brief Method SetLinkLayerInfo addr 0x285b168 size 0xc virtual false final false
 void SetLinkLayerInfo(int32_t index, ::ArrayW<uint8_t> macAddress, System::Net::NetworkInformation::NetworkInterfaceType type) ;

/// @brief Method get_Name addr 0x285e4ec size 0x8 virtual true final false
 ::StringW get_Name() ;

/// @brief Method get_NetworkInterfaceType addr 0x285e4f4 size 0x8 virtual true final false
 System::Net::NetworkInformation::NetworkInterfaceType get_NetworkInterfaceType() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation
NEED_NO_BOX(System::Net::NetworkInformation::UnixNetworkInterface);
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::UnixNetworkInterface, "System.Net.NetworkInformation", "UnixNetworkInterface");
