#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Net/NetworkInformation/zzzz__NetworkInterfaceFactory_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Net::NetworkInformation {
class UnixNetworkInterfaceAPI;
}
// Type: System.Net.NetworkInformation::UnixNetworkInterfaceAPI
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8134))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8142))
// CS Name: System.Net.NetworkInformation.UnixNetworkInterfaceAPI
class CORDL_TYPE UnixNetworkInterfaceAPI : public System::Net::NetworkInformation::NetworkInterfaceFactory {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnixNetworkInterfaceAPI() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnixNetworkInterfaceAPI", modifiers: " const&", def_value: None }]
constexpr UnixNetworkInterfaceAPI(UnixNetworkInterfaceAPI const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnixNetworkInterfaceAPI", modifiers: "&&", def_value: None }]
constexpr UnixNetworkInterfaceAPI(UnixNetworkInterfaceAPI&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnixNetworkInterfaceAPI(void* ptr) noexcept : System::Net::NetworkInformation::NetworkInterfaceFactory(ptr) {
}


  constexpr UnixNetworkInterfaceAPI& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnixNetworkInterfaceAPI& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnixNetworkInterfaceAPI& operator=(UnixNetworkInterfaceAPI&& o) noexcept = default;
  constexpr UnixNetworkInterfaceAPI& operator=(UnixNetworkInterfaceAPI const& o) noexcept = default;
                


// Methods

/// @brief Method getifaddrs addr 0x285b958 size 0x7c virtual false final false
static int32_t getifaddrs(ByRef<::cordl_internals::intptr_t> ifap) ;

/// @brief Method freeifaddrs addr 0x285b8d8 size 0x7c virtual false final false
static void freeifaddrs(::cordl_internals::intptr_t ifap) ;

static System::Net::NetworkInformation::UnixNetworkInterfaceAPI New_ctor() ;

/// @brief Method .ctor addr 0x285b17c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation
NEED_NO_BOX(System::Net::NetworkInformation::UnixNetworkInterfaceAPI);
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::UnixNetworkInterfaceAPI, "System.Net.NetworkInformation", "UnixNetworkInterfaceAPI");
