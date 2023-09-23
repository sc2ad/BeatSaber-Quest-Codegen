#pragma once
#include "System/Runtime/Remoting/zzzz__DisposerReplySink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageCtrl_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: System::Runtime::Remoting::DisposerReplySink._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::DisposerReplySink::*)(System::Runtime::Remoting::Messaging::IMessageSink, System::IDisposable)>(&System::Runtime::Remoting::DisposerReplySink::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2328120;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::DisposerReplySink>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessageSink>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IDisposable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::DisposerReplySink.SyncProcessMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IMessage (System::Runtime::Remoting::DisposerReplySink::*)(System::Runtime::Remoting::Messaging::IMessage)>(&System::Runtime::Remoting::DisposerReplySink::SyncProcessMessage)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x232814c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::DisposerReplySink>::get(),
                            "SyncProcessMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::DisposerReplySink.AsyncProcessMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IMessageCtrl (System::Runtime::Remoting::DisposerReplySink::*)(System::Runtime::Remoting::Messaging::IMessage, System::Runtime::Remoting::Messaging::IMessageSink)>(&System::Runtime::Remoting::DisposerReplySink::AsyncProcessMessage)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2328268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::DisposerReplySink>::get(),
                            "AsyncProcessMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessageSink>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::Remoting::Messaging::IMessageSink
constexpr  System::Runtime::Remoting::DisposerReplySink::operator System::Runtime::Remoting::Messaging::IMessageSink() const noexcept {
return System::Runtime::Remoting::Messaging::IMessageSink(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Remoting::DisposerReplySink::__set__next(System::Runtime::Remoting::Messaging::IMessageSink value)  {
::cordl_internals::setInstanceField<System::Runtime::Remoting::Messaging::IMessageSink, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Remoting::Messaging::IMessageSink>(value));
}
constexpr System::Runtime::Remoting::Messaging::IMessageSink System::Runtime::Remoting::DisposerReplySink::__get__next() const {
return ::cordl_internals::getInstanceField<System::Runtime::Remoting::Messaging::IMessageSink, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Remoting::DisposerReplySink::__set__disposable(System::IDisposable value)  {
::cordl_internals::setInstanceField<System::IDisposable, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IDisposable>(value));
}
constexpr System::IDisposable System::Runtime::Remoting::DisposerReplySink::__get__disposable() const {
return ::cordl_internals::getInstanceField<System::IDisposable, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "next", ty: "System::Runtime::Remoting::Messaging::IMessageSink", modifiers: "", def_value: None }, CppParam { name: "disposable", ty: "System::IDisposable", modifiers: "", def_value: None }]
 System::Runtime::Remoting::DisposerReplySink::DisposerReplySink(System::Runtime::Remoting::Messaging::IMessageSink next, System::IDisposable disposable)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<DisposerReplySink>(next, disposable))) {}
 void System::Runtime::Remoting::DisposerReplySink::_ctor(System::Runtime::Remoting::Messaging::IMessageSink next, System::IDisposable disposable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::DisposerReplySink>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessageSink>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IDisposable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, next, disposable);
}
 System::Runtime::Remoting::Messaging::IMessage System::Runtime::Remoting::DisposerReplySink::SyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::DisposerReplySink>::get(),
                            "SyncProcessMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Messaging::IMessage, false>(const_cast<void*>(instance), ___internal_method, msg);
}
 System::Runtime::Remoting::Messaging::IMessageCtrl System::Runtime::Remoting::DisposerReplySink::AsyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage msg, System::Runtime::Remoting::Messaging::IMessageSink replySink)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::DisposerReplySink>::get(),
                            "AsyncProcessMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessageSink>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Messaging::IMessageCtrl, false>(const_cast<void*>(instance), ___internal_method, msg, replySink);
}
