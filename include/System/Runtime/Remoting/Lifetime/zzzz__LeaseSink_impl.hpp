#pragma once
#include "System/Runtime/Remoting/Lifetime/zzzz__LeaseSink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageCtrl_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
//  Writing Method size for method: System::Runtime::Remoting::Lifetime::LeaseSink._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Lifetime::LeaseSink::*)(System::Runtime::Remoting::Messaging::IMessageSink)>(&System::Runtime::Remoting::Lifetime::LeaseSink::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x232fa90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Lifetime::LeaseSink>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessageSink>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Lifetime::LeaseSink.SyncProcessMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IMessage (System::Runtime::Remoting::Lifetime::LeaseSink::*)(System::Runtime::Remoting::Messaging::IMessage)>(&System::Runtime::Remoting::Lifetime::LeaseSink::SyncProcessMessage)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x232fab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Lifetime::LeaseSink>::get(),
                            "SyncProcessMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Lifetime::LeaseSink.AsyncProcessMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IMessageCtrl (System::Runtime::Remoting::Lifetime::LeaseSink::*)(System::Runtime::Remoting::Messaging::IMessage, System::Runtime::Remoting::Messaging::IMessageSink)>(&System::Runtime::Remoting::Lifetime::LeaseSink::AsyncProcessMessage)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x232fdf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Lifetime::LeaseSink>::get(),
                            "AsyncProcessMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessageSink>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Lifetime::LeaseSink.RenewLease
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Lifetime::LeaseSink::*)(System::Runtime::Remoting::Messaging::IMessage)>(&System::Runtime::Remoting::Lifetime::LeaseSink::RenewLease)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x232fb68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Lifetime::LeaseSink>::get(),
                            "RenewLease",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::Remoting::Messaging::IMessageSink
constexpr  System::Runtime::Remoting::Lifetime::LeaseSink::operator System::Runtime::Remoting::Messaging::IMessageSink() const noexcept {
return System::Runtime::Remoting::Messaging::IMessageSink(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Remoting::Lifetime::LeaseSink::__set__nextSink(System::Runtime::Remoting::Messaging::IMessageSink value)  {
::cordl_internals::setInstanceField<System::Runtime::Remoting::Messaging::IMessageSink, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Remoting::Messaging::IMessageSink>(value));
}
constexpr System::Runtime::Remoting::Messaging::IMessageSink System::Runtime::Remoting::Lifetime::LeaseSink::__get__nextSink() const {
return ::cordl_internals::getInstanceField<System::Runtime::Remoting::Messaging::IMessageSink, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "nextSink", ty: "System::Runtime::Remoting::Messaging::IMessageSink", modifiers: "", def_value: None }]
 System::Runtime::Remoting::Lifetime::LeaseSink::LeaseSink(System::Runtime::Remoting::Messaging::IMessageSink nextSink)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<LeaseSink>(nextSink))) {}
 void System::Runtime::Remoting::Lifetime::LeaseSink::_ctor(System::Runtime::Remoting::Messaging::IMessageSink nextSink)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Lifetime::LeaseSink>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessageSink>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, nextSink);
}
 System::Runtime::Remoting::Messaging::IMessage System::Runtime::Remoting::Lifetime::LeaseSink::SyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Lifetime::LeaseSink>::get(),
                            "SyncProcessMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Messaging::IMessage, false>(const_cast<void*>(instance), ___internal_method, msg);
}
 System::Runtime::Remoting::Messaging::IMessageCtrl System::Runtime::Remoting::Lifetime::LeaseSink::AsyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage msg, System::Runtime::Remoting::Messaging::IMessageSink replySink)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Lifetime::LeaseSink>::get(),
                            "AsyncProcessMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessageSink>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Messaging::IMessageCtrl, false>(const_cast<void*>(instance), ___internal_method, msg, replySink);
}
 void System::Runtime::Remoting::Lifetime::LeaseSink::RenewLease(System::Runtime::Remoting::Messaging::IMessage msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Lifetime::LeaseSink>::get(),
                            "RenewLease",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, msg);
}
