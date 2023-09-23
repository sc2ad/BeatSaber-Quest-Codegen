#pragma once
#include "GlobalNamespace/zzzz__IStandaloneThreadRunner_def.hpp"
#include "GlobalNamespace/zzzz__IStandaloneThreadRunnable_def.hpp"
//  Writing Method size for method: GlobalNamespace::IStandaloneThreadRunner.Run
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IStandaloneThreadRunner::*)(GlobalNamespace::IStandaloneThreadRunnable)>(&GlobalNamespace::IStandaloneThreadRunner::Run)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::IStandaloneThreadRunner),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IStandaloneThreadRunner>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void GlobalNamespace::IStandaloneThreadRunner::Run(GlobalNamespace::IStandaloneThreadRunnable runnable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IStandaloneThreadRunner>::get(),
                            "Run",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IStandaloneThreadRunnable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, runnable);
}
