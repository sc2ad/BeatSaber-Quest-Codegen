#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Net::NetworkInformation {
class NetworkInterfaceFactory;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class NetworkInterfaceFactoryPal;
}
// Type: System.Net.NetworkInformation::NetworkInterfaceFactoryPal
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8135))
// CS Name: System.Net.NetworkInformation.NetworkInterfaceFactoryPal
class CORDL_TYPE NetworkInterfaceFactoryPal : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NetworkInterfaceFactoryPal() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetworkInterfaceFactoryPal", modifiers: " const&", def_value: None }]
constexpr NetworkInterfaceFactoryPal(NetworkInterfaceFactoryPal const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetworkInterfaceFactoryPal", modifiers: "&&", def_value: None }]
constexpr NetworkInterfaceFactoryPal(NetworkInterfaceFactoryPal&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetworkInterfaceFactoryPal(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NetworkInterfaceFactoryPal& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetworkInterfaceFactoryPal& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetworkInterfaceFactoryPal& operator=(NetworkInterfaceFactoryPal&& o) noexcept = default;
  constexpr NetworkInterfaceFactoryPal& operator=(NetworkInterfaceFactoryPal const& o) noexcept = default;
                


// Methods

/// @brief Method Create addr 0x285dbb4 size 0x50 virtual false final false
static ::System::Net::NetworkInformation::NetworkInterfaceFactory Create() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation
} // end anonymous namespace
NEED_NO_BOX(::System::Net::NetworkInformation::NetworkInterfaceFactoryPal);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::NetworkInterfaceFactoryPal, "System.Net.NetworkInformation", "NetworkInterfaceFactoryPal");
