#pragma once
namespace {
#include "System/Runtime/Remoting/Messaging/zzzz__ClientContextTerminatorSink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageCtrl_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__Context_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink::*)(::System::Runtime::Remoting::Contexts::Context)>(&::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2331d64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Contexts::Context>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink.SyncProcessMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessage (::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink::*)(::System::Runtime::Remoting::Messaging::IMessage)>(&::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink::SyncProcessMessage)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x233e8e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink>::get(),
                            "SyncProcessMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink.AsyncProcessMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessageCtrl (::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink::*)(::System::Runtime::Remoting::Messaging::IMessage, ::System::Runtime::Remoting::Messaging::IMessageSink)>(&::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink::AsyncProcessMessage)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x233eab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink>::get(),
                            "AsyncProcessMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessageSink>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::Remoting::Messaging::IMessageSink
constexpr  ::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink::operator ::System::Runtime::Remoting::Messaging::IMessageSink() const noexcept {
return ::System::Runtime::Remoting::Messaging::IMessageSink(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink::__set__context(::System::Runtime::Remoting::Contexts::Context value)  {
::cordl_internals::setInstanceField<::System::Runtime::Remoting::Contexts::Context, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Runtime::Remoting::Contexts::Context>(value));
}
constexpr ::System::Runtime::Remoting::Contexts::Context ::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink::__get__context() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Remoting::Contexts::Context, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "ctx", ty: "::System::Runtime::Remoting::Contexts::Context", modifiers: "", def_value: None }]
 ::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink::ClientContextTerminatorSink(::System::Runtime::Remoting::Contexts::Context ctx)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ClientContextTerminatorSink>(ctx))) {}
 void ::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink::_ctor(::System::Runtime::Remoting::Contexts::Context ctx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Contexts::Context>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ctx);
}
 ::System::Runtime::Remoting::Messaging::IMessage ::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink::SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink>::get(),
                            "SyncProcessMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage, false>(const_cast<void*>(instance), ___internal_method, msg);
}
 ::System::Runtime::Remoting::Messaging::IMessageCtrl ::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink::AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage msg, ::System::Runtime::Remoting::Messaging::IMessageSink replySink)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink>::get(),
                            "AsyncProcessMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessageSink>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageCtrl, false>(const_cast<void*>(instance), ___internal_method, msg, replySink);
}
} // end anonymous namespace
