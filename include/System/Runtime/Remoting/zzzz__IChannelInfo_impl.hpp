#pragma once
#include "System/Runtime/Remoting/zzzz__IChannelInfo_def.hpp"
//  Writing Method size for method: System::Runtime::Remoting::IChannelInfo.get_ChannelData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::bs_hook::Il2CppWrapperType> (System::Runtime::Remoting::IChannelInfo::*)()>(&System::Runtime::Remoting::IChannelInfo::get_ChannelData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Remoting::IChannelInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::IChannelInfo>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 ::ArrayW<::bs_hook::Il2CppWrapperType> System::Runtime::Remoting::IChannelInfo::get_ChannelData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::IChannelInfo>::get(),
                            "get_ChannelData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::bs_hook::Il2CppWrapperType>, false>(const_cast<void*>(instance), ___internal_method);
}
