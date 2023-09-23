#pragma once
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__ICachable_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__IOperationCacheKey_def.hpp"
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::ICachable.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::Util::IOperationCacheKey (UnityEngine::ResourceManagement::AsyncOperations::ICachable::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::ICachable::get_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::AsyncOperations::ICachable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::ICachable>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::ICachable.set_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::ICachable::*)(UnityEngine::ResourceManagement::Util::IOperationCacheKey)>(&UnityEngine::ResourceManagement::AsyncOperations::ICachable::set_Key)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::AsyncOperations::ICachable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::ICachable>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 UnityEngine::ResourceManagement::Util::IOperationCacheKey UnityEngine::ResourceManagement::AsyncOperations::ICachable::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::ICachable>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::Util::IOperationCacheKey, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::ICachable::set_Key(UnityEngine::ResourceManagement::Util::IOperationCacheKey value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::ICachable>::get(),
                            "set_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::Util::IOperationCacheKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
