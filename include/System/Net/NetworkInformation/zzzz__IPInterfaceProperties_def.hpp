#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Net::NetworkInformation {
class UnicastIPAddressInformationCollection;
}
namespace System::Net::NetworkInformation {
class GatewayIPAddressInformationCollection;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class IPInterfaceProperties;
}
// Type: System.Net.NetworkInformation::IPInterfaceProperties
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8101))
// CS Name: System.Net.NetworkInformation.IPInterfaceProperties
class CORDL_TYPE IPInterfaceProperties : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~IPInterfaceProperties() = default;

// Ctor Parameters [CppParam { name: "", ty: "IPInterfaceProperties", modifiers: " const&", def_value: None }]
constexpr IPInterfaceProperties(IPInterfaceProperties const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IPInterfaceProperties", modifiers: "&&", def_value: None }]
constexpr IPInterfaceProperties(IPInterfaceProperties&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPInterfaceProperties(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IPInterfaceProperties& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IPInterfaceProperties& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IPInterfaceProperties& operator=(IPInterfaceProperties&& o) noexcept = default;
  constexpr IPInterfaceProperties& operator=(IPInterfaceProperties const& o) noexcept = default;
                


// Properties

 System::Net::NetworkInformation::UnicastIPAddressInformationCollection __declspec(property(get=get_UnicastAddresses))  UnicastAddresses;

 System::Net::NetworkInformation::GatewayIPAddressInformationCollection __declspec(property(get=get_GatewayAddresses))  GatewayAddresses;


// Methods

/// @brief Method get_UnicastAddresses addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Net::NetworkInformation::UnicastIPAddressInformationCollection get_UnicastAddresses() ;

/// @brief Method get_GatewayAddresses addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Net::NetworkInformation::GatewayIPAddressInformationCollection get_GatewayAddresses() ;

// Ctor Parameters []
explicit IPInterfaceProperties() ;

/// @brief Method .ctor addr 0x285902c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation
NEED_NO_BOX(System::Net::NetworkInformation::IPInterfaceProperties);
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::IPInterfaceProperties, "System.Net.NetworkInformation", "IPInterfaceProperties");
