#pragma once
#include "System/Runtime/Remoting/zzzz__IEnvoyInfo_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
//  Writing Method size for method: System::Runtime::Remoting::IEnvoyInfo.get_EnvoySinks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::IMessageSink (System::Runtime::Remoting::IEnvoyInfo::*)()>(&System::Runtime::Remoting::IEnvoyInfo::get_EnvoySinks)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Remoting::IEnvoyInfo),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::IEnvoyInfo>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 System::Runtime::Remoting::Messaging::IMessageSink System::Runtime::Remoting::IEnvoyInfo::get_EnvoySinks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::IEnvoyInfo>::get(),
                            "get_EnvoySinks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Messaging::IMessageSink, false>(const_cast<void*>(instance), ___internal_method);
}
