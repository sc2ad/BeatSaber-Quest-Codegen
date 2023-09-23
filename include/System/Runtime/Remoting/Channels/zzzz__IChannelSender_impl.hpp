#pragma once
#include "System/Runtime/Remoting/Channels/zzzz__IChannelSender_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/Runtime/Remoting/Channels/zzzz__IChannel_def.hpp"
//  Writing Method size for method: System::Runtime::Remoting::Channels::IChannelSender.CreateMessageSink
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IMessageSink (System::Runtime::Remoting::Channels::IChannelSender::*)(::StringW, ::bs_hook::Il2CppWrapperType, ByRef<::StringW>)>(&System::Runtime::Remoting::Channels::IChannelSender::CreateMessageSink)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Remoting::Channels::IChannelSender),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::IChannelSender>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::Remoting::Channels::IChannel
constexpr  System::Runtime::Remoting::Channels::IChannelSender::operator System::Runtime::Remoting::Channels::IChannel() const noexcept {
return System::Runtime::Remoting::Channels::IChannel(::bs_hook::Il2CppWrapperType::instance);
}
 System::Runtime::Remoting::Messaging::IMessageSink System::Runtime::Remoting::Channels::IChannelSender::CreateMessageSink(::StringW url, ::bs_hook::Il2CppWrapperType remoteChannelData, ByRef<::StringW> objectURI)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::IChannelSender>::get(),
                            "CreateMessageSink",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Messaging::IMessageSink, false>(const_cast<void*>(instance), ___internal_method, url, remoteChannelData, objectURI);
}
