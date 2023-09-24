#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System::Net::NetworkInformation {
class NetworkInterface;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class NetworkInterfaceFactory;
}
// Type: System.Net.NetworkInformation::NetworkInterfaceFactory
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8134))
// CS Name: System.Net.NetworkInformation.NetworkInterfaceFactory
class CORDL_TYPE NetworkInterfaceFactory : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NetworkInterfaceFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetworkInterfaceFactory", modifiers: " const&", def_value: None }]
constexpr NetworkInterfaceFactory(NetworkInterfaceFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetworkInterfaceFactory", modifiers: "&&", def_value: None }]
constexpr NetworkInterfaceFactory(NetworkInterfaceFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetworkInterfaceFactory(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NetworkInterfaceFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetworkInterfaceFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetworkInterfaceFactory& operator=(NetworkInterfaceFactory&& o) noexcept = default;
  constexpr NetworkInterfaceFactory& operator=(NetworkInterfaceFactory const& o) noexcept = default;
                


// Methods

/// @brief Method GetAllNetworkInterfaces addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<System::Net::NetworkInformation::NetworkInterface> GetAllNetworkInterfaces() ;

/// @brief Method Create addr 0x285dbb0 size 0x4 virtual false final false
static System::Net::NetworkInformation::NetworkInterfaceFactory Create() ;

static System::Net::NetworkInformation::NetworkInterfaceFactory New_ctor() ;

/// @brief Method .ctor addr 0x285dc04 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation
NEED_NO_BOX(System::Net::NetworkInformation::NetworkInterfaceFactory);
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::NetworkInterfaceFactory, "System.Net.NetworkInformation", "NetworkInterfaceFactory");
