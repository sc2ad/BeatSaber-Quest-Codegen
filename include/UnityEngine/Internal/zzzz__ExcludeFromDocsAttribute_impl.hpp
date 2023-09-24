#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Internal/zzzz__ExcludeFromDocsAttribute_def.hpp"
//  Writing Method size for method: UnityEngine::Internal::ExcludeFromDocsAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Internal::ExcludeFromDocsAttribute::*)()>(&UnityEngine::Internal::ExcludeFromDocsAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b71c40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Internal::ExcludeFromDocsAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 UnityEngine::Internal::ExcludeFromDocsAttribute UnityEngine::Internal::ExcludeFromDocsAttribute::New_ctor()  {
UnityEngine::Internal::ExcludeFromDocsAttribute o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::Internal::ExcludeFromDocsAttribute>())};
return o;
}
 void UnityEngine::Internal::ExcludeFromDocsAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Internal::ExcludeFromDocsAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
