#pragma once
#include "UnityEngine/AddressableAssets/zzzz__IKeyEvaluator_def.hpp"
//  Writing Method size for method: UnityEngine::AddressableAssets::IKeyEvaluator.get_RuntimeKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (UnityEngine::AddressableAssets::IKeyEvaluator::*)()>(&UnityEngine::AddressableAssets::IKeyEvaluator::get_RuntimeKey)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::AddressableAssets::IKeyEvaluator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::IKeyEvaluator>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::IKeyEvaluator.RuntimeKeyIsValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AddressableAssets::IKeyEvaluator::*)()>(&UnityEngine::AddressableAssets::IKeyEvaluator::RuntimeKeyIsValid)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::AddressableAssets::IKeyEvaluator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::IKeyEvaluator>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 ::bs_hook::Il2CppWrapperType UnityEngine::AddressableAssets::IKeyEvaluator::get_RuntimeKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::IKeyEvaluator>::get(),
                            "get_RuntimeKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::AddressableAssets::IKeyEvaluator::RuntimeKeyIsValid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::IKeyEvaluator>::get(),
                            "RuntimeKeyIsValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
