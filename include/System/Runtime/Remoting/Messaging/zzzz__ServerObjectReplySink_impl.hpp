#pragma once
namespace {
#include "System/Runtime/Remoting/Messaging/zzzz__ServerObjectReplySink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageCtrl_def.hpp"
#include "System/Runtime/Remoting/zzzz__ServerIdentity_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ServerObjectReplySink._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::ServerObjectReplySink::*)(::System::Runtime::Remoting::ServerIdentity, ::System::Runtime::Remoting::Messaging::IMessageSink)>(&::System::Runtime::Remoting::Messaging::ServerObjectReplySink::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23476b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ServerObjectReplySink>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ServerIdentity>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessageSink>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ServerObjectReplySink.SyncProcessMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessage (::System::Runtime::Remoting::Messaging::ServerObjectReplySink::*)(::System::Runtime::Remoting::Messaging::IMessage)>(&::System::Runtime::Remoting::Messaging::ServerObjectReplySink::SyncProcessMessage)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x23476e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ServerObjectReplySink>::get(),
                            "SyncProcessMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ServerObjectReplySink.AsyncProcessMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessageCtrl (::System::Runtime::Remoting::Messaging::ServerObjectReplySink::*)(::System::Runtime::Remoting::Messaging::IMessage, ::System::Runtime::Remoting::Messaging::IMessageSink)>(&::System::Runtime::Remoting::Messaging::ServerObjectReplySink::AsyncProcessMessage)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x23477ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ServerObjectReplySink>::get(),
                            "AsyncProcessMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessageSink>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::Remoting::Messaging::IMessageSink
constexpr  ::System::Runtime::Remoting::Messaging::ServerObjectReplySink::operator ::System::Runtime::Remoting::Messaging::IMessageSink() const noexcept {
return ::System::Runtime::Remoting::Messaging::IMessageSink(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::Messaging::ServerObjectReplySink::__set__replySink(::System::Runtime::Remoting::Messaging::IMessageSink value)  {
::cordl_internals::setInstanceField<::System::Runtime::Remoting::Messaging::IMessageSink, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Runtime::Remoting::Messaging::IMessageSink>(value));
}
constexpr ::System::Runtime::Remoting::Messaging::IMessageSink ::System::Runtime::Remoting::Messaging::ServerObjectReplySink::__get__replySink() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Remoting::Messaging::IMessageSink, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::Messaging::ServerObjectReplySink::__set__identity(::System::Runtime::Remoting::ServerIdentity value)  {
::cordl_internals::setInstanceField<::System::Runtime::Remoting::ServerIdentity, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Runtime::Remoting::ServerIdentity>(value));
}
constexpr ::System::Runtime::Remoting::ServerIdentity ::System::Runtime::Remoting::Messaging::ServerObjectReplySink::__get__identity() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Remoting::ServerIdentity, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "identity", ty: "::System::Runtime::Remoting::ServerIdentity", modifiers: "", def_value: None }, CppParam { name: "replySink", ty: "::System::Runtime::Remoting::Messaging::IMessageSink", modifiers: "", def_value: None }]
 ::System::Runtime::Remoting::Messaging::ServerObjectReplySink::ServerObjectReplySink(::System::Runtime::Remoting::ServerIdentity identity, ::System::Runtime::Remoting::Messaging::IMessageSink replySink)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ServerObjectReplySink>(identity, replySink))) {}
 void ::System::Runtime::Remoting::Messaging::ServerObjectReplySink::_ctor(::System::Runtime::Remoting::ServerIdentity identity, ::System::Runtime::Remoting::Messaging::IMessageSink replySink)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ServerObjectReplySink>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ServerIdentity>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessageSink>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, identity, replySink);
}
 ::System::Runtime::Remoting::Messaging::IMessage ::System::Runtime::Remoting::Messaging::ServerObjectReplySink::SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ServerObjectReplySink>::get(),
                            "SyncProcessMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage, false>(const_cast<void*>(instance), ___internal_method, msg);
}
 ::System::Runtime::Remoting::Messaging::IMessageCtrl ::System::Runtime::Remoting::Messaging::ServerObjectReplySink::AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage msg, ::System::Runtime::Remoting::Messaging::IMessageSink replySink)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ServerObjectReplySink>::get(),
                            "AsyncProcessMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessageSink>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageCtrl, false>(const_cast<void*>(instance), ___internal_method, msg, replySink);
}
} // end anonymous namespace
