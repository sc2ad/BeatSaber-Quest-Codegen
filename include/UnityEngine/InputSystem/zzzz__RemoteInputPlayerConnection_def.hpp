#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputRemoting__MessageType;
}
namespace System {
struct Guid;
}
namespace System {
template<typename T>
class IObservable_1;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputRemoting__Message;
}
namespace System {
class IDisposable;
}
namespace System {
class Exception;
}
namespace System {
template<typename T>
class IObserver_1;
}
namespace UnityEngine::Networking::PlayerConnection {
class MessageEventArgs;
}
namespace UnityEngine::Networking::PlayerConnection {
class IEditorPlayerConnection;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class RemoteInputPlayerConnection;
}
namespace UnityEngine::InputSystem {
class ____UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber;
}
// Type: ::Subscriber
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6355))
// CS Name: UnityEngine.InputSystem.RemoteInputPlayerConnection::Subscriber
class CORDL_TYPE ____UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber(____UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber(____UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber& operator=(____UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber&& o) noexcept = default;
  constexpr ____UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber& operator=(____UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber const& o) noexcept = default;
                


// Fields

 ::UnityEngine::InputSystem::RemoteInputPlayerConnection __declspec(property(get=__get_owner, put=__set_owner))  owner;

constexpr void __set_owner(::UnityEngine::InputSystem::RemoteInputPlayerConnection value) ;

constexpr ::UnityEngine::InputSystem::RemoteInputPlayerConnection __get_owner() const;

 ::System::IObserver_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputRemoting__Message> __declspec(property(get=__get_observer, put=__set_observer))  observer;

constexpr void __set_observer(::System::IObserver_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputRemoting__Message> value) ;

constexpr ::System::IObserver_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputRemoting__Message> __get_observer() const;


// Methods

/// @brief Method Dispose addr 0x2915070 size 0x58 virtual true final true
 void Dispose() ;

// Ctor Parameters []
explicit ____UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber() ;

/// @brief Method .ctor addr 0x29149d4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::RemoteInputPlayerConnection
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6356))
// CS Name: UnityEngine.InputSystem.RemoteInputPlayerConnection
class CORDL_TYPE RemoteInputPlayerConnection : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using Subscriber = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber;

/// @brief Convert operator to ::System::IObserver_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputRemoting__Message>
constexpr operator  ::System::IObserver_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputRemoting__Message>() const noexcept;

/// @brief Convert operator to ::System::IObservable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputRemoting__Message>
constexpr operator  ::System::IObservable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputRemoting__Message>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~RemoteInputPlayerConnection() = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteInputPlayerConnection", modifiers: " const&", def_value: None }]
constexpr RemoteInputPlayerConnection(RemoteInputPlayerConnection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteInputPlayerConnection", modifiers: "&&", def_value: None }]
constexpr RemoteInputPlayerConnection(RemoteInputPlayerConnection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RemoteInputPlayerConnection(void* ptr) noexcept : ::UnityEngine::ScriptableObject(ptr) {
}


  constexpr RemoteInputPlayerConnection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RemoteInputPlayerConnection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RemoteInputPlayerConnection& operator=(RemoteInputPlayerConnection&& o) noexcept = default;
  constexpr RemoteInputPlayerConnection& operator=(RemoteInputPlayerConnection const& o) noexcept = default;
                


// Fields

static ::System::Guid __declspec(property(get=__get_kNewDeviceMsg, put=__set_kNewDeviceMsg))  kNewDeviceMsg;

static void __set_kNewDeviceMsg(::System::Guid value) ;

static ::System::Guid __get_kNewDeviceMsg() ;

static ::System::Guid __declspec(property(get=__get_kNewLayoutMsg, put=__set_kNewLayoutMsg))  kNewLayoutMsg;

static void __set_kNewLayoutMsg(::System::Guid value) ;

static ::System::Guid __get_kNewLayoutMsg() ;

static ::System::Guid __declspec(property(get=__get_kNewEventsMsg, put=__set_kNewEventsMsg))  kNewEventsMsg;

static void __set_kNewEventsMsg(::System::Guid value) ;

static ::System::Guid __get_kNewEventsMsg() ;

static ::System::Guid __declspec(property(get=__get_kRemoveDeviceMsg, put=__set_kRemoveDeviceMsg))  kRemoveDeviceMsg;

static void __set_kRemoveDeviceMsg(::System::Guid value) ;

static ::System::Guid __get_kRemoveDeviceMsg() ;

static ::System::Guid __declspec(property(get=__get_kChangeUsagesMsg, put=__set_kChangeUsagesMsg))  kChangeUsagesMsg;

static void __set_kChangeUsagesMsg(::System::Guid value) ;

static ::System::Guid __get_kChangeUsagesMsg() ;

static ::System::Guid __declspec(property(get=__get_kStartSendingMsg, put=__set_kStartSendingMsg))  kStartSendingMsg;

static void __set_kStartSendingMsg(::System::Guid value) ;

static ::System::Guid __get_kStartSendingMsg() ;

static ::System::Guid __declspec(property(get=__get_kStopSendingMsg, put=__set_kStopSendingMsg))  kStopSendingMsg;

static void __set_kStopSendingMsg(::System::Guid value) ;

static ::System::Guid __get_kStopSendingMsg() ;

 ::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection __declspec(property(get=__get_m_Connection, put=__set_m_Connection))  m_Connection;

constexpr void __set_m_Connection(::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection value) ;

constexpr ::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection __get_m_Connection() const;

 ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber> __declspec(property(get=__get_m_Subscribers, put=__set_m_Subscribers))  m_Subscribers;

constexpr void __set_m_Subscribers(::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber> value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber> __get_m_Subscribers() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_m_ConnectedIds, put=__set_m_ConnectedIds))  m_ConnectedIds;

constexpr void __set_m_ConnectedIds(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_m_ConnectedIds() const;


// Methods

/// @brief Method Bind addr 0x291407c size 0x6dc virtual false final false
 void Bind(::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection connection, bool isConnected) ;

/// @brief Method Subscribe addr 0x2914834 size 0x1a0 virtual true final true
 ::System::IDisposable Subscribe(::System::IObserver_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputRemoting__Message> observer) ;

/// @brief Method OnConnected addr 0x2914758 size 0xdc virtual false final false
 void OnConnected(int32_t id) ;

/// @brief Method OnDisconnected addr 0x2914ae8 size 0xdc virtual false final false
 void OnDisconnected(int32_t id) ;

/// @brief Method OnNewDevice addr 0x2914bc4 size 0xc virtual false final false
 void OnNewDevice(::UnityEngine::Networking::PlayerConnection::MessageEventArgs args) ;

/// @brief Method OnNewLayout addr 0x2914bd0 size 0xc virtual false final false
 void OnNewLayout(::UnityEngine::Networking::PlayerConnection::MessageEventArgs args) ;

/// @brief Method OnNewEvents addr 0x2914bdc size 0xc virtual false final false
 void OnNewEvents(::UnityEngine::Networking::PlayerConnection::MessageEventArgs args) ;

/// @brief Method OnRemoveDevice addr 0x2914be8 size 0xc virtual false final false
 void OnRemoveDevice(::UnityEngine::Networking::PlayerConnection::MessageEventArgs args) ;

/// @brief Method OnChangeUsages addr 0x2914bf4 size 0xc virtual false final false
 void OnChangeUsages(::UnityEngine::Networking::PlayerConnection::MessageEventArgs args) ;

/// @brief Method OnStartSending addr 0x2914c00 size 0xc virtual false final false
 void OnStartSending(::UnityEngine::Networking::PlayerConnection::MessageEventArgs args) ;

/// @brief Method OnStopSending addr 0x2914c0c size 0xc virtual false final false
 void OnStopSending(::UnityEngine::Networking::PlayerConnection::MessageEventArgs args) ;

/// @brief Method SendToSubscribers addr 0x29149dc size 0x10c virtual false final false
 void SendToSubscribers(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputRemoting__MessageType type, ::UnityEngine::Networking::PlayerConnection::MessageEventArgs args) ;

/// @brief Method System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnNext addr 0x2914c18 size 0x264 virtual true final true
 void System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnNext(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputRemoting__Message msg) ;

/// @brief Method System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnError addr 0x2914e7c size 0x4 virtual true final true
 void System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnError(::System::Exception error) ;

/// @brief Method System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnCompleted addr 0x2914e80 size 0x4 virtual true final true
 void System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnCompleted() ;

// Ctor Parameters []
explicit RemoteInputPlayerConnection() ;

/// @brief Method .ctor addr 0x2914e84 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::RemoteInputPlayerConnection);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::RemoteInputPlayerConnection, "UnityEngine.InputSystem", "RemoteInputPlayerConnection");
NEED_NO_BOX(::UnityEngine::InputSystem::____UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__RemoteInputPlayerConnection__Subscriber, "UnityEngine.InputSystem", "RemoteInputPlayerConnection/Subscriber");
