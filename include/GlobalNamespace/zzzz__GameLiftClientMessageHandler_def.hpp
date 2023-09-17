#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "BGNet/Core/Messages/zzzz__BaseClientUnconnectedMessageHandler_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace BGNet::Core::Messages {
struct BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin;
}
namespace GlobalNamespace {
class ICertificateValidator;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace GlobalNamespace {
class DnsEndPoint;
}
namespace BGNet::Core {
class IAnalyticsManager;
}
namespace BGNet::Core::Messages {
class IUnconnectedAuthenticateRequest;
}
namespace BGNet::Core {
class ITimeProvider;
}
namespace GlobalNamespace {
class IUnconnectedMessageSender;
}
namespace BGNet::Core {
class ITaskUtility;
}
namespace BGNet::Core::Messages {
class IUnconnectedMessage;
}
// Forward declare root types
namespace GlobalNamespace {
class GameLiftClientMessageHandler;
}
namespace {
// Type: ::GameLiftClientMessageHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12951))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12660))
// CS Name: GameLiftClientMessageHandler
class CORDL_TYPE GameLiftClientMessageHandler : public BGNet::Core::Messages::BaseClientUnconnectedMessageHandler {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd0};

virtual ~GameLiftClientMessageHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameLiftClientMessageHandler", modifiers: " const&", def_value: None }]
constexpr GameLiftClientMessageHandler(GameLiftClientMessageHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameLiftClientMessageHandler", modifiers: "&&", def_value: None }]
constexpr GameLiftClientMessageHandler(GameLiftClientMessageHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameLiftClientMessageHandler(void* ptr) noexcept : BGNet::Core::Messages::BaseClientUnconnectedMessageHandler(ptr) {
}


  constexpr GameLiftClientMessageHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameLiftClientMessageHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameLiftClientMessageHandler& operator=(GameLiftClientMessageHandler&& o) noexcept = default;
  constexpr GameLiftClientMessageHandler& operator=(GameLiftClientMessageHandler const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__userId, put=__set__userId))  _userId;

constexpr void __set__userId(::StringW value) ;

constexpr ::StringW __get__userId() const;

 ::StringW __declspec(property(get=__get__userName, put=__set__userName))  _userName;

constexpr void __set__userName(::StringW value) ;

constexpr ::StringW __get__userName() const;

 ::StringW __declspec(property(get=__get__playerSessionId, put=__set__playerSessionId))  _playerSessionId;

constexpr void __set__playerSessionId(::StringW value) ;

constexpr ::StringW __get__playerSessionId() const;


// Methods

// Ctor Parameters [CppParam { name: "sender", ty: "GlobalNamespace::IUnconnectedMessageSender", modifiers: "", def_value: None }, CppParam { name: "endPoint", ty: "GlobalNamespace::DnsEndPoint", modifiers: "", def_value: None }, CppParam { name: "timeProvider", ty: "BGNet::Core::ITimeProvider", modifiers: "", def_value: None }, CppParam { name: "taskUtility", ty: "BGNet::Core::ITaskUtility", modifiers: "", def_value: None }, CppParam { name: "certificateValidator", ty: "GlobalNamespace::ICertificateValidator", modifiers: "", def_value: None }, CppParam { name: "analytics", ty: "BGNet::Core::IAnalyticsManager", modifiers: "", def_value: None }]
explicit GameLiftClientMessageHandler(GlobalNamespace::IUnconnectedMessageSender sender, GlobalNamespace::DnsEndPoint endPoint, BGNet::Core::ITimeProvider timeProvider, BGNet::Core::ITaskUtility taskUtility, GlobalNamespace::ICertificateValidator certificateValidator, BGNet::Core::IAnalyticsManager analytics) ;

/// @brief Method .ctor addr 0xdb0c1c size 0x1c virtual false final false
 void _ctor(GlobalNamespace::IUnconnectedMessageSender sender, GlobalNamespace::DnsEndPoint endPoint, BGNet::Core::ITimeProvider timeProvider, BGNet::Core::ITaskUtility taskUtility, GlobalNamespace::ICertificateValidator certificateValidator, BGNet::Core::IAnalyticsManager analytics) ;

/// @brief Method RegisterGameLiftMessages addr 0xdb0c38 size 0x424 virtual false final false
 void RegisterGameLiftMessages() ;

/// @brief Method ShouldHandleMessage addr 0xdb105c size 0xb0 virtual true final false
 bool ShouldHandleMessage(BGNet::Core::Messages::IUnconnectedMessage packet, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin origin) ;

/// @brief Method GetMessageType addr 0xdb110c size 0x7c virtual true final false
 uint32_t GetMessageType(BGNet::Core::Messages::IUnconnectedMessage message) ;

/// @brief Method GetAuthenticationRequest addr 0xdb1188 size 0xb4 virtual true final false
 System::Threading::Tasks::Task_1<BGNet::Core::Messages::IUnconnectedAuthenticateRequest> GetAuthenticationRequest() ;

/// @brief Method AuthenticateWithGameLiftServer addr 0xdb123c size 0x10 virtual false final false
 System::Threading::Tasks::Task AuthenticateWithGameLiftServer(::StringW userId, ::StringW userName, ::StringW playerSessionId) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameLiftClientMessageHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameLiftClientMessageHandler, "", "GameLiftClientMessageHandler");
} // end anonymous namespace
