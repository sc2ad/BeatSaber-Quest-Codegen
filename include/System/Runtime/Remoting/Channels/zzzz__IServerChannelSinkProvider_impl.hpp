#pragma once
namespace {
#include "System/Runtime/Remoting/Channels/zzzz__IServerChannelSinkProvider_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::IServerChannelSinkProvider.set_Next
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Channels::IServerChannelSinkProvider::*)(::System::Runtime::Remoting::Channels::IServerChannelSinkProvider)>(&::System::Runtime::Remoting::Channels::IServerChannelSinkProvider::set_Next)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Runtime::Remoting::Channels::IServerChannelSinkProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::IServerChannelSinkProvider>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void ::System::Runtime::Remoting::Channels::IServerChannelSinkProvider::set_Next(::System::Runtime::Remoting::Channels::IServerChannelSinkProvider value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::IServerChannelSinkProvider>::get(),
                            "set_Next",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Channels::IServerChannelSinkProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
} // end anonymous namespace
