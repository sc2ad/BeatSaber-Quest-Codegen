#pragma once
#include "BGNet/Core/Messages/zzzz__UnconnectedMessageHandler_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "BGNet/Core/Messages/zzzz__UnconnectedMessageHandler_def.hpp"
#include "GlobalNamespace/zzzz__EncryptionUtility_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__SmallBufferPool_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedMultipartMessage_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedMessage_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedReliableRequest_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/zzzz__Func_5_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedUnreliableMessage_def.hpp"
#include "BGNet/Core/Messages/zzzz__BaseAcknowledgeMessage_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedReliableResponse_def.hpp"
#include "GlobalNamespace/zzzz__PacketEncryptionLayer_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPacketSerializer_1_def.hpp"
#include "BGNet/Core/Messages/zzzz__BaseMultipartMessage_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "GlobalNamespace/zzzz__IUnconnectedMessageSender_def.hpp"
#include "BGNet/Core/zzzz__ITimeProvider_def.hpp"
#include "BGNet/Core/zzzz__IAnalyticsManager_def.hpp"
#include "BGNet/Core/zzzz__ITaskUtility_def.hpp"
#include "GlobalNamespace/zzzz__ExpiringDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedResponse_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
namespace {
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState.get_isEncrypted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::get_isEncrypted)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xde5ba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState>::get(),
                            "get_isEncrypted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState.GetNextRequestId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::GetNextRequestId)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xde5a64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState>::get(),
                            "GetNextRequestId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState.BeginSession
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::BeginSession)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xde59a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState>::get(),
                            "BeginSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState.IsValidSessionStartRequestId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::*)(uint32_t)>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::IsValidSessionStartRequestId)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xde5ad8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState>::get(),
                            "IsValidSessionStartRequestId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState.BeginSession
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::*)(uint32_t)>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::BeginSession)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xde5a2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState>::get(),
                            "BeginSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState.SetEpoch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::*)(uint32_t)>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::SetEpoch)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xde5d94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState>::get(),
                            "SetEpoch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState.CanAcceptRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::*)(uint32_t)>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::CanAcceptRequest)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xde42d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState>::get(),
                            "CanAcceptRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState.SetEncryptionState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::*)(GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState)>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::SetEncryptionState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xde5db8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState>::get(),
                            "SetEncryptionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState.SetIdentity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::*)(uint32_t, ::StringW, ::StringW)>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::SetIdentity)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xde5dc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState>::get(),
                            "SetIdentity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState.VerifyIdentity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::*)(uint32_t, ::StringW, ::StringW)>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::VerifyIdentity)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xde5dd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState>::get(),
                            "VerifyIdentity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xde5e40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState.LogD
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::LogD)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xde5e50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState>::get(),
                            "LogD",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xde5a80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IDisposable
constexpr  BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::__set__userId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::__get__userId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::__set__userName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::__get__userName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::__set__protocolVersion(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::__get__protocolVersion() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::__set__hasIdentity(bool value)  {
::cordl_internals::setInstanceField<bool, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::__get__hasIdentity() const {
return ::cordl_internals::getInstanceField<bool, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::__set__encryptionState(GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>(value));
}
constexpr GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::__get__encryptionState() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::__set__lastReceivedRequestIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::__get__lastReceivedRequestIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::__set__lastReceivedRequestId(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::__get__lastReceivedRequestId() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::__set__receivedRequestCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::__get__receivedRequestCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::__set__receivedRequest(::ArrayW<bool> value)  {
::cordl_internals::setInstanceField<::ArrayW<bool>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<bool>>(value));
}
constexpr ::ArrayW<bool> BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::__get__receivedRequest() const {
return ::cordl_internals::getInstanceField<::ArrayW<bool>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::__set__currentRequestId(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::__get__currentRequestId() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::__set__currentEpoch(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::__get__currentEpoch() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::get_isEncrypted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState>::get(),
                            "get_isEncrypted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 uint32_t BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::GetNextRequestId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState>::get(),
                            "GetNextRequestId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::BeginSession()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState>::get(),
                            "BeginSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::IsValidSessionStartRequestId(uint32_t requestId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState>::get(),
                            "IsValidSessionStartRequestId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, requestId);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::BeginSession(uint32_t requestId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState>::get(),
                            "BeginSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, requestId);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::SetEpoch(uint32_t epoch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState>::get(),
                            "SetEpoch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, epoch);
}
 bool BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::CanAcceptRequest(uint32_t requestId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState>::get(),
                            "CanAcceptRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, requestId);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::SetEncryptionState(GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState encryptionState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState>::get(),
                            "SetEncryptionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, encryptionState);
}
/// @param userName: ::StringW (default: csnull)
 void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::SetIdentity(uint32_t protocolVersion, ::StringW userId, ::StringW userName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState>::get(),
                            "SetIdentity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, protocolVersion, userId, userName);
}
/// @param userName: ::StringW (default: csnull)
 bool BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::VerifyIdentity(uint32_t protocolVersion, ::StringW userId, ::StringW userName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState>::get(),
                            "VerifyIdentity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, protocolVersion, userId, userName);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::LogD(::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState>::get(),
                            "LogD",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
// Ctor Parameters []
 BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState>())) {}
 void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId::*)(System::Net::IPEndPoint, uint32_t)>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xde4688;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId::*)(BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId)>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId::Equals)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xde5edc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId::*)(::bs_hook::Il2CppWrapperType)>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId::Equals)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xde5f1c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId::GetHashCode)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xde5fa4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IEquatable_1<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId>
constexpr  BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId::operator System::IEquatable_1<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId>() const {
return System::IEquatable_1<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId>(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "endPoint", ty: "System::Net::IPEndPoint", modifiers: "", def_value: Some("csnull") }, CppParam { name: "requestId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId(System::Net::IPEndPoint endPoint, uint32_t requestId) noexcept : ::bs_hook::ValueTypeWrapper() {this->endPoint = endPoint;
this->requestId = requestId;
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId::__set_endPoint(System::Net::IPEndPoint value)  {
::cordl_internals::setInstanceField<System::Net::IPEndPoint, 0x0>(this->__instance, std::forward<System::Net::IPEndPoint>(value));
}
constexpr System::Net::IPEndPoint BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId::__get_endPoint() const {
return ::cordl_internals::getInstanceField<System::Net::IPEndPoint, 0x0>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId::__set_requestId(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x8>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId::__get_requestId() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->__instance);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId::_ctor(System::Net::IPEndPoint endPoint, uint32_t requestId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, endPoint, requestId);
}
 bool BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId::Equals(BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 bool BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId::Equals(::bs_hook::Il2CppWrapperType other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 int32_t BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiter.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiter::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiter::Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiter>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiter::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xde5fd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IDisposable
constexpr  BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiter::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiter::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiter>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiter::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiter()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiter>())) {}
 void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter::*)(System::Threading::CancellationToken, System::Threading::CancellationToken)>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter::_ctor)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xde5fd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter::Dispose)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xde612c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter.Complete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter::*)(bool)>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter::Complete)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xde4694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter.Cancel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter::Cancel)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xde626c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter>::get(),
                            "Cancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter.get_task
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter::get_task)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xde62bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter>::get(),
                            "get_task",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter.get_isWaiting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter::get_isWaiting)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xde6208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter>::get(),
                            "get_isWaiting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter::__set__taskCompletionSource(System::Threading::Tasks::TaskCompletionSource_1<bool> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCompletionSource_1<bool>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCompletionSource_1<bool>>(value));
}
constexpr System::Threading::Tasks::TaskCompletionSource_1<bool> BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter::__get__taskCompletionSource() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCompletionSource_1<bool>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter::__set__disposedCancellationTokenRegistration(System::Threading::CancellationTokenRegistration value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationTokenRegistration, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::CancellationTokenRegistration>(value));
}
constexpr System::Threading::CancellationTokenRegistration BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter::__get__disposedCancellationTokenRegistration() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationTokenRegistration, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter::__set__requestCancellationTokenRegistration(System::Threading::CancellationTokenRegistration value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationTokenRegistration, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::CancellationTokenRegistration>(value));
}
constexpr System::Threading::CancellationTokenRegistration BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter::__get__requestCancellationTokenRegistration() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationTokenRegistration, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "disposedCancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "requestCancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }]
 BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter(System::Threading::CancellationToken disposedCancellationToken, System::Threading::CancellationToken requestCancellationToken)  : BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiter(THROW_UNLESS(::il2cpp_utils::New<BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter>(disposedCancellationToken, requestCancellationToken))) {}
 void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter::_ctor(System::Threading::CancellationToken disposedCancellationToken, System::Threading::CancellationToken requestCancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposedCancellationToken, requestCancellationToken);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param handled: bool (default: true)
 void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter::Complete(bool handled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, handled);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter::Cancel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter>::get(),
                            "Cancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter::get_task()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter>::get(),
                            "get_task",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method);
}
 bool BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter::get_isWaiting()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter>::get(),
                            "get_isWaiting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter::*)(System::Threading::CancellationToken, System::Threading::CancellationToken)>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter::_ctor)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xde6304;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter::Dispose)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xde6458;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter.Complete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter::*)(BGNet::Core::Messages::IUnconnectedMessage)>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter::Complete)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xde4768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedMessage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter.Fail
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter::*)(System::Exception)>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter::Fail)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xde6598;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter>::get(),
                            "Fail",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter.Cancel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter::Cancel)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xde65f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter>::get(),
                            "Cancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter.get_task
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<BGNet::Core::Messages::IUnconnectedMessage> (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter::get_task)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xde6640;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter>::get(),
                            "get_task",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter.get_isWaiting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter::get_isWaiting)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xde6534;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter>::get(),
                            "get_isWaiting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter::__set__taskCompletionSource(System::Threading::Tasks::TaskCompletionSource_1<BGNet::Core::Messages::IUnconnectedMessage> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCompletionSource_1<BGNet::Core::Messages::IUnconnectedMessage>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCompletionSource_1<BGNet::Core::Messages::IUnconnectedMessage>>(value));
}
constexpr System::Threading::Tasks::TaskCompletionSource_1<BGNet::Core::Messages::IUnconnectedMessage> BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter::__get__taskCompletionSource() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCompletionSource_1<BGNet::Core::Messages::IUnconnectedMessage>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter::__set__disposedCancellationTokenRegistration(System::Threading::CancellationTokenRegistration value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationTokenRegistration, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::CancellationTokenRegistration>(value));
}
constexpr System::Threading::CancellationTokenRegistration BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter::__get__disposedCancellationTokenRegistration() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationTokenRegistration, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter::__set__requestCancellationTokenRegistration(System::Threading::CancellationTokenRegistration value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationTokenRegistration, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::CancellationTokenRegistration>(value));
}
constexpr System::Threading::CancellationTokenRegistration BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter::__get__requestCancellationTokenRegistration() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationTokenRegistration, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "disposedCancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "requestCancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }]
 BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter(System::Threading::CancellationToken disposedCancellationToken, System::Threading::CancellationToken requestCancellationToken)  : BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiter(THROW_UNLESS(::il2cpp_utils::New<BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter>(disposedCancellationToken, requestCancellationToken))) {}
 void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter::_ctor(System::Threading::CancellationToken disposedCancellationToken, System::Threading::CancellationToken requestCancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposedCancellationToken, requestCancellationToken);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter::Complete(BGNet::Core::Messages::IUnconnectedMessage response)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, response);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter::Fail(System::Exception ex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter>::get(),
                            "Fail",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ex);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter::Cancel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter>::get(),
                            "Cancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task_1<BGNet::Core::Messages::IUnconnectedMessage> BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter::get_task()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter>::get(),
                            "get_task",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<BGNet::Core::Messages::IUnconnectedMessage>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter::get_isWaiting()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter>::get(),
                            "get_isWaiting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter::*)(GlobalNamespace::SmallBufferPool)>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xde6688;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SmallBufferPool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter::Dispose)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xde6718;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter.Append
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter::*)(BGNet::Core::Messages::IUnconnectedMultipartMessage)>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter::Append)> {
  constexpr static std::size_t size = 0x6a0;
  constexpr static std::size_t addrs = 0xde6750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter>::get(),
                            "Append",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedMultipartMessage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter.get_isWaiting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter::get_isWaiting)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xde6df0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter>::get(),
                            "get_isWaiting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter.get_data
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter::get_data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xde6e10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter>::get(),
                            "get_data",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter.get_length
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter::get_length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xde6e18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter>::get(),
                            "get_length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter::__set__bufferPool(GlobalNamespace::SmallBufferPool value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SmallBufferPool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SmallBufferPool>(value));
}
constexpr GlobalNamespace::SmallBufferPool BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter::__get__bufferPool() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SmallBufferPool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter::__set__buffer(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter::__get__buffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter::__set__length(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter::__get__length() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter::__set__ranges(System::Collections::Generic::List_1<System::ValueTuple_2<int32_t,int32_t>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<System::ValueTuple_2<int32_t,int32_t>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<System::ValueTuple_2<int32_t,int32_t>>>(value));
}
constexpr System::Collections::Generic::List_1<System::ValueTuple_2<int32_t,int32_t>> BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter::__get__ranges() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<System::ValueTuple_2<int32_t,int32_t>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter::__set__isComplete(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter::__get__isComplete() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter::__set__isDisposed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x31>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter::__get__isDisposed() const {
return ::cordl_internals::getInstanceField<bool, 0x31>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "bufferPool", ty: "GlobalNamespace::SmallBufferPool", modifiers: "", def_value: None }]
 BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter(GlobalNamespace::SmallBufferPool bufferPool)  : BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiter(THROW_UNLESS(::il2cpp_utils::New<BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter>(bufferPool))) {}
 void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter::_ctor(GlobalNamespace::SmallBufferPool bufferPool)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SmallBufferPool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bufferPool);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter::Append(BGNet::Core::Messages::IUnconnectedMultipartMessage packet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter>::get(),
                            "Append",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedMultipartMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, packet);
}
 bool BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter::get_isWaiting()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter>::get(),
                            "get_isWaiting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter::get_data()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter>::get(),
                            "get_data",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter::get_length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter>::get(),
                            "get_length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin::*)(System::Net::IPEndPoint, uint32_t)>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xde5938;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "endPoint", ty: "System::Net::IPEndPoint", modifiers: "", def_value: Some("csnull") }, CppParam { name: "protocolVersion", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin(System::Net::IPEndPoint endPoint, uint32_t protocolVersion) noexcept : ::bs_hook::ValueTypeWrapper() {this->endPoint = endPoint;
this->protocolVersion = protocolVersion;
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin::__set_endPoint(System::Net::IPEndPoint value)  {
::cordl_internals::setInstanceField<System::Net::IPEndPoint, 0x0>(this->__instance, std::forward<System::Net::IPEndPoint>(value));
}
constexpr System::Net::IPEndPoint BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin::__get_endPoint() const {
return ::cordl_internals::getInstanceField<System::Net::IPEndPoint, 0x0>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin::__set_protocolVersion(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x8>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin::__get_protocolVersion() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->__instance);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin::_ctor(System::Net::IPEndPoint endPoint, uint32_t protocolVersion)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, endPoint, protocolVersion);
}
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetry_d__72.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetry_d__72::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetry_d__72::MoveNext)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0xde6e20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetry_d__72>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetry_d__72.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetry_d__72::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetry_d__72::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xde70c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetry_d__72>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetry_d__72::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::UnconnectedMessageHandler", modifiers: "", def_value: Some("csnull") }, CppParam { name: "protocolVersion", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "remoteEndPoint", ty: "System::Net::IPEndPoint", modifiers: "", def_value: Some("csnull") }, CppParam { name: "message", ty: "BGNet::Core::Messages::IUnconnectedReliableRequest", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetry_d__72::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetry_d__72(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, BGNet::Core::Messages::UnconnectedMessageHandler __4__this, uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest message, System::Threading::CancellationToken cancellationToken, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->protocolVersion = protocolVersion;
this->remoteEndPoint = remoteEndPoint;
this->message = message;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetry_d__72::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetry_d__72::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetry_d__72::__set___t__builder(System::Runtime::CompilerServices::AsyncVoidMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncVoidMethodBuilder BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetry_d__72::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetry_d__72::__set___4__this(BGNet::Core::Messages::UnconnectedMessageHandler value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::UnconnectedMessageHandler, 0x28>(this->__instance, std::forward<BGNet::Core::Messages::UnconnectedMessageHandler>(value));
}
constexpr BGNet::Core::Messages::UnconnectedMessageHandler BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetry_d__72::__get___4__this() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::UnconnectedMessageHandler, 0x28>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetry_d__72::__set_protocolVersion(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x30>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetry_d__72::__get_protocolVersion() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x30>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetry_d__72::__set_remoteEndPoint(System::Net::IPEndPoint value)  {
::cordl_internals::setInstanceField<System::Net::IPEndPoint, 0x38>(this->__instance, std::forward<System::Net::IPEndPoint>(value));
}
constexpr System::Net::IPEndPoint BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetry_d__72::__get_remoteEndPoint() const {
return ::cordl_internals::getInstanceField<System::Net::IPEndPoint, 0x38>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetry_d__72::__set_message(BGNet::Core::Messages::IUnconnectedReliableRequest value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::IUnconnectedReliableRequest, 0x40>(this->__instance, std::forward<BGNet::Core::Messages::IUnconnectedReliableRequest>(value));
}
constexpr BGNet::Core::Messages::IUnconnectedReliableRequest BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetry_d__72::__get_message() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::IUnconnectedReliableRequest, 0x40>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetry_d__72::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x48>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetry_d__72::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x48>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetry_d__72::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x50>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetry_d__72::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x50>(this->__instance);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetry_d__72::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetry_d__72>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetry_d__72::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetry_d__72>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xde70d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0._SendMultipartMessageWithRetryAsync_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0::*)(BGNet::Core::Messages::IUnconnectedReliableRequest)>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0::_SendMultipartMessageWithRetryAsync_b__0)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xde70dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0>::get(),
                            "<SendMultipartMessageWithRetryAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableRequest>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0::__set___4__this(BGNet::Core::Messages::UnconnectedMessageHandler value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::UnconnectedMessageHandler, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<BGNet::Core::Messages::UnconnectedMessageHandler>(value));
}
constexpr BGNet::Core::Messages::UnconnectedMessageHandler BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::UnconnectedMessageHandler, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0::__set_protocolVersion(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0::__get_protocolVersion() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0::__set_remoteEndPoint(System::Net::IPEndPoint value)  {
::cordl_internals::setInstanceField<System::Net::IPEndPoint, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::IPEndPoint>(value));
}
constexpr System::Net::IPEndPoint BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0::__get_remoteEndPoint() const {
return ::cordl_internals::getInstanceField<System::Net::IPEndPoint, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0>())) {}
 void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0::_SendMultipartMessageWithRetryAsync_b__0(BGNet::Core::Messages::IUnconnectedReliableRequest mm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0>::get(),
                            "<SendMultipartMessageWithRetryAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableRequest>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, mm);
}
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74::MoveNext)> {
  constexpr static std::size_t size = 0x800;
  constexpr static std::size_t addrs = 0xde71d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xde79d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::UnconnectedMessageHandler", modifiers: "", def_value: Some("csnull") }, CppParam { name: "protocolVersion", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "remoteEndPoint", ty: "System::Net::IPEndPoint", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "message", ty: "BGNet::Core::Messages::IUnconnectedReliableRequest", modifiers: "", def_value: Some("csnull") }, CppParam { name: "data", ty: "LiteNetLib::Utils::NetDataWriter", modifiers: "", def_value: Some("csnull") }, CppParam { name: "onSendFailed", ty: "System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__8__1", ty: "BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_shouldReleaseMessage_5__2", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap2", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__7__wrap3", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74::BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, BGNet::Core::Messages::UnconnectedMessageHandler __4__this, uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, System::Threading::CancellationToken cancellationToken, BGNet::Core::Messages::IUnconnectedReliableRequest message, LiteNetLib::Utils::NetDataWriter data, System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task> onSendFailed, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0 __8__1, bool _shouldReleaseMessage_5__2, ::bs_hook::Il2CppWrapperType __7__wrap2, int32_t __7__wrap3, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->protocolVersion = protocolVersion;
this->remoteEndPoint = remoteEndPoint;
this->cancellationToken = cancellationToken;
this->message = message;
this->data = data;
this->onSendFailed = onSendFailed;
this->__8__1 = __8__1;
this->_shouldReleaseMessage_5__2 = _shouldReleaseMessage_5__2;
this->__7__wrap2 = __7__wrap2;
this->__7__wrap3 = __7__wrap3;
this->__u__1 = __u__1;
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74::__set___4__this(BGNet::Core::Messages::UnconnectedMessageHandler value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::UnconnectedMessageHandler, 0x20>(this->__instance, std::forward<BGNet::Core::Messages::UnconnectedMessageHandler>(value));
}
constexpr BGNet::Core::Messages::UnconnectedMessageHandler BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74::__get___4__this() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::UnconnectedMessageHandler, 0x20>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74::__set_protocolVersion(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x28>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74::__get_protocolVersion() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x28>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74::__set_remoteEndPoint(System::Net::IPEndPoint value)  {
::cordl_internals::setInstanceField<System::Net::IPEndPoint, 0x30>(this->__instance, std::forward<System::Net::IPEndPoint>(value));
}
constexpr System::Net::IPEndPoint BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74::__get_remoteEndPoint() const {
return ::cordl_internals::getInstanceField<System::Net::IPEndPoint, 0x30>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x38>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x38>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74::__set_message(BGNet::Core::Messages::IUnconnectedReliableRequest value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::IUnconnectedReliableRequest, 0x40>(this->__instance, std::forward<BGNet::Core::Messages::IUnconnectedReliableRequest>(value));
}
constexpr BGNet::Core::Messages::IUnconnectedReliableRequest BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74::__get_message() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::IUnconnectedReliableRequest, 0x40>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74::__set_data(LiteNetLib::Utils::NetDataWriter value)  {
::cordl_internals::setInstanceField<LiteNetLib::Utils::NetDataWriter, 0x48>(this->__instance, std::forward<LiteNetLib::Utils::NetDataWriter>(value));
}
constexpr LiteNetLib::Utils::NetDataWriter BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74::__get_data() const {
return ::cordl_internals::getInstanceField<LiteNetLib::Utils::NetDataWriter, 0x48>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74::__set_onSendFailed(System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task> value)  {
::cordl_internals::setInstanceField<System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task>, 0x50>(this->__instance, std::forward<System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task>>(value));
}
constexpr System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task> BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74::__get_onSendFailed() const {
return ::cordl_internals::getInstanceField<System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task>, 0x50>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74::__set___8__1(BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0 value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0, 0x58>(this->__instance, std::forward<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0>(value));
}
constexpr BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0 BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74::__get___8__1() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass74_0, 0x58>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74::__set__shouldReleaseMessage_5__2(bool value)  {
::cordl_internals::setInstanceField<bool, 0x60>(this->__instance, std::forward<bool>(value));
}
constexpr bool BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74::__get__shouldReleaseMessage_5__2() const {
return ::cordl_internals::getInstanceField<bool, 0x60>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74::__set___7__wrap2(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x68>(this->__instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74::__get___7__wrap2() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x68>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74::__set___7__wrap3(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x70>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74::__get___7__wrap3() const {
return ::cordl_internals::getInstanceField<int32_t, 0x70>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x78>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x78>(this->__instance);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMultipartMessageWithRetryAsync_d__74>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::MoveNext)> {
  constexpr static std::size_t size = 0x98c;
  constexpr static std::size_t addrs = 0xde79dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xde8368;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::UnconnectedMessageHandler", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "remoteEndPoint", ty: "System::Net::IPEndPoint", modifiers: "", def_value: Some("csnull") }, CppParam { name: "message", ty: "BGNet::Core::Messages::IUnconnectedReliableRequest", modifiers: "", def_value: Some("csnull") }, CppParam { name: "protocolVersion", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "onSendFailed", ty: "System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_sentRequest_5__2", ty: "BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_waiterId_5__3", ty: "BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId", modifiers: "", def_value: Some("{}") }, CppParam { name: "_shouldReleaseMessage_5__4", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap4", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__7__wrap5", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_i_5__7", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<System::Threading::Tasks::Task>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, BGNet::Core::Messages::UnconnectedMessageHandler __4__this, System::Threading::CancellationToken cancellationToken, System::Net::IPEndPoint remoteEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest message, uint32_t protocolVersion, System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task> onSendFailed, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter _sentRequest_5__2, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId _waiterId_5__3, bool _shouldReleaseMessage_5__4, ::bs_hook::Il2CppWrapperType __7__wrap4, int32_t __7__wrap5, int32_t _i_5__7, System::Runtime::CompilerServices::TaskAwaiter_1<System::Threading::Tasks::Task> __u__1, System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->remoteEndPoint = remoteEndPoint;
this->message = message;
this->protocolVersion = protocolVersion;
this->onSendFailed = onSendFailed;
this->_sentRequest_5__2 = _sentRequest_5__2;
this->_waiterId_5__3 = _waiterId_5__3;
this->_shouldReleaseMessage_5__4 = _shouldReleaseMessage_5__4;
this->__7__wrap4 = __7__wrap4;
this->__7__wrap5 = __7__wrap5;
this->_i_5__7 = _i_5__7;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::__set___4__this(BGNet::Core::Messages::UnconnectedMessageHandler value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::UnconnectedMessageHandler, 0x20>(this->__instance, std::forward<BGNet::Core::Messages::UnconnectedMessageHandler>(value));
}
constexpr BGNet::Core::Messages::UnconnectedMessageHandler BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::__get___4__this() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::UnconnectedMessageHandler, 0x20>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x28>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x28>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::__set_remoteEndPoint(System::Net::IPEndPoint value)  {
::cordl_internals::setInstanceField<System::Net::IPEndPoint, 0x30>(this->__instance, std::forward<System::Net::IPEndPoint>(value));
}
constexpr System::Net::IPEndPoint BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::__get_remoteEndPoint() const {
return ::cordl_internals::getInstanceField<System::Net::IPEndPoint, 0x30>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::__set_message(BGNet::Core::Messages::IUnconnectedReliableRequest value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::IUnconnectedReliableRequest, 0x38>(this->__instance, std::forward<BGNet::Core::Messages::IUnconnectedReliableRequest>(value));
}
constexpr BGNet::Core::Messages::IUnconnectedReliableRequest BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::__get_message() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::IUnconnectedReliableRequest, 0x38>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::__set_protocolVersion(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x40>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::__get_protocolVersion() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x40>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::__set_onSendFailed(System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task> value)  {
::cordl_internals::setInstanceField<System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task>, 0x48>(this->__instance, std::forward<System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task>>(value));
}
constexpr System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task> BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::__get_onSendFailed() const {
return ::cordl_internals::getInstanceField<System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task>, 0x48>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::__set__sentRequest_5__2(BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter, 0x50>(this->__instance, std::forward<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter>(value));
}
constexpr BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::__get__sentRequest_5__2() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter, 0x50>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::__set__waiterId_5__3(BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId, 0x58>(this->__instance, std::forward<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId>(value));
}
constexpr BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::__get__waiterId_5__3() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId, 0x58>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::__set__shouldReleaseMessage_5__4(bool value)  {
::cordl_internals::setInstanceField<bool, 0x68>(this->__instance, std::forward<bool>(value));
}
constexpr bool BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::__get__shouldReleaseMessage_5__4() const {
return ::cordl_internals::getInstanceField<bool, 0x68>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::__set___7__wrap4(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x70>(this->__instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::__get___7__wrap4() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x70>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::__set___7__wrap5(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x78>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::__get___7__wrap5() const {
return ::cordl_internals::getInstanceField<int32_t, 0x78>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::__set__i_5__7(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x7c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::__get__i_5__7() const {
return ::cordl_internals::getInstanceField<int32_t, 0x7c>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<System::Threading::Tasks::Task> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<System::Threading::Tasks::Task>, 0x80>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<System::Threading::Tasks::Task>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<System::Threading::Tasks::Task> BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<System::Threading::Tasks::Task>, 0x80>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::__set___u__2(System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x88>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::__get___u__2() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x88>(this->__instance);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAsyncInternal_d__75>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: BGNet::Core::Messages::UnconnectedMessageHandler.get_encryptionLayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketEncryptionLayer (BGNet::Core::Messages::UnconnectedMessageHandler::*)()>(&BGNet::Core::Messages::UnconnectedMessageHandler::get_encryptionLayer)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xdddc54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "get_encryptionLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::UnconnectedMessageHandler.get_timeProvider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<BGNet::Core::ITimeProvider (BGNet::Core::Messages::UnconnectedMessageHandler::*)()>(&BGNet::Core::Messages::UnconnectedMessageHandler::get_timeProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xde3d8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "get_timeProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::UnconnectedMessageHandler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::UnconnectedMessageHandler::*)(GlobalNamespace::IUnconnectedMessageSender, BGNet::Core::ITimeProvider, BGNet::Core::ITaskUtility, BGNet::Core::IAnalyticsManager)>(&BGNet::Core::Messages::UnconnectedMessageHandler::_ctor)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0xddebbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IUnconnectedMessageSender>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::ITimeProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::ITaskUtility>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::IAnalyticsManager>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::UnconnectedMessageHandler.ShouldHandleMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BGNet::Core::Messages::UnconnectedMessageHandler::*)(BGNet::Core::Messages::IUnconnectedMessage, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin)>(&BGNet::Core::Messages::UnconnectedMessageHandler::ShouldHandleMessage)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xddfd1c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::UnconnectedMessageHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::UnconnectedMessageHandler.GetMessageType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (BGNet::Core::Messages::UnconnectedMessageHandler::*)(BGNet::Core::Messages::IUnconnectedMessage)>(&BGNet::Core::Messages::UnconnectedMessageHandler::GetMessageType)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xddfb90;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::UnconnectedMessageHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::UnconnectedMessageHandler.GetMultipartMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<BGNet::Core::Messages::BaseMultipartMessage (BGNet::Core::Messages::UnconnectedMessageHandler::*)(BGNet::Core::Messages::IUnconnectedMessage)>(&BGNet::Core::Messages::UnconnectedMessageHandler::GetMultipartMessage)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xde3d94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "GetMultipartMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedMessage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::UnconnectedMessageHandler.GetAcknowledgeMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<BGNet::Core::Messages::BaseAcknowledgeMessage (BGNet::Core::Messages::UnconnectedMessageHandler::*)(BGNet::Core::Messages::IUnconnectedMessage)>(&BGNet::Core::Messages::UnconnectedMessageHandler::GetAcknowledgeMessage)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xde3e1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "GetAcknowledgeMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedMessage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::UnconnectedMessageHandler.IsUnhandledMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BGNet::Core::Messages::UnconnectedMessageHandler::*)(BGNet::Core::Messages::IUnconnectedReliableRequest, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin)>(&BGNet::Core::Messages::UnconnectedMessageHandler::IsUnhandledMessage)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0xde3ea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "IsUnhandledMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::UnconnectedMessageHandler.CompleteSend
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::UnconnectedMessageHandler::*)(BGNet::Core::Messages::IUnconnectedResponse, System::Net::IPEndPoint)>(&BGNet::Core::Messages::UnconnectedMessageHandler::CompleteSend)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xde44fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "CompleteSend",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedResponse>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::UnconnectedMessageHandler.CompleteRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BGNet::Core::Messages::UnconnectedMessageHandler::*)(BGNet::Core::Messages::IUnconnectedReliableResponse, System::Net::IPEndPoint)>(&BGNet::Core::Messages::UnconnectedMessageHandler::CompleteRequest)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xde43f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "CompleteRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableResponse>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::UnconnectedMessageHandler.SendUnreliableMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::UnconnectedMessageHandler::*)(uint32_t, System::Net::IPEndPoint, BGNet::Core::Messages::IUnconnectedUnreliableMessage)>(&BGNet::Core::Messages::UnconnectedMessageHandler::SendUnreliableMessage)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xde4840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "SendUnreliableMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedUnreliableMessage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::UnconnectedMessageHandler.SendUnreliableResponse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::UnconnectedMessageHandler::*)(uint32_t, System::Net::IPEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest, BGNet::Core::Messages::IUnconnectedResponse)>(&BGNet::Core::Messages::UnconnectedMessageHandler::SendUnreliableResponse)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xde0374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "SendUnreliableResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedResponse>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::UnconnectedMessageHandler.SendUnreliableResponse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::UnconnectedMessageHandler::*)(uint32_t, System::Net::IPEndPoint, uint32_t, BGNet::Core::Messages::IUnconnectedResponse)>(&BGNet::Core::Messages::UnconnectedMessageHandler::SendUnreliableResponse)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xde41c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "SendUnreliableResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedResponse>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::UnconnectedMessageHandler.SendReliableRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::UnconnectedMessageHandler::*)(uint32_t, System::Net::IPEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest, System::Threading::CancellationToken)>(&BGNet::Core::Messages::UnconnectedMessageHandler::SendReliableRequest)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xde4a38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "SendReliableRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::UnconnectedMessageHandler.SendReliableRequestAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (BGNet::Core::Messages::UnconnectedMessageHandler::*)(uint32_t, System::Net::IPEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest, System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task>, System::Threading::CancellationToken)>(&BGNet::Core::Messages::UnconnectedMessageHandler::SendReliableRequestAsync)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xde4c24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "SendReliableRequestAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::UnconnectedMessageHandler.SendReliableResponse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::UnconnectedMessageHandler::*)(uint32_t, System::Net::IPEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest, BGNet::Core::Messages::IUnconnectedReliableResponse, System::Threading::CancellationToken)>(&BGNet::Core::Messages::UnconnectedMessageHandler::SendReliableResponse)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xde4de4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "SendReliableResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableResponse>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::UnconnectedMessageHandler.SendReliableResponse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::UnconnectedMessageHandler::*)(uint32_t, System::Net::IPEndPoint, uint32_t, BGNet::Core::Messages::IUnconnectedReliableResponse, System::Threading::CancellationToken)>(&BGNet::Core::Messages::UnconnectedMessageHandler::SendReliableResponse)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xde1ef4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "SendReliableResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableResponse>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::UnconnectedMessageHandler.SendReliableResponseAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (BGNet::Core::Messages::UnconnectedMessageHandler::*)(uint32_t, System::Net::IPEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest, BGNet::Core::Messages::IUnconnectedReliableResponse, System::Threading::CancellationToken)>(&BGNet::Core::Messages::UnconnectedMessageHandler::SendReliableResponseAsync)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xde4f30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "SendReliableResponseAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableResponse>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::UnconnectedMessageHandler.SendMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::UnconnectedMessageHandler::*)(uint32_t, System::Net::IPEndPoint, BGNet::Core::Messages::IUnconnectedMessage)>(&BGNet::Core::Messages::UnconnectedMessageHandler::SendMessage)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xde48cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "SendMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedMessage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::UnconnectedMessageHandler.SendMessageWithRetry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::UnconnectedMessageHandler::*)(uint32_t, System::Net::IPEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest, System::Threading::CancellationToken)>(&BGNet::Core::Messages::UnconnectedMessageHandler::SendMessageWithRetry)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xde4b60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "SendMessageWithRetry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::UnconnectedMessageHandler.SendMessageWithRetryAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (BGNet::Core::Messages::UnconnectedMessageHandler::*)(uint32_t, System::Net::IPEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest, System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task>, System::Threading::CancellationToken)>(&BGNet::Core::Messages::UnconnectedMessageHandler::SendMessageWithRetryAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xde4d54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "SendMessageWithRetryAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::UnconnectedMessageHandler.SendMultipartMessageWithRetryAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (BGNet::Core::Messages::UnconnectedMessageHandler::*)(uint32_t, System::Net::IPEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest, LiteNetLib::Utils::NetDataWriter, System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task>, System::Threading::CancellationToken)>(&BGNet::Core::Messages::UnconnectedMessageHandler::SendMultipartMessageWithRetryAsync)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xde526c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "SendMultipartMessageWithRetryAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::UnconnectedMessageHandler.SendMessageWithRetryAsyncInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (BGNet::Core::Messages::UnconnectedMessageHandler::*)(uint32_t, System::Net::IPEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest, System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task>, System::Threading::CancellationToken)>(&BGNet::Core::Messages::UnconnectedMessageHandler::SendMessageWithRetryAsyncInternal)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xde538c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "SendMessageWithRetryAsyncInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::UnconnectedMessageHandler.WaitForRetry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (BGNet::Core::Messages::UnconnectedMessageHandler::*)(int32_t, System::Threading::CancellationToken)>(&BGNet::Core::Messages::UnconnectedMessageHandler::WaitForRetry)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xde549c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "WaitForRetry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::UnconnectedMessageHandler.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<LiteNetLib::Utils::NetDataWriter (BGNet::Core::Messages::UnconnectedMessageHandler::*)(uint32_t, BGNet::Core::Messages::IUnconnectedMessage)>(&BGNet::Core::Messages::UnconnectedMessageHandler::Write)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xde5140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedMessage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::UnconnectedMessageHandler.PollUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::UnconnectedMessageHandler::*)()>(&BGNet::Core::Messages::UnconnectedMessageHandler::PollUpdate)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xddf960;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::UnconnectedMessageHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::UnconnectedMessageHandler.ReceiveUnconnectedMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::UnconnectedMessageHandler::*)(System::Net::IPEndPoint, LiteNetLib::Utils::NetDataReader)>(&BGNet::Core::Messages::UnconnectedMessageHandler::ReceiveUnconnectedMessage)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xde5754;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "ReceiveUnconnectedMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::UnconnectedMessageHandler.ShouldHandleMessageFromEndPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BGNet::Core::Messages::UnconnectedMessageHandler::*)(System::Net::IPEndPoint)>(&BGNet::Core::Messages::UnconnectedMessageHandler::ShouldHandleMessageFromEndPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xde5944;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::UnconnectedMessageHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::UnconnectedMessageHandler.ReceivedMessageException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::UnconnectedMessageHandler::*)(System::Net::IPEndPoint, System::Exception)>(&BGNet::Core::Messages::UnconnectedMessageHandler::ReceivedMessageException)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xde594c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::UnconnectedMessageHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::UnconnectedMessageHandler.BeginSession
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::UnconnectedMessageHandler::*)(System::Net::IPEndPoint)>(&BGNet::Core::Messages::UnconnectedMessageHandler::BeginSession)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xddc248;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "BeginSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::UnconnectedMessageHandler.BeginSession
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::UnconnectedMessageHandler::*)(System::Net::IPEndPoint, uint32_t)>(&BGNet::Core::Messages::UnconnectedMessageHandler::BeginSession)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xde000c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "BeginSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::UnconnectedMessageHandler.GetNextRequestId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (BGNet::Core::Messages::UnconnectedMessageHandler::*)(System::Net::IPEndPoint)>(&BGNet::Core::Messages::UnconnectedMessageHandler::GetNextRequestId)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xdddab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "GetNextRequestId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::UnconnectedMessageHandler.GetConnectionState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState (BGNet::Core::Messages::UnconnectedMessageHandler::*)(System::Net::IPEndPoint)>(&BGNet::Core::Messages::UnconnectedMessageHandler::GetConnectionState)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xdddcf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "GetConnectionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::UnconnectedMessageHandler.IsValidSessionStartRequestId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BGNet::Core::Messages::UnconnectedMessageHandler::*)(System::Net::IPEndPoint, uint32_t)>(&BGNet::Core::Messages::UnconnectedMessageHandler::IsValidSessionStartRequestId)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xde0298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "IsValidSessionStartRequestId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::UnconnectedMessageHandler.IsConnectionStateEncrypted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BGNet::Core::Messages::UnconnectedMessageHandler::*)(System::Net::IPEndPoint)>(&BGNet::Core::Messages::UnconnectedMessageHandler::IsConnectionStateEncrypted)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xde5b14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "IsConnectionStateEncrypted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::UnconnectedMessageHandler.GetSerializer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::INetworkPacketSerializer_1<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin> (BGNet::Core::Messages::UnconnectedMessageHandler::*)(uint32_t, uint32_t, bool)>(&BGNet::Core::Messages::UnconnectedMessageHandler::GetSerializer)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xde5618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "GetSerializer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::UnconnectedMessageHandler.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::UnconnectedMessageHandler::*)()>(&BGNet::Core::Messages::UnconnectedMessageHandler::Dispose)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xde5c4c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::UnconnectedMessageHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::UnconnectedMessageHandler.CreateHandshakeHeader
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&BGNet::Core::Messages::UnconnectedMessageHandler::CreateHandshakeHeader)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xddf884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "CreateHandshakeHeader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IUnconnectedMessageReceiver
constexpr  BGNet::Core::Messages::UnconnectedMessageHandler::operator GlobalNamespace::IUnconnectedMessageReceiver() const noexcept {
return GlobalNamespace::IUnconnectedMessageReceiver(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IPollable
constexpr  BGNet::Core::Messages::UnconnectedMessageHandler::operator GlobalNamespace::IPollable() const noexcept {
return GlobalNamespace::IPollable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  BGNet::Core::Messages::UnconnectedMessageHandler::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::UnconnectedMessageHandler::__set__serializers(System::Collections::Generic::Dictionary_2<uint32_t,GlobalNamespace::INetworkPacketSerializer_1<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<uint32_t,GlobalNamespace::INetworkPacketSerializer_1<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<uint32_t,GlobalNamespace::INetworkPacketSerializer_1<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<uint32_t,GlobalNamespace::INetworkPacketSerializer_1<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>> BGNet::Core::Messages::UnconnectedMessageHandler::__get__serializers() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<uint32_t,GlobalNamespace::INetworkPacketSerializer_1<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::UnconnectedMessageHandler::__set__multipartMessageRegistry(System::Collections::Generic::Dictionary_2<uint32_t,System::Func_1<BGNet::Core::Messages::BaseMultipartMessage>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<uint32_t,System::Func_1<BGNet::Core::Messages::BaseMultipartMessage>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<uint32_t,System::Func_1<BGNet::Core::Messages::BaseMultipartMessage>>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<uint32_t,System::Func_1<BGNet::Core::Messages::BaseMultipartMessage>> BGNet::Core::Messages::UnconnectedMessageHandler::__get__multipartMessageRegistry() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<uint32_t,System::Func_1<BGNet::Core::Messages::BaseMultipartMessage>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::UnconnectedMessageHandler::__set__acknowledgeMessageRegistery(System::Collections::Generic::Dictionary_2<uint32_t,System::Func_1<BGNet::Core::Messages::BaseAcknowledgeMessage>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<uint32_t,System::Func_1<BGNet::Core::Messages::BaseAcknowledgeMessage>>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<uint32_t,System::Func_1<BGNet::Core::Messages::BaseAcknowledgeMessage>>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<uint32_t,System::Func_1<BGNet::Core::Messages::BaseAcknowledgeMessage>> BGNet::Core::Messages::UnconnectedMessageHandler::__get__acknowledgeMessageRegistery() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<uint32_t,System::Func_1<BGNet::Core::Messages::BaseAcknowledgeMessage>>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::UnconnectedMessageHandler::__set__dataWriter(LiteNetLib::Utils::NetDataWriter value)  {
::cordl_internals::setInstanceField<LiteNetLib::Utils::NetDataWriter, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::Utils::NetDataWriter>(value));
}
constexpr LiteNetLib::Utils::NetDataWriter BGNet::Core::Messages::UnconnectedMessageHandler::__get__dataWriter() const {
return ::cordl_internals::getInstanceField<LiteNetLib::Utils::NetDataWriter, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::UnconnectedMessageHandler::__set__multipartReader(LiteNetLib::Utils::NetDataReader value)  {
::cordl_internals::setInstanceField<LiteNetLib::Utils::NetDataReader, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::Utils::NetDataReader>(value));
}
constexpr LiteNetLib::Utils::NetDataReader BGNet::Core::Messages::UnconnectedMessageHandler::__get__multipartReader() const {
return ::cordl_internals::getInstanceField<LiteNetLib::Utils::NetDataReader, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::UnconnectedMessageHandler::__set__sender(GlobalNamespace::IUnconnectedMessageSender value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IUnconnectedMessageSender, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IUnconnectedMessageSender>(value));
}
constexpr GlobalNamespace::IUnconnectedMessageSender BGNet::Core::Messages::UnconnectedMessageHandler::__get__sender() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IUnconnectedMessageSender, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::UnconnectedMessageHandler::__set_analytics(BGNet::Core::IAnalyticsManager value)  {
::cordl_internals::setInstanceField<BGNet::Core::IAnalyticsManager, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<BGNet::Core::IAnalyticsManager>(value));
}
constexpr BGNet::Core::IAnalyticsManager BGNet::Core::Messages::UnconnectedMessageHandler::__get_analytics() const {
return ::cordl_internals::getInstanceField<BGNet::Core::IAnalyticsManager, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::UnconnectedMessageHandler::__set__timeProvider(BGNet::Core::ITimeProvider value)  {
::cordl_internals::setInstanceField<BGNet::Core::ITimeProvider, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<BGNet::Core::ITimeProvider>(value));
}
constexpr BGNet::Core::ITimeProvider BGNet::Core::Messages::UnconnectedMessageHandler::__get__timeProvider() const {
return ::cordl_internals::getInstanceField<BGNet::Core::ITimeProvider, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::UnconnectedMessageHandler::__set__taskUtility(BGNet::Core::ITaskUtility value)  {
::cordl_internals::setInstanceField<BGNet::Core::ITaskUtility, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<BGNet::Core::ITaskUtility>(value));
}
constexpr BGNet::Core::ITaskUtility BGNet::Core::Messages::UnconnectedMessageHandler::__get__taskUtility() const {
return ::cordl_internals::getInstanceField<BGNet::Core::ITaskUtility, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::UnconnectedMessageHandler::__set__sentRequestWaiters(GlobalNamespace::ExpiringDictionary_2<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ExpiringDictionary_2<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ExpiringDictionary_2<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter>>(value));
}
constexpr GlobalNamespace::ExpiringDictionary_2<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter> BGNet::Core::Messages::UnconnectedMessageHandler::__get__sentRequestWaiters() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ExpiringDictionary_2<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__SentRequestWaiter>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::UnconnectedMessageHandler::__set__requestResponseWaiters(GlobalNamespace::ExpiringDictionary_2<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ExpiringDictionary_2<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ExpiringDictionary_2<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter>>(value));
}
constexpr GlobalNamespace::ExpiringDictionary_2<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter> BGNet::Core::Messages::UnconnectedMessageHandler::__get__requestResponseWaiters() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ExpiringDictionary_2<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::UnconnectedMessageHandler::__set__connectionStates(GlobalNamespace::ExpiringDictionary_2<System::Net::IPEndPoint,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ExpiringDictionary_2<System::Net::IPEndPoint,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ExpiringDictionary_2<System::Net::IPEndPoint,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState>>(value));
}
constexpr GlobalNamespace::ExpiringDictionary_2<System::Net::IPEndPoint,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState> BGNet::Core::Messages::UnconnectedMessageHandler::__get__connectionStates() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ExpiringDictionary_2<System::Net::IPEndPoint,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::UnconnectedMessageHandler::__set__multipartMessageBuffer(GlobalNamespace::ExpiringDictionary_2<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ExpiringDictionary_2<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ExpiringDictionary_2<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter>>(value));
}
constexpr GlobalNamespace::ExpiringDictionary_2<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter> BGNet::Core::Messages::UnconnectedMessageHandler::__get__multipartMessageBuffer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ExpiringDictionary_2<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MultipartMessageWaiter>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::UnconnectedMessageHandler::__set__bufferPool(GlobalNamespace::SmallBufferPool value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SmallBufferPool, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SmallBufferPool>(value));
}
constexpr GlobalNamespace::SmallBufferPool BGNet::Core::Messages::UnconnectedMessageHandler::__get__bufferPool() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SmallBufferPool, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::UnconnectedMessageHandler::__set__disposedTokenSource(System::Threading::CancellationTokenSource value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationTokenSource, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::CancellationTokenSource>(value));
}
constexpr System::Threading::CancellationTokenSource BGNet::Core::Messages::UnconnectedMessageHandler::__get__disposedTokenSource() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationTokenSource, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::PacketEncryptionLayer BGNet::Core::Messages::UnconnectedMessageHandler::get_encryptionLayer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "get_encryptionLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::PacketEncryptionLayer, false>(const_cast<void*>(instance), ___internal_method);
}
 BGNet::Core::ITimeProvider BGNet::Core::Messages::UnconnectedMessageHandler::get_timeProvider()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "get_timeProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<BGNet::Core::ITimeProvider, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "sender", ty: "GlobalNamespace::IUnconnectedMessageSender", modifiers: "", def_value: None }, CppParam { name: "timeProvider", ty: "BGNet::Core::ITimeProvider", modifiers: "", def_value: None }, CppParam { name: "taskUtility", ty: "BGNet::Core::ITaskUtility", modifiers: "", def_value: None }, CppParam { name: "analytics", ty: "BGNet::Core::IAnalyticsManager", modifiers: "", def_value: Some("csnull") }]
 BGNet::Core::Messages::UnconnectedMessageHandler::UnconnectedMessageHandler(GlobalNamespace::IUnconnectedMessageSender sender, BGNet::Core::ITimeProvider timeProvider, BGNet::Core::ITaskUtility taskUtility, BGNet::Core::IAnalyticsManager analytics)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnconnectedMessageHandler>(sender, timeProvider, taskUtility, analytics))) {}
/// @param analytics: BGNet::Core::IAnalyticsManager (default: csnull)
 void BGNet::Core::Messages::UnconnectedMessageHandler::_ctor(GlobalNamespace::IUnconnectedMessageSender sender, BGNet::Core::ITimeProvider timeProvider, BGNet::Core::ITaskUtility taskUtility, BGNet::Core::IAnalyticsManager analytics)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IUnconnectedMessageSender>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::ITimeProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::ITaskUtility>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::IAnalyticsManager>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sender, timeProvider, taskUtility, analytics);
}
template<typename TMultipartMessage,typename TAcknowledgeMessage>
 void BGNet::Core::Messages::UnconnectedMessageHandler::RegisterSerializer(uint32_t messageType, GlobalNamespace::INetworkPacketSerializer_1<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin> serializer, System::Func_1<TMultipartMessage> obtainMultipartMessage, System::Func_1<TAcknowledgeMessage> obtainAcknowledgeMessage)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                        "RegisterSerializer",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMultipartMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TAcknowledgeMessage>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::INetworkPacketSerializer_1<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_1<TMultipartMessage>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_1<TAcknowledgeMessage>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMultipartMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TAcknowledgeMessage>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, messageType, serializer, obtainMultipartMessage, obtainAcknowledgeMessage);
}
 bool BGNet::Core::Messages::UnconnectedMessageHandler::ShouldHandleMessage(BGNet::Core::Messages::IUnconnectedMessage packet, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin origin)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "ShouldHandleMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, packet, origin);
}
 uint32_t BGNet::Core::Messages::UnconnectedMessageHandler::GetMessageType(BGNet::Core::Messages::IUnconnectedMessage message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "GetMessageType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, message);
}
 BGNet::Core::Messages::BaseMultipartMessage BGNet::Core::Messages::UnconnectedMessageHandler::GetMultipartMessage(BGNet::Core::Messages::IUnconnectedMessage message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "GetMultipartMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<BGNet::Core::Messages::BaseMultipartMessage, false>(const_cast<void*>(instance), ___internal_method, message);
}
 BGNet::Core::Messages::BaseAcknowledgeMessage BGNet::Core::Messages::UnconnectedMessageHandler::GetAcknowledgeMessage(BGNet::Core::Messages::IUnconnectedMessage message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "GetAcknowledgeMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<BGNet::Core::Messages::BaseAcknowledgeMessage, false>(const_cast<void*>(instance), ___internal_method, message);
}
template<typename T>
 System::Func_2<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,T> BGNet::Core::Messages::UnconnectedMessageHandler::ObtainVersioned(System::Func_2<uint32_t,T> obtain)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                        "ObtainVersioned",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<uint32_t,T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Func_2<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,T>, false>(const_cast<void*>(instance), ___internal_method, obtain);
}
template<typename T>
 System::Func_1<T> BGNet::Core::Messages::UnconnectedMessageHandler::ObtainVersioned(System::Func_1<T> obtain)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                        "ObtainVersioned",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Func_1<T>, false>(const_cast<void*>(instance), ___internal_method, obtain);
}
template<typename T>
 void BGNet::Core::Messages::UnconnectedMessageHandler::DefaultAcknowledgeHandler(T packet, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin origin)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                        "DefaultAcknowledgeHandler",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, packet, origin);
}
template<typename T>
 void BGNet::Core::Messages::UnconnectedMessageHandler::DefaultRequestHandler(T packet, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin origin)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                        "DefaultRequestHandler",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, packet, origin);
}
template<typename T>
 void BGNet::Core::Messages::UnconnectedMessageHandler::DefaultResponseHandler(T packet, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin origin)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                        "DefaultResponseHandler",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, packet, origin);
}
template<typename T>
 void BGNet::Core::Messages::UnconnectedMessageHandler::DefaultMultipartMessageHandler(T packet, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin origin)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                        "DefaultMultipartMessageHandler",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, packet, origin);
}
template<typename T>
 System::Action_2<T,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin> BGNet::Core::Messages::UnconnectedMessageHandler::CustomResponseHandler(System::Action_2<T,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin> customHandler)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                        "CustomResponseHandler",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<T,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Action_2<T,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>, false>(const_cast<void*>(instance), ___internal_method, customHandler);
}
template<typename T>
 System::Action_2<T,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin> BGNet::Core::Messages::UnconnectedMessageHandler::CustomUnreliableResponseHandler(System::Action_2<T,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin> customHandler)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                        "CustomUnreliableResponseHandler",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<T,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Action_2<T,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>, false>(const_cast<void*>(instance), ___internal_method, customHandler);
}
 bool BGNet::Core::Messages::UnconnectedMessageHandler::IsUnhandledMessage(BGNet::Core::Messages::IUnconnectedReliableRequest packet, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin origin)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "IsUnhandledMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, packet, origin);
}
 void BGNet::Core::Messages::UnconnectedMessageHandler::CompleteSend(BGNet::Core::Messages::IUnconnectedResponse packet, System::Net::IPEndPoint remoteEndPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "CompleteSend",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedResponse>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, packet, remoteEndPoint);
}
 bool BGNet::Core::Messages::UnconnectedMessageHandler::CompleteRequest(BGNet::Core::Messages::IUnconnectedReliableResponse packet, System::Net::IPEndPoint remoteEndPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "CompleteRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableResponse>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, packet, remoteEndPoint);
}
template<typename TRequest,typename TResponse>
 void BGNet::Core::Messages::UnconnectedMessageHandler::GetAndSendResponse(TRequest request, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin origin, System::Func_3<TRequest,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,System::Threading::Tasks::Task_1<TResponse>> tryGetResponse, System::Func_1<TResponse> getFailureResponse)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                        "GetAndSendResponse",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResponse>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<TRequest,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,System::Threading::Tasks::Task_1<TResponse>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_1<TResponse>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResponse>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, request, origin, tryGetResponse, getFailureResponse);
}
template<typename TRequest,typename TResponse>
 System::Threading::Tasks::Task BGNet::Core::Messages::UnconnectedMessageHandler::GetAndSendResponseAsync(TRequest request, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin origin, System::Func_3<TRequest,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,System::Threading::Tasks::Task_1<TResponse>> tryGetResponse, System::Func_1<TResponse> getFailureResponse)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                        "GetAndSendResponseAsync",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResponse>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<TRequest,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,System::Threading::Tasks::Task_1<TResponse>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_1<TResponse>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResponse>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, request, origin, tryGetResponse, getFailureResponse);
}
template<typename TRequest,typename TResponse>
 void BGNet::Core::Messages::UnconnectedMessageHandler::GetAndSendUnreilableResponse(TRequest request, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin origin, System::Func_3<TRequest,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,System::Threading::Tasks::Task_1<TResponse>> tryGetResponse, System::Func_1<TResponse> getFailureResponse)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                        "GetAndSendUnreilableResponse",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResponse>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<TRequest,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,System::Threading::Tasks::Task_1<TResponse>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_1<TResponse>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResponse>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, request, origin, tryGetResponse, getFailureResponse);
}
 void BGNet::Core::Messages::UnconnectedMessageHandler::SendUnreliableMessage(uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, BGNet::Core::Messages::IUnconnectedUnreliableMessage message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "SendUnreliableMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedUnreliableMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, protocolVersion, remoteEndPoint, message);
}
 void BGNet::Core::Messages::UnconnectedMessageHandler::SendUnreliableResponse(uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest request, BGNet::Core::Messages::IUnconnectedResponse response)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "SendUnreliableResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedResponse>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, protocolVersion, remoteEndPoint, request, response);
}
 void BGNet::Core::Messages::UnconnectedMessageHandler::SendUnreliableResponse(uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, uint32_t responseId, BGNet::Core::Messages::IUnconnectedResponse response)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "SendUnreliableResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedResponse>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, protocolVersion, remoteEndPoint, responseId, response);
}
/// @param cancellationToken: System::Threading::CancellationToken (default: {})
 void BGNet::Core::Messages::UnconnectedMessageHandler::SendReliableRequest(uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest request, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "SendReliableRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, protocolVersion, remoteEndPoint, request, cancellationToken);
}
/// @param onSendFailed: System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task> (default: csnull)
/// @param cancellationToken: System::Threading::CancellationToken (default: {})
 System::Threading::Tasks::Task BGNet::Core::Messages::UnconnectedMessageHandler::SendReliableRequestAsync(uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest request, System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task> onSendFailed, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "SendReliableRequestAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, protocolVersion, remoteEndPoint, request, onSendFailed, cancellationToken);
}
/// @param cancellationToken: System::Threading::CancellationToken (default: {})
 void BGNet::Core::Messages::UnconnectedMessageHandler::SendReliableResponse(uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest request, BGNet::Core::Messages::IUnconnectedReliableResponse response, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "SendReliableResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableResponse>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, protocolVersion, remoteEndPoint, request, response, cancellationToken);
}
/// @param cancellationToken: System::Threading::CancellationToken (default: {})
 void BGNet::Core::Messages::UnconnectedMessageHandler::SendReliableResponse(uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, uint32_t responseId, BGNet::Core::Messages::IUnconnectedReliableResponse response, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "SendReliableResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableResponse>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, protocolVersion, remoteEndPoint, responseId, response, cancellationToken);
}
/// @param cancellationToken: System::Threading::CancellationToken (default: {})
 System::Threading::Tasks::Task BGNet::Core::Messages::UnconnectedMessageHandler::SendReliableResponseAsync(uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest request, BGNet::Core::Messages::IUnconnectedReliableResponse response, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "SendReliableResponseAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableResponse>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, protocolVersion, remoteEndPoint, request, response, cancellationToken);
}
/// @param onSendFailedAwaitResponse: System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task_1<T>> (default: csnull)
/// @param cancellationToken: System::Threading::CancellationToken (default: {})
template<typename T>
 System::Threading::Tasks::Task_1<T> BGNet::Core::Messages::UnconnectedMessageHandler::SendReliableRequestAndAwaitResponseAsync(uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest request, System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task_1<T>> onSendFailedAwaitResponse, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                        "SendReliableRequestAndAwaitResponseAsync",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task_1<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<T>, false>(const_cast<void*>(instance), ___internal_method, protocolVersion, remoteEndPoint, request, onSendFailedAwaitResponse, cancellationToken);
}
/// @param cancellationToken: System::Threading::CancellationToken (default: {})
template<typename T>
 System::Threading::Tasks::Task_1<T> BGNet::Core::Messages::UnconnectedMessageHandler::SendReliableResponseAndAwaitResponseAsync(uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest request, BGNet::Core::Messages::IUnconnectedReliableResponse response, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                        "SendReliableResponseAndAwaitResponseAsync",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableResponse>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<T>, false>(const_cast<void*>(instance), ___internal_method, protocolVersion, remoteEndPoint, request, response, cancellationToken);
}
/// @param cancellationToken: System::Threading::CancellationToken (default: {})
template<typename T>
 System::Threading::Tasks::Task_1<T> BGNet::Core::Messages::UnconnectedMessageHandler::SendReliableResponseAndAwaitResponseAsync(uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, uint32_t responseId, BGNet::Core::Messages::IUnconnectedReliableResponse response, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                        "SendReliableResponseAndAwaitResponseAsync",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableResponse>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<T>, false>(const_cast<void*>(instance), ___internal_method, protocolVersion, remoteEndPoint, responseId, response, cancellationToken);
}
 void BGNet::Core::Messages::UnconnectedMessageHandler::SendMessage(uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, BGNet::Core::Messages::IUnconnectedMessage message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "SendMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, protocolVersion, remoteEndPoint, message);
}
/// @param cancellationToken: System::Threading::CancellationToken (default: {})
 void BGNet::Core::Messages::UnconnectedMessageHandler::SendMessageWithRetry(uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest message, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "SendMessageWithRetry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, protocolVersion, remoteEndPoint, message, cancellationToken);
}
/// @param onSendFailed: System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task> (default: csnull)
/// @param cancellationToken: System::Threading::CancellationToken (default: {})
 System::Threading::Tasks::Task BGNet::Core::Messages::UnconnectedMessageHandler::SendMessageWithRetryAsync(uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest message, System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task> onSendFailed, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "SendMessageWithRetryAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, protocolVersion, remoteEndPoint, message, onSendFailed, cancellationToken);
}
 System::Threading::Tasks::Task BGNet::Core::Messages::UnconnectedMessageHandler::SendMultipartMessageWithRetryAsync(uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest message, LiteNetLib::Utils::NetDataWriter data, System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task> onSendFailed, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "SendMultipartMessageWithRetryAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, protocolVersion, remoteEndPoint, message, data, onSendFailed, cancellationToken);
}
/// @param onSendFailed: System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task> (default: csnull)
/// @param cancellationToken: System::Threading::CancellationToken (default: {})
 System::Threading::Tasks::Task BGNet::Core::Messages::UnconnectedMessageHandler::SendMessageWithRetryAsyncInternal(uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest message, System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task> onSendFailed, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "SendMessageWithRetryAsyncInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, protocolVersion, remoteEndPoint, message, onSendFailed, cancellationToken);
}
/// @param onSendFailedAwaitResponse: System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task_1<T>> (default: csnull)
/// @param cancellationToken: System::Threading::CancellationToken (default: {})
template<typename T>
 System::Threading::Tasks::Task_1<T> BGNet::Core::Messages::UnconnectedMessageHandler::SendMessageWithRetryAwaitResponseAsync(uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest message, System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task_1<T>> onSendFailedAwaitResponse, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                        "SendMessageWithRetryAwaitResponseAsync",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task_1<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<T>, false>(const_cast<void*>(instance), ___internal_method, protocolVersion, remoteEndPoint, message, onSendFailedAwaitResponse, cancellationToken);
}
template<typename T>
 System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task> BGNet::Core::Messages::UnconnectedMessageHandler::WrapOnSendFailedAwaitResponse(BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter waiter, System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task_1<T>> onSendFailed)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                        "WrapOnSendFailedAwaitResponse",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task_1<T>>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task>, false>(const_cast<void*>(instance), ___internal_method, waiter, onSendFailed);
}
/// @param cancellationToken: System::Threading::CancellationToken (default: {})
template<typename T>
 System::Threading::Tasks::Task_1<T> BGNet::Core::Messages::UnconnectedMessageHandler::AwaitResponseAsync(uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, uint32_t requestId, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                        "AwaitResponseAsync",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<T>, false>(const_cast<void*>(instance), ___internal_method, protocolVersion, remoteEndPoint, requestId, cancellationToken);
}
 System::Threading::Tasks::Task BGNet::Core::Messages::UnconnectedMessageHandler::WaitForRetry(int32_t retryAttempt, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "WaitForRetry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, retryAttempt, cancellationToken);
}
 LiteNetLib::Utils::NetDataWriter BGNet::Core::Messages::UnconnectedMessageHandler::Write(uint32_t protocolVersion, BGNet::Core::Messages::IUnconnectedMessage message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<LiteNetLib::Utils::NetDataWriter, false>(const_cast<void*>(instance), ___internal_method, protocolVersion, message);
}
 void BGNet::Core::Messages::UnconnectedMessageHandler::PollUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "PollUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void BGNet::Core::Messages::UnconnectedMessageHandler::ReceiveUnconnectedMessage(System::Net::IPEndPoint remoteEndPoint, LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "ReceiveUnconnectedMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, remoteEndPoint, reader);
}
 bool BGNet::Core::Messages::UnconnectedMessageHandler::ShouldHandleMessageFromEndPoint(System::Net::IPEndPoint endPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "ShouldHandleMessageFromEndPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, endPoint);
}
 void BGNet::Core::Messages::UnconnectedMessageHandler::ReceivedMessageException(System::Net::IPEndPoint endPoint, System::Exception exception)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "ReceivedMessageException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, endPoint, exception);
}
 void BGNet::Core::Messages::UnconnectedMessageHandler::BeginSession(System::Net::IPEndPoint endPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "BeginSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, endPoint);
}
 void BGNet::Core::Messages::UnconnectedMessageHandler::BeginSession(System::Net::IPEndPoint endPoint, uint32_t requestId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "BeginSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, endPoint, requestId);
}
 uint32_t BGNet::Core::Messages::UnconnectedMessageHandler::GetNextRequestId(System::Net::IPEndPoint endPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "GetNextRequestId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, endPoint);
}
 BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState BGNet::Core::Messages::UnconnectedMessageHandler::GetConnectionState(System::Net::IPEndPoint endPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "GetConnectionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__ConnectionState, false>(const_cast<void*>(instance), ___internal_method, endPoint);
}
 bool BGNet::Core::Messages::UnconnectedMessageHandler::IsValidSessionStartRequestId(System::Net::IPEndPoint endPoint, uint32_t requestId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "IsValidSessionStartRequestId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, endPoint, requestId);
}
 bool BGNet::Core::Messages::UnconnectedMessageHandler::IsConnectionStateEncrypted(System::Net::IPEndPoint endPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "IsConnectionStateEncrypted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, endPoint);
}
/// @param throwOnInvalidVersion: bool (default: true)
 GlobalNamespace::INetworkPacketSerializer_1<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin> BGNet::Core::Messages::UnconnectedMessageHandler::GetSerializer(uint32_t protocolVersion, uint32_t messageType, bool throwOnInvalidVersion)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "GetSerializer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::INetworkPacketSerializer_1<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>, false>(const_cast<void*>(instance), ___internal_method, protocolVersion, messageType, throwOnInvalidVersion);
}
 void BGNet::Core::Messages::UnconnectedMessageHandler::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> BGNet::Core::Messages::UnconnectedMessageHandler::CreateHandshakeHeader(::ArrayW<uint8_t> packetHeader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::UnconnectedMessageHandler>::get(),
                            "CreateHandshakeHeader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, packetHeader);
}
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass46_0_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass46_0_1::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass46_0_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass46_0_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass46_0_1._ObtainVersioned_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<T (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass46_0_1::*)(BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin)>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass46_0_1::_ObtainVersioned_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass46_0_1>::get(),
                            "<ObtainVersioned>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass46_0_1::__set_obtain(System::Func_2<uint32_t,T> value)  {
::cordl_internals::setInstanceField<System::Func_2<uint32_t,T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<uint32_t,T>>(value));
}
constexpr System::Func_2<uint32_t,T> BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass46_0_1::__get_obtain() const {
return ::cordl_internals::getInstanceField<System::Func_2<uint32_t,T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass46_0_1::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass46_0_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass46_0_1>())) {}
 void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass46_0_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass46_0_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 T BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass46_0_1::_ObtainVersioned_b__0(BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin origin)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass46_0_1>::get(),
                            "<ObtainVersioned>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method, origin);
}
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass52_0_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass52_0_1::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass52_0_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass52_0_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass52_0_1._CustomResponseHandler_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass52_0_1::*)(T, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin)>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass52_0_1::_CustomResponseHandler_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass52_0_1>::get(),
                            "<CustomResponseHandler>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass52_0_1::__set___4__this(BGNet::Core::Messages::UnconnectedMessageHandler value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::UnconnectedMessageHandler, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<BGNet::Core::Messages::UnconnectedMessageHandler>(value));
}
constexpr BGNet::Core::Messages::UnconnectedMessageHandler BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass52_0_1::__get___4__this() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::UnconnectedMessageHandler, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass52_0_1::__set_customHandler(System::Action_2<T,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin> value)  {
::cordl_internals::setInstanceField<System::Action_2<T,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<T,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>>(value));
}
constexpr System::Action_2<T,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin> BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass52_0_1::__get_customHandler() const {
return ::cordl_internals::getInstanceField<System::Action_2<T,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass52_0_1::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass52_0_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass52_0_1>())) {}
 void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass52_0_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass52_0_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass52_0_1::_CustomResponseHandler_b__0(T packet, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin origin)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass52_0_1>::get(),
                            "<CustomResponseHandler>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, packet, origin);
}
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass53_0_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass53_0_1::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass53_0_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass53_0_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass53_0_1._CustomUnreliableResponseHandler_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass53_0_1::*)(T, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin)>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass53_0_1::_CustomUnreliableResponseHandler_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass53_0_1>::get(),
                            "<CustomUnreliableResponseHandler>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass53_0_1::__set___4__this(BGNet::Core::Messages::UnconnectedMessageHandler value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::UnconnectedMessageHandler, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<BGNet::Core::Messages::UnconnectedMessageHandler>(value));
}
constexpr BGNet::Core::Messages::UnconnectedMessageHandler BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass53_0_1::__get___4__this() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::UnconnectedMessageHandler, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass53_0_1::__set_customHandler(System::Action_2<T,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin> value)  {
::cordl_internals::setInstanceField<System::Action_2<T,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<T,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>>(value));
}
constexpr System::Action_2<T,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin> BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass53_0_1::__get_customHandler() const {
return ::cordl_internals::getInstanceField<System::Action_2<T,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass53_0_1::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass53_0_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass53_0_1>())) {}
 void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass53_0_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass53_0_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass53_0_1::_CustomUnreliableResponseHandler_b__0(T packet, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin origin)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass53_0_1>::get(),
                            "<CustomUnreliableResponseHandler>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, packet, origin);
}
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponse_d__57_2.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponse_d__57_2::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponse_d__57_2::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponse_d__57_2>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponse_d__57_2.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponse_d__57_2::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponse_d__57_2::SetStateMachine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponse_d__57_2>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponse_d__57_2::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::UnconnectedMessageHandler", modifiers: "", def_value: Some("csnull") }, CppParam { name: "request", ty: "TRequest", modifiers: "", def_value: Some("csnull") }, CppParam { name: "origin", ty: "BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin", modifiers: "", def_value: Some("{}") }, CppParam { name: "tryGetResponse", ty: "System::Func_3<TRequest,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,System::Threading::Tasks::Task_1<TResponse>>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "getFailureResponse", ty: "System::Func_1<TResponse>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponse_d__57_2::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponse_d__57_2(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, BGNet::Core::Messages::UnconnectedMessageHandler __4__this, TRequest request, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin origin, System::Func_3<TRequest,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,System::Threading::Tasks::Task_1<TResponse>> tryGetResponse, System::Func_1<TResponse> getFailureResponse, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->request = request;
this->origin = origin;
this->tryGetResponse = tryGetResponse;
this->getFailureResponse = getFailureResponse;
this->__u__1 = __u__1;
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponse_d__57_2::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponse_d__57_2::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponse_d__57_2::__set___t__builder(System::Runtime::CompilerServices::AsyncVoidMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncVoidMethodBuilder BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponse_d__57_2::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponse_d__57_2::__set___4__this(BGNet::Core::Messages::UnconnectedMessageHandler value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::UnconnectedMessageHandler, 0x10>(this->__instance, std::forward<BGNet::Core::Messages::UnconnectedMessageHandler>(value));
}
constexpr BGNet::Core::Messages::UnconnectedMessageHandler BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponse_d__57_2::__get___4__this() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::UnconnectedMessageHandler, 0x10>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponse_d__57_2::__set_request(TRequest value)  {
::cordl_internals::setInstanceField<TRequest, 0x18>(this->__instance, std::forward<TRequest>(value));
}
constexpr TRequest BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponse_d__57_2::__get_request() const {
return ::cordl_internals::getInstanceField<TRequest, 0x18>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponse_d__57_2::__set_origin(BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin, 0x20>(this->__instance, std::forward<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>(value));
}
constexpr BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponse_d__57_2::__get_origin() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin, 0x20>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponse_d__57_2::__set_tryGetResponse(System::Func_3<TRequest,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,System::Threading::Tasks::Task_1<TResponse>> value)  {
::cordl_internals::setInstanceField<System::Func_3<TRequest,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,System::Threading::Tasks::Task_1<TResponse>>, 0x28>(this->__instance, std::forward<System::Func_3<TRequest,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,System::Threading::Tasks::Task_1<TResponse>>>(value));
}
constexpr System::Func_3<TRequest,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,System::Threading::Tasks::Task_1<TResponse>> BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponse_d__57_2::__get_tryGetResponse() const {
return ::cordl_internals::getInstanceField<System::Func_3<TRequest,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,System::Threading::Tasks::Task_1<TResponse>>, 0x28>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponse_d__57_2::__set_getFailureResponse(System::Func_1<TResponse> value)  {
::cordl_internals::setInstanceField<System::Func_1<TResponse>, 0x30>(this->__instance, std::forward<System::Func_1<TResponse>>(value));
}
constexpr System::Func_1<TResponse> BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponse_d__57_2::__get_getFailureResponse() const {
return ::cordl_internals::getInstanceField<System::Func_1<TResponse>, 0x30>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponse_d__57_2::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x38>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponse_d__57_2::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x38>(this->__instance);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponse_d__57_2::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponse_d__57_2>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponse_d__57_2::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponse_d__57_2>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2::SetStateMachine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "tryGetResponse", ty: "System::Func_3<TRequest,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,System::Threading::Tasks::Task_1<TResponse>>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "request", ty: "TRequest", modifiers: "", def_value: Some("csnull") }, CppParam { name: "origin", ty: "BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin", modifiers: "", def_value: Some("{}") }, CppParam { name: "getFailureResponse", ty: "System::Func_1<TResponse>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::UnconnectedMessageHandler", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_response_5__2", ty: "TResponse", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<TResponse>", modifiers: "", def_value: Some("{}") }]
constexpr BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, System::Func_3<TRequest,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,System::Threading::Tasks::Task_1<TResponse>> tryGetResponse, TRequest request, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin origin, System::Func_1<TResponse> getFailureResponse, BGNet::Core::Messages::UnconnectedMessageHandler __4__this, TResponse _response_5__2, System::Runtime::CompilerServices::TaskAwaiter_1<TResponse> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->tryGetResponse = tryGetResponse;
this->request = request;
this->origin = origin;
this->getFailureResponse = getFailureResponse;
this->__4__this = __4__this;
this->_response_5__2 = _response_5__2;
this->__u__1 = __u__1;
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2::__set_tryGetResponse(System::Func_3<TRequest,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,System::Threading::Tasks::Task_1<TResponse>> value)  {
::cordl_internals::setInstanceField<System::Func_3<TRequest,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,System::Threading::Tasks::Task_1<TResponse>>, 0x10>(this->__instance, std::forward<System::Func_3<TRequest,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,System::Threading::Tasks::Task_1<TResponse>>>(value));
}
constexpr System::Func_3<TRequest,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,System::Threading::Tasks::Task_1<TResponse>> BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2::__get_tryGetResponse() const {
return ::cordl_internals::getInstanceField<System::Func_3<TRequest,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,System::Threading::Tasks::Task_1<TResponse>>, 0x10>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2::__set_request(TRequest value)  {
::cordl_internals::setInstanceField<TRequest, 0x18>(this->__instance, std::forward<TRequest>(value));
}
constexpr TRequest BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2::__get_request() const {
return ::cordl_internals::getInstanceField<TRequest, 0x18>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2::__set_origin(BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin, 0x20>(this->__instance, std::forward<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>(value));
}
constexpr BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2::__get_origin() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin, 0x20>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2::__set_getFailureResponse(System::Func_1<TResponse> value)  {
::cordl_internals::setInstanceField<System::Func_1<TResponse>, 0x28>(this->__instance, std::forward<System::Func_1<TResponse>>(value));
}
constexpr System::Func_1<TResponse> BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2::__get_getFailureResponse() const {
return ::cordl_internals::getInstanceField<System::Func_1<TResponse>, 0x28>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2::__set___4__this(BGNet::Core::Messages::UnconnectedMessageHandler value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::UnconnectedMessageHandler, 0x30>(this->__instance, std::forward<BGNet::Core::Messages::UnconnectedMessageHandler>(value));
}
constexpr BGNet::Core::Messages::UnconnectedMessageHandler BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2::__get___4__this() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::UnconnectedMessageHandler, 0x30>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2::__set__response_5__2(TResponse value)  {
::cordl_internals::setInstanceField<TResponse, 0x38>(this->__instance, std::forward<TResponse>(value));
}
constexpr TResponse BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2::__get__response_5__2() const {
return ::cordl_internals::getInstanceField<TResponse, 0x38>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<TResponse> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<TResponse>, 0x40>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<TResponse>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<TResponse> BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<TResponse>, 0x40>(this->__instance);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendResponseAsync_d__58_2>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2::SetStateMachine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "tryGetResponse", ty: "System::Func_3<TRequest,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,System::Threading::Tasks::Task_1<TResponse>>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "request", ty: "TRequest", modifiers: "", def_value: Some("csnull") }, CppParam { name: "origin", ty: "BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin", modifiers: "", def_value: Some("{}") }, CppParam { name: "getFailureResponse", ty: "System::Func_1<TResponse>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::UnconnectedMessageHandler", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_response_5__2", ty: "TResponse", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<TResponse>", modifiers: "", def_value: Some("{}") }]
constexpr BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, System::Func_3<TRequest,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,System::Threading::Tasks::Task_1<TResponse>> tryGetResponse, TRequest request, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin origin, System::Func_1<TResponse> getFailureResponse, BGNet::Core::Messages::UnconnectedMessageHandler __4__this, TResponse _response_5__2, System::Runtime::CompilerServices::TaskAwaiter_1<TResponse> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->tryGetResponse = tryGetResponse;
this->request = request;
this->origin = origin;
this->getFailureResponse = getFailureResponse;
this->__4__this = __4__this;
this->_response_5__2 = _response_5__2;
this->__u__1 = __u__1;
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2::__set___t__builder(System::Runtime::CompilerServices::AsyncVoidMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncVoidMethodBuilder BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2::__set_tryGetResponse(System::Func_3<TRequest,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,System::Threading::Tasks::Task_1<TResponse>> value)  {
::cordl_internals::setInstanceField<System::Func_3<TRequest,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,System::Threading::Tasks::Task_1<TResponse>>, 0x10>(this->__instance, std::forward<System::Func_3<TRequest,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,System::Threading::Tasks::Task_1<TResponse>>>(value));
}
constexpr System::Func_3<TRequest,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,System::Threading::Tasks::Task_1<TResponse>> BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2::__get_tryGetResponse() const {
return ::cordl_internals::getInstanceField<System::Func_3<TRequest,BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin,System::Threading::Tasks::Task_1<TResponse>>, 0x10>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2::__set_request(TRequest value)  {
::cordl_internals::setInstanceField<TRequest, 0x18>(this->__instance, std::forward<TRequest>(value));
}
constexpr TRequest BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2::__get_request() const {
return ::cordl_internals::getInstanceField<TRequest, 0x18>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2::__set_origin(BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin, 0x20>(this->__instance, std::forward<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>(value));
}
constexpr BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2::__get_origin() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin, 0x20>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2::__set_getFailureResponse(System::Func_1<TResponse> value)  {
::cordl_internals::setInstanceField<System::Func_1<TResponse>, 0x28>(this->__instance, std::forward<System::Func_1<TResponse>>(value));
}
constexpr System::Func_1<TResponse> BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2::__get_getFailureResponse() const {
return ::cordl_internals::getInstanceField<System::Func_1<TResponse>, 0x28>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2::__set___4__this(BGNet::Core::Messages::UnconnectedMessageHandler value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::UnconnectedMessageHandler, 0x30>(this->__instance, std::forward<BGNet::Core::Messages::UnconnectedMessageHandler>(value));
}
constexpr BGNet::Core::Messages::UnconnectedMessageHandler BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2::__get___4__this() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::UnconnectedMessageHandler, 0x30>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2::__set__response_5__2(TResponse value)  {
::cordl_internals::setInstanceField<TResponse, 0x38>(this->__instance, std::forward<TResponse>(value));
}
constexpr TResponse BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2::__get__response_5__2() const {
return ::cordl_internals::getInstanceField<TResponse, 0x38>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<TResponse> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<TResponse>, 0x40>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<TResponse>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<TResponse> BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<TResponse>, 0x40>(this->__instance);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___GetAndSendUnreilableResponse_d__59_2>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1::SetStateMachine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::UnconnectedMessageHandler", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "remoteEndPoint", ty: "System::Net::IPEndPoint", modifiers: "", def_value: Some("csnull") }, CppParam { name: "message", ty: "BGNet::Core::Messages::IUnconnectedReliableRequest", modifiers: "", def_value: Some("csnull") }, CppParam { name: "protocolVersion", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "onSendFailedAwaitResponse", ty: "System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task_1<T>>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_request_5__2", ty: "BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_waiterId_5__3", ty: "BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedMessage>", modifiers: "", def_value: Some("{}") }]
constexpr BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder, BGNet::Core::Messages::UnconnectedMessageHandler __4__this, System::Threading::CancellationToken cancellationToken, System::Net::IPEndPoint remoteEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest message, uint32_t protocolVersion, System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task_1<T>> onSendFailedAwaitResponse, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter _request_5__2, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId _waiterId_5__3, System::Runtime::CompilerServices::TaskAwaiter __u__1, System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedMessage> __u__2) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->remoteEndPoint = remoteEndPoint;
this->message = message;
this->protocolVersion = protocolVersion;
this->onSendFailedAwaitResponse = onSendFailedAwaitResponse;
this->_request_5__2 = _request_5__2;
this->_waiterId_5__3 = _waiterId_5__3;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>, 0x8>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1::__set___4__this(BGNet::Core::Messages::UnconnectedMessageHandler value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::UnconnectedMessageHandler, 0x10>(this->__instance, std::forward<BGNet::Core::Messages::UnconnectedMessageHandler>(value));
}
constexpr BGNet::Core::Messages::UnconnectedMessageHandler BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1::__get___4__this() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::UnconnectedMessageHandler, 0x10>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x18>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x18>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1::__set_remoteEndPoint(System::Net::IPEndPoint value)  {
::cordl_internals::setInstanceField<System::Net::IPEndPoint, 0x20>(this->__instance, std::forward<System::Net::IPEndPoint>(value));
}
constexpr System::Net::IPEndPoint BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1::__get_remoteEndPoint() const {
return ::cordl_internals::getInstanceField<System::Net::IPEndPoint, 0x20>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1::__set_message(BGNet::Core::Messages::IUnconnectedReliableRequest value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::IUnconnectedReliableRequest, 0x28>(this->__instance, std::forward<BGNet::Core::Messages::IUnconnectedReliableRequest>(value));
}
constexpr BGNet::Core::Messages::IUnconnectedReliableRequest BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1::__get_message() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::IUnconnectedReliableRequest, 0x28>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1::__set_protocolVersion(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x30>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1::__get_protocolVersion() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x30>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1::__set_onSendFailedAwaitResponse(System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task_1<T>> value)  {
::cordl_internals::setInstanceField<System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task_1<T>>, 0x38>(this->__instance, std::forward<System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task_1<T>>>(value));
}
constexpr System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task_1<T>> BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1::__get_onSendFailedAwaitResponse() const {
return ::cordl_internals::getInstanceField<System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task_1<T>>, 0x38>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1::__set__request_5__2(BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter, 0x40>(this->__instance, std::forward<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter>(value));
}
constexpr BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1::__get__request_5__2() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter, 0x40>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1::__set__waiterId_5__3(BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId, 0x48>(this->__instance, std::forward<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId>(value));
}
constexpr BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1::__get__waiterId_5__3() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId, 0x48>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x50>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x50>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1::__set___u__2(System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedMessage> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedMessage>, 0x58>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedMessage>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedMessage> BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1::__get___u__2() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedMessage>, 0x58>(this->__instance);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___SendMessageWithRetryAwaitResponseAsync_d__76_1>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: GlobalNamespace::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d::*)()>(&GlobalNamespace::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&GlobalNamespace::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1<T>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "protocolVersion", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "remoteEndPoint", ty: "System::Net::IPEndPoint", modifiers: "", def_value: Some("csnull") }, CppParam { name: "message", ty: "BGNet::Core::Messages::IUnconnectedReliableRequest", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap1", ty: "BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<T>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1<T> __4__this, uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest message, System::Threading::CancellationToken cancellationToken, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter __7__wrap1, System::Runtime::CompilerServices::TaskAwaiter_1<T> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->protocolVersion = protocolVersion;
this->remoteEndPoint = remoteEndPoint;
this->message = message;
this->cancellationToken = cancellationToken;
this->__7__wrap1 = __7__wrap1;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder GlobalNamespace::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d::__set___4__this(BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1<T> value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1<T>, 0x10>(this->__instance, std::forward<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1<T>>(value));
}
constexpr BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1<T> GlobalNamespace::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d::__get___4__this() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1<T>, 0x10>(this->__instance);
}
constexpr void GlobalNamespace::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d::__set_protocolVersion(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x18>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t GlobalNamespace::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d::__get_protocolVersion() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x18>(this->__instance);
}
constexpr void GlobalNamespace::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d::__set_remoteEndPoint(System::Net::IPEndPoint value)  {
::cordl_internals::setInstanceField<System::Net::IPEndPoint, 0x20>(this->__instance, std::forward<System::Net::IPEndPoint>(value));
}
constexpr System::Net::IPEndPoint GlobalNamespace::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d::__get_remoteEndPoint() const {
return ::cordl_internals::getInstanceField<System::Net::IPEndPoint, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d::__set_message(BGNet::Core::Messages::IUnconnectedReliableRequest value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::IUnconnectedReliableRequest, 0x28>(this->__instance, std::forward<BGNet::Core::Messages::IUnconnectedReliableRequest>(value));
}
constexpr BGNet::Core::Messages::IUnconnectedReliableRequest GlobalNamespace::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d::__get_message() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::IUnconnectedReliableRequest, 0x28>(this->__instance);
}
constexpr void GlobalNamespace::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x30>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken GlobalNamespace::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x30>(this->__instance);
}
constexpr void GlobalNamespace::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d::__set___7__wrap1(BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter, 0x38>(this->__instance, std::forward<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter>(value));
}
constexpr BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter GlobalNamespace::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d::__get___7__wrap1() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter, 0x38>(this->__instance);
}
constexpr void GlobalNamespace::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<T> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<T>, 0x40>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<T>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<T> GlobalNamespace::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<T>, 0x40>(this->__instance);
}
 void GlobalNamespace::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1____WrapOnSendFailedAwaitResponse_b__0_d>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1._WrapOnSendFailedAwaitResponse_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1::*)(uint32_t, System::Net::IPEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest, System::Threading::CancellationToken)>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1::_WrapOnSendFailedAwaitResponse_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1>::get(),
                            "<WrapOnSendFailedAwaitResponse>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1::__set_waiter(BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter>(value));
}
constexpr BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1::__get_waiter() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestResponseWaiter, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1::__set_onSendFailed(System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task_1<T>> value)  {
::cordl_internals::setInstanceField<System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task_1<T>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task_1<T>>>(value));
}
constexpr System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task_1<T>> BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1::__get_onSendFailed() const {
return ::cordl_internals::getInstanceField<System::Func_5<uint32_t,System::Net::IPEndPoint,BGNet::Core::Messages::IUnconnectedReliableRequest,System::Threading::CancellationToken,System::Threading::Tasks::Task_1<T>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1>())) {}
 void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1::_WrapOnSendFailedAwaitResponse_b__0(uint32_t protocolVersion, System::Net::IPEndPoint remoteEndPoint, BGNet::Core::Messages::IUnconnectedReliableRequest message, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler____c__DisplayClass77_0_1>::get(),
                            "<WrapOnSendFailedAwaitResponse>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedReliableRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, protocolVersion, remoteEndPoint, message, cancellationToken);
}
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1::SetStateMachine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::UnconnectedMessageHandler", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "remoteEndPoint", ty: "System::Net::IPEndPoint", modifiers: "", def_value: Some("csnull") }, CppParam { name: "requestId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_waiterId_5__2", ty: "BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedMessage>", modifiers: "", def_value: Some("{}") }]
constexpr BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1::BGNet__Core__Messages__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder, BGNet::Core::Messages::UnconnectedMessageHandler __4__this, System::Threading::CancellationToken cancellationToken, System::Net::IPEndPoint remoteEndPoint, uint32_t requestId, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId _waiterId_5__2, System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedMessage> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->remoteEndPoint = remoteEndPoint;
this->requestId = requestId;
this->_waiterId_5__2 = _waiterId_5__2;
this->__u__1 = __u__1;
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>, 0x8>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1::__set___4__this(BGNet::Core::Messages::UnconnectedMessageHandler value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::UnconnectedMessageHandler, 0x10>(this->__instance, std::forward<BGNet::Core::Messages::UnconnectedMessageHandler>(value));
}
constexpr BGNet::Core::Messages::UnconnectedMessageHandler BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1::__get___4__this() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::UnconnectedMessageHandler, 0x10>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x18>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x18>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1::__set_remoteEndPoint(System::Net::IPEndPoint value)  {
::cordl_internals::setInstanceField<System::Net::IPEndPoint, 0x20>(this->__instance, std::forward<System::Net::IPEndPoint>(value));
}
constexpr System::Net::IPEndPoint BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1::__get_remoteEndPoint() const {
return ::cordl_internals::getInstanceField<System::Net::IPEndPoint, 0x20>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1::__set_requestId(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x28>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1::__get_requestId() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x28>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1::__set__waiterId_5__2(BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId, 0x30>(this->__instance, std::forward<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId>(value));
}
constexpr BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1::__get__waiterId_5__2() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__RequestWaiterId, 0x30>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedMessage> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedMessage>, 0x38>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedMessage>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedMessage> BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedMessage>, 0x38>(this->__instance);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler___AwaitResponseAsync_d__78_1>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
} // end anonymous namespace
