#pragma once
#include "System/Runtime/Remoting/Messaging/zzzz__EnvoyTerminatorSink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageCtrl_def.hpp"
//  Writing Method size for method: System::Runtime::Remoting::Messaging::EnvoyTerminatorSink.SyncProcessMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IMessage (System::Runtime::Remoting::Messaging::EnvoyTerminatorSink::*)(System::Runtime::Remoting::Messaging::IMessage)>(&System::Runtime::Remoting::Messaging::EnvoyTerminatorSink::SyncProcessMessage)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x23411ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::EnvoyTerminatorSink>::get(),
                            "SyncProcessMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Messaging::EnvoyTerminatorSink.AsyncProcessMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IMessageCtrl (System::Runtime::Remoting::Messaging::EnvoyTerminatorSink::*)(System::Runtime::Remoting::Messaging::IMessage, System::Runtime::Remoting::Messaging::IMessageSink)>(&System::Runtime::Remoting::Messaging::EnvoyTerminatorSink::AsyncProcessMessage)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2341260;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::EnvoyTerminatorSink>::get(),
                            "AsyncProcessMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessageSink>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Messaging::EnvoyTerminatorSink._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::EnvoyTerminatorSink::*)()>(&System::Runtime::Remoting::Messaging::EnvoyTerminatorSink::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2341320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::EnvoyTerminatorSink>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::Remoting::Messaging::IMessageSink
constexpr  System::Runtime::Remoting::Messaging::EnvoyTerminatorSink::operator System::Runtime::Remoting::Messaging::IMessageSink() const noexcept {
return System::Runtime::Remoting::Messaging::IMessageSink(::bs_hook::Il2CppWrapperType::instance);
}
 void System::Runtime::Remoting::Messaging::EnvoyTerminatorSink::__set_Instance(System::Runtime::Remoting::Messaging::EnvoyTerminatorSink value)  {
::cordl_internals::setStaticField<System::Runtime::Remoting::Messaging::EnvoyTerminatorSink, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::EnvoyTerminatorSink>::get>(std::forward<System::Runtime::Remoting::Messaging::EnvoyTerminatorSink>(value));
}
 System::Runtime::Remoting::Messaging::EnvoyTerminatorSink System::Runtime::Remoting::Messaging::EnvoyTerminatorSink::__get_Instance()  {
return ::cordl_internals::getStaticField<System::Runtime::Remoting::Messaging::EnvoyTerminatorSink, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::EnvoyTerminatorSink>::get>();
}
 System::Runtime::Remoting::Messaging::IMessage System::Runtime::Remoting::Messaging::EnvoyTerminatorSink::SyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::EnvoyTerminatorSink>::get(),
                            "SyncProcessMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Messaging::IMessage, false>(const_cast<void*>(instance), ___internal_method, msg);
}
 System::Runtime::Remoting::Messaging::IMessageCtrl System::Runtime::Remoting::Messaging::EnvoyTerminatorSink::AsyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage msg, System::Runtime::Remoting::Messaging::IMessageSink replySink)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::EnvoyTerminatorSink>::get(),
                            "AsyncProcessMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessageSink>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Messaging::IMessageCtrl, false>(const_cast<void*>(instance), ___internal_method, msg, replySink);
}
// Ctor Parameters []
 System::Runtime::Remoting::Messaging::EnvoyTerminatorSink::EnvoyTerminatorSink()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<EnvoyTerminatorSink>())) {}
 void System::Runtime::Remoting::Messaging::EnvoyTerminatorSink::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::EnvoyTerminatorSink>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
