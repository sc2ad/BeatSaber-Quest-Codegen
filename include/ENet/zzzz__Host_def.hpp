#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace ENet {
struct Event;
}
namespace ENet {
struct Address;
}
namespace ENet {
struct Packet;
}
namespace ENet {
struct SslConfiguration;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace ENet {
struct Peer;
}
namespace System {
class IDisposable;
}
namespace ENet {
class InterceptCallback;
}
namespace ENet {
class ChecksumCallback;
}
// Forward declare root types
namespace ENet {
class Host;
}
// Type: ENet::Host
namespace ENet {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15273))
// CS Name: ENet.Host
class CORDL_TYPE Host : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Host() = default;

// Ctor Parameters [CppParam { name: "", ty: "Host", modifiers: " const&", def_value: None }]
constexpr Host(Host const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Host", modifiers: "&&", def_value: None }]
constexpr Host(Host&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Host(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Host& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Host& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Host& operator=(Host&& o) noexcept = default;
  constexpr Host& operator=(Host const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_nativeHost, put=__set_nativeHost))  nativeHost;

constexpr void __set_nativeHost(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_nativeHost() const;


// Properties

 ::cordl_internals::intptr_t __declspec(property(get=get_NativeData, put=set_NativeData))  NativeData;

 bool __declspec(property(get=get_IsSet))  IsSet;

 uint32_t __declspec(property(get=get_PeersCount))  PeersCount;

 uint32_t __declspec(property(get=get_PacketsSent))  PacketsSent;

 uint32_t __declspec(property(get=get_PacketsReceived))  PacketsReceived;

 uint32_t __declspec(property(get=get_BytesSent))  BytesSent;

 uint32_t __declspec(property(get=get_BytesReceived))  BytesReceived;


// Methods

/// @brief Method get_NativeData addr 0x207e4e4 size 0x8 virtual false final false
 ::cordl_internals::intptr_t get_NativeData() ;

/// @brief Method set_NativeData addr 0x207e4ec size 0x8 virtual false final false
 void set_NativeData(::cordl_internals::intptr_t value) ;

/// @brief Method Dispose addr 0x207e4f4 size 0x6c virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x207e560 size 0x74 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method Finalize addr 0x207e650 size 0xa0 virtual true final false
 void Finalize() ;

/// @brief Method get_IsSet addr 0x207e6f0 size 0x54 virtual false final false
 bool get_IsSet() ;

/// @brief Method get_PeersCount addr 0x207e744 size 0x18 virtual false final false
 uint32_t get_PeersCount() ;

/// @brief Method get_PacketsSent addr 0x207e880 size 0x18 virtual false final false
 uint32_t get_PacketsSent() ;

/// @brief Method get_PacketsReceived addr 0x207e914 size 0x18 virtual false final false
 uint32_t get_PacketsReceived() ;

/// @brief Method get_BytesSent addr 0x207e9a8 size 0x18 virtual false final false
 uint32_t get_BytesSent() ;

/// @brief Method get_BytesReceived addr 0x207ea3c size 0x18 virtual false final false
 uint32_t get_BytesReceived() ;

/// @brief Method ThrowIfNotCreated addr 0x207e75c size 0xa8 virtual false final false
 void ThrowIfNotCreated() ;

/// @brief Method ThrowIfChannelsExceeded addr 0x207ead0 size 0x5c virtual false final false
static void ThrowIfChannelsExceeded(int32_t channelLimit) ;

/// @brief Method Create addr 0x207eb2c size 0x29c virtual false final false
 void Create(::System::Nullable_1<::ENet::Address> address, int32_t peerLimit, int32_t channelLimit, uint32_t incomingBandwidth, uint32_t outgoingBandwidth, int32_t bufferSize, ::ENet::SslConfiguration sslConfiguration) ;

/// @brief Method PreventConnections addr 0x207f000 size 0x28 virtual false final false
 void PreventConnections(bool state) ;

/// @brief Method Broadcast addr 0x207f0ac size 0x80 virtual false final false
 void Broadcast(uint8_t channelID, ByRef<::ENet::Packet> packet) ;

/// @brief Method Broadcast addr 0x207f1c0 size 0x90 virtual false final false
 void Broadcast(uint8_t channelID, ByRef<::ENet::Packet> packet, ::ENet::Peer excludedPeer) ;

/// @brief Method Broadcast addr 0x207f2ec size 0x1a0 virtual false final false
 void Broadcast(uint8_t channelID, ByRef<::ENet::Packet> packet, ::ArrayW<::ENet::Peer> peers) ;

/// @brief Method CheckEvents addr 0x207f540 size 0x58 virtual false final false
 int32_t CheckEvents(ByRef<::ENet::Event> event) ;

/// @brief Method Connect addr 0x207f61c size 0x54 virtual false final false
 ::ENet::Peer Connect(::ENet::Address address) ;

/// @brief Method Connect addr 0x207f7c4 size 0x50 virtual false final false
 ::ENet::Peer Connect(::ENet::Address address, int32_t channelLimit) ;

/// @brief Method Connect addr 0x207f670 size 0x154 virtual false final false
 ::ENet::Peer Connect(::ENet::Address address, int32_t channelLimit, uint32_t data) ;

/// @brief Method Service addr 0x207f8b0 size 0xb0 virtual false final false
 int32_t Service(int32_t timeout, ByRef<::ENet::Event> event) ;

/// @brief Method SetBandwidthLimit addr 0x207f9f4 size 0x30 virtual false final false
 void SetBandwidthLimit(uint32_t incomingBandwidth, uint32_t outgoingBandwidth) ;

/// @brief Method SetChannelLimit addr 0x207fab8 size 0x40 virtual false final false
 void SetChannelLimit(int32_t channelLimit) ;

/// @brief Method SetMaxDuplicatePeers addr 0x207fb7c size 0x28 virtual false final false
 void SetMaxDuplicatePeers(uint16_t number) ;

/// @brief Method SetInterceptCallback addr 0x207fc28 size 0x28 virtual false final false
 void SetInterceptCallback(::cordl_internals::intptr_t callback) ;

/// @brief Method SetInterceptCallback addr 0x207fcd4 size 0x90 virtual false final false
 void SetInterceptCallback(::ENet::InterceptCallback callback) ;

/// @brief Method SetChecksumCallback addr 0x207fd64 size 0x28 virtual false final false
 void SetChecksumCallback(::cordl_internals::intptr_t callback) ;

/// @brief Method SetChecksumCallback addr 0x207fe10 size 0x90 virtual false final false
 void SetChecksumCallback(::ENet::ChecksumCallback callback) ;

/// @brief Method Flush addr 0x207fea0 size 0x18 virtual false final false
 void Flush() ;

// Ctor Parameters []
explicit Host() ;

/// @brief Method .ctor addr 0x207ff34 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ENet
} // end anonymous namespace
NEED_NO_BOX(::ENet::Host);
DEFINE_IL2CPP_ARG_TYPE(::ENet::Host, "ENet", "Host");
