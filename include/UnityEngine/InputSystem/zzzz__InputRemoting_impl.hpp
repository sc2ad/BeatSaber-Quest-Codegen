#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputRemoting_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputRemoting_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputManager_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IObservable_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDeviceChange_def.hpp"
#include "System/zzzz__IObserver_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlLayoutChange_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceDescription_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType::UnityEngine__InputSystem__InputRemoting__MessageType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType  UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType::Connect{0};
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType  UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType::Disconnect{1};
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType  UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType::NewLayout{2};
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType  UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType::NewDevice{3};
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType  UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType::NewEvents{4};
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType  UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType::RemoveDevice{5};
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType  UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType::RemoveLayout{6};
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType  UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType::ChangeUsages{7};
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType  UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType::StartSending{8};
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType  UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType::StopSending{9};
// Ctor Parameters [CppParam { name: "participantId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "type", ty: "UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType", modifiers: "", def_value: Some("{}") }, CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }]
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message::UnityEngine__InputSystem__InputRemoting__Message(int32_t participantId, UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType type, ::ArrayW<uint8_t> data) noexcept : ::bs_hook::ValueTypeWrapper() {this->participantId = participantId;
this->type = type;
this->data = data;
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message::__set_participantId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message::__get_participantId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message::__set_type(UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType, 0x4>(this->__instance, std::forward<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType>(value));
}
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message::__get_type() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__MessageType, 0x4>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message::__set_data(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x8>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message::__get_data() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x8>(this->__instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Flags::UnityEngine__InputSystem__InputRemoting__Flags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Flags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Flags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Flags  UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Flags::Sending{1};
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Flags  UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Flags::StartSendingOnConnect{2};
// Ctor Parameters [CppParam { name: "senderId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "layouts", ty: "::ArrayW<UnityEngine::InputSystem::Utilities::InternedString>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "devices", ty: "::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoteInputDevice>", modifiers: "", def_value: Some("csnull") }]
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoteSender::UnityEngine__InputSystem__InputRemoting__RemoteSender(int32_t senderId, ::ArrayW<UnityEngine::InputSystem::Utilities::InternedString> layouts, ::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoteInputDevice> devices) noexcept : ::bs_hook::ValueTypeWrapper() {this->senderId = senderId;
this->layouts = layouts;
this->devices = devices;
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoteSender::__set_senderId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoteSender::__get_senderId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoteSender::__set_layouts(::ArrayW<UnityEngine::InputSystem::Utilities::InternedString> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::InputSystem::Utilities::InternedString>, 0x8>(this->__instance, std::forward<::ArrayW<UnityEngine::InputSystem::Utilities::InternedString>>(value));
}
constexpr ::ArrayW<UnityEngine::InputSystem::Utilities::InternedString> UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoteSender::__get_layouts() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::InputSystem::Utilities::InternedString>, 0x8>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoteSender::__set_devices(::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoteInputDevice> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoteInputDevice>, 0x10>(this->__instance, std::forward<::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoteInputDevice>>(value));
}
constexpr ::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoteInputDevice> UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoteSender::__get_devices() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoteInputDevice>, 0x10>(this->__instance);
}
// Ctor Parameters [CppParam { name: "remoteId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "localId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "description", ty: "UnityEngine::InputSystem::Layouts::InputDeviceDescription", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoteInputDevice::UnityEngine__InputSystem__InputRemoting__RemoteInputDevice(int32_t remoteId, int32_t localId, UnityEngine::InputSystem::Layouts::InputDeviceDescription description) noexcept : ::bs_hook::ValueTypeWrapper() {this->remoteId = remoteId;
this->localId = localId;
this->description = description;
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoteInputDevice::__set_remoteId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoteInputDevice::__get_remoteId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoteInputDevice::__set_localId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoteInputDevice::__get_localId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoteInputDevice::__set_description(UnityEngine::InputSystem::Layouts::InputDeviceDescription value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Layouts::InputDeviceDescription, 0x8>(this->__instance, std::forward<UnityEngine::InputSystem::Layouts::InputDeviceDescription>(value));
}
constexpr UnityEngine::InputSystem::Layouts::InputDeviceDescription UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoteInputDevice::__get_description() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Layouts::InputDeviceDescription, 0x8>(this->__instance);
}
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Subscriber.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Subscriber::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Subscriber::Dispose)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2913688;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Subscriber>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Subscriber._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Subscriber::*)()>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Subscriber::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2911e8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Subscriber>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IDisposable
constexpr  UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Subscriber::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Subscriber::__set_owner(UnityEngine::InputSystem::InputRemoting value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::InputRemoting, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::InputRemoting>(value));
}
constexpr UnityEngine::InputSystem::InputRemoting UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Subscriber::__get_owner() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::InputRemoting, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Subscriber::__set_observer(System::IObserver_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message> value)  {
::cordl_internals::setInstanceField<System::IObserver_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IObserver_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message>>(value));
}
constexpr System::IObserver_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message> UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Subscriber::__get_observer() const {
return ::cordl_internals::getInstanceField<System::IObserver_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Subscriber::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Subscriber>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Subscriber UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Subscriber::New_ctor()  {
UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Subscriber o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Subscriber>())};
return o;
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Subscriber::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Subscriber>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__ConnectMsg.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::InputSystem::InputRemoting)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__ConnectMsg::Process)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x29111e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__ConnectMsg>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputRemoting>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__ConnectMsg::Process(UnityEngine::InputSystem::InputRemoting receiver)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__ConnectMsg>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputRemoting>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, receiver);
}
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__StartSendingMsg.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::InputSystem::InputRemoting)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__StartSendingMsg::Process)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2911d80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__StartSendingMsg>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputRemoting>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__StartSendingMsg::Process(UnityEngine::InputSystem::InputRemoting receiver)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__StartSendingMsg>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputRemoting>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, receiver);
}
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__StopSendingMsg.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::InputSystem::InputRemoting)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__StopSendingMsg::Process)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2911d90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__StopSendingMsg>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputRemoting>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__StopSendingMsg::Process(UnityEngine::InputSystem::InputRemoting receiver)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__StopSendingMsg>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputRemoting>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, receiver);
}
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__DisconnectMsg.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::InputSystem::InputRemoting, UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__DisconnectMsg::Process)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x291122c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__DisconnectMsg>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputRemoting>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__DisconnectMsg::Process(UnityEngine::InputSystem::InputRemoting receiver, UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__DisconnectMsg>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputRemoting>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, receiver, msg);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "layoutJson", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "isOverride", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewLayoutMsg__Data::UnityEngine__InputSystem__InputRemoting__NewLayoutMsg__Data(::StringW name, ::StringW layoutJson, bool isOverride) noexcept : ::bs_hook::ValueTypeWrapper() {this->name = name;
this->layoutJson = layoutJson;
this->isOverride = isOverride;
}
constexpr void GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewLayoutMsg__Data::__set_name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewLayoutMsg__Data::__get_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewLayoutMsg__Data::__set_layoutJson(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewLayoutMsg__Data::__get_layoutJson() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewLayoutMsg__Data::__set_isOverride(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->__instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewLayoutMsg__Data::__get_isOverride() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->__instance);
}
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewLayoutMsg.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message> (*)(UnityEngine::InputSystem::InputRemoting, ::StringW)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewLayoutMsg::Create)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x2912204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewLayoutMsg>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputRemoting>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewLayoutMsg.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::InputSystem::InputRemoting, UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewLayoutMsg::Process)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x29112c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewLayoutMsg>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputRemoting>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message>::get()}
                        )));
    return ___internal_method;
  }
};
 System::Nullable_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message> UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewLayoutMsg::Create(UnityEngine::InputSystem::InputRemoting sender, ::StringW layoutName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewLayoutMsg>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputRemoting>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Nullable_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message>, false>(nullptr, ___internal_method, sender, layoutName);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewLayoutMsg::Process(UnityEngine::InputSystem::InputRemoting receiver, UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewLayoutMsg>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputRemoting>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, receiver, msg);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "layout", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "deviceId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "usages", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "description", ty: "UnityEngine::InputSystem::Layouts::InputDeviceDescription", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg__Data::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg__Data(::StringW name, ::StringW layout, int32_t deviceId, ::ArrayW<::StringW> usages, UnityEngine::InputSystem::Layouts::InputDeviceDescription description) noexcept : ::bs_hook::ValueTypeWrapper() {this->name = name;
this->layout = layout;
this->deviceId = deviceId;
this->usages = usages;
this->description = description;
}
constexpr void GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg__Data::__set_name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg__Data::__get_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg__Data::__set_layout(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg__Data::__get_layout() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg__Data::__set_deviceId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg__Data::__get_deviceId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
constexpr void GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg__Data::__set_usages(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x18>(this->__instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg__Data::__get_usages() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x18>(this->__instance);
}
constexpr void GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg__Data::__set_description(UnityEngine::InputSystem::Layouts::InputDeviceDescription value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Layouts::InputDeviceDescription, 0x20>(this->__instance, std::forward<UnityEngine::InputSystem::Layouts::InputDeviceDescription>(value));
}
constexpr UnityEngine::InputSystem::Layouts::InputDeviceDescription GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg__Data::__get_description() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Layouts::InputDeviceDescription, 0x20>(this->__instance);
}
//  Writing Method size for method: GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c::*)()>(&GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2913e88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c._Create_b__1_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c::*)(UnityEngine::InputSystem::Utilities::InternedString)>(&GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c::_Create_b__1_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2913e90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c>::get(),
                            "<Create>b__1_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c::__set___9(GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c value)  {
::cordl_internals::setStaticField<GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c>::get>(std::forward<GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c>(value));
}
 GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c::__get___9()  {
return ::cordl_internals::getStaticField<GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c>::get>();
}
 void GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c::__set___9__1_0(System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW> value)  {
::cordl_internals::setStaticField<System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW>, "<>9__1_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c>::get>(std::forward<System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW>>(value));
}
 System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW> GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c::__get___9__1_0()  {
return ::cordl_internals::getStaticField<System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW>, "<>9__1_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c>::get>();
}
 GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c::New_ctor()  {
GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c>())};
return o;
}
 void GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c::_Create_b__1_0(UnityEngine::InputSystem::Utilities::InternedString x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg____c>::get(),
                            "<Create>b__1_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, x);
}
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message (*)(UnityEngine::InputSystem::InputDevice)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg::Create)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x2912640;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::InputSystem::InputRemoting, UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg::Process)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0x29113b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputRemoting>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message>::get()}
                        )));
    return ___internal_method;
  }
};
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg::Create(UnityEngine::InputSystem::InputDevice device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message, false>(nullptr, ___internal_method, device);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg::Process(UnityEngine::InputSystem::InputRemoting receiver, UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewDeviceMsg>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputRemoting>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, receiver, msg);
}
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewEventsMsg.CreateResetEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message (*)(UnityEngine::InputSystem::InputDevice, bool)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewEventsMsg::CreateResetEvent)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2912d4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewEventsMsg>::get(),
                            "CreateResetEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewEventsMsg.CreateStateEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message (*)(UnityEngine::InputSystem::InputDevice)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewEventsMsg::CreateStateEvent)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2912840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewEventsMsg>::get(),
                            "CreateStateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewEventsMsg.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message (*)(void*, int32_t)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewEventsMsg::Create)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x29129a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewEventsMsg>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewEventsMsg.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::InputSystem::InputRemoting, UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewEventsMsg::Process)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x29118f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewEventsMsg>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputRemoting>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message>::get()}
                        )));
    return ___internal_method;
  }
};
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewEventsMsg::CreateResetEvent(UnityEngine::InputSystem::InputDevice device, bool isHardReset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewEventsMsg>::get(),
                            "CreateResetEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message, false>(nullptr, ___internal_method, device, isHardReset);
}
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewEventsMsg::CreateStateEvent(UnityEngine::InputSystem::InputDevice device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewEventsMsg>::get(),
                            "CreateStateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message, false>(nullptr, ___internal_method, device);
}
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewEventsMsg::Create(void* events, int32_t eventCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewEventsMsg>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message, false>(nullptr, ___internal_method, events, eventCount);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewEventsMsg::Process(UnityEngine::InputSystem::InputRemoting receiver, UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__NewEventsMsg>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputRemoting>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, receiver, msg);
}
// Ctor Parameters [CppParam { name: "deviceId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "usages", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("csnull") }]
constexpr GlobalNamespace::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg__Data::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg__Data(int32_t deviceId, ::ArrayW<::StringW> usages) noexcept : ::bs_hook::ValueTypeWrapper() {this->deviceId = deviceId;
this->usages = usages;
}
constexpr void GlobalNamespace::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg__Data::__set_deviceId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg__Data::__get_deviceId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg__Data::__set_usages(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x8>(this->__instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> GlobalNamespace::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg__Data::__get_usages() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x8>(this->__instance);
}
//  Writing Method size for method: GlobalNamespace::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c::*)()>(&GlobalNamespace::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2914050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c._Create_b__1_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c::*)(UnityEngine::InputSystem::Utilities::InternedString)>(&GlobalNamespace::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c::_Create_b__1_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2914058;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c>::get(),
                            "<Create>b__1_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c::__set___9(GlobalNamespace::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c value)  {
::cordl_internals::setStaticField<GlobalNamespace::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c>::get>(std::forward<GlobalNamespace::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c>(value));
}
 GlobalNamespace::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c GlobalNamespace::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c::__get___9()  {
return ::cordl_internals::getStaticField<GlobalNamespace::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c>::get>();
}
 void GlobalNamespace::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c::__set___9__1_0(System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW> value)  {
::cordl_internals::setStaticField<System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW>, "<>9__1_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c>::get>(std::forward<System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW>>(value));
}
 System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW> GlobalNamespace::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c::__get___9__1_0()  {
return ::cordl_internals::getStaticField<System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW>, "<>9__1_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c>::get>();
}
 GlobalNamespace::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c GlobalNamespace::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c::New_ctor()  {
GlobalNamespace::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c>())};
return o;
}
 void GlobalNamespace::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GlobalNamespace::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c::_Create_b__1_0(UnityEngine::InputSystem::Utilities::InternedString x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg____c>::get(),
                            "<Create>b__1_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, x);
}
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message (*)(UnityEngine::InputSystem::InputDevice)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg::Create)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x2912ba8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::InputSystem::InputRemoting, UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg::Process)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x29119b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputRemoting>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message>::get()}
                        )));
    return ___internal_method;
  }
};
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg::Create(UnityEngine::InputSystem::InputDevice device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message, false>(nullptr, ___internal_method, device);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg::Process(UnityEngine::InputSystem::InputRemoting receiver, UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__ChangeUsageMsg>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputRemoting>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, receiver, msg);
}
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoveDeviceMsg.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message (*)(UnityEngine::InputSystem::InputDevice)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoveDeviceMsg::Create)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2912b38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoveDeviceMsg>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoveDeviceMsg.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::InputSystem::InputRemoting, UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message)>(&UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoveDeviceMsg::Process)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2911cc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoveDeviceMsg>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputRemoting>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message>::get()}
                        )));
    return ___internal_method;
  }
};
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoveDeviceMsg::Create(UnityEngine::InputSystem::InputDevice device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoveDeviceMsg>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message, false>(nullptr, ___internal_method, device);
}
 void UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoveDeviceMsg::Process(UnityEngine::InputSystem::InputRemoting receiver, UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoveDeviceMsg>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputRemoting>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, receiver, msg);
}
//  Writing Method size for method: UnityEngine::InputSystem::InputRemoting.get_sending
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputRemoting::*)()>(&UnityEngine::InputSystem::InputRemoting::get_sending)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2910bac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            "get_sending",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputRemoting.set_sending
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputRemoting::*)(bool)>(&UnityEngine::InputSystem::InputRemoting::set_sending)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2910bb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            "set_sending",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputRemoting._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputRemoting::*)(UnityEngine::InputSystem::InputManager, bool)>(&UnityEngine::InputSystem::InputRemoting::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2910bd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputRemoting.StartSending
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputRemoting::*)()>(&UnityEngine::InputSystem::InputRemoting::StartSending)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2910c60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            "StartSending",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputRemoting.StopSending
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputRemoting::*)()>(&UnityEngine::InputSystem::InputRemoting::StopSending)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2910efc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            "StopSending",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputRemoting.System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputRemoting::*)(UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message)>(&UnityEngine::InputSystem::InputRemoting::System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnNext)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2911164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            "System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputRemoting.System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputRemoting::*)(System::Exception)>(&UnityEngine::InputSystem::InputRemoting::System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnError)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2911da0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            "System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputRemoting.System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputRemoting::*)()>(&UnityEngine::InputSystem::InputRemoting::System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnCompleted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2911da4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            "System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputRemoting.Subscribe
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IDisposable (UnityEngine::InputSystem::InputRemoting::*)(System::IObserver_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message>)>(&UnityEngine::InputSystem::InputRemoting::Subscribe)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2911da8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            "Subscribe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IObserver_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputRemoting.SendInitialMessages
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputRemoting::*)()>(&UnityEngine::InputSystem::InputRemoting::SendInitialMessages)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2910ee4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            "SendInitialMessages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputRemoting.SendAllGeneratedLayouts
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputRemoting::*)()>(&UnityEngine::InputSystem::InputRemoting::SendAllGeneratedLayouts)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2911e94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            "SendAllGeneratedLayouts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputRemoting.SendLayout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputRemoting::*)(::StringW)>(&UnityEngine::InputSystem::InputRemoting::SendLayout)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2912150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            "SendLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputRemoting.SendAllDevices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputRemoting::*)()>(&UnityEngine::InputSystem::InputRemoting::SendAllDevices)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x2911fe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            "SendAllDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputRemoting.SendDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputRemoting::*)(UnityEngine::InputSystem::InputDevice)>(&UnityEngine::InputSystem::InputRemoting::SendDevice)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x29125bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            "SendDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputRemoting.SendEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputRemoting::*)(UnityEngine::InputSystem::LowLevel::InputEventPtr, UnityEngine::InputSystem::InputDevice)>(&UnityEngine::InputSystem::InputRemoting::SendEvent)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x291293c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            "SendEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputRemoting.SendDeviceChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputRemoting::*)(UnityEngine::InputSystem::InputDevice, UnityEngine::InputSystem::InputDeviceChange)>(&UnityEngine::InputSystem::InputRemoting::SendDeviceChange)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2912a78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            "SendDeviceChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDeviceChange>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputRemoting.SendLayoutChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputRemoting::*)(::StringW, UnityEngine::InputSystem::InputControlLayoutChange)>(&UnityEngine::InputSystem::InputRemoting::SendLayoutChange)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2912dc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            "SendLayoutChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControlLayoutChange>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputRemoting.Send
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputRemoting::*)(UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message)>(&UnityEngine::InputSystem::InputRemoting::Send)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2912450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            "Send",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputRemoting.FindOrCreateSenderRecord
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::InputRemoting::*)(int32_t)>(&UnityEngine::InputSystem::InputRemoting::FindOrCreateSenderRecord)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2912ec8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            "FindOrCreateSenderRecord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputRemoting.BuildLayoutNamespace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::InternedString (*)(int32_t)>(&UnityEngine::InputSystem::InputRemoting::BuildLayoutNamespace)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2912f6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            "BuildLayoutNamespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputRemoting.FindLocalDeviceId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::InputRemoting::*)(int32_t, int32_t)>(&UnityEngine::InputSystem::InputRemoting::FindLocalDeviceId)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x291300c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            "FindLocalDeviceId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputRemoting.TryGetDeviceByRemoteId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::InputDevice (UnityEngine::InputSystem::InputRemoting::*)(int32_t, int32_t)>(&UnityEngine::InputSystem::InputRemoting::TryGetDeviceByRemoteId)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2913080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            "TryGetDeviceByRemoteId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputRemoting.get_manager
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::InputManager (UnityEngine::InputSystem::InputRemoting::*)()>(&UnityEngine::InputSystem::InputRemoting::get_manager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2913120;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            "get_manager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputRemoting.RemoveRemoteDevices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputRemoting::*)(int32_t)>(&UnityEngine::InputSystem::InputRemoting::RemoveRemoteDevices)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2913128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            "RemoveRemoteDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IObservable_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message>
constexpr  UnityEngine::InputSystem::InputRemoting::operator System::IObservable_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message>() const noexcept {
return System::IObservable_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IObserver_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message>
constexpr  UnityEngine::InputSystem::InputRemoting::operator System::IObserver_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message>() const noexcept {
return System::IObserver_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputRemoting::__set_m_Flags(UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Flags value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Flags, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Flags>(value));
}
constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Flags UnityEngine::InputSystem::InputRemoting::__get_m_Flags() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Flags, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputRemoting::__set_m_LocalManager(UnityEngine::InputSystem::InputManager value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::InputManager, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::InputManager>(value));
}
constexpr UnityEngine::InputSystem::InputManager UnityEngine::InputSystem::InputRemoting::__get_m_LocalManager() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::InputManager, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputRemoting::__set_m_Subscribers(::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Subscriber> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Subscriber>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Subscriber>>(value));
}
constexpr ::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Subscriber> UnityEngine::InputSystem::InputRemoting::__get_m_Subscribers() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Subscriber>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::InputRemoting::__set_m_Senders(::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoteSender> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoteSender>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoteSender>>(value));
}
constexpr ::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoteSender> UnityEngine::InputSystem::InputRemoting::__get_m_Senders() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__RemoteSender>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool UnityEngine::InputSystem::InputRemoting::get_sending()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            "get_sending",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::InputRemoting::set_sending(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            "set_sending",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
/// @param startSendingOnConnect: bool (default: false)
 UnityEngine::InputSystem::InputRemoting UnityEngine::InputSystem::InputRemoting::New_ctor(UnityEngine::InputSystem::InputManager manager, bool startSendingOnConnect)  {
UnityEngine::InputSystem::InputRemoting o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::InputSystem::InputRemoting>(manager, startSendingOnConnect))};
return o;
}
/// @param startSendingOnConnect: bool (default: false)
 void UnityEngine::InputSystem::InputRemoting::_ctor(UnityEngine::InputSystem::InputManager manager, bool startSendingOnConnect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, manager, startSendingOnConnect);
}
 void UnityEngine::InputSystem::InputRemoting::StartSending()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            "StartSending",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::InputRemoting::StopSending()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            "StopSending",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::InputRemoting::System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnNext(UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            "System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, msg);
}
 void UnityEngine::InputSystem::InputRemoting::System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnError(System::Exception error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            "System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, error);
}
 void UnityEngine::InputSystem::InputRemoting::System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            "System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::IDisposable UnityEngine::InputSystem::InputRemoting::Subscribe(System::IObserver_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message> observer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            "Subscribe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IObserver_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IDisposable, false>(const_cast<void*>(instance), ___internal_method, observer);
}
 void UnityEngine::InputSystem::InputRemoting::SendInitialMessages()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            "SendInitialMessages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::InputRemoting::SendAllGeneratedLayouts()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            "SendAllGeneratedLayouts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::InputRemoting::SendLayout(::StringW layoutName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            "SendLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, layoutName);
}
 void UnityEngine::InputSystem::InputRemoting::SendAllDevices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            "SendAllDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::InputRemoting::SendDevice(UnityEngine::InputSystem::InputDevice device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            "SendDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, device);
}
 void UnityEngine::InputSystem::InputRemoting::SendEvent(UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, UnityEngine::InputSystem::InputDevice device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            "SendEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventPtr, device);
}
 void UnityEngine::InputSystem::InputRemoting::SendDeviceChange(UnityEngine::InputSystem::InputDevice device, UnityEngine::InputSystem::InputDeviceChange change)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            "SendDeviceChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDeviceChange>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, device, change);
}
 void UnityEngine::InputSystem::InputRemoting::SendLayoutChange(::StringW layout, UnityEngine::InputSystem::InputControlLayoutChange change)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            "SendLayoutChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControlLayoutChange>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, layout, change);
}
 void UnityEngine::InputSystem::InputRemoting::Send(UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            "Send",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UnityEngine__InputSystem__InputRemoting__Message>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, msg);
}
 int32_t UnityEngine::InputSystem::InputRemoting::FindOrCreateSenderRecord(int32_t senderId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            "FindOrCreateSenderRecord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, senderId);
}
 UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::InputRemoting::BuildLayoutNamespace(int32_t senderId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            "BuildLayoutNamespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::InternedString, false>(nullptr, ___internal_method, senderId);
}
 int32_t UnityEngine::InputSystem::InputRemoting::FindLocalDeviceId(int32_t remoteDeviceId, int32_t senderIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            "FindLocalDeviceId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, remoteDeviceId, senderIndex);
}
 UnityEngine::InputSystem::InputDevice UnityEngine::InputSystem::InputRemoting::TryGetDeviceByRemoteId(int32_t remoteDeviceId, int32_t senderIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            "TryGetDeviceByRemoteId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::InputDevice, false>(const_cast<void*>(instance), ___internal_method, remoteDeviceId, senderIndex);
}
 UnityEngine::InputSystem::InputManager UnityEngine::InputSystem::InputRemoting::get_manager()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            "get_manager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::InputManager, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::InputRemoting::RemoveRemoteDevices(int32_t participantId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                            "RemoveRemoteDevices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, participantId);
}
template<typename TData>
 ::ArrayW<uint8_t> UnityEngine::InputSystem::InputRemoting::SerializeData(TData data)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                        "SerializeData",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TData>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TData>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TData>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, data);
}
template<typename TData>
 TData UnityEngine::InputSystem::InputRemoting::DeserializeData(::ArrayW<uint8_t> data)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputRemoting>::get(),
                        "DeserializeData",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TData>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TData>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<TData, false>(nullptr, ___internal_method, data);
}
