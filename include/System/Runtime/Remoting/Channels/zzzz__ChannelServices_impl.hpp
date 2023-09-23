#pragma once
#include "System/Runtime/Remoting/Channels/zzzz__ChannelServices_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/Runtime/Remoting/Channels/zzzz__IChannelSender_def.hpp"
#include "System/Runtime/Remoting/zzzz__ProviderData_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/Runtime/Remoting/Channels/zzzz__IChannel_def.hpp"
#include "System/Runtime/Remoting/zzzz__ChannelData_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__CrossContextChannel_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__ReturnMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
//  Writing Method size for method: System::Runtime::Remoting::Channels::ChannelServices.get_CrossContextChannel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Contexts::CrossContextChannel (*)()>(&System::Runtime::Remoting::Channels::ChannelServices::get_CrossContextChannel)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2333914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::ChannelServices>::get(),
                            "get_CrossContextChannel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Channels::ChannelServices.CreateClientChannelSinkChain
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IMessageSink (*)(::StringW, ::bs_hook::Il2CppWrapperType, ByRef<::StringW>)>(&System::Runtime::Remoting::Channels::ChannelServices::CreateClientChannelSinkChain)> {
  constexpr static std::size_t size = 0x87c;
  constexpr static std::size_t addrs = 0x233396c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::ChannelServices>::get(),
                            "CreateClientChannelSinkChain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Channels::ChannelServices.CreateClientChannelSinkChain
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IMessageSink (*)(System::Runtime::Remoting::Channels::IChannelSender, ::StringW, ::ArrayW<::bs_hook::Il2CppWrapperType>, ByRef<::StringW>)>(&System::Runtime::Remoting::Channels::ChannelServices::CreateClientChannelSinkChain)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x23341e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::ChannelServices>::get(),
                            "CreateClientChannelSinkChain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Channels::IChannelSender>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Channels::ChannelServices.RegisterChannel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Runtime::Remoting::Channels::IChannel)>(&System::Runtime::Remoting::Channels::ChannelServices::RegisterChannel)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23343f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::ChannelServices>::get(),
                            "RegisterChannel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Channels::IChannel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Channels::ChannelServices.RegisterChannel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Runtime::Remoting::Channels::IChannel, bool)>(&System::Runtime::Remoting::Channels::ChannelServices::RegisterChannel)> {
  constexpr static std::size_t size = 0x87c;
  constexpr static std::size_t addrs = 0x2334448;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::ChannelServices>::get(),
                            "RegisterChannel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Channels::IChannel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Channels::ChannelServices.RegisterChannelConfig
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Runtime::Remoting::ChannelData)>(&System::Runtime::Remoting::Channels::ChannelServices::RegisterChannelConfig)> {
  constexpr static std::size_t size = 0xbe8;
  constexpr static std::size_t addrs = 0x2334cc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::ChannelServices>::get(),
                            "RegisterChannelConfig",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::ChannelData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Channels::ChannelServices.CreateProvider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(System::Runtime::Remoting::ProviderData)>(&System::Runtime::Remoting::Channels::ChannelServices::CreateProvider)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x23358ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::ChannelServices>::get(),
                            "CreateProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::ProviderData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Channels::ChannelServices.SyncDispatchMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IMessage (*)(System::Runtime::Remoting::Messaging::IMessage)>(&System::Runtime::Remoting::Channels::ChannelServices::SyncDispatchMessage)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2335bc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::ChannelServices>::get(),
                            "SyncDispatchMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Channels::ChannelServices.CheckIncomingMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::ReturnMessage (*)(System::Runtime::Remoting::Messaging::IMessage)>(&System::Runtime::Remoting::Channels::ChannelServices::CheckIncomingMessage)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x2335c6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::ChannelServices>::get(),
                            "CheckIncomingMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Channels::ChannelServices.CheckReturnMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IMessage (*)(System::Runtime::Remoting::Messaging::IMessage, System::Runtime::Remoting::Messaging::IMessage)>(&System::Runtime::Remoting::Channels::ChannelServices::CheckReturnMessage)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x2335f14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::ChannelServices>::get(),
                            "CheckReturnMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Channels::ChannelServices.IsLocalCall
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Runtime::Remoting::Messaging::IMessage)>(&System::Runtime::Remoting::Channels::ChannelServices::IsLocalCall)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23360e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::ChannelServices>::get(),
                            "IsLocalCall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Channels::ChannelServices.GetCurrentChannelInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::bs_hook::Il2CppWrapperType> (*)()>(&System::Runtime::Remoting::Channels::ChannelServices::GetCurrentChannelInfo)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x2336200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::ChannelServices>::get(),
                            "GetCurrentChannelInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void System::Runtime::Remoting::Channels::ChannelServices::__set_registeredChannels(System::Collections::ArrayList value)  {
::cordl_internals::setStaticField<System::Collections::ArrayList, "registeredChannels", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::ChannelServices>::get>(std::forward<System::Collections::ArrayList>(value));
}
 System::Collections::ArrayList System::Runtime::Remoting::Channels::ChannelServices::__get_registeredChannels()  {
return ::cordl_internals::getStaticField<System::Collections::ArrayList, "registeredChannels", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::ChannelServices>::get>();
}
 void System::Runtime::Remoting::Channels::ChannelServices::__set_delayedClientChannels(System::Collections::ArrayList value)  {
::cordl_internals::setStaticField<System::Collections::ArrayList, "delayedClientChannels", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::ChannelServices>::get>(std::forward<System::Collections::ArrayList>(value));
}
 System::Collections::ArrayList System::Runtime::Remoting::Channels::ChannelServices::__get_delayedClientChannels()  {
return ::cordl_internals::getStaticField<System::Collections::ArrayList, "delayedClientChannels", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::ChannelServices>::get>();
}
 void System::Runtime::Remoting::Channels::ChannelServices::__set__crossContextSink(System::Runtime::Remoting::Contexts::CrossContextChannel value)  {
::cordl_internals::setStaticField<System::Runtime::Remoting::Contexts::CrossContextChannel, "_crossContextSink", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::ChannelServices>::get>(std::forward<System::Runtime::Remoting::Contexts::CrossContextChannel>(value));
}
 System::Runtime::Remoting::Contexts::CrossContextChannel System::Runtime::Remoting::Channels::ChannelServices::__get__crossContextSink()  {
return ::cordl_internals::getStaticField<System::Runtime::Remoting::Contexts::CrossContextChannel, "_crossContextSink", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::ChannelServices>::get>();
}
 void System::Runtime::Remoting::Channels::ChannelServices::__set_CrossContextUrl(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "CrossContextUrl", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::ChannelServices>::get>(std::forward<::StringW>(value));
}
 ::StringW System::Runtime::Remoting::Channels::ChannelServices::__get_CrossContextUrl()  {
return ::cordl_internals::getStaticField<::StringW, "CrossContextUrl", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::ChannelServices>::get>();
}
 void System::Runtime::Remoting::Channels::ChannelServices::__set_oldStartModeTypes(System::Collections::IList value)  {
::cordl_internals::setStaticField<System::Collections::IList, "oldStartModeTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::ChannelServices>::get>(std::forward<System::Collections::IList>(value));
}
 System::Collections::IList System::Runtime::Remoting::Channels::ChannelServices::__get_oldStartModeTypes()  {
return ::cordl_internals::getStaticField<System::Collections::IList, "oldStartModeTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::ChannelServices>::get>();
}
 System::Runtime::Remoting::Contexts::CrossContextChannel System::Runtime::Remoting::Channels::ChannelServices::get_CrossContextChannel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::ChannelServices>::get(),
                            "get_CrossContextChannel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Contexts::CrossContextChannel, false>(nullptr, ___internal_method);
}
 System::Runtime::Remoting::Messaging::IMessageSink System::Runtime::Remoting::Channels::ChannelServices::CreateClientChannelSinkChain(::StringW url, ::bs_hook::Il2CppWrapperType remoteChannelData, ByRef<::StringW> objectUri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::ChannelServices>::get(),
                            "CreateClientChannelSinkChain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Messaging::IMessageSink, false>(nullptr, ___internal_method, url, remoteChannelData, objectUri);
}
 System::Runtime::Remoting::Messaging::IMessageSink System::Runtime::Remoting::Channels::ChannelServices::CreateClientChannelSinkChain(System::Runtime::Remoting::Channels::IChannelSender sender, ::StringW url, ::ArrayW<::bs_hook::Il2CppWrapperType> channelDataArray, ByRef<::StringW> objectUri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::ChannelServices>::get(),
                            "CreateClientChannelSinkChain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Channels::IChannelSender>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Messaging::IMessageSink, false>(nullptr, ___internal_method, sender, url, channelDataArray, objectUri);
}
 void System::Runtime::Remoting::Channels::ChannelServices::RegisterChannel(System::Runtime::Remoting::Channels::IChannel chnl)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::ChannelServices>::get(),
                            "RegisterChannel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Channels::IChannel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, chnl);
}
 void System::Runtime::Remoting::Channels::ChannelServices::RegisterChannel(System::Runtime::Remoting::Channels::IChannel chnl, bool ensureSecurity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::ChannelServices>::get(),
                            "RegisterChannel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Channels::IChannel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, chnl, ensureSecurity);
}
 void System::Runtime::Remoting::Channels::ChannelServices::RegisterChannelConfig(System::Runtime::Remoting::ChannelData channel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::ChannelServices>::get(),
                            "RegisterChannelConfig",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::ChannelData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, channel);
}
 ::bs_hook::Il2CppWrapperType System::Runtime::Remoting::Channels::ChannelServices::CreateProvider(System::Runtime::Remoting::ProviderData prov)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::ChannelServices>::get(),
                            "CreateProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::ProviderData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, prov);
}
 System::Runtime::Remoting::Messaging::IMessage System::Runtime::Remoting::Channels::ChannelServices::SyncDispatchMessage(System::Runtime::Remoting::Messaging::IMessage msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::ChannelServices>::get(),
                            "SyncDispatchMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Messaging::IMessage, false>(nullptr, ___internal_method, msg);
}
 System::Runtime::Remoting::Messaging::ReturnMessage System::Runtime::Remoting::Channels::ChannelServices::CheckIncomingMessage(System::Runtime::Remoting::Messaging::IMessage msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::ChannelServices>::get(),
                            "CheckIncomingMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Messaging::ReturnMessage, false>(nullptr, ___internal_method, msg);
}
 System::Runtime::Remoting::Messaging::IMessage System::Runtime::Remoting::Channels::ChannelServices::CheckReturnMessage(System::Runtime::Remoting::Messaging::IMessage callMsg, System::Runtime::Remoting::Messaging::IMessage retMsg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::ChannelServices>::get(),
                            "CheckReturnMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Messaging::IMessage, false>(nullptr, ___internal_method, callMsg, retMsg);
}
 bool System::Runtime::Remoting::Channels::ChannelServices::IsLocalCall(System::Runtime::Remoting::Messaging::IMessage callMsg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::ChannelServices>::get(),
                            "IsLocalCall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Messaging::IMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, callMsg);
}
 ::ArrayW<::bs_hook::Il2CppWrapperType> System::Runtime::Remoting::Channels::ChannelServices::GetCurrentChannelInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::ChannelServices>::get(),
                            "GetCurrentChannelInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::bs_hook::Il2CppWrapperType>, false>(nullptr, ___internal_method);
}
