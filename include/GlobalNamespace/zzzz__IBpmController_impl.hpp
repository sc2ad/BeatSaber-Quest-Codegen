#pragma once
#include "GlobalNamespace/zzzz__IBpmController_def.hpp"
//  Writing Method size for method: GlobalNamespace::IBpmController.get_currentBpm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::IBpmController::*)()>(&GlobalNamespace::IBpmController::get_currentBpm)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::IBpmController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IBpmController>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 float_t GlobalNamespace::IBpmController::get_currentBpm()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IBpmController>::get(),
                            "get_currentBpm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
