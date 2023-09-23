#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Net::NetworkInformation {
class NetworkInterfaceFactory;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class UnixNetworkInterfaceFactoryPal;
}
// Type: System.Net.NetworkInformation::UnixNetworkInterfaceFactoryPal
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8144))
// CS Name: System.Net.NetworkInformation.UnixNetworkInterfaceFactoryPal
class CORDL_TYPE UnixNetworkInterfaceFactoryPal : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnixNetworkInterfaceFactoryPal() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnixNetworkInterfaceFactoryPal", modifiers: " const&", def_value: None }]
constexpr UnixNetworkInterfaceFactoryPal(UnixNetworkInterfaceFactoryPal const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnixNetworkInterfaceFactoryPal", modifiers: "&&", def_value: None }]
constexpr UnixNetworkInterfaceFactoryPal(UnixNetworkInterfaceFactoryPal&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnixNetworkInterfaceFactoryPal(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnixNetworkInterfaceFactoryPal& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnixNetworkInterfaceFactoryPal& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnixNetworkInterfaceFactoryPal& operator=(UnixNetworkInterfaceFactoryPal&& o) noexcept = default;
  constexpr UnixNetworkInterfaceFactoryPal& operator=(UnixNetworkInterfaceFactoryPal const& o) noexcept = default;
                


// Methods

/// @brief Method Create addr 0x285dc0c size 0xf4 virtual false final false
static System::Net::NetworkInformation::NetworkInterfaceFactory Create() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation
NEED_NO_BOX(System::Net::NetworkInformation::UnixNetworkInterfaceFactoryPal);
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::UnixNetworkInterfaceFactoryPal, "System.Net.NetworkInformation", "UnixNetworkInterfaceFactoryPal");
