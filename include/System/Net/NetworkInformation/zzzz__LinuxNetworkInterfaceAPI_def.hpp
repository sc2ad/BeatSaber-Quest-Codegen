#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Net/NetworkInformation/zzzz__UnixNetworkInterfaceAPI_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Net::NetworkInformation {
class NetworkInterface;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class LinuxNetworkInterfaceAPI;
}
// Type: System.Net.NetworkInformation::LinuxNetworkInterfaceAPI
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8142))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8119))
// CS Name: System.Net.NetworkInformation.LinuxNetworkInterfaceAPI
class CORDL_TYPE LinuxNetworkInterfaceAPI : public System::Net::NetworkInformation::UnixNetworkInterfaceAPI {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~LinuxNetworkInterfaceAPI() = default;

// Ctor Parameters [CppParam { name: "", ty: "LinuxNetworkInterfaceAPI", modifiers: " const&", def_value: None }]
constexpr LinuxNetworkInterfaceAPI(LinuxNetworkInterfaceAPI const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LinuxNetworkInterfaceAPI", modifiers: "&&", def_value: None }]
constexpr LinuxNetworkInterfaceAPI(LinuxNetworkInterfaceAPI&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LinuxNetworkInterfaceAPI(void* ptr) noexcept : System::Net::NetworkInformation::UnixNetworkInterfaceAPI(ptr) {
}


  constexpr LinuxNetworkInterfaceAPI& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LinuxNetworkInterfaceAPI& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LinuxNetworkInterfaceAPI& operator=(LinuxNetworkInterfaceAPI&& o) noexcept = default;
  constexpr LinuxNetworkInterfaceAPI& operator=(LinuxNetworkInterfaceAPI const& o) noexcept = default;
                


// Methods

/// @brief Method FreeInterfaceAddresses addr 0x285b8d4 size 0x4 virtual false final false
static void FreeInterfaceAddresses(::cordl_internals::intptr_t ifap) ;

/// @brief Method GetInterfaceAddresses addr 0x285b954 size 0x4 virtual false final false
static int32_t GetInterfaceAddresses(ByRef<::cordl_internals::intptr_t> ifap) ;

/// @brief Method GetAllNetworkInterfaces addr 0x285b9d4 size 0xaf4 virtual true final false
 ::ArrayW<System::Net::NetworkInformation::NetworkInterface> GetAllNetworkInterfaces() ;

static System::Net::NetworkInformation::LinuxNetworkInterfaceAPI New_ctor() ;

/// @brief Method .ctor addr 0x285c5a0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation
NEED_NO_BOX(System::Net::NetworkInformation::LinuxNetworkInterfaceAPI);
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::LinuxNetworkInterfaceAPI, "System.Net.NetworkInformation", "LinuxNetworkInterfaceAPI");
