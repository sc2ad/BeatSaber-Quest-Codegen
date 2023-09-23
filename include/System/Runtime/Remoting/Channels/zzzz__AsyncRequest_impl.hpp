#pragma once
#include "System/Runtime/Remoting/Channels/zzzz__AsyncRequest_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
//  Writing Method size for method: System::Runtime::Remoting::Channels::AsyncRequest._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Channels::AsyncRequest::*)(System::Runtime::Remoting::Messaging::IMessage, System::Runtime::Remoting::Messaging::IMessageSink)>(&System::Runtime::Remoting::Channels::AsyncRequest::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2337ac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::AsyncRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessageSink>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::Remoting::Channels::AsyncRequest::__set_ReplySink(System::Runtime::Remoting::Messaging::IMessageSink value)  {
::cordl_internals::setInstanceField<System::Runtime::Remoting::Messaging::IMessageSink, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Remoting::Messaging::IMessageSink>(value));
}
constexpr System::Runtime::Remoting::Messaging::IMessageSink System::Runtime::Remoting::Channels::AsyncRequest::__get_ReplySink() const {
return ::cordl_internals::getInstanceField<System::Runtime::Remoting::Messaging::IMessageSink, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Remoting::Channels::AsyncRequest::__set_MsgRequest(System::Runtime::Remoting::Messaging::IMessage value)  {
::cordl_internals::setInstanceField<System::Runtime::Remoting::Messaging::IMessage, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Remoting::Messaging::IMessage>(value));
}
constexpr System::Runtime::Remoting::Messaging::IMessage System::Runtime::Remoting::Channels::AsyncRequest::__get_MsgRequest() const {
return ::cordl_internals::getInstanceField<System::Runtime::Remoting::Messaging::IMessage, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "msgRequest", ty: "System::Runtime::Remoting::Messaging::IMessage", modifiers: "", def_value: None }, CppParam { name: "replySink", ty: "System::Runtime::Remoting::Messaging::IMessageSink", modifiers: "", def_value: None }]
 System::Runtime::Remoting::Channels::AsyncRequest::AsyncRequest(System::Runtime::Remoting::Messaging::IMessage msgRequest, System::Runtime::Remoting::Messaging::IMessageSink replySink)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<AsyncRequest>(msgRequest, replySink))) {}
 void System::Runtime::Remoting::Channels::AsyncRequest::_ctor(System::Runtime::Remoting::Messaging::IMessage msgRequest, System::Runtime::Remoting::Messaging::IMessageSink replySink)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::AsyncRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessageSink>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, msgRequest, replySink);
}
