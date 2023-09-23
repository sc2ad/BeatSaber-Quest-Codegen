#pragma once
#include "System/Dynamic/Utils/zzzz__CacheDict_2_def.hpp"
//  Writing Method size for method: System::Dynamic::Utils::CacheDict_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Dynamic::Utils::CacheDict_2::*)(int32_t)>(&System::Dynamic::Utils::CacheDict_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Dynamic::Utils::CacheDict_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Dynamic::Utils::CacheDict_2.AlignSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&System::Dynamic::Utils::CacheDict_2::AlignSize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Dynamic::Utils::CacheDict_2>::get(),
                            "AlignSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Dynamic::Utils::CacheDict_2::__set__mask(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Dynamic::Utils::CacheDict_2::__get__mask() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Dynamic::Utils::CacheDict_2::__set__entries(::ArrayW<System::Dynamic::Utils::System__Dynamic__Utils__CacheDict_2__Entry<TKey,TValue>> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Dynamic::Utils::System__Dynamic__Utils__CacheDict_2__Entry<TKey,TValue>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::Dynamic::Utils::System__Dynamic__Utils__CacheDict_2__Entry<TKey,TValue>>>(value));
}
constexpr ::ArrayW<System::Dynamic::Utils::System__Dynamic__Utils__CacheDict_2__Entry<TKey,TValue>> System::Dynamic::Utils::CacheDict_2::__get__entries() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Dynamic::Utils::System__Dynamic__Utils__CacheDict_2__Entry<TKey,TValue>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }]
 System::Dynamic::Utils::CacheDict_2::CacheDict_2(int32_t size)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CacheDict_2>(size))) {}
 void System::Dynamic::Utils::CacheDict_2::_ctor(int32_t size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Dynamic::Utils::CacheDict_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, size);
}
 int32_t System::Dynamic::Utils::CacheDict_2::AlignSize(int32_t size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Dynamic::Utils::CacheDict_2>::get(),
                            "AlignSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, size);
}
