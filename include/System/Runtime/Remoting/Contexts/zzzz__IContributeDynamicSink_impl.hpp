#pragma once
#include "System/Runtime/Remoting/Contexts/zzzz__IContributeDynamicSink_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__IDynamicMessageSink_def.hpp"
//  Writing Method size for method: System::Runtime::Remoting::Contexts::IContributeDynamicSink.GetDynamicSink
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Contexts::IDynamicMessageSink (System::Runtime::Remoting::Contexts::IContributeDynamicSink::*)()>(&System::Runtime::Remoting::Contexts::IContributeDynamicSink::GetDynamicSink)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Remoting::Contexts::IContributeDynamicSink),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::IContributeDynamicSink>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 System::Runtime::Remoting::Contexts::IDynamicMessageSink System::Runtime::Remoting::Contexts::IContributeDynamicSink::GetDynamicSink()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Contexts::IContributeDynamicSink>::get(),
                            "GetDynamicSink",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::Contexts::IDynamicMessageSink, false>(const_cast<void*>(instance), ___internal_method);
}
