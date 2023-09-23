#pragma once
#include "Unity/Jobs/zzzz__IJob_def.hpp"
//  Writing Method size for method: Unity::Jobs::IJob.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::Jobs::IJob::*)()>(&Unity::Jobs::IJob::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Unity::Jobs::IJob),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Jobs::IJob>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void Unity::Jobs::IJob::Execute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Jobs::IJob>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
