#pragma once
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__PreloadData_def.hpp"
//  Writing Method size for method: UnityEngine::PreloadData.PreloadDataDontStripMe
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::PreloadData::*)()>(&UnityEngine::PreloadData::PreloadDataDontStripMe)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2b6976c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PreloadData>::get(),
                            "PreloadDataDontStripMe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::PreloadData::PreloadDataDontStripMe()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PreloadData>::get(),
                            "PreloadDataDontStripMe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
