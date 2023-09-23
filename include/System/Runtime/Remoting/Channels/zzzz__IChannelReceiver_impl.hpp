#pragma once
#include "System/Runtime/Remoting/Channels/zzzz__IChannelReceiver_def.hpp"
#include "System/Runtime/Remoting/Channels/zzzz__IChannel_def.hpp"
//  Writing Method size for method: System::Runtime::Remoting::Channels::IChannelReceiver.get_ChannelData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Runtime::Remoting::Channels::IChannelReceiver::*)()>(&System::Runtime::Remoting::Channels::IChannelReceiver::get_ChannelData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Remoting::Channels::IChannelReceiver),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::IChannelReceiver>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Channels::IChannelReceiver.StartListening
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Channels::IChannelReceiver::*)(::bs_hook::Il2CppWrapperType)>(&System::Runtime::Remoting::Channels::IChannelReceiver::StartListening)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Remoting::Channels::IChannelReceiver),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::IChannelReceiver>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::Remoting::Channels::IChannel
constexpr  System::Runtime::Remoting::Channels::IChannelReceiver::operator System::Runtime::Remoting::Channels::IChannel() const noexcept {
return System::Runtime::Remoting::Channels::IChannel(::bs_hook::Il2CppWrapperType::instance);
}
 ::bs_hook::Il2CppWrapperType System::Runtime::Remoting::Channels::IChannelReceiver::get_ChannelData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::IChannelReceiver>::get(),
                            "get_ChannelData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Runtime::Remoting::Channels::IChannelReceiver::StartListening(::bs_hook::Il2CppWrapperType data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::IChannelReceiver>::get(),
                            "StartListening",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data);
}
