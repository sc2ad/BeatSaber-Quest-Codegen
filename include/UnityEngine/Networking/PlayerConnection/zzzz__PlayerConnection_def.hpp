#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::Networking::PlayerConnection {
class PlayerEditorConnectionEvents;
}
namespace UnityEngine::Networking::PlayerConnection {
class IEditorPlayerConnection;
}
namespace System {
struct Guid;
}
namespace UnityEngine::Networking::PlayerConnection {
class MessageEventArgs;
}
namespace UnityEngine {
class IPlayerEditorConnectionNative;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityAction_1;
}
namespace UnityEngine::Networking::PlayerConnection {
class ____UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageTypeSubscribers;
}
// Forward declare root types
namespace UnityEngine::Networking::PlayerConnection {
class PlayerConnection;
}
namespace UnityEngine::Networking::PlayerConnection {
class ____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass12_0;
}
namespace UnityEngine::Networking::PlayerConnection {
class ____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass13_0;
}
namespace UnityEngine::Networking::PlayerConnection {
class ____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass20_0;
}
// Type: ::<>c__DisplayClass12_0
namespace UnityEngine::Networking::PlayerConnection {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10244))
// CS Name: UnityEngine.Networking.PlayerConnection.PlayerConnection::<>c__DisplayClass12_0
class CORDL_TYPE ____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass12_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass12_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass12_0", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass12_0(____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass12_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass12_0", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass12_0(____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass12_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass12_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass12_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass12_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass12_0& operator=(____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass12_0&& o) noexcept = default;
  constexpr ____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass12_0& operator=(____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass12_0 const& o) noexcept = default;
                


// Fields

 ::System::Guid __declspec(property(get=__get_messageId, put=__set_messageId))  messageId;

constexpr void __set_messageId(::System::Guid value) ;

constexpr ::System::Guid __get_messageId() const;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass12_0() ;

/// @brief Method .ctor addr 0x2b6ff00 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Register>b__0 addr 0x2b70c04 size 0x48 virtual false final false
 bool _Register_b__0(::UnityEngine::Networking::PlayerConnection::____UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageTypeSubscribers x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Networking::PlayerConnection
// Type: ::<>c__DisplayClass13_0
namespace UnityEngine::Networking::PlayerConnection {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10245))
// CS Name: UnityEngine.Networking.PlayerConnection.PlayerConnection::<>c__DisplayClass13_0
class CORDL_TYPE ____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass13_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass13_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass13_0", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass13_0(____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass13_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass13_0", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass13_0(____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass13_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass13_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass13_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass13_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass13_0& operator=(____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass13_0&& o) noexcept = default;
  constexpr ____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass13_0& operator=(____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass13_0 const& o) noexcept = default;
                


// Fields

 ::System::Guid __declspec(property(get=__get_messageId, put=__set_messageId))  messageId;

constexpr void __set_messageId(::System::Guid value) ;

constexpr ::System::Guid __get_messageId() const;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass13_0() ;

/// @brief Method .ctor addr 0x2b700b0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Unregister>b__0 addr 0x2b70c4c size 0x48 virtual false final false
 bool _Unregister_b__0(::UnityEngine::Networking::PlayerConnection::____UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageTypeSubscribers x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Networking::PlayerConnection
// Type: ::<>c__DisplayClass20_0
namespace UnityEngine::Networking::PlayerConnection {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10246))
// CS Name: UnityEngine.Networking.PlayerConnection.PlayerConnection::<>c__DisplayClass20_0
class CORDL_TYPE ____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass20_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass20_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass20_0", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass20_0(____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass20_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass20_0", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass20_0(____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass20_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass20_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass20_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass20_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass20_0& operator=(____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass20_0&& o) noexcept = default;
  constexpr ____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass20_0& operator=(____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass20_0 const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_msgReceived, put=__set_msgReceived))  msgReceived;

constexpr void __set_msgReceived(bool value) ;

constexpr bool __get_msgReceived() const;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass20_0() ;

/// @brief Method .ctor addr 0x2b70830 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <BlockUntilRecvMsg>b__0 addr 0x2b70c94 size 0xc virtual false final false
 void _BlockUntilRecvMsg_b__0(::UnityEngine::Networking::PlayerConnection::MessageEventArgs args) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Networking::PlayerConnection
// Type: UnityEngine.Networking.PlayerConnection::PlayerConnection
namespace UnityEngine::Networking::PlayerConnection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10247))
// CS Name: UnityEngine.Networking.PlayerConnection.PlayerConnection
class CORDL_TYPE PlayerConnection : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using __c__DisplayClass20_0 = ::UnityEngine::Networking::PlayerConnection::____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass20_0;

using __c__DisplayClass13_0 = ::UnityEngine::Networking::PlayerConnection::____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass13_0;

using __c__DisplayClass12_0 = ::UnityEngine::Networking::PlayerConnection::____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass12_0;

/// @brief Convert operator to ::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection
constexpr operator  ::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~PlayerConnection() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerConnection", modifiers: " const&", def_value: None }]
constexpr PlayerConnection(PlayerConnection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerConnection", modifiers: "&&", def_value: None }]
constexpr PlayerConnection(PlayerConnection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlayerConnection(void* ptr) noexcept : ::UnityEngine::ScriptableObject(ptr) {
}


  constexpr PlayerConnection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlayerConnection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlayerConnection& operator=(PlayerConnection&& o) noexcept = default;
  constexpr PlayerConnection& operator=(PlayerConnection const& o) noexcept = default;
                


// Fields

static ::UnityEngine::IPlayerEditorConnectionNative __declspec(property(get=__get_connectionNative, put=__set_connectionNative))  connectionNative;

static void __set_connectionNative(::UnityEngine::IPlayerEditorConnectionNative value) ;

static ::UnityEngine::IPlayerEditorConnectionNative __get_connectionNative() ;

 ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents __declspec(property(get=__get_m_PlayerEditorConnectionEvents, put=__set_m_PlayerEditorConnectionEvents))  m_PlayerEditorConnectionEvents;

constexpr void __set_m_PlayerEditorConnectionEvents(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents value) ;

constexpr ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents __get_m_PlayerEditorConnectionEvents() const;

 ::System::Collections::Generic::List_1<int32_t> __declspec(property(get=__get_m_connectedPlayers, put=__set_m_connectedPlayers))  m_connectedPlayers;

constexpr void __set_m_connectedPlayers(::System::Collections::Generic::List_1<int32_t> value) ;

constexpr ::System::Collections::Generic::List_1<int32_t> __get_m_connectedPlayers() const;

 bool __declspec(property(get=__get_m_IsInitilized, put=__set_m_IsInitilized))  m_IsInitilized;

constexpr void __set_m_IsInitilized(bool value) ;

constexpr bool __get_m_IsInitilized() const;

static ::UnityEngine::Networking::PlayerConnection::PlayerConnection __declspec(property(get=__get_s_Instance, put=__set_s_Instance))  s_Instance;

static void __set_s_Instance(::UnityEngine::Networking::PlayerConnection::PlayerConnection value) ;

static ::UnityEngine::Networking::PlayerConnection::PlayerConnection __get_s_Instance() ;


// Properties

static ::UnityEngine::Networking::PlayerConnection::PlayerConnection __declspec(property(get=get_instance))  instance;

 bool __declspec(property(get=get_isConnected))  isConnected;


// Methods

/// @brief Method get_instance addr 0x2b6f9c4 size 0x98 virtual false final false
static ::UnityEngine::Networking::PlayerConnection::PlayerConnection get_instance() ;

/// @brief Method get_isConnected addr 0x2b6fae0 size 0x9c virtual false final false
 bool get_isConnected() ;

/// @brief Method CreateInstance addr 0x2b6fa5c size 0x84 virtual false final false
static ::UnityEngine::Networking::PlayerConnection::PlayerConnection CreateInstance() ;

/// @brief Method OnEnable addr 0x2b6fbfc size 0xc0 virtual false final false
 void OnEnable() ;

/// @brief Method GetConnectionNativeApi addr 0x2b6fb7c size 0x80 virtual false final false
 ::UnityEngine::IPlayerEditorConnectionNative GetConnectionNativeApi() ;

/// @brief Method Register addr 0x2b6fcbc size 0x244 virtual true final true
 void Register(::System::Guid messageId, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs> callback) ;

/// @brief Method Unregister addr 0x2b6ff08 size 0x1a8 virtual true final true
 void Unregister(::System::Guid messageId, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs> callback) ;

/// @brief Method RegisterConnection addr 0x2b700b8 size 0x1a0 virtual true final true
 void RegisterConnection(::UnityEngine::Events::UnityAction_1<int32_t> callback) ;

/// @brief Method RegisterDisconnection addr 0x2b70258 size 0x60 virtual true final true
 void RegisterDisconnection(::UnityEngine::Events::UnityAction_1<int32_t> callback) ;

/// @brief Method UnregisterConnection addr 0x2b702b8 size 0x60 virtual true final true
 void UnregisterConnection(::UnityEngine::Events::UnityAction_1<int32_t> callback) ;

/// @brief Method UnregisterDisconnection addr 0x2b70318 size 0x60 virtual true final true
 void UnregisterDisconnection(::UnityEngine::Events::UnityAction_1<int32_t> callback) ;

/// @brief Method Send addr 0x2b70378 size 0x15c virtual true final true
 void Send(::System::Guid messageId, ::ArrayW<uint8_t> data) ;

/// @brief Method TrySend addr 0x2b704d4 size 0x15c virtual true final true
 bool TrySend(::System::Guid messageId, ::ArrayW<uint8_t> data) ;

/// @brief Method BlockUntilRecvMsg addr 0x2b70630 size 0x200 virtual false final false
 bool BlockUntilRecvMsg(::System::Guid messageId, int32_t timeout) ;

/// @brief Method DisconnectAll addr 0x2b70838 size 0x9c virtual true final true
 void DisconnectAll() ;

/// @brief Method MessageCallbackInternal addr 0x2b708d4 size 0x118 virtual false final false
static void MessageCallbackInternal(::cordl_internals::intptr_t data, uint64_t size, uint64_t guid, ::StringW messageId) ;

/// @brief Method ConnectedCallbackInternal addr 0x2b709ec size 0xdc virtual false final false
static void ConnectedCallbackInternal(int32_t playerId) ;

/// @brief Method DisconnectedCallback addr 0x2b70ac8 size 0x94 virtual false final false
static void DisconnectedCallback(int32_t playerId) ;

// Ctor Parameters []
explicit PlayerConnection() ;

/// @brief Method .ctor addr 0x2b70b5c size 0xa8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Networking::PlayerConnection
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Networking::PlayerConnection::PlayerConnection);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::PlayerConnection::PlayerConnection, "UnityEngine.Networking.PlayerConnection", "PlayerConnection");
NEED_NO_BOX(::UnityEngine::Networking::PlayerConnection::____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::PlayerConnection::____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass12_0, "UnityEngine.Networking.PlayerConnection", "PlayerConnection/<>c__DisplayClass12_0");
NEED_NO_BOX(::UnityEngine::Networking::PlayerConnection::____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::PlayerConnection::____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass13_0, "UnityEngine.Networking.PlayerConnection", "PlayerConnection/<>c__DisplayClass13_0");
NEED_NO_BOX(::UnityEngine::Networking::PlayerConnection::____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass20_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::PlayerConnection::____UnityEngine__Networking__PlayerConnection__PlayerConnection____c__DisplayClass20_0, "UnityEngine.Networking.PlayerConnection", "PlayerConnection/<>c__DisplayClass20_0");
