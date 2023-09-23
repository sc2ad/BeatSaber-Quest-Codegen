#pragma once
#include "System/Runtime/Remoting/Channels/zzzz__IClientChannelSinkProvider_def.hpp"
//  Writing Method size for method: System::Runtime::Remoting::Channels::IClientChannelSinkProvider.set_Next
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Channels::IClientChannelSinkProvider::*)(System::Runtime::Remoting::Channels::IClientChannelSinkProvider)>(&System::Runtime::Remoting::Channels::IClientChannelSinkProvider::set_Next)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Remoting::Channels::IClientChannelSinkProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::IClientChannelSinkProvider>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void System::Runtime::Remoting::Channels::IClientChannelSinkProvider::set_Next(System::Runtime::Remoting::Channels::IClientChannelSinkProvider value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Channels::IClientChannelSinkProvider>::get(),
                            "set_Next",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::Channels::IClientChannelSinkProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
