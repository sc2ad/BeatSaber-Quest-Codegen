#pragma once
#include "System/Runtime/Remoting/Contexts/zzzz__CrossContextChannel_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageCtrl_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__Context_def.hpp"
//  Writing Method size for method: System::Runtime::Remoting::Contexts::System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Contexts::System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink::*)(System::Runtime::Remoting::Messaging::IMessageSink, System::Runtime::Remoting::Contexts::Context, System::Runtime::Remoting::Messaging::IMessage)>(&System::Runtime::Remoting::Contexts::System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2333500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessageSink>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Contexts::Context>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Contexts::System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink.SyncProcessMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IMessage (System::Runtime::Remoting::Contexts::System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink::*)(System::Runtime::Remoting::Messaging::IMessage)>(&System::Runtime::Remoting::Contexts::System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink::SyncProcessMessage)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x2333544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink>::get(),
                            "SyncProcessMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Contexts::System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink.AsyncProcessMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IMessageCtrl (System::Runtime::Remoting::Contexts::System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink::*)(System::Runtime::Remoting::Messaging::IMessage, System::Runtime::Remoting::Messaging::IMessageSink)>(&System::Runtime::Remoting::Contexts::System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink::AsyncProcessMessage)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2333804;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink>::get(),
                            "AsyncProcessMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessageSink>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::Remoting::Messaging::IMessageSink
constexpr  System::Runtime::Remoting::Contexts::System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink::operator System::Runtime::Remoting::Messaging::IMessageSink() const noexcept {
return System::Runtime::Remoting::Messaging::IMessageSink(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Remoting::Contexts::System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink::__set__next(System::Runtime::Remoting::Messaging::IMessageSink value)  {
::cordl_internals::setInstanceField<System::Runtime::Remoting::Messaging::IMessageSink, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Remoting::Messaging::IMessageSink>(value));
}
constexpr System::Runtime::Remoting::Messaging::IMessageSink System::Runtime::Remoting::Contexts::System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink::__get__next() const {
return ::cordl_internals::getInstanceField<System::Runtime::Remoting::Messaging::IMessageSink, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Remoting::Contexts::System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink::__set__context(System::Runtime::Remoting::Contexts::Context value)  {
::cordl_internals::setInstanceField<System::Runtime::Remoting::Contexts::Context, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Remoting::Contexts::Context>(value));
}
constexpr System::Runtime::Remoting::Contexts::Context System::Runtime::Remoting::Contexts::System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink::__get__context() const {
return ::cordl_internals::getInstanceField<System::Runtime::Remoting::Contexts::Context, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Remoting::Contexts::System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink::__set__call(System::Runtime::Remoting::Messaging::IMessage value)  {
::cordl_internals::setInstanceField<System::Runtime::Remoting::Messaging::IMessage, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Remoting::Messaging::IMessage>(value));
}
constexpr System::Runtime::Remoting::Messaging::IMessage System::Runtime::Remoting::Contexts::System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink::__get__call() const {
return ::cordl_internals::getInstanceField<System::Runtime::Remoting::Messaging::IMessage, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "next", ty: "System::Runtime::Remoting::Messaging::IMessageSink", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Remoting::Contexts::Context", modifiers: "", def_value: None }, CppParam { name: "call", ty: "System::Runtime::Remoting::Messaging::IMessage", modifiers: "", def_value: None }]
 System::Runtime::Remoting::Contexts::System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink::System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink(System::Runtime::Remoting::Messaging::IMessageSink next, System::Runtime::Remoting::Contexts::Context context, System::Runtime::Remoting::Messaging::IMessage call)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink>(next, context, call))) {}
 void System::Runtime::Remoting::Contexts::System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink::_ctor(System::Runtime::Remoting::Messaging::IMessageSink next, System::Runtime::Remoting::Contexts::Context context, System::Runtime::Remoting::Messaging::IMessage call)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessageSink>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Contexts::Context>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, next, context, call);
}
 System::Runtime::Remoting::Messaging::IMessage System::Runtime::Remoting::Contexts::System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink::SyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink>::get(),
                            "SyncProcessMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Messaging::IMessage, false>(const_cast<void*>(instance), ___internal_method, msg);
}
 System::Runtime::Remoting::Messaging::IMessageCtrl System::Runtime::Remoting::Contexts::System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink::AsyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage msg, System::Runtime::Remoting::Messaging::IMessageSink replySink)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink>::get(),
                            "AsyncProcessMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessageSink>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Messaging::IMessageCtrl, false>(const_cast<void*>(instance), ___internal_method, msg, replySink);
}
//  Writing Method size for method: System::Runtime::Remoting::Contexts::CrossContextChannel.SyncProcessMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IMessage (System::Runtime::Remoting::Contexts::CrossContextChannel::*)(System::Runtime::Remoting::Messaging::IMessage)>(&System::Runtime::Remoting::Contexts::CrossContextChannel::SyncProcessMessage)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x2332cc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::CrossContextChannel>::get(),
                            "SyncProcessMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Contexts::CrossContextChannel.AsyncProcessMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IMessageCtrl (System::Runtime::Remoting::Contexts::CrossContextChannel::*)(System::Runtime::Remoting::Messaging::IMessage, System::Runtime::Remoting::Messaging::IMessageSink)>(&System::Runtime::Remoting::Contexts::CrossContextChannel::AsyncProcessMessage)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x23330b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::CrossContextChannel>::get(),
                            "AsyncProcessMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessageSink>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Contexts::CrossContextChannel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Contexts::CrossContextChannel::*)()>(&System::Runtime::Remoting::Contexts::CrossContextChannel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233353c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::CrossContextChannel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::Remoting::Messaging::IMessageSink
constexpr  System::Runtime::Remoting::Contexts::CrossContextChannel::operator System::Runtime::Remoting::Messaging::IMessageSink() const noexcept {
return System::Runtime::Remoting::Messaging::IMessageSink(::bs_hook::Il2CppWrapperType::instance);
}
 System::Runtime::Remoting::Messaging::IMessage System::Runtime::Remoting::Contexts::CrossContextChannel::SyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::CrossContextChannel>::get(),
                            "SyncProcessMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Messaging::IMessage, false>(const_cast<void*>(instance), ___internal_method, msg);
}
 System::Runtime::Remoting::Messaging::IMessageCtrl System::Runtime::Remoting::Contexts::CrossContextChannel::AsyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage msg, System::Runtime::Remoting::Messaging::IMessageSink replySink)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::CrossContextChannel>::get(),
                            "AsyncProcessMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessageSink>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Messaging::IMessageCtrl, false>(const_cast<void*>(instance), ___internal_method, msg, replySink);
}
// Ctor Parameters []
 System::Runtime::Remoting::Contexts::CrossContextChannel::CrossContextChannel()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CrossContextChannel>())) {}
 void System::Runtime::Remoting::Contexts::CrossContextChannel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::CrossContextChannel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
