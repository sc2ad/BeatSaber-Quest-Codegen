#pragma once
#include "BGNet/Core/Messages/zzzz__BaseClientUnconnectedMessageHandler_impl.hpp"
#include "GlobalNamespace/zzzz__GameLiftClientMessageHandler_def.hpp"
#include "BGNet/Core/Messages/zzzz__UnconnectedMessageHandler_def.hpp"
#include "GlobalNamespace/zzzz__ICertificateValidator_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "GlobalNamespace/zzzz__DnsEndPoint_def.hpp"
#include "BGNet/Core/zzzz__IAnalyticsManager_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedAuthenticateRequest_def.hpp"
#include "BGNet/Core/zzzz__ITimeProvider_def.hpp"
#include "GlobalNamespace/zzzz__IUnconnectedMessageSender_def.hpp"
#include "BGNet/Core/zzzz__ITaskUtility_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedMessage_def.hpp"
namespace {
//  Writing Method size for method: GlobalNamespace::GameLiftClientMessageHandler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameLiftClientMessageHandler::*)(GlobalNamespace::IUnconnectedMessageSender, GlobalNamespace::DnsEndPoint, BGNet::Core::ITimeProvider, BGNet::Core::ITaskUtility, GlobalNamespace::ICertificateValidator, BGNet::Core::IAnalyticsManager)>(&GlobalNamespace::GameLiftClientMessageHandler::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xdb0c1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftClientMessageHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IUnconnectedMessageSender>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DnsEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::ITimeProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::ITaskUtility>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ICertificateValidator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::IAnalyticsManager>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftClientMessageHandler.RegisterGameLiftMessages
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameLiftClientMessageHandler::*)()>(&GlobalNamespace::GameLiftClientMessageHandler::RegisterGameLiftMessages)> {
  constexpr static std::size_t size = 0x424;
  constexpr static std::size_t addrs = 0xdb0c38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftClientMessageHandler>::get(),
                            "RegisterGameLiftMessages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftClientMessageHandler.ShouldHandleMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameLiftClientMessageHandler::*)(BGNet::Core::Messages::IUnconnectedMessage, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin)>(&GlobalNamespace::GameLiftClientMessageHandler::ShouldHandleMessage)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdb105c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GameLiftClientMessageHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftClientMessageHandler>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftClientMessageHandler.GetMessageType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (GlobalNamespace::GameLiftClientMessageHandler::*)(BGNet::Core::Messages::IUnconnectedMessage)>(&GlobalNamespace::GameLiftClientMessageHandler::GetMessageType)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xdb110c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GameLiftClientMessageHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftClientMessageHandler>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftClientMessageHandler.GetAuthenticationRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<BGNet::Core::Messages::IUnconnectedAuthenticateRequest> (GlobalNamespace::GameLiftClientMessageHandler::*)()>(&GlobalNamespace::GameLiftClientMessageHandler::GetAuthenticationRequest)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xdb1188;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GameLiftClientMessageHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftClientMessageHandler>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameLiftClientMessageHandler.AuthenticateWithGameLiftServer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (GlobalNamespace::GameLiftClientMessageHandler::*)(::StringW, ::StringW, ::StringW)>(&GlobalNamespace::GameLiftClientMessageHandler::AuthenticateWithGameLiftServer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xdb123c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftClientMessageHandler>::get(),
                            "AuthenticateWithGameLiftServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GameLiftClientMessageHandler::__set__userId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GameLiftClientMessageHandler::__get__userId() const {
return ::cordl_internals::getInstanceField<::StringW, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameLiftClientMessageHandler::__set__userName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GameLiftClientMessageHandler::__get__userName() const {
return ::cordl_internals::getInstanceField<::StringW, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameLiftClientMessageHandler::__set__playerSessionId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GameLiftClientMessageHandler::__get__playerSessionId() const {
return ::cordl_internals::getInstanceField<::StringW, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "sender", ty: "GlobalNamespace::IUnconnectedMessageSender", modifiers: "", def_value: None }, CppParam { name: "endPoint", ty: "GlobalNamespace::DnsEndPoint", modifiers: "", def_value: None }, CppParam { name: "timeProvider", ty: "BGNet::Core::ITimeProvider", modifiers: "", def_value: None }, CppParam { name: "taskUtility", ty: "BGNet::Core::ITaskUtility", modifiers: "", def_value: None }, CppParam { name: "certificateValidator", ty: "GlobalNamespace::ICertificateValidator", modifiers: "", def_value: None }, CppParam { name: "analytics", ty: "BGNet::Core::IAnalyticsManager", modifiers: "", def_value: Some("csnull") }]
 GlobalNamespace::GameLiftClientMessageHandler::GameLiftClientMessageHandler(GlobalNamespace::IUnconnectedMessageSender sender, GlobalNamespace::DnsEndPoint endPoint, BGNet::Core::ITimeProvider timeProvider, BGNet::Core::ITaskUtility taskUtility, GlobalNamespace::ICertificateValidator certificateValidator, BGNet::Core::IAnalyticsManager analytics)  : BGNet::Core::Messages::BaseClientUnconnectedMessageHandler(THROW_UNLESS(::il2cpp_utils::New<GameLiftClientMessageHandler>(sender, endPoint, timeProvider, taskUtility, certificateValidator, analytics))) {}
/// @param analytics: BGNet::Core::IAnalyticsManager (default: csnull)
 void GlobalNamespace::GameLiftClientMessageHandler::_ctor(GlobalNamespace::IUnconnectedMessageSender sender, GlobalNamespace::DnsEndPoint endPoint, BGNet::Core::ITimeProvider timeProvider, BGNet::Core::ITaskUtility taskUtility, GlobalNamespace::ICertificateValidator certificateValidator, BGNet::Core::IAnalyticsManager analytics)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftClientMessageHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IUnconnectedMessageSender>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DnsEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::ITimeProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::ITaskUtility>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ICertificateValidator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::IAnalyticsManager>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sender, endPoint, timeProvider, taskUtility, certificateValidator, analytics);
}
 void GlobalNamespace::GameLiftClientMessageHandler::RegisterGameLiftMessages()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftClientMessageHandler>::get(),
                            "RegisterGameLiftMessages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GameLiftClientMessageHandler::ShouldHandleMessage(BGNet::Core::Messages::IUnconnectedMessage packet, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin origin)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftClientMessageHandler>::get(),
                            "ShouldHandleMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, packet, origin);
}
 uint32_t GlobalNamespace::GameLiftClientMessageHandler::GetMessageType(BGNet::Core::Messages::IUnconnectedMessage message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftClientMessageHandler>::get(),
                            "GetMessageType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, message);
}
 System::Threading::Tasks::Task_1<BGNet::Core::Messages::IUnconnectedAuthenticateRequest> GlobalNamespace::GameLiftClientMessageHandler::GetAuthenticationRequest()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftClientMessageHandler>::get(),
                            "GetAuthenticationRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<BGNet::Core::Messages::IUnconnectedAuthenticateRequest>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task GlobalNamespace::GameLiftClientMessageHandler::AuthenticateWithGameLiftServer(::StringW userId, ::StringW userName, ::StringW playerSessionId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameLiftClientMessageHandler>::get(),
                            "AuthenticateWithGameLiftServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, userId, userName, playerSessionId);
}
} // end anonymous namespace
