#pragma once
#include "UnityEngine/ResourceManagement/Util/zzzz__DefaultAllocationStrategy_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__IAllocationStrategy_def.hpp"
//  Writing Method size for method: UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy.New
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy::*)(System::Type, int32_t)>(&UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy::New)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a3a698;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy>::get(),
                            "New",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy::*)(int32_t, ::bs_hook::Il2CppWrapperType)>(&UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy::Release)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a3a6a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy::*)()>(&UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a3a6a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::ResourceManagement::Util::IAllocationStrategy
constexpr  UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy::operator UnityEngine::ResourceManagement::Util::IAllocationStrategy() const noexcept {
return UnityEngine::ResourceManagement::Util::IAllocationStrategy(::bs_hook::Il2CppWrapperType::instance);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy::New(System::Type type, int32_t typeHash)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy>::get(),
                            "New",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, type, typeHash);
}
 void UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy::Release(int32_t typeHash, ::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, typeHash, obj);
}
 UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy::New_ctor()  {
UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy>())};
return o;
}
 void UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
