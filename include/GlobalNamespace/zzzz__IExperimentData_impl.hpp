#pragma once
#include "GlobalNamespace/zzzz__IExperimentData_def.hpp"
//  Writing Method size for method: GlobalNamespace::IExperimentData.get_experimentPlatformKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::IExperimentData::*)()>(&GlobalNamespace::IExperimentData::get_experimentPlatformKey)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::IExperimentData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IExperimentData>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 ::StringW GlobalNamespace::IExperimentData::get_experimentPlatformKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IExperimentData>::get(),
                            "get_experimentPlatformKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
