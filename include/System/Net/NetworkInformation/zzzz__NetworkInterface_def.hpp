#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Net::NetworkInformation {
struct NetworkInterfaceType;
}
namespace System::Net::NetworkInformation {
class IPInterfaceProperties;
}
namespace System::Net::NetworkInformation {
struct OperationalStatus;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class NetworkInterface;
}
// Type: System.Net.NetworkInformation::NetworkInterface
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8103))
// CS Name: System.Net.NetworkInformation.NetworkInterface
class CORDL_TYPE NetworkInterface : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NetworkInterface() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetworkInterface", modifiers: " const&", def_value: None }]
constexpr NetworkInterface(NetworkInterface const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetworkInterface", modifiers: "&&", def_value: None }]
constexpr NetworkInterface(NetworkInterface&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetworkInterface(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NetworkInterface& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetworkInterface& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetworkInterface& operator=(NetworkInterface&& o) noexcept = default;
  constexpr NetworkInterface& operator=(NetworkInterface const& o) noexcept = default;
                


// Properties

 ::StringW __declspec(property(get=get_Name))  Name;

 System::Net::NetworkInformation::OperationalStatus __declspec(property(get=get_OperationalStatus))  OperationalStatus;

 System::Net::NetworkInformation::NetworkInterfaceType __declspec(property(get=get_NetworkInterfaceType))  NetworkInterfaceType;


// Methods

/// @brief Method GetAllNetworkInterfaces addr 0x28590a8 size 0x4c virtual false final false
static ::ArrayW<System::Net::NetworkInformation::NetworkInterface> GetAllNetworkInterfaces() ;

/// @brief Method get_Name addr 0x28591f0 size 0x40 virtual true final false
 ::StringW get_Name() ;

/// @brief Method GetIPProperties addr 0x2859230 size 0x40 virtual true final false
 System::Net::NetworkInformation::IPInterfaceProperties GetIPProperties() ;

/// @brief Method get_OperationalStatus addr 0x2859270 size 0x40 virtual true final false
 System::Net::NetworkInformation::OperationalStatus get_OperationalStatus() ;

/// @brief Method get_NetworkInterfaceType addr 0x28592b0 size 0x40 virtual true final false
 System::Net::NetworkInformation::NetworkInterfaceType get_NetworkInterfaceType() ;

static System::Net::NetworkInformation::NetworkInterface New_ctor() ;

/// @brief Method .ctor addr 0x28592f0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation
NEED_NO_BOX(System::Net::NetworkInformation::NetworkInterface);
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::NetworkInterface, "System.Net.NetworkInformation", "NetworkInterface");
