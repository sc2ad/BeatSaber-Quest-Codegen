#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace LiteNetLib {
struct UnconnectedMessageType;
}
namespace System::Net {
class IPAddress;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib {
class INetEventListener;
}
namespace System::Net::Sockets {
struct SocketError;
}
namespace LiteNetLib {
struct DisconnectInfo;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace LiteNetLib {
class ConnectionRequest;
}
namespace System::Net {
class IPEndPoint;
}
namespace LiteNetLib {
class NetPacketReader;
}
namespace LiteNetLib {
struct DeliveryMethod;
}
namespace LiteNetLib {
class NetManager;
}
namespace GlobalNamespace {
template<typename TType,typename TData>
class NetworkPacketSerializer_2;
}
namespace LiteNetLib {
class NetPeer;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__LocalNetworkDiscoveryManager__PacketType;
}
namespace GlobalNamespace {
class LocalNetworkDiscoveryManager;
}
namespace GlobalNamespace {
class ____GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket;
}
namespace GlobalNamespace {
class ____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket;
}
namespace GlobalNamespace {
class ____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate;
}
namespace GlobalNamespace {
class ____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate;
}
namespace GlobalNamespace {
class ____GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket;
}
namespace GlobalNamespace {
class ____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket;
}
namespace GlobalNamespace {
class ____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate;
}
namespace GlobalNamespace {
class ____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate;
}
namespace GlobalNamespace {
class ____GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket;
}
namespace GlobalNamespace {
class ____GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate;
}
// Type: ::PacketType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4542))
// CS Name: LocalNetworkDiscoveryManager::PacketType
struct CORDL_TYPE ____GlobalNamespace__LocalNetworkDiscoveryManager__PacketType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__PacketType(uint8_t value__) noexcept;


                    constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__PacketType(____GlobalNamespace__LocalNetworkDiscoveryManager__PacketType const&) = default;
                    constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__PacketType(____GlobalNamespace__LocalNetworkDiscoveryManager__PacketType&&) = default;
                    constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__PacketType& operator=(____GlobalNamespace__LocalNetworkDiscoveryManager__PacketType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__PacketType& operator=(____GlobalNamespace__LocalNetworkDiscoveryManager__PacketType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__LocalNetworkDiscoveryManager__PacketType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__LocalNetworkDiscoveryManager__PacketType_Unwrapped : uint8_t {
__Broadcast = 0u,
__JoinRequest = 1u,
__JoinResponse = 2u,
__InviteRequest = 3u,
__InviteResponse = 4u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__LocalNetworkDiscoveryManager__PacketType_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__LocalNetworkDiscoveryManager__PacketType_Unwrapped>(__instance);
}


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field Broadcast offset 0
static ::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__PacketType const Broadcast;

/// @brief Field JoinRequest offset 0
static ::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__PacketType const JoinRequest;

/// @brief Field JoinResponse offset 0
static ::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__PacketType const JoinResponse;

/// @brief Field InviteRequest offset 0
static ::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__PacketType const InviteRequest;

/// @brief Field InviteResponse offset 0
static ::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__PacketType const InviteResponse;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BroadcastPacket
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4543))
// CS Name: LocalNetworkDiscoveryManager::BroadcastPacket
class CORDL_TYPE ____GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::LiteNetLib::Utils::INetSerializable
constexpr operator  ::LiteNetLib::Utils::INetSerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~____GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket(____GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket(____GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket& operator=(____GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket&& o) noexcept = default;
  constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket& operator=(____GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket const& o) noexcept = default;
                


// Fields

 uint32_t __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(uint32_t value) ;

constexpr uint32_t __get_version() const;

 ::StringW __declspec(property(get=__get_userId, put=__set_userId))  userId;

constexpr void __set_userId(::StringW value) ;

constexpr ::StringW __get_userId() const;

 ::StringW __declspec(property(get=__get_userName, put=__set_userName))  userName;

constexpr void __set_userName(::StringW value) ;

constexpr ::StringW __get_userName() const;

 int32_t __declspec(property(get=__get_currentPartySize, put=__set_currentPartySize))  currentPartySize;

constexpr void __set_currentPartySize(int32_t value) ;

constexpr int32_t __get_currentPartySize() const;

 bool __declspec(property(get=__get_isPartyOwner, put=__set_isPartyOwner))  isPartyOwner;

constexpr void __set_isPartyOwner(bool value) ;

constexpr bool __get_isPartyOwner() const;

 ::GlobalNamespace::BeatmapLevelSelectionMask __declspec(property(get=__get_selectionMask, put=__set_selectionMask))  selectionMask;

constexpr void __set_selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value) ;

constexpr ::GlobalNamespace::BeatmapLevelSelectionMask __get_selectionMask() const;

 ::GlobalNamespace::GameplayServerConfiguration __declspec(property(get=__get_configuration, put=__set_configuration))  configuration;

constexpr void __set_configuration(::GlobalNamespace::GameplayServerConfiguration value) ;

constexpr ::GlobalNamespace::GameplayServerConfiguration __get_configuration() const;


// Methods

/// @brief Method Serialize addr 0x22041e0 size 0x98 virtual true final true
 void Serialize(::LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0x2204278 size 0xd4 virtual true final true
 void Deserialize(::LiteNetLib::Utils::NetDataReader reader) ;

// Ctor Parameters []
explicit ____GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket() ;

/// @brief Method .ctor addr 0x2203f5c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::JoinRequestPacket
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4544))
// CS Name: LocalNetworkDiscoveryManager::JoinRequestPacket
class CORDL_TYPE ____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::LiteNetLib::Utils::INetSerializable
constexpr operator  ::LiteNetLib::Utils::INetSerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket(____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket(____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket& operator=(____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket&& o) noexcept = default;
  constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket& operator=(____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_userId, put=__set_userId))  userId;

constexpr void __set_userId(::StringW value) ;

constexpr ::StringW __get_userId() const;

 ::StringW __declspec(property(get=__get_userName, put=__set_userName))  userName;

constexpr void __set_userName(::StringW value) ;

constexpr ::StringW __get_userName() const;


// Methods

/// @brief Method Serialize addr 0x220434c size 0x40 virtual true final true
 void Serialize(::LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0x220438c size 0x44 virtual true final true
 void Deserialize(::LiteNetLib::Utils::NetDataReader reader) ;

// Ctor Parameters []
explicit ____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket() ;

/// @brief Method .ctor addr 0x2203924 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::JoinResponsePacket
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4545))
// CS Name: LocalNetworkDiscoveryManager::JoinResponsePacket
class CORDL_TYPE ____GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::LiteNetLib::Utils::INetSerializable
constexpr operator  ::LiteNetLib::Utils::INetSerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~____GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket(____GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket(____GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket& operator=(____GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket&& o) noexcept = default;
  constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket& operator=(____GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_userId, put=__set_userId))  userId;

constexpr void __set_userId(::StringW value) ;

constexpr ::StringW __get_userId() const;

 ::StringW __declspec(property(get=__get_secret, put=__set_secret))  secret;

constexpr void __set_secret(::StringW value) ;

constexpr ::StringW __get_secret() const;

 int32_t __declspec(property(get=__get_multiplayerPort, put=__set_multiplayerPort))  multiplayerPort;

constexpr void __set_multiplayerPort(int32_t value) ;

constexpr int32_t __get_multiplayerPort() const;

 bool __declspec(property(get=__get_blocked, put=__set_blocked))  blocked;

constexpr void __set_blocked(bool value) ;

constexpr bool __get_blocked() const;

 bool __declspec(property(get=__get_isPartyOwner, put=__set_isPartyOwner))  isPartyOwner;

constexpr void __set_isPartyOwner(bool value) ;

constexpr bool __get_isPartyOwner() const;

 ::GlobalNamespace::BeatmapLevelSelectionMask __declspec(property(get=__get_selectionMask, put=__set_selectionMask))  selectionMask;

constexpr void __set_selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value) ;

constexpr ::GlobalNamespace::BeatmapLevelSelectionMask __get_selectionMask() const;

 ::GlobalNamespace::GameplayServerConfiguration __declspec(property(get=__get_configuration, put=__set_configuration))  configuration;

constexpr void __set_configuration(::GlobalNamespace::GameplayServerConfiguration value) ;

constexpr ::GlobalNamespace::GameplayServerConfiguration __get_configuration() const;


// Methods

/// @brief Method Serialize addr 0x22043d0 size 0x94 virtual true final true
 void Serialize(::LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0x2204464 size 0xd8 virtual true final true
 void Deserialize(::LiteNetLib::Utils::NetDataReader reader) ;

// Ctor Parameters []
explicit ____GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket() ;

/// @brief Method .ctor addr 0x2203a7c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::InviteRequestPacket
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4546))
// CS Name: LocalNetworkDiscoveryManager::InviteRequestPacket
class CORDL_TYPE ____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::LiteNetLib::Utils::INetSerializable
constexpr operator  ::LiteNetLib::Utils::INetSerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket(____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket(____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket& operator=(____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket&& o) noexcept = default;
  constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket& operator=(____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_userId, put=__set_userId))  userId;

constexpr void __set_userId(::StringW value) ;

constexpr ::StringW __get_userId() const;

 ::StringW __declspec(property(get=__get_userName, put=__set_userName))  userName;

constexpr void __set_userName(::StringW value) ;

constexpr ::StringW __get_userName() const;

 ::StringW __declspec(property(get=__get_secret, put=__set_secret))  secret;

constexpr void __set_secret(::StringW value) ;

constexpr ::StringW __get_secret() const;

 int32_t __declspec(property(get=__get_multiplayerPort, put=__set_multiplayerPort))  multiplayerPort;

constexpr void __set_multiplayerPort(int32_t value) ;

constexpr int32_t __get_multiplayerPort() const;

 bool __declspec(property(get=__get_isPartyOwner, put=__set_isPartyOwner))  isPartyOwner;

constexpr void __set_isPartyOwner(bool value) ;

constexpr bool __get_isPartyOwner() const;

 ::GlobalNamespace::BeatmapLevelSelectionMask __declspec(property(get=__get_selectionMask, put=__set_selectionMask))  selectionMask;

constexpr void __set_selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value) ;

constexpr ::GlobalNamespace::BeatmapLevelSelectionMask __get_selectionMask() const;

 ::GlobalNamespace::GameplayServerConfiguration __declspec(property(get=__get_configuration, put=__set_configuration))  configuration;

constexpr void __set_configuration(::GlobalNamespace::GameplayServerConfiguration value) ;

constexpr ::GlobalNamespace::GameplayServerConfiguration __get_configuration() const;


// Methods

/// @brief Method Serialize addr 0x220453c size 0x94 virtual true final true
 void Serialize(::LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0x22045d0 size 0xd4 virtual true final true
 void Deserialize(::LiteNetLib::Utils::NetDataReader reader) ;

// Ctor Parameters []
explicit ____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket() ;

/// @brief Method .ctor addr 0x2203bcc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::InviteResponsePacket
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4547))
// CS Name: LocalNetworkDiscoveryManager::InviteResponsePacket
class CORDL_TYPE ____GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::LiteNetLib::Utils::INetSerializable
constexpr operator  ::LiteNetLib::Utils::INetSerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket(____GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket(____GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket& operator=(____GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket&& o) noexcept = default;
  constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket& operator=(____GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_userId, put=__set_userId))  userId;

constexpr void __set_userId(::StringW value) ;

constexpr ::StringW __get_userId() const;

 bool __declspec(property(get=__get_accepted, put=__set_accepted))  accepted;

constexpr void __set_accepted(bool value) ;

constexpr bool __get_accepted() const;

 bool __declspec(property(get=__get_blocked, put=__set_blocked))  blocked;

constexpr void __set_blocked(bool value) ;

constexpr bool __get_blocked() const;


// Methods

/// @brief Method Serialize addr 0x22046a4 size 0x50 virtual true final true
 void Serialize(::LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0x22046f4 size 0x5c virtual true final true
 void Deserialize(::LiteNetLib::Utils::NetDataReader reader) ;

// Ctor Parameters []
explicit ____GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket() ;

/// @brief Method .ctor addr 0x2203ce0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PeerUpdatedDelegate
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4548))
// CS Name: LocalNetworkDiscoveryManager::PeerUpdatedDelegate
class CORDL_TYPE ____GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate(____GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate(____GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate& operator=(____GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate&& o) noexcept = default;
  constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate& operator=(____GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2204750 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2204828 size 0x58 virtual true final false
 void Invoke(::StringW userId, ::System::Net::IPAddress remoteEndPoint, ::StringW userName, int32_t currentPartySize, bool isPartyOwner, ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration) ;

/// @brief Method BeginInvoke addr 0x2204880 size 0x134 virtual true final false
 ::System::IAsyncResult BeginInvoke(::StringW userId, ::System::Net::IPAddress remoteEndPoint, ::StringW userName, int32_t currentPartySize, bool isPartyOwner, ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x22049b4 size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::JoinRequestedDelegate
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4549))
// CS Name: LocalNetworkDiscoveryManager::JoinRequestedDelegate
class CORDL_TYPE ____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate(____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate(____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate& operator=(____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate&& o) noexcept = default;
  constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate& operator=(____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x22049c0 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2204a98 size 0x14 virtual true final false
 void Invoke(::StringW userId, ::System::Net::IPAddress remoteEndPoint, ::StringW userName) ;

/// @brief Method BeginInvoke addr 0x2204aac size 0x2c virtual true final false
 ::System::IAsyncResult BeginInvoke(::StringW userId, ::System::Net::IPAddress remoteEndPoint, ::StringW userName, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2204ad8 size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::JoinRespondedDelegate
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4550))
// CS Name: LocalNetworkDiscoveryManager::JoinRespondedDelegate
class CORDL_TYPE ____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate(____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate(____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate& operator=(____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate&& o) noexcept = default;
  constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate& operator=(____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2204ae4 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2204bbc size 0x5c virtual true final false
 void Invoke(::StringW userId, ::StringW secret, int32_t multiplayerPort, bool blocked, bool isPartyOwner, ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration) ;

/// @brief Method BeginInvoke addr 0x2204c18 size 0x148 virtual true final false
 ::System::IAsyncResult BeginInvoke(::StringW userId, ::StringW secret, int32_t multiplayerPort, bool blocked, bool isPartyOwner, ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2204d60 size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::InviteRequestedDelegate
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4551))
// CS Name: LocalNetworkDiscoveryManager::InviteRequestedDelegate
class CORDL_TYPE ____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate(____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate(____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate& operator=(____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate&& o) noexcept = default;
  constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate& operator=(____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2204d6c size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2204e44 size 0x5c virtual true final false
 void Invoke(::StringW userId, ::System::Net::IPAddress remoteEndPoint, ::StringW userName, ::StringW secret, int32_t multiplayerPort, bool isPartyOwner, ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration) ;

/// @brief Method BeginInvoke addr 0x2204ea0 size 0x138 virtual true final false
 ::System::IAsyncResult BeginInvoke(::StringW userId, ::System::Net::IPAddress remoteEndPoint, ::StringW userName, ::StringW secret, int32_t multiplayerPort, bool isPartyOwner, ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2204fd8 size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::InviteRespondedDelegate
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4552))
// CS Name: LocalNetworkDiscoveryManager::InviteRespondedDelegate
class CORDL_TYPE ____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate(____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate(____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate& operator=(____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate&& o) noexcept = default;
  constexpr ____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate& operator=(____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2204fe4 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x22050bc size 0x1c virtual true final false
 void Invoke(::StringW userId, bool accepted, bool blocked) ;

/// @brief Method BeginInvoke addr 0x22050d8 size 0xb4 virtual true final false
 ::System::IAsyncResult BeginInvoke(::StringW userId, bool accepted, bool blocked, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x220518c size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LocalNetworkDiscoveryManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4553))
// CS Name: LocalNetworkDiscoveryManager
class CORDL_TYPE LocalNetworkDiscoveryManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using InviteRespondedDelegate = ::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate;

using InviteRequestedDelegate = ::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate;

using JoinRespondedDelegate = ::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate;

using JoinRequestedDelegate = ::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate;

using PeerUpdatedDelegate = ::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate;

using InviteResponsePacket = ::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket;

using InviteRequestPacket = ::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket;

using JoinResponsePacket = ::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket;

using JoinRequestPacket = ::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket;

using BroadcastPacket = ::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket;

using PacketType = ::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__PacketType;

/// @brief Convert operator to ::LiteNetLib::INetEventListener
constexpr operator  ::LiteNetLib::INetEventListener() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~LocalNetworkDiscoveryManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalNetworkDiscoveryManager", modifiers: " const&", def_value: None }]
constexpr LocalNetworkDiscoveryManager(LocalNetworkDiscoveryManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalNetworkDiscoveryManager", modifiers: "&&", def_value: None }]
constexpr LocalNetworkDiscoveryManager(LocalNetworkDiscoveryManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LocalNetworkDiscoveryManager(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr LocalNetworkDiscoveryManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LocalNetworkDiscoveryManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LocalNetworkDiscoveryManager& operator=(LocalNetworkDiscoveryManager&& o) noexcept = default;
  constexpr LocalNetworkDiscoveryManager& operator=(LocalNetworkDiscoveryManager const& o) noexcept = default;
                


// Fields

/// @brief Field kBroadcastInterval offset 0
static constexpr float_t  kBroadcastInterval{5};

/// @brief Field kSignature offset 0
static constexpr uint32_t  kSignature{3014087859u};

 ::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate __declspec(property(get=__get_peerUpdatedEvent, put=__set_peerUpdatedEvent))  peerUpdatedEvent;

constexpr void __set_peerUpdatedEvent(::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate __get_peerUpdatedEvent() const;

 ::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate __declspec(property(get=__get_joinRequestedEvent, put=__set_joinRequestedEvent))  joinRequestedEvent;

constexpr void __set_joinRequestedEvent(::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate __get_joinRequestedEvent() const;

 ::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate __declspec(property(get=__get_joinRespondedEvent, put=__set_joinRespondedEvent))  joinRespondedEvent;

constexpr void __set_joinRespondedEvent(::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate __get_joinRespondedEvent() const;

 ::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate __declspec(property(get=__get_inviteRequestedEvent, put=__set_inviteRequestedEvent))  inviteRequestedEvent;

constexpr void __set_inviteRequestedEvent(::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate __get_inviteRequestedEvent() const;

 ::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate __declspec(property(get=__get_inviteRespondedEvent, put=__set_inviteRespondedEvent))  inviteRespondedEvent;

constexpr void __set_inviteRespondedEvent(::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate __get_inviteRespondedEvent() const;

 ::LiteNetLib::NetManager __declspec(property(get=__get__netManager, put=__set__netManager))  _netManager;

constexpr void __set__netManager(::LiteNetLib::NetManager value) ;

constexpr ::LiteNetLib::NetManager __get__netManager() const;

 ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__PacketType,::System::Net::IPEndPoint> __declspec(property(get=__get__packetSerializer, put=__set__packetSerializer))  _packetSerializer;

constexpr void __set__packetSerializer(::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__PacketType,::System::Net::IPEndPoint> value) ;

constexpr ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__PacketType,::System::Net::IPEndPoint> __get__packetSerializer() const;

 ::LiteNetLib::Utils::NetDataWriter __declspec(property(get=__get__netDataWriter, put=__set__netDataWriter))  _netDataWriter;

constexpr void __set__netDataWriter(::LiteNetLib::Utils::NetDataWriter value) ;

constexpr ::LiteNetLib::Utils::NetDataWriter __get__netDataWriter() const;

 ::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket __declspec(property(get=__get__broadcastPacket, put=__set__broadcastPacket))  _broadcastPacket;

constexpr void __set__broadcastPacket(::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket __get__broadcastPacket() const;

 int32_t __declspec(property(get=__get__discoveryPort, put=__set__discoveryPort))  _discoveryPort;

constexpr void __set__discoveryPort(int32_t value) ;

constexpr int32_t __get__discoveryPort() const;

 bool __declspec(property(get=__get__initialized, put=__set__initialized))  _initialized;

constexpr void __set__initialized(bool value) ;

constexpr bool __get__initialized() const;

 bool __declspec(property(get=__get__enableBroadcasting, put=__set__enableBroadcasting))  _enableBroadcasting;

constexpr void __set__enableBroadcasting(bool value) ;

constexpr bool __get__enableBroadcasting() const;

 float_t __declspec(property(get=__get__lastBroadcastTime, put=__set__lastBroadcastTime))  _lastBroadcastTime;

constexpr void __set__lastBroadcastTime(float_t value) ;

constexpr float_t __get__lastBroadcastTime() const;


// Properties

 ::StringW __declspec(property(get=get_userId))  userId;

 ::StringW __declspec(property(get=get_userName))  userName;

 bool __declspec(property(get=get_isPartyOwner, put=set_isPartyOwner))  isPartyOwner;

 int32_t __declspec(property(get=get_currentPartySize, put=set_currentPartySize))  currentPartySize;

 ::GlobalNamespace::GameplayServerConfiguration __declspec(property(get=get_configuration, put=set_configuration))  configuration;

 ::GlobalNamespace::BeatmapLevelSelectionMask __declspec(property(get=get_selectionMask, put=set_selectionMask))  selectionMask;

 bool __declspec(property(get=get_enableBroadcasting, put=set_enableBroadcasting))  enableBroadcasting;


// Methods

/// @brief Method add_peerUpdatedEvent addr 0x2202bac size 0x9c virtual false final false
 void add_peerUpdatedEvent(::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate value) ;

/// @brief Method remove_peerUpdatedEvent addr 0x2202c48 size 0x9c virtual false final false
 void remove_peerUpdatedEvent(::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate value) ;

/// @brief Method add_joinRequestedEvent addr 0x2202ce4 size 0x9c virtual false final false
 void add_joinRequestedEvent(::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate value) ;

/// @brief Method remove_joinRequestedEvent addr 0x2202d80 size 0x9c virtual false final false
 void remove_joinRequestedEvent(::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate value) ;

/// @brief Method add_joinRespondedEvent addr 0x2202e1c size 0x9c virtual false final false
 void add_joinRespondedEvent(::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate value) ;

/// @brief Method remove_joinRespondedEvent addr 0x2202eb8 size 0x9c virtual false final false
 void remove_joinRespondedEvent(::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate value) ;

/// @brief Method add_inviteRequestedEvent addr 0x2202f54 size 0x9c virtual false final false
 void add_inviteRequestedEvent(::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate value) ;

/// @brief Method remove_inviteRequestedEvent addr 0x2202ff0 size 0x9c virtual false final false
 void remove_inviteRequestedEvent(::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate value) ;

/// @brief Method add_inviteRespondedEvent addr 0x220308c size 0x9c virtual false final false
 void add_inviteRespondedEvent(::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate value) ;

/// @brief Method remove_inviteRespondedEvent addr 0x2203128 size 0x9c virtual false final false
 void remove_inviteRespondedEvent(::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate value) ;

/// @brief Method get_userId addr 0x22031c4 size 0x1c virtual false final false
 ::StringW get_userId() ;

/// @brief Method get_userName addr 0x22031e0 size 0x1c virtual false final false
 ::StringW get_userName() ;

/// @brief Method get_isPartyOwner addr 0x22031fc size 0x1c virtual false final false
 bool get_isPartyOwner() ;

/// @brief Method set_isPartyOwner addr 0x2203218 size 0x34 virtual false final false
 void set_isPartyOwner(bool value) ;

/// @brief Method get_currentPartySize addr 0x220324c size 0x1c virtual false final false
 int32_t get_currentPartySize() ;

/// @brief Method set_currentPartySize addr 0x2203268 size 0x30 virtual false final false
 void set_currentPartySize(int32_t value) ;

/// @brief Method get_configuration addr 0x2203298 size 0x28 virtual false final false
 ::GlobalNamespace::GameplayServerConfiguration get_configuration() ;

/// @brief Method set_configuration addr 0x22032c0 size 0x70 virtual false final false
 void set_configuration(::GlobalNamespace::GameplayServerConfiguration value) ;

/// @brief Method get_selectionMask addr 0x2203330 size 0x28 virtual false final false
 ::GlobalNamespace::BeatmapLevelSelectionMask get_selectionMask() ;

/// @brief Method set_selectionMask addr 0x2203358 size 0x94 virtual false final false
 void set_selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value) ;

/// @brief Method get_enableBroadcasting addr 0x22033ec size 0x8 virtual false final false
 bool get_enableBroadcasting() ;

/// @brief Method set_enableBroadcasting addr 0x22033f4 size 0xc virtual false final false
 void set_enableBroadcasting(bool value) ;

/// @brief Method Init addr 0x2203400 size 0x358 virtual false final false
 void Init(int32_t discoveryPort, ::StringW initUserId, ::StringW initUserName) ;

/// @brief Method OnEnable addr 0x2203758 size 0x14 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x220376c size 0x14 virtual false final false
 void OnDisable() ;

/// @brief Method Update addr 0x2203780 size 0xb8 virtual false final false
 void Update() ;

/// @brief Method SendJoinRequest addr 0x2203838 size 0xec virtual false final false
 void SendJoinRequest(::System::Net::IPAddress ip) ;

/// @brief Method SendJoinResponse addr 0x220392c size 0x150 virtual false final false
 void SendJoinResponse(::System::Net::IPAddress ip, ::StringW secret, int32_t multiplayerPort, bool blocked, bool isPartyOwner, ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration) ;

/// @brief Method SendInviteRequest addr 0x2203a84 size 0x148 virtual false final false
 void SendInviteRequest(::System::Net::IPAddress ip, ::StringW secret, int32_t multiplayerPort, bool isPartyOwner, ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration) ;

/// @brief Method SendInviteResponse addr 0x2203bd4 size 0x10c virtual false final false
 void SendInviteResponse(::System::Net::IPAddress ip, bool accepted, bool blocked) ;

/// @brief Method WritePacket addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 ::LiteNetLib::Utils::NetDataWriter WritePacket(T packet) ;

/// @brief Method LiteNetLib.INetEventListener.OnNetworkReceiveUnconnected addr 0x2203ce8 size 0x9c virtual true final true
 void LiteNetLib_INetEventListener_OnNetworkReceiveUnconnected(::System::Net::IPEndPoint remoteEndPoint, ::LiteNetLib::NetPacketReader reader, ::LiteNetLib::UnconnectedMessageType messageType) ;

/// @brief Method LiteNetLib.INetEventListener.OnConnectionRequest addr 0x2203d84 size 0x18 virtual true final true
 void LiteNetLib_INetEventListener_OnConnectionRequest(::LiteNetLib::ConnectionRequest request) ;

/// @brief Method LiteNetLib.INetEventListener.OnNetworkError addr 0x2203d9c size 0xcc virtual true final true
 void LiteNetLib_INetEventListener_OnNetworkError(::System::Net::IPEndPoint endPoint, ::System::Net::Sockets::SocketError socketErrorCode) ;

/// @brief Method LiteNetLib.INetEventListener.OnNetworkLatencyUpdate addr 0x2203e68 size 0x4 virtual true final true
 void LiteNetLib_INetEventListener_OnNetworkLatencyUpdate(::LiteNetLib::NetPeer peer, int32_t latency) ;

/// @brief Method LiteNetLib.INetEventListener.OnPeerConnected addr 0x2203e6c size 0x4 virtual true final true
 void LiteNetLib_INetEventListener_OnPeerConnected(::LiteNetLib::NetPeer peer) ;

/// @brief Method LiteNetLib.INetEventListener.OnPeerDisconnected addr 0x2203e70 size 0x4 virtual true final true
 void LiteNetLib_INetEventListener_OnPeerDisconnected(::LiteNetLib::NetPeer peer, ::LiteNetLib::DisconnectInfo disconnectInfo) ;

/// @brief Method LiteNetLib.INetEventListener.OnNetworkReceive addr 0x2203e74 size 0x4 virtual true final true
 void LiteNetLib_INetEventListener_OnNetworkReceive(::LiteNetLib::NetPeer peer, ::LiteNetLib::NetPacketReader reader, ::LiteNetLib::DeliveryMethod deliveryMethod) ;

// Ctor Parameters []
explicit LocalNetworkDiscoveryManager() ;

/// @brief Method .ctor addr 0x2203e78 size 0xe4 virtual false final false
 void _ctor() ;

/// @brief Method <Init>b__55_0 addr 0x2203f64 size 0xd0 virtual false final false
 void _Init_b__55_0(::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket packet, ::System::Net::IPEndPoint endPoint) ;

/// @brief Method <Init>b__55_1 addr 0x2204034 size 0x40 virtual false final false
 void _Init_b__55_1(::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket packet, ::System::Net::IPEndPoint endPoint) ;

/// @brief Method <Init>b__55_2 addr 0x2204074 size 0x94 virtual false final false
 void _Init_b__55_2(::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket packet, ::System::Net::IPEndPoint endPoint) ;

/// @brief Method <Init>b__55_3 addr 0x2204108 size 0x9c virtual false final false
 void _Init_b__55_3(::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket packet, ::System::Net::IPEndPoint endPoint) ;

/// @brief Method <Init>b__55_4 addr 0x22041a4 size 0x3c virtual false final false
 void _Init_b__55_4(::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket packet, ::System::Net::IPEndPoint endPoint) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__PacketType, "", "LocalNetworkDiscoveryManager/PacketType");
NEED_NO_BOX(::GlobalNamespace::LocalNetworkDiscoveryManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalNetworkDiscoveryManager, "", "LocalNetworkDiscoveryManager");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__BroadcastPacket, "", "LocalNetworkDiscoveryManager/BroadcastPacket");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestPacket, "", "LocalNetworkDiscoveryManager/InviteRequestPacket");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRequestedDelegate, "", "LocalNetworkDiscoveryManager/InviteRequestedDelegate");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__InviteRespondedDelegate, "", "LocalNetworkDiscoveryManager/InviteRespondedDelegate");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__InviteResponsePacket, "", "LocalNetworkDiscoveryManager/InviteResponsePacket");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestPacket, "", "LocalNetworkDiscoveryManager/JoinRequestPacket");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRequestedDelegate, "", "LocalNetworkDiscoveryManager/JoinRequestedDelegate");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__JoinRespondedDelegate, "", "LocalNetworkDiscoveryManager/JoinRespondedDelegate");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__JoinResponsePacket, "", "LocalNetworkDiscoveryManager/JoinResponsePacket");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__LocalNetworkDiscoveryManager__PeerUpdatedDelegate, "", "LocalNetworkDiscoveryManager/PeerUpdatedDelegate");
