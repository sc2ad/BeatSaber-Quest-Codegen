#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System::Net::NetworkInformation {
class NetworkInterfaceFactory;
}
namespace System::Net::NetworkInformation {
class NetworkInterface;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class SystemNetworkInterface;
}
// Type: System.Net.NetworkInformation::SystemNetworkInterface
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8133))
// CS Name: System.Net.NetworkInformation.SystemNetworkInterface
class CORDL_TYPE SystemNetworkInterface : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SystemNetworkInterface() = default;

// Ctor Parameters [CppParam { name: "", ty: "SystemNetworkInterface", modifiers: " const&", def_value: None }]
constexpr SystemNetworkInterface(SystemNetworkInterface const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SystemNetworkInterface", modifiers: "&&", def_value: None }]
constexpr SystemNetworkInterface(SystemNetworkInterface&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SystemNetworkInterface(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SystemNetworkInterface& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SystemNetworkInterface& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SystemNetworkInterface& operator=(SystemNetworkInterface&& o) noexcept = default;
  constexpr SystemNetworkInterface& operator=(SystemNetworkInterface const& o) noexcept = default;
                


// Fields

static System::Net::NetworkInformation::NetworkInterfaceFactory __declspec(property(get=__get_nif, put=__set_nif))  nif;

static void __set_nif(System::Net::NetworkInformation::NetworkInterfaceFactory value) ;

static System::Net::NetworkInformation::NetworkInterfaceFactory __get_nif() ;


// Methods

/// @brief Method GetNetworkInterfaces addr 0x28590f4 size 0xfc virtual false final false
static ::ArrayW<System::Net::NetworkInformation::NetworkInterface> GetNetworkInterfaces() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation
NEED_NO_BOX(System::Net::NetworkInformation::SystemNetworkInterface);
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::SystemNetworkInterface, "System.Net.NetworkInformation", "SystemNetworkInterface");
