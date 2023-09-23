#pragma once
#include "UnityEngine/Events/zzzz__UnityEventTools_def.hpp"
//  Writing Method size for method: UnityEngine::Events::UnityEventTools.TidyAssemblyTypeName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&UnityEngine::Events::UnityEventTools::TidyAssemblyTypeName)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x2b7f038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::UnityEventTools>::get(),
                            "TidyAssemblyTypeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
 ::StringW UnityEngine::Events::UnityEventTools::TidyAssemblyTypeName(::StringW assemblyTypeName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Events::UnityEventTools>::get(),
                            "TidyAssemblyTypeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, assemblyTypeName);
}
