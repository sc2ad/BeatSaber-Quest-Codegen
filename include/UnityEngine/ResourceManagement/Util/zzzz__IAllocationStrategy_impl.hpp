#pragma once
#include "UnityEngine/ResourceManagement/Util/zzzz__IAllocationStrategy_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: UnityEngine::ResourceManagement::Util::IAllocationStrategy.New
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (UnityEngine::ResourceManagement::Util::IAllocationStrategy::*)(System::Type, int32_t)>(&UnityEngine::ResourceManagement::Util::IAllocationStrategy::New)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::Util::IAllocationStrategy),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::IAllocationStrategy>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::Util::IAllocationStrategy.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::Util::IAllocationStrategy::*)(int32_t, ::bs_hook::Il2CppWrapperType)>(&UnityEngine::ResourceManagement::Util::IAllocationStrategy::Release)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::Util::IAllocationStrategy),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::IAllocationStrategy>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 ::bs_hook::Il2CppWrapperType UnityEngine::ResourceManagement::Util::IAllocationStrategy::New(System::Type type, int32_t typeHash)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::IAllocationStrategy>::get(),
                            "New",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, type, typeHash);
}
 void UnityEngine::ResourceManagement::Util::IAllocationStrategy::Release(int32_t typeHash, ::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::IAllocationStrategy>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, typeHash, obj);
}
