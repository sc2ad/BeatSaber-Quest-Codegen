#pragma once
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageCtrl_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
//  Writing Method size for method: System::Runtime::Remoting::Messaging::IMessageSink.SyncProcessMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IMessage (System::Runtime::Remoting::Messaging::IMessageSink::*)(System::Runtime::Remoting::Messaging::IMessage)>(&System::Runtime::Remoting::Messaging::IMessageSink::SyncProcessMessage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Remoting::Messaging::IMessageSink),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::IMessageSink>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Messaging::IMessageSink.AsyncProcessMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IMessageCtrl (System::Runtime::Remoting::Messaging::IMessageSink::*)(System::Runtime::Remoting::Messaging::IMessage, System::Runtime::Remoting::Messaging::IMessageSink)>(&System::Runtime::Remoting::Messaging::IMessageSink::AsyncProcessMessage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Remoting::Messaging::IMessageSink),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::IMessageSink>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 System::Runtime::Remoting::Messaging::IMessage System::Runtime::Remoting::Messaging::IMessageSink::SyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::IMessageSink>::get(),
                            "SyncProcessMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Messaging::IMessage, false>(const_cast<void*>(instance), ___internal_method, msg);
}
 System::Runtime::Remoting::Messaging::IMessageCtrl System::Runtime::Remoting::Messaging::IMessageSink::AsyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage msg, System::Runtime::Remoting::Messaging::IMessageSink replySink)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Messaging::IMessageSink>::get(),
                            "AsyncProcessMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessageSink>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Messaging::IMessageCtrl, false>(const_cast<void*>(instance), ___internal_method, msg, replySink);
}
