#pragma once
#include "GlobalNamespace/zzzz__IJumpOffsetYProvider_def.hpp"
//  Writing Method size for method: GlobalNamespace::IJumpOffsetYProvider.get_jumpOffsetY
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::IJumpOffsetYProvider::*)()>(&GlobalNamespace::IJumpOffsetYProvider::get_jumpOffsetY)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::IJumpOffsetYProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IJumpOffsetYProvider>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 float_t GlobalNamespace::IJumpOffsetYProvider::get_jumpOffsetY()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IJumpOffsetYProvider>::get(),
                            "get_jumpOffsetY",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
