#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Oculus::Platform {
template<typename T>
class Request_1;
}
namespace Oculus::Platform {
struct SendPolicy;
}
namespace Oculus::Platform {
template<typename T>
class Oculus__Platform__Message_1__Callback;
}
namespace Oculus::Platform::Models {
class NetworkingPeer;
}
namespace Oculus::Platform {
class Packet;
}
namespace Oculus::Platform::Models {
class PingResult;
}
// Forward declare root types
namespace Oculus::Platform {
class Net;
}
// Type: Oculus.Platform::Net
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13316))
// CS Name: Oculus.Platform.Net
class CORDL_TYPE Net : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Net() = default;

// Ctor Parameters [CppParam { name: "", ty: "Net", modifiers: " const&", def_value: None }]
constexpr Net(Net const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Net", modifiers: "&&", def_value: None }]
constexpr Net(Net&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Net(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Net& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Net& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Net& operator=(Net&& o) noexcept = default;
  constexpr Net& operator=(Net const& o) noexcept = default;
                


// Methods

/// @brief Method ReadPacket addr 0x2589f28 size 0x16c virtual false final false
static Oculus::Platform::Packet ReadPacket() ;

/// @brief Method SendPacket addr 0x258a094 size 0x128 virtual false final false
static bool SendPacket(uint64_t userID, ::ArrayW<uint8_t> bytes, Oculus::Platform::SendPolicy policy) ;

/// @brief Method Connect addr 0x258a1bc size 0xc4 virtual false final false
static void Connect(uint64_t userID) ;

/// @brief Method Accept addr 0x258a280 size 0xc4 virtual false final false
static void Accept(uint64_t userID) ;

/// @brief Method Close addr 0x258a344 size 0xc4 virtual false final false
static void Close(uint64_t userID) ;

/// @brief Method IsConnected addr 0x258a408 size 0xc8 virtual false final false
static bool IsConnected(uint64_t userID) ;

/// @brief Method SendPacketToCurrentRoom addr 0x258a4d0 size 0x120 virtual false final false
static bool SendPacketToCurrentRoom(::ArrayW<uint8_t> bytes, Oculus::Platform::SendPolicy policy) ;

/// @brief Method AcceptForCurrentRoom addr 0x258a5f0 size 0xc0 virtual false final false
static bool AcceptForCurrentRoom() ;

/// @brief Method CloseForCurrentRoom addr 0x258a6b0 size 0xbc virtual false final false
static void CloseForCurrentRoom() ;

/// @brief Method Ping addr 0x258a76c size 0x160 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::PingResult> Ping(uint64_t userID) ;

/// @brief Method SetConnectionStateChangedCallback addr 0x258a8cc size 0x74 virtual false final false
static void SetConnectionStateChangedCallback(Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::NetworkingPeer> callback) ;

/// @brief Method SetPeerConnectRequestCallback addr 0x258a940 size 0x74 virtual false final false
static void SetPeerConnectRequestCallback(Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::NetworkingPeer> callback) ;

/// @brief Method SetPingResultNotificationCallback addr 0x258a9b4 size 0x74 virtual false final false
static void SetPingResultNotificationCallback(Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::PingResult> callback) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::Net);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Net, "Oculus.Platform", "Net");
