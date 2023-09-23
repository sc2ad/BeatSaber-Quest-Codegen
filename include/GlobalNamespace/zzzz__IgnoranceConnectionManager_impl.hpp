#pragma once
#include "GlobalNamespace/zzzz__IgnoranceConnectionManager_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__IgnoranceConnectionManager_def.hpp"
#include "BGNet/Core/zzzz__DeliveryMethod_def.hpp"
#include "GlobalNamespace/zzzz__IConnection_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "GlobalNamespace/zzzz__IConnectionInitParams_1_def.hpp"
#include "GlobalNamespace/zzzz__IConnectionRequestHandler_def.hpp"
#include "IgnoranceCore/zzzz__IgnoranceClient_def.hpp"
#include "IgnoranceCore/zzzz__IgnoranceServer_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "BGNet/Core/zzzz__ITimeProvider_def.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "GlobalNamespace/zzzz__IConnectionManager_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "IgnoranceCore/zzzz__IgnoranceChannelTypes_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "BGNet/Core/zzzz__ITaskUtility_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "GlobalNamespace/zzzz__IPollable_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectionState::GlobalNamespace__IgnoranceConnectionManager__ConnectionState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectionState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectionState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectionState  GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectionState::Connecting{0};
constexpr GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectionState  GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectionState::Connected{1};
constexpr GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectionState  GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectionState::Disconnecting{2};
constexpr GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectionState  GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectionState::Disconnected{3};
constexpr GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectionState  GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectionState::Disposed{4};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnectionParamsBase._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnectionParamsBase::*)()>(&GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnectionParamsBase::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xdb1d2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnectionParamsBase>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IConnectionInitParams_1<GlobalNamespace::IgnoranceConnectionManager>
constexpr  GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnectionParamsBase::operator GlobalNamespace::IConnectionInitParams_1<GlobalNamespace::IgnoranceConnectionManager>() const noexcept {
return GlobalNamespace::IConnectionInitParams_1<GlobalNamespace::IgnoranceConnectionManager>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnectionParamsBase::__set_connectionRequestHandler(GlobalNamespace::IConnectionRequestHandler value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IConnectionRequestHandler, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IConnectionRequestHandler>(value));
}
constexpr GlobalNamespace::IConnectionRequestHandler GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnectionParamsBase::__get_connectionRequestHandler() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IConnectionRequestHandler, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnectionParamsBase::__set_useSsl(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnectionParamsBase::__get_useSsl() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnectionParamsBase::__set_userId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnectionParamsBase::__get_userId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnectionParamsBase::__set_userName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnectionParamsBase::__get_userName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnectionParamsBase::__set_enableBackgroundSentry(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnectionParamsBase::__get_enableBackgroundSentry() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnectionParamsBase::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnectionParamsBase()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnectionParamsBase>())) {}
 void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnectionParamsBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnectionParamsBase>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__StartServerParams._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__StartServerParams::*)()>(&GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__StartServerParams::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xdb1d3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__StartServerParams>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__StartServerParams::__set_port(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__StartServerParams::__get_port() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__StartServerParams::__set_certificatePath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__StartServerParams::__get_certificatePath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__StartServerParams::__set_certificate(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__StartServerParams::__get_certificate() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__StartServerParams::__set_privateKeyPath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__StartServerParams::__get_privateKeyPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__StartServerParams::__set_privateKey(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__StartServerParams::__get_privateKey() const {
return ::cordl_internals::getInstanceField<::StringW, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__StartServerParams::GlobalNamespace__IgnoranceConnectionManager__StartServerParams()  : GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnectionParamsBase(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__IgnoranceConnectionManager__StartServerParams>())) {}
 void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__StartServerParams::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__StartServerParams>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectToServerParams._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectToServerParams::*)()>(&GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectToServerParams::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xdabcb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectToServerParams>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectToServerParams::__set_hostName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectToServerParams::__get_hostName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectToServerParams::__set_port(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectToServerParams::__get_port() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectToServerParams::__set_serverUserId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectToServerParams::__get_serverUserId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectToServerParams::__set_serverUserName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectToServerParams::__get_serverUserName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectToServerParams::__set_validateCertificate(bool value)  {
::cordl_internals::setInstanceField<bool, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectToServerParams::__get_validateCertificate() const {
return ::cordl_internals::getInstanceField<bool, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectToServerParams::__set_rootCertificatePath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectToServerParams::__get_rootCertificatePath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectToServerParams::__set_rootCertificate(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectToServerParams::__get_rootCertificate() const {
return ::cordl_internals::getInstanceField<::StringW, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectToServerParams::GlobalNamespace__IgnoranceConnectionManager__ConnectToServerParams()  : GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnectionParamsBase(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__IgnoranceConnectionManager__ConnectToServerParams>())) {}
 void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectToServerParams::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectToServerParams>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection.get_userId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection::*)()>(&GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection::get_userId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdb1d4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection>::get(),
                            "get_userId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection.set_userId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection::*)(::StringW)>(&GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection::set_userId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdb1d54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection>::get(),
                            "set_userId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection.get_userName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection::*)()>(&GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection::get_userName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdb1d5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection>::get(),
                            "get_userName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection.set_userName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection::*)(::StringW)>(&GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection::set_userName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdb1d64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection>::get(),
                            "set_userName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection.get_isConnectionOwner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection::*)()>(&GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection::get_isConnectionOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdb1d6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection>::get(),
                            "get_isConnectionOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection.set_isConnectionOwner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection::*)(bool)>(&GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection::set_isConnectionOwner)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xdb1d74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection>::get(),
                            "set_isConnectionOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection::*)(GlobalNamespace::IgnoranceConnectionManager, uint32_t, ::StringW, ::StringW, bool)>(&GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xdb1430;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IgnoranceConnectionManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection.Send
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection::*)(LiteNetLib::Utils::NetDataWriter, BGNet::Core::DeliveryMethod)>(&GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection::Send)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xdb1d80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection>::get(),
                            "Send",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::DeliveryMethod>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection.Disconnect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection::*)()>(&GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection::Disconnect)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xdb1da8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection>::get(),
                            "Disconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IConnection
constexpr  GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection::operator GlobalNamespace::IConnection() const noexcept {
return GlobalNamespace::IConnection(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection::__set__connectionManager(GlobalNamespace::IgnoranceConnectionManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IgnoranceConnectionManager, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IgnoranceConnectionManager>(value));
}
constexpr GlobalNamespace::IgnoranceConnectionManager GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection::__get__connectionManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IgnoranceConnectionManager, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection::__set_peerId(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection::__get_peerId() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection::__set__userId_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection::__get__userId_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection::__set__userName_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection::__get__userName_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection::__set__isConnectionOwner_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection::__get__isConnectionOwner_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection::get_userId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection>::get(),
                            "get_userId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection::set_userId(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection>::get(),
                            "set_userId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection::get_userName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection>::get(),
                            "get_userName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection::set_userName(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection>::get(),
                            "set_userName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection::get_isConnectionOwner()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection>::get(),
                            "get_isConnectionOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection::set_isConnectionOwner(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection>::get(),
                            "set_isConnectionOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "connectionManager", ty: "GlobalNamespace::IgnoranceConnectionManager", modifiers: "", def_value: None }, CppParam { name: "peerId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "userId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "userName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "isConnectionOwner", ty: "bool", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection(GlobalNamespace::IgnoranceConnectionManager connectionManager, uint32_t peerId, ::StringW userId, ::StringW userName, bool isConnectionOwner)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection>(connectionManager, peerId, userId, userName, isConnectionOwner))) {}
 void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection::_ctor(GlobalNamespace::IgnoranceConnectionManager connectionManager, uint32_t peerId, ::StringW userId, ::StringW userName, bool isConnectionOwner)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IgnoranceConnectionManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, connectionManager, peerId, userId, userName, isConnectionOwner);
}
 void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection::Send(LiteNetLib::Utils::NetDataWriter writer, BGNet::Core::DeliveryMethod deliveryMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection>::get(),
                            "Send",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::DeliveryMethod>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer, deliveryMethod);
}
 void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection::Disconnect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection>::get(),
                            "Disconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_0::*)()>(&GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdb1dcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_0._DisposeAsync_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_0::*)()>(&GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_0::_DisposeAsync_b__0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdb1dd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_0>::get(),
                            "<DisposeAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_0::__set_client(IgnoranceCore::IgnoranceClient value)  {
::cordl_internals::setInstanceField<IgnoranceCore::IgnoranceClient, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<IgnoranceCore::IgnoranceClient>(value));
}
constexpr IgnoranceCore::IgnoranceClient GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_0::__get_client() const {
return ::cordl_internals::getInstanceField<IgnoranceCore::IgnoranceClient, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_0::GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_0>())) {}
 void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_0::_DisposeAsync_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_0>::get(),
                            "<DisposeAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_1::*)()>(&GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdb1ddc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_1._DisposeAsync_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_1::*)()>(&GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_1::_DisposeAsync_b__1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdb1de4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_1>::get(),
                            "<DisposeAsync>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_1::__set_server(IgnoranceCore::IgnoranceServer value)  {
::cordl_internals::setInstanceField<IgnoranceCore::IgnoranceServer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<IgnoranceCore::IgnoranceServer>(value));
}
constexpr IgnoranceCore::IgnoranceServer GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_1::__get_server() const {
return ::cordl_internals::getInstanceField<IgnoranceCore::IgnoranceServer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_1::GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_1>())) {}
 void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_1::_DisposeAsync_b__1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager____c__DisplayClass77_1>::get(),
                            "<DisposeAsync>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___DisposeAsync_d__77.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___DisposeAsync_d__77::*)()>(&GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___DisposeAsync_d__77::MoveNext)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0xdb1dec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___DisposeAsync_d__77>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___DisposeAsync_d__77.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___DisposeAsync_d__77::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___DisposeAsync_d__77::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xdb21c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___DisposeAsync_d__77>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___DisposeAsync_d__77::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::IgnoranceConnectionManager", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___DisposeAsync_d__77::GlobalNamespace__IgnoranceConnectionManager___DisposeAsync_d__77(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, GlobalNamespace::IgnoranceConnectionManager __4__this, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___DisposeAsync_d__77::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___DisposeAsync_d__77::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___DisposeAsync_d__77::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___DisposeAsync_d__77::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___DisposeAsync_d__77::__set___4__this(GlobalNamespace::IgnoranceConnectionManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IgnoranceConnectionManager, 0x20>(this->__instance, std::forward<GlobalNamespace::IgnoranceConnectionManager>(value));
}
constexpr GlobalNamespace::IgnoranceConnectionManager GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___DisposeAsync_d__77::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IgnoranceConnectionManager, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___DisposeAsync_d__77::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x28>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___DisposeAsync_d__77::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x28>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___DisposeAsync_d__77::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___DisposeAsync_d__77>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___DisposeAsync_d__77::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___DisposeAsync_d__77>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99::*)()>(&GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99::MoveNext)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0xdb21d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xdb25b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::IgnoranceConnectionManager", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_cancellationToken_5__2", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99::GlobalNamespace__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, GlobalNamespace::IgnoranceConnectionManager __4__this, System::Threading::CancellationToken _cancellationToken_5__2, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->_cancellationToken_5__2 = _cancellationToken_5__2;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99::__set___4__this(GlobalNamespace::IgnoranceConnectionManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IgnoranceConnectionManager, 0x20>(this->__instance, std::forward<GlobalNamespace::IgnoranceConnectionManager>(value));
}
constexpr GlobalNamespace::IgnoranceConnectionManager GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IgnoranceConnectionManager, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99::__set__cancellationToken_5__2(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x28>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99::__get__cancellationToken_5__2() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x30>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager___BackgroundDisconnectSentry_d__99>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.add_onInitializedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IgnoranceConnectionManager::*)(System::Action)>(&GlobalNamespace::IgnoranceConnectionManager::add_onInitializedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xdafb20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "add_onInitializedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.remove_onInitializedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IgnoranceConnectionManager::*)(System::Action)>(&GlobalNamespace::IgnoranceConnectionManager::remove_onInitializedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xdafbbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "remove_onInitializedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.add_onConnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IgnoranceConnectionManager::*)(System::Action)>(&GlobalNamespace::IgnoranceConnectionManager::add_onConnectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xdafc58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "add_onConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.remove_onConnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IgnoranceConnectionManager::*)(System::Action)>(&GlobalNamespace::IgnoranceConnectionManager::remove_onConnectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xdafcf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "remove_onConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.add_onDisconnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IgnoranceConnectionManager::*)(System::Action_1<GlobalNamespace::DisconnectedReason>)>(&GlobalNamespace::IgnoranceConnectionManager::add_onDisconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdafd90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "add_onDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::DisconnectedReason>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.remove_onDisconnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IgnoranceConnectionManager::*)(System::Action_1<GlobalNamespace::DisconnectedReason>)>(&GlobalNamespace::IgnoranceConnectionManager::remove_onDisconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdafe40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "remove_onDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::DisconnectedReason>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.add_onConnectionFailedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IgnoranceConnectionManager::*)(System::Action_1<GlobalNamespace::ConnectionFailedReason>)>(&GlobalNamespace::IgnoranceConnectionManager::add_onConnectionFailedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdafef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "add_onConnectionFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::ConnectionFailedReason>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.remove_onConnectionFailedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IgnoranceConnectionManager::*)(System::Action_1<GlobalNamespace::ConnectionFailedReason>)>(&GlobalNamespace::IgnoranceConnectionManager::remove_onConnectionFailedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdaffa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "remove_onConnectionFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::ConnectionFailedReason>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.add_onConnectionConnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IgnoranceConnectionManager::*)(System::Action_1<GlobalNamespace::IConnection>)>(&GlobalNamespace::IgnoranceConnectionManager::add_onConnectionConnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdb0050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "add_onConnectionConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnection>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.remove_onConnectionConnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IgnoranceConnectionManager::*)(System::Action_1<GlobalNamespace::IConnection>)>(&GlobalNamespace::IgnoranceConnectionManager::remove_onConnectionConnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdb0100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "remove_onConnectionConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnection>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.add_onConnectionDisconnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IgnoranceConnectionManager::*)(System::Action_2<GlobalNamespace::IConnection,GlobalNamespace::DisconnectedReason>)>(&GlobalNamespace::IgnoranceConnectionManager::add_onConnectionDisconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdb01b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "add_onConnectionDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::IConnection,GlobalNamespace::DisconnectedReason>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.remove_onConnectionDisconnectedEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IgnoranceConnectionManager::*)(System::Action_2<GlobalNamespace::IConnection,GlobalNamespace::DisconnectedReason>)>(&GlobalNamespace::IgnoranceConnectionManager::remove_onConnectionDisconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdb0260;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "remove_onConnectionDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::IConnection,GlobalNamespace::DisconnectedReason>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.add_onReceivedDataEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IgnoranceConnectionManager::*)(System::Action_3<GlobalNamespace::IConnection,LiteNetLib::Utils::NetDataReader,BGNet::Core::DeliveryMethod>)>(&GlobalNamespace::IgnoranceConnectionManager::add_onReceivedDataEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdb0310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "add_onReceivedDataEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_3<GlobalNamespace::IConnection,LiteNetLib::Utils::NetDataReader,BGNet::Core::DeliveryMethod>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.remove_onReceivedDataEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IgnoranceConnectionManager::*)(System::Action_3<GlobalNamespace::IConnection,LiteNetLib::Utils::NetDataReader,BGNet::Core::DeliveryMethod>)>(&GlobalNamespace::IgnoranceConnectionManager::remove_onReceivedDataEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdb03c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "remove_onReceivedDataEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_3<GlobalNamespace::IConnection,LiteNetLib::Utils::NetDataReader,BGNet::Core::DeliveryMethod>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.get_userId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::IgnoranceConnectionManager::*)()>(&GlobalNamespace::IgnoranceConnectionManager::get_userId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdb0470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "get_userId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.set_userId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IgnoranceConnectionManager::*)(::StringW)>(&GlobalNamespace::IgnoranceConnectionManager::set_userId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdb0478;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "set_userId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.get_userName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::IgnoranceConnectionManager::*)()>(&GlobalNamespace::IgnoranceConnectionManager::get_userName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdb0480;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "get_userName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.set_userName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IgnoranceConnectionManager::*)(::StringW)>(&GlobalNamespace::IgnoranceConnectionManager::set_userName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdb0488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "set_userName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.get_isConnected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::IgnoranceConnectionManager::*)()>(&GlobalNamespace::IgnoranceConnectionManager::get_isConnected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xdb0490;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "get_isConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.get_isConnecting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::IgnoranceConnectionManager::*)()>(&GlobalNamespace::IgnoranceConnectionManager::get_isConnecting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xdb04a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "get_isConnecting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.get_isDisconnecting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::IgnoranceConnectionManager::*)()>(&GlobalNamespace::IgnoranceConnectionManager::get_isDisconnecting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xdb04b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "get_isDisconnecting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.get_connectionCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::IgnoranceConnectionManager::*)()>(&GlobalNamespace::IgnoranceConnectionManager::get_connectionCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xdb04c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "get_connectionCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.get_isConnectionOwner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::IgnoranceConnectionManager::*)()>(&GlobalNamespace::IgnoranceConnectionManager::get_isConnectionOwner)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xdb0508;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "get_isConnectionOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.get_isDisposed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::IgnoranceConnectionManager::*)()>(&GlobalNamespace::IgnoranceConnectionManager::get_isDisposed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xdb0518;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "get_isDisposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.get_serverUserId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::IgnoranceConnectionManager::*)()>(&GlobalNamespace::IgnoranceConnectionManager::get_serverUserId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdb0528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "get_serverUserId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.set_serverUserId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IgnoranceConnectionManager::*)(::StringW)>(&GlobalNamespace::IgnoranceConnectionManager::set_serverUserId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdb0530;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "set_serverUserId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.get_serverUserName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::IgnoranceConnectionManager::*)()>(&GlobalNamespace::IgnoranceConnectionManager::get_serverUserName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdb0538;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "get_serverUserName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.set_serverUserName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IgnoranceConnectionManager::*)(::StringW)>(&GlobalNamespace::IgnoranceConnectionManager::set_serverUserName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdb0540;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "set_serverUserName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IgnoranceConnectionManager::*)()>(&GlobalNamespace::IgnoranceConnectionManager::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xdaade0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IgnoranceConnectionManager::*)(BGNet::Core::ITimeProvider, BGNet::Core::ITaskUtility)>(&GlobalNamespace::IgnoranceConnectionManager::_ctor)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xdb0548;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::ITimeProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::ITaskUtility>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.PollUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IgnoranceConnectionManager::*)()>(&GlobalNamespace::IgnoranceConnectionManager::PollUpdate)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xdb06f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "PollUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.DisposeAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (GlobalNamespace::IgnoranceConnectionManager::*)()>(&GlobalNamespace::IgnoranceConnectionManager::DisposeAsync)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xdb0e20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "DisposeAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IgnoranceConnectionManager::*)()>(&GlobalNamespace::IgnoranceConnectionManager::Dispose)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xdb0ee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.HandleConnectionEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IgnoranceConnectionManager::*)()>(&GlobalNamespace::IgnoranceConnectionManager::HandleConnectionEvents)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0xdb080c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "HandleConnectionEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.HandleIncomingEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IgnoranceConnectionManager::*)()>(&GlobalNamespace::IgnoranceConnectionManager::HandleIncomingEvents)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0xdb0a84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "HandleIncomingEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.HandleDisconnectionEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IgnoranceConnectionManager::*)()>(&GlobalNamespace::IgnoranceConnectionManager::HandleDisconnectionEvents)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xdb0d5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "HandleDisconnectionEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.GetConnectionMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<LiteNetLib::Utils::NetDataWriter (GlobalNamespace::IgnoranceConnectionManager::*)()>(&GlobalNamespace::IgnoranceConnectionManager::GetConnectionMessage)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xdb1238;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "GetConnectionMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.TryParseConnectionMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::IgnoranceConnectionManager::*)(LiteNetLib::Utils::NetDataReader, ByRef<::StringW>, ByRef<::StringW>, ByRef<bool>)>(&GlobalNamespace::IgnoranceConnectionManager::TryParseConnectionMessage)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xdb1488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "TryParseConnectionMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.Send
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IgnoranceConnectionManager::*)(uint32_t, LiteNetLib::Utils::NetDataWriter, BGNet::Core::DeliveryMethod)>(&GlobalNamespace::IgnoranceConnectionManager::Send)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xdb1348;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "Send",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::DeliveryMethod>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.DisconnectPeer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IgnoranceConnectionManager::*)(uint32_t, GlobalNamespace::DisconnectedReason)>(&GlobalNamespace::IgnoranceConnectionManager::DisconnectPeer)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xdb15bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "DisconnectPeer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.TryGetConnection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::IgnoranceConnectionManager::*)(uint32_t, ByRef<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection>)>(&GlobalNamespace::IgnoranceConnectionManager::TryGetConnection)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xdb16ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "TryGetConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.SendToAll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IgnoranceConnectionManager::*)(LiteNetLib::Utils::NetDataWriter, BGNet::Core::DeliveryMethod)>(&GlobalNamespace::IgnoranceConnectionManager::SendToAll)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xdb17a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "SendToAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::DeliveryMethod>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.SendToAll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IgnoranceConnectionManager::*)(LiteNetLib::Utils::NetDataWriter, BGNet::Core::DeliveryMethod, GlobalNamespace::IConnection)>(&GlobalNamespace::IgnoranceConnectionManager::SendToAll)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xdb185c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "SendToAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::DeliveryMethod>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnection>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.Disconnect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IgnoranceConnectionManager::*)(GlobalNamespace::DisconnectedReason)>(&GlobalNamespace::IgnoranceConnectionManager::Disconnect)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xdb0f1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "Disconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.GetConnection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IConnection (GlobalNamespace::IgnoranceConnectionManager::*)(int32_t)>(&GlobalNamespace::IgnoranceConnectionManager::GetConnection)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xdb193c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "GetConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.ToDeliveryMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<BGNet::Core::DeliveryMethod (*)(uint8_t)>(&GlobalNamespace::IgnoranceConnectionManager::ToDeliveryMethod)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xdb1788;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "ToDeliveryMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.ToChannel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(BGNet::Core::DeliveryMethod)>(&GlobalNamespace::IgnoranceConnectionManager::ToChannel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xdb1794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "ToChannel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::DeliveryMethod>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.WaitForClientShutdown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(IgnoranceCore::IgnoranceClient)>(&GlobalNamespace::IgnoranceConnectionManager::WaitForClientShutdown)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xdb10d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "WaitForClientShutdown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<IgnoranceCore::IgnoranceClient>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.WaitForServerShutdown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(IgnoranceCore::IgnoranceServer)>(&GlobalNamespace::IgnoranceConnectionManager::WaitForServerShutdown)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xdb1184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "WaitForServerShutdown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<IgnoranceCore::IgnoranceServer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.Log
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&GlobalNamespace::IgnoranceConnectionManager::Log)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xdb1a20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.LogError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&GlobalNamespace::IgnoranceConnectionManager::LogError)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xdb1994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "LogError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.StartBackgroundSentry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IgnoranceConnectionManager::*)()>(&GlobalNamespace::IgnoranceConnectionManager::StartBackgroundSentry)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xdb1aac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "StartBackgroundSentry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.CheckSentryState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IgnoranceConnectionManager::*)()>(&GlobalNamespace::IgnoranceConnectionManager::CheckSentryState)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xdb07e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "CheckSentryState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IgnoranceConnectionManager.BackgroundDisconnectSentry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (GlobalNamespace::IgnoranceConnectionManager::*)()>(&GlobalNamespace::IgnoranceConnectionManager::BackgroundDisconnectSentry)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xdb1c60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "BackgroundDisconnectSentry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IConnectionManager
constexpr  GlobalNamespace::IgnoranceConnectionManager::operator GlobalNamespace::IConnectionManager() const noexcept {
return GlobalNamespace::IConnectionManager(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IPollable
constexpr  GlobalNamespace::IgnoranceConnectionManager::operator GlobalNamespace::IPollable() const noexcept {
return GlobalNamespace::IPollable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::IgnoranceConnectionManager::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set_onInitializedEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::IgnoranceConnectionManager::__get_onInitializedEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set_onConnectedEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::IgnoranceConnectionManager::__get_onConnectedEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set_onDisconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::DisconnectedReason>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::DisconnectedReason>>(value));
}
constexpr System::Action_1<GlobalNamespace::DisconnectedReason> GlobalNamespace::IgnoranceConnectionManager::__get_onDisconnectedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::DisconnectedReason>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set_onConnectionFailedEvent(System::Action_1<GlobalNamespace::ConnectionFailedReason> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::ConnectionFailedReason>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::ConnectionFailedReason>>(value));
}
constexpr System::Action_1<GlobalNamespace::ConnectionFailedReason> GlobalNamespace::IgnoranceConnectionManager::__get_onConnectionFailedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::ConnectionFailedReason>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set_onConnectionConnectedEvent(System::Action_1<GlobalNamespace::IConnection> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::IConnection>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::IConnection>>(value));
}
constexpr System::Action_1<GlobalNamespace::IConnection> GlobalNamespace::IgnoranceConnectionManager::__get_onConnectionConnectedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::IConnection>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set_onConnectionDisconnectedEvent(System::Action_2<GlobalNamespace::IConnection,GlobalNamespace::DisconnectedReason> value)  {
::cordl_internals::setInstanceField<System::Action_2<GlobalNamespace::IConnection,GlobalNamespace::DisconnectedReason>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<GlobalNamespace::IConnection,GlobalNamespace::DisconnectedReason>>(value));
}
constexpr System::Action_2<GlobalNamespace::IConnection,GlobalNamespace::DisconnectedReason> GlobalNamespace::IgnoranceConnectionManager::__get_onConnectionDisconnectedEvent() const {
return ::cordl_internals::getInstanceField<System::Action_2<GlobalNamespace::IConnection,GlobalNamespace::DisconnectedReason>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set_onReceivedDataEvent(System::Action_3<GlobalNamespace::IConnection,LiteNetLib::Utils::NetDataReader,BGNet::Core::DeliveryMethod> value)  {
::cordl_internals::setInstanceField<System::Action_3<GlobalNamespace::IConnection,LiteNetLib::Utils::NetDataReader,BGNet::Core::DeliveryMethod>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_3<GlobalNamespace::IConnection,LiteNetLib::Utils::NetDataReader,BGNet::Core::DeliveryMethod>>(value));
}
constexpr System::Action_3<GlobalNamespace::IConnection,LiteNetLib::Utils::NetDataReader,BGNet::Core::DeliveryMethod> GlobalNamespace::IgnoranceConnectionManager::__get_onReceivedDataEvent() const {
return ::cordl_internals::getInstanceField<System::Action_3<GlobalNamespace::IConnection,LiteNetLib::Utils::NetDataReader,BGNet::Core::DeliveryMethod>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set__userId_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::IgnoranceConnectionManager::__get__userId_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set__userName_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::IgnoranceConnectionManager::__get__userName_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set__channels(::ArrayW<IgnoranceCore::IgnoranceChannelTypes> value)  {
::cordl_internals::setInstanceField<::ArrayW<IgnoranceCore::IgnoranceChannelTypes>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<IgnoranceCore::IgnoranceChannelTypes>>(value));
}
constexpr ::ArrayW<IgnoranceCore::IgnoranceChannelTypes> GlobalNamespace::IgnoranceConnectionManager::__get__channels() const {
return ::cordl_internals::getInstanceField<::ArrayW<IgnoranceCore::IgnoranceChannelTypes>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set__state(GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectionState value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectionState, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectionState>(value));
}
constexpr GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectionState GlobalNamespace::IgnoranceConnectionManager::__get__state() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__ConnectionState, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set__client(IgnoranceCore::IgnoranceClient value)  {
::cordl_internals::setInstanceField<IgnoranceCore::IgnoranceClient, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<IgnoranceCore::IgnoranceClient>(value));
}
constexpr IgnoranceCore::IgnoranceClient GlobalNamespace::IgnoranceConnectionManager::__get__client() const {
return ::cordl_internals::getInstanceField<IgnoranceCore::IgnoranceClient, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set__server(IgnoranceCore::IgnoranceServer value)  {
::cordl_internals::setInstanceField<IgnoranceCore::IgnoranceServer, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<IgnoranceCore::IgnoranceServer>(value));
}
constexpr IgnoranceCore::IgnoranceServer GlobalNamespace::IgnoranceConnectionManager::__get__server() const {
return ::cordl_internals::getInstanceField<IgnoranceCore::IgnoranceServer, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set__connectionRequestHandler(GlobalNamespace::IConnectionRequestHandler value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IConnectionRequestHandler, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IConnectionRequestHandler>(value));
}
constexpr GlobalNamespace::IConnectionRequestHandler GlobalNamespace::IgnoranceConnectionManager::__get__connectionRequestHandler() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IConnectionRequestHandler, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set__pendingConnections(System::Collections::Generic::List_1<uint32_t> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<uint32_t>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<uint32_t>>(value));
}
constexpr System::Collections::Generic::List_1<uint32_t> GlobalNamespace::IgnoranceConnectionManager::__get__pendingConnections() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<uint32_t>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set__connections(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection>>(value));
}
constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection> GlobalNamespace::IgnoranceConnectionManager::__get__connections() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set__incomingDataWriter(LiteNetLib::Utils::NetDataWriter value)  {
::cordl_internals::setInstanceField<LiteNetLib::Utils::NetDataWriter, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::Utils::NetDataWriter>(value));
}
constexpr LiteNetLib::Utils::NetDataWriter GlobalNamespace::IgnoranceConnectionManager::__get__incomingDataWriter() const {
return ::cordl_internals::getInstanceField<LiteNetLib::Utils::NetDataWriter, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set__incomingDataReader(LiteNetLib::Utils::NetDataReader value)  {
::cordl_internals::setInstanceField<LiteNetLib::Utils::NetDataReader, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::Utils::NetDataReader>(value));
}
constexpr LiteNetLib::Utils::NetDataReader GlobalNamespace::IgnoranceConnectionManager::__get__incomingDataReader() const {
return ::cordl_internals::getInstanceField<LiteNetLib::Utils::NetDataReader, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set__connectionRequestWriter(LiteNetLib::Utils::NetDataWriter value)  {
::cordl_internals::setInstanceField<LiteNetLib::Utils::NetDataWriter, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::Utils::NetDataWriter>(value));
}
constexpr LiteNetLib::Utils::NetDataWriter GlobalNamespace::IgnoranceConnectionManager::__get__connectionRequestWriter() const {
return ::cordl_internals::getInstanceField<LiteNetLib::Utils::NetDataWriter, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set__backgroundSentryDisconnectCts(System::Threading::CancellationTokenSource value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationTokenSource, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::CancellationTokenSource>(value));
}
constexpr System::Threading::CancellationTokenSource GlobalNamespace::IgnoranceConnectionManager::__get__backgroundSentryDisconnectCts() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationTokenSource, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set__sentryDisconnected(bool value)  {
::cordl_internals::setInstanceField<bool, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::IgnoranceConnectionManager::__get__sentryDisconnected() const {
return ::cordl_internals::getInstanceField<bool, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set__lastPollUpdateTime(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t GlobalNamespace::IgnoranceConnectionManager::__get__lastPollUpdateTime() const {
return ::cordl_internals::getInstanceField<int64_t, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set__timeProvider(BGNet::Core::ITimeProvider value)  {
::cordl_internals::setInstanceField<BGNet::Core::ITimeProvider, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<BGNet::Core::ITimeProvider>(value));
}
constexpr BGNet::Core::ITimeProvider GlobalNamespace::IgnoranceConnectionManager::__get__timeProvider() const {
return ::cordl_internals::getInstanceField<BGNet::Core::ITimeProvider, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set__taskUtility(BGNet::Core::ITaskUtility value)  {
::cordl_internals::setInstanceField<BGNet::Core::ITaskUtility, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<BGNet::Core::ITaskUtility>(value));
}
constexpr BGNet::Core::ITaskUtility GlobalNamespace::IgnoranceConnectionManager::__get__taskUtility() const {
return ::cordl_internals::getInstanceField<BGNet::Core::ITaskUtility, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set__serverUserId_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::IgnoranceConnectionManager::__get__serverUserId_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::IgnoranceConnectionManager::__set__serverUserName_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::IgnoranceConnectionManager::__get__serverUserName_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::IgnoranceConnectionManager::add_onInitializedEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "add_onInitializedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::IgnoranceConnectionManager::remove_onInitializedEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "remove_onInitializedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::IgnoranceConnectionManager::add_onConnectedEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "add_onConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::IgnoranceConnectionManager::remove_onConnectedEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "remove_onConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::IgnoranceConnectionManager::add_onDisconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "add_onDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::DisconnectedReason>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::IgnoranceConnectionManager::remove_onDisconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "remove_onDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::DisconnectedReason>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::IgnoranceConnectionManager::add_onConnectionFailedEvent(System::Action_1<GlobalNamespace::ConnectionFailedReason> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "add_onConnectionFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::ConnectionFailedReason>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::IgnoranceConnectionManager::remove_onConnectionFailedEvent(System::Action_1<GlobalNamespace::ConnectionFailedReason> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "remove_onConnectionFailedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::ConnectionFailedReason>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::IgnoranceConnectionManager::add_onConnectionConnectedEvent(System::Action_1<GlobalNamespace::IConnection> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "add_onConnectionConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnection>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::IgnoranceConnectionManager::remove_onConnectionConnectedEvent(System::Action_1<GlobalNamespace::IConnection> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "remove_onConnectionConnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<GlobalNamespace::IConnection>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::IgnoranceConnectionManager::add_onConnectionDisconnectedEvent(System::Action_2<GlobalNamespace::IConnection,GlobalNamespace::DisconnectedReason> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "add_onConnectionDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::IConnection,GlobalNamespace::DisconnectedReason>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::IgnoranceConnectionManager::remove_onConnectionDisconnectedEvent(System::Action_2<GlobalNamespace::IConnection,GlobalNamespace::DisconnectedReason> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "remove_onConnectionDisconnectedEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<GlobalNamespace::IConnection,GlobalNamespace::DisconnectedReason>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::IgnoranceConnectionManager::add_onReceivedDataEvent(System::Action_3<GlobalNamespace::IConnection,LiteNetLib::Utils::NetDataReader,BGNet::Core::DeliveryMethod> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "add_onReceivedDataEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_3<GlobalNamespace::IConnection,LiteNetLib::Utils::NetDataReader,BGNet::Core::DeliveryMethod>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::IgnoranceConnectionManager::remove_onReceivedDataEvent(System::Action_3<GlobalNamespace::IConnection,LiteNetLib::Utils::NetDataReader,BGNet::Core::DeliveryMethod> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "remove_onReceivedDataEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_3<GlobalNamespace::IConnection,LiteNetLib::Utils::NetDataReader,BGNet::Core::DeliveryMethod>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW GlobalNamespace::IgnoranceConnectionManager::get_userId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "get_userId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::IgnoranceConnectionManager::set_userId(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "set_userId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW GlobalNamespace::IgnoranceConnectionManager::get_userName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "get_userName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::IgnoranceConnectionManager::set_userName(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "set_userName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool GlobalNamespace::IgnoranceConnectionManager::get_isConnected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "get_isConnected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::IgnoranceConnectionManager::get_isConnecting()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "get_isConnecting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::IgnoranceConnectionManager::get_isDisconnecting()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "get_isDisconnecting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t GlobalNamespace::IgnoranceConnectionManager::get_connectionCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "get_connectionCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::IgnoranceConnectionManager::get_isConnectionOwner()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "get_isConnectionOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::IgnoranceConnectionManager::get_isDisposed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "get_isDisposed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GlobalNamespace::IgnoranceConnectionManager::get_serverUserId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "get_serverUserId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::IgnoranceConnectionManager::set_serverUserId(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "set_serverUserId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW GlobalNamespace::IgnoranceConnectionManager::get_serverUserName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "get_serverUserName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::IgnoranceConnectionManager::set_serverUserName(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "set_serverUserName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters []
 GlobalNamespace::IgnoranceConnectionManager::IgnoranceConnectionManager()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<IgnoranceConnectionManager>())) {}
 void GlobalNamespace::IgnoranceConnectionManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "timeProvider", ty: "BGNet::Core::ITimeProvider", modifiers: "", def_value: None }, CppParam { name: "taskUtility", ty: "BGNet::Core::ITaskUtility", modifiers: "", def_value: None }]
 GlobalNamespace::IgnoranceConnectionManager::IgnoranceConnectionManager(BGNet::Core::ITimeProvider timeProvider, BGNet::Core::ITaskUtility taskUtility)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<IgnoranceConnectionManager>(timeProvider, taskUtility))) {}
 void GlobalNamespace::IgnoranceConnectionManager::_ctor(BGNet::Core::ITimeProvider timeProvider, BGNet::Core::ITaskUtility taskUtility)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::ITimeProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::ITaskUtility>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, timeProvider, taskUtility);
}
template<typename T>
 bool GlobalNamespace::IgnoranceConnectionManager::Init(GlobalNamespace::IConnectionInitParams_1<T> initParams)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                        "Init",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnectionInitParams_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, initParams);
}
 void GlobalNamespace::IgnoranceConnectionManager::PollUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "PollUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task GlobalNamespace::IgnoranceConnectionManager::DisposeAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "DisposeAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::IgnoranceConnectionManager::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::IgnoranceConnectionManager::HandleConnectionEvents()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "HandleConnectionEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::IgnoranceConnectionManager::HandleIncomingEvents()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "HandleIncomingEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::IgnoranceConnectionManager::HandleDisconnectionEvents()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "HandleDisconnectionEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 LiteNetLib::Utils::NetDataWriter GlobalNamespace::IgnoranceConnectionManager::GetConnectionMessage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "GetConnectionMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<LiteNetLib::Utils::NetDataWriter, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::IgnoranceConnectionManager::TryParseConnectionMessage(LiteNetLib::Utils::NetDataReader reader, ByRef<::StringW> userId, ByRef<::StringW> userName, ByRef<bool> isConnectionOwner)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "TryParseConnectionMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, reader, userId, userName, isConnectionOwner);
}
 void GlobalNamespace::IgnoranceConnectionManager::Send(uint32_t peerId, LiteNetLib::Utils::NetDataWriter writer, BGNet::Core::DeliveryMethod deliveryMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "Send",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::DeliveryMethod>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, peerId, writer, deliveryMethod);
}
/// @param disconnectedReason: GlobalNamespace::DisconnectedReason (default: 2)
 void GlobalNamespace::IgnoranceConnectionManager::DisconnectPeer(uint32_t peerId, GlobalNamespace::DisconnectedReason disconnectedReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "DisconnectPeer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, peerId, disconnectedReason);
}
 bool GlobalNamespace::IgnoranceConnectionManager::TryGetConnection(uint32_t peerId, ByRef<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection> connection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "TryGetConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::GlobalNamespace__IgnoranceConnectionManager__IgnoranceConnection>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, peerId, connection);
}
 void GlobalNamespace::IgnoranceConnectionManager::SendToAll(LiteNetLib::Utils::NetDataWriter writer, BGNet::Core::DeliveryMethod deliveryMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "SendToAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::DeliveryMethod>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer, deliveryMethod);
}
 void GlobalNamespace::IgnoranceConnectionManager::SendToAll(LiteNetLib::Utils::NetDataWriter writer, BGNet::Core::DeliveryMethod deliveryMethod, GlobalNamespace::IConnection excludingConnection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "SendToAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::DeliveryMethod>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IConnection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer, deliveryMethod, excludingConnection);
}
/// @param disconnectedReason: GlobalNamespace::DisconnectedReason (default: 2)
 void GlobalNamespace::IgnoranceConnectionManager::Disconnect(GlobalNamespace::DisconnectedReason disconnectedReason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "Disconnect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::DisconnectedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disconnectedReason);
}
 GlobalNamespace::IConnection GlobalNamespace::IgnoranceConnectionManager::GetConnection(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "GetConnection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::IConnection, false>(const_cast<void*>(instance), ___internal_method, index);
}
 BGNet::Core::DeliveryMethod GlobalNamespace::IgnoranceConnectionManager::ToDeliveryMethod(uint8_t channel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "ToDeliveryMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<BGNet::Core::DeliveryMethod, false>(nullptr, ___internal_method, channel);
}
 uint8_t GlobalNamespace::IgnoranceConnectionManager::ToChannel(BGNet::Core::DeliveryMethod deliveryMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "ToChannel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::DeliveryMethod>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, deliveryMethod);
}
 void GlobalNamespace::IgnoranceConnectionManager::WaitForClientShutdown(IgnoranceCore::IgnoranceClient client)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "WaitForClientShutdown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<IgnoranceCore::IgnoranceClient>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, client);
}
 void GlobalNamespace::IgnoranceConnectionManager::WaitForServerShutdown(IgnoranceCore::IgnoranceServer server)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "WaitForServerShutdown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<IgnoranceCore::IgnoranceServer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, server);
}
 void GlobalNamespace::IgnoranceConnectionManager::Log(::StringW msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, msg);
}
 void GlobalNamespace::IgnoranceConnectionManager::LogError(::StringW msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "LogError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, msg);
}
 void GlobalNamespace::IgnoranceConnectionManager::StartBackgroundSentry()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "StartBackgroundSentry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::IgnoranceConnectionManager::CheckSentryState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "CheckSentryState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task GlobalNamespace::IgnoranceConnectionManager::BackgroundDisconnectSentry()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IgnoranceConnectionManager>::get(),
                            "BackgroundDisconnectSentry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method);
}
