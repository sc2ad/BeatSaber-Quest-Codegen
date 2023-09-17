#pragma once
namespace {
#include "UnityEngine/Pool/zzzz__IObjectPool_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::Pool::IObjectPool_1.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Pool::IObjectPool_1::*)(T)>(&::UnityEngine::Pool::IObjectPool_1::Release)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::Pool::IObjectPool_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::IObjectPool_1>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void ::UnityEngine::Pool::IObjectPool_1::Release(T element)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::IObjectPool_1>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, element);
}
} // end anonymous namespace
