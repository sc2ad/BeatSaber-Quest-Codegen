#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Net/NetworkInformation/zzzz__UnixNetworkInterfaceAPI_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::Net::NetworkInformation {
struct AixIoctlRequest;
}
namespace System::Net::NetworkInformation::AixStructs {
struct ifreq_flags;
}
namespace System::Net::NetworkInformation {
class NetworkInterface;
}
namespace System::Net::NetworkInformation {
struct AixAddressFamily;
}
namespace System::Net::NetworkInformation::AixStructs {
struct ifreq_mtu;
}
namespace System::Net::NetworkInformation::AixStructs {
struct ifconf;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class AixNetworkInterfaceAPI;
}
// Type: System.Net.NetworkInformation::AixNetworkInterfaceAPI
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8142))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8111))
// CS Name: System.Net.NetworkInformation.AixNetworkInterfaceAPI
class CORDL_TYPE AixNetworkInterfaceAPI : public ::System::Net::NetworkInformation::UnixNetworkInterfaceAPI {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AixNetworkInterfaceAPI() = default;

// Ctor Parameters [CppParam { name: "", ty: "AixNetworkInterfaceAPI", modifiers: " const&", def_value: None }]
constexpr AixNetworkInterfaceAPI(AixNetworkInterfaceAPI const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AixNetworkInterfaceAPI", modifiers: "&&", def_value: None }]
constexpr AixNetworkInterfaceAPI(AixNetworkInterfaceAPI&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AixNetworkInterfaceAPI(void* ptr) noexcept : ::System::Net::NetworkInformation::UnixNetworkInterfaceAPI(ptr) {
}


  constexpr AixNetworkInterfaceAPI& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AixNetworkInterfaceAPI& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AixNetworkInterfaceAPI& operator=(AixNetworkInterfaceAPI&& o) noexcept = default;
  constexpr AixNetworkInterfaceAPI& operator=(AixNetworkInterfaceAPI const& o) noexcept = default;
                


// Methods

/// @brief Method socket addr 0x2859cc8 size 0xa0 virtual false final false
static int32_t socket(::System::Net::NetworkInformation::AixAddressFamily family, int32_t type, int32_t protocol) ;

/// @brief Method close addr 0x2859d68 size 0x78 virtual false final false
static int32_t close(int32_t fd) ;

/// @brief Method ioctl addr 0x2859de0 size 0xa0 virtual false final false
static int32_t ioctl(int32_t fd, ::System::Net::NetworkInformation::AixIoctlRequest request, ByRef<int32_t> arg) ;

/// @brief Method ioctl addr 0x2859e80 size 0xa0 virtual false final false
static int32_t ioctl(int32_t fd, ::System::Net::NetworkInformation::AixIoctlRequest request, ByRef<::System::Net::NetworkInformation::AixStructs::ifconf> arg) ;

/// @brief Method ioctl addr 0x2859f20 size 0xa0 virtual false final false
static int32_t ioctl(int32_t fd, ::System::Net::NetworkInformation::AixIoctlRequest request, ByRef<::System::Net::NetworkInformation::AixStructs::ifreq_flags> arg) ;

/// @brief Method ioctl addr 0x2859fc0 size 0xa0 virtual false final false
static int32_t ioctl(int32_t fd, ::System::Net::NetworkInformation::AixIoctlRequest request, ByRef<::System::Net::NetworkInformation::AixStructs::ifreq_mtu> arg) ;

/// @brief Method ByteArrayCopy addr 0x285a060 size 0x1c virtual false final false
static void ByteArrayCopy(void* dst, void* src, int32_t elements) ;

/// @brief Method GetAllNetworkInterfaces addr 0x285a07c size 0xe8c virtual true final false
 ::ArrayW<::System::Net::NetworkInformation::NetworkInterface> GetAllNetworkInterfaces() ;

// Ctor Parameters []
explicit AixNetworkInterfaceAPI() ;

/// @brief Method .ctor addr 0x285b174 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation
} // end anonymous namespace
NEED_NO_BOX(::System::Net::NetworkInformation::AixNetworkInterfaceAPI);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::AixNetworkInterfaceAPI, "System.Net.NetworkInformation", "AixNetworkInterfaceAPI");
