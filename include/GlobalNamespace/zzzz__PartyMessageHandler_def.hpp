#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace GlobalNamespace {
class IPoolablePacket;
}
namespace GlobalNamespace {
template<typename T>
class PacketPool_1;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace GlobalNamespace {
template<typename TType,typename TData>
class NetworkPacketSerializer_2;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class ConnectedPlayerManager;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__PartyMessageHandler__MessageType;
}
namespace GlobalNamespace {
class GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate;
}
namespace GlobalNamespace {
class GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage;
}
namespace GlobalNamespace {
class GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate;
}
namespace GlobalNamespace {
class PartyMessageHandler;
}
// Type: ::MessageType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12855))
// CS Name: PartyMessageHandler::MessageType
struct CORDL_TYPE GlobalNamespace__PartyMessageHandler__MessageType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__PartyMessageHandler__MessageType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__PartyMessageHandler__MessageType(GlobalNamespace__PartyMessageHandler__MessageType const&) = default;
                    constexpr GlobalNamespace__PartyMessageHandler__MessageType(GlobalNamespace__PartyMessageHandler__MessageType&&) = default;
                    constexpr GlobalNamespace__PartyMessageHandler__MessageType& operator=(GlobalNamespace__PartyMessageHandler__MessageType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__PartyMessageHandler__MessageType& operator=(GlobalNamespace__PartyMessageHandler__MessageType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PartyMessageHandler__MessageType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__PartyMessageHandler__MessageType_Unwrapped : int32_t {
__ConnectToMasterServer = 0,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__PartyMessageHandler__MessageType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__PartyMessageHandler__MessageType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field ConnectToMasterServer offset 0
static GlobalNamespace::GlobalNamespace__PartyMessageHandler__MessageType const ConnectToMasterServer;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ServerStatusUpdatedDelegate
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12856))
// CS Name: PartyMessageHandler::ServerStatusUpdatedDelegate
class CORDL_TYPE GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate(GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate(GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate& operator=(GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate&& o) noexcept = default;
  constexpr GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate& operator=(GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0xdc4178 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0xdc423c size 0x50 virtual true final false
 void Invoke(GlobalNamespace::BeatmapLevelSelectionMask selectionMask, GlobalNamespace::GameplayServerConfiguration configuration) ;

/// @brief Method BeginInvoke addr 0xdc428c size 0xc0 virtual true final false
 System::IAsyncResult BeginInvoke(GlobalNamespace::BeatmapLevelSelectionMask selectionMask, GlobalNamespace::GameplayServerConfiguration configuration, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0xdc434c size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ConnectToMasterServerDelegate
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12857))
// CS Name: PartyMessageHandler::ConnectToMasterServerDelegate
class CORDL_TYPE GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate(GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate(GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate& operator=(GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate&& o) noexcept = default;
  constexpr GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate& operator=(GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0xdc4358 size 0xd4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0xdc442c size 0x14 virtual true final false
 void Invoke(::StringW secret) ;

/// @brief Method BeginInvoke addr 0xdc4440 size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW secret, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0xdc4460 size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ConnectToMasterServerMessage
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12858))
// CS Name: PartyMessageHandler::ConnectToMasterServerMessage
class CORDL_TYPE GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr operator  LiteNetLib::Utils::INetSerializable() const noexcept;

/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr operator  GlobalNamespace::IPoolablePacket() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage(GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage(GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage& operator=(GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage&& o) noexcept = default;
  constexpr GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage& operator=(GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_secret, put=__set_secret))  secret;

constexpr void __set_secret(::StringW value) ;

constexpr ::StringW __get_secret() const;


// Properties

static GlobalNamespace::PacketPool_1<GlobalNamespace::GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage> __declspec(property(get=get_pool))  pool;


// Methods

/// @brief Method get_pool addr 0xdc3eb4 size 0x40 virtual false final false
static GlobalNamespace::PacketPool_1<GlobalNamespace::GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage> get_pool() ;

/// @brief Method Init addr 0xdc40dc size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage Init(::StringW secret) ;

/// @brief Method Serialize addr 0xdc446c size 0x24 virtual true final true
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0xdc4490 size 0x28 virtual true final true
 void Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method Release addr 0xdc4124 size 0x54 virtual true final true
 void Release() ;

// Ctor Parameters []
explicit GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage() ;

/// @brief Method .ctor addr 0xdc44b8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PartyMessageHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12859))
// CS Name: PartyMessageHandler
class CORDL_TYPE PartyMessageHandler : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ConnectToMasterServerMessage = GlobalNamespace::GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage;

using ConnectToMasterServerDelegate = GlobalNamespace::GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate;

using ServerStatusUpdatedDelegate = GlobalNamespace::GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate;

using MessageType = GlobalNamespace::GlobalNamespace__PartyMessageHandler__MessageType;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~PartyMessageHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "PartyMessageHandler", modifiers: " const&", def_value: None }]
constexpr PartyMessageHandler(PartyMessageHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PartyMessageHandler", modifiers: "&&", def_value: None }]
constexpr PartyMessageHandler(PartyMessageHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PartyMessageHandler(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PartyMessageHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PartyMessageHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PartyMessageHandler& operator=(PartyMessageHandler&& o) noexcept = default;
  constexpr PartyMessageHandler& operator=(PartyMessageHandler const& o) noexcept = default;
                


// Fields

 GlobalNamespace::NetworkPacketSerializer_2<GlobalNamespace::GlobalNamespace__PartyMessageHandler__MessageType,GlobalNamespace::IConnectedPlayer> __declspec(property(get=__get__serializer, put=__set__serializer))  _serializer;

constexpr void __set__serializer(GlobalNamespace::NetworkPacketSerializer_2<GlobalNamespace::GlobalNamespace__PartyMessageHandler__MessageType,GlobalNamespace::IConnectedPlayer> value) ;

constexpr GlobalNamespace::NetworkPacketSerializer_2<GlobalNamespace::GlobalNamespace__PartyMessageHandler__MessageType,GlobalNamespace::IConnectedPlayer> __get__serializer() const;

 GlobalNamespace::ConnectedPlayerManager __declspec(property(get=__get__connectedPlayerManager, put=__set__connectedPlayerManager))  _connectedPlayerManager;

constexpr void __set__connectedPlayerManager(GlobalNamespace::ConnectedPlayerManager value) ;

constexpr GlobalNamespace::ConnectedPlayerManager __get__connectedPlayerManager() const;

 GlobalNamespace::GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate __declspec(property(get=__get_connectToMasterServerEvent, put=__set_connectToMasterServerEvent))  connectToMasterServerEvent;

constexpr void __set_connectToMasterServerEvent(GlobalNamespace::GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate value) ;

constexpr GlobalNamespace::GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate __get_connectToMasterServerEvent() const;


// Methods

// Ctor Parameters [CppParam { name: "connectedPlayerManager", ty: "GlobalNamespace::ConnectedPlayerManager", modifiers: "", def_value: None }]
explicit PartyMessageHandler(GlobalNamespace::ConnectedPlayerManager connectedPlayerManager) ;

/// @brief Method .ctor addr 0xdc3d4c size 0x168 virtual false final false
 void _ctor(GlobalNamespace::ConnectedPlayerManager connectedPlayerManager) ;

/// @brief Method Dispose addr 0xdc3ef4 size 0x28 virtual true final true
 void Dispose() ;

/// @brief Method add_connectToMasterServerEvent addr 0xdc3f1c size 0x9c virtual false final false
 void add_connectToMasterServerEvent(GlobalNamespace::GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate value) ;

/// @brief Method remove_connectToMasterServerEvent addr 0xdc3fb8 size 0x9c virtual false final false
 void remove_connectToMasterServerEvent(GlobalNamespace::GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate value) ;

/// @brief Method ConnectToMasterServer addr 0xdc4054 size 0x88 virtual false final false
 void ConnectToMasterServer(::StringW secret) ;

/// @brief Method HandleConnectToMasterServer addr 0xdc40e4 size 0x40 virtual false final false
 void HandleConnectToMasterServer(GlobalNamespace::GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage packet) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PartyMessageHandler__MessageType, "", "PartyMessageHandler/MessageType");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate, "", "PartyMessageHandler/ConnectToMasterServerDelegate");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage, "", "PartyMessageHandler/ConnectToMasterServerMessage");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate, "", "PartyMessageHandler/ServerStatusUpdatedDelegate");
NEED_NO_BOX(GlobalNamespace::PartyMessageHandler);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PartyMessageHandler, "", "PartyMessageHandler");
