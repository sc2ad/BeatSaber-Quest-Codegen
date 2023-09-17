#pragma once
namespace {
#include "UnityEngine/zzzz__BootConfigData_def.hpp"
//  Writing Method size for method: ::UnityEngine::BootConfigData.WrapBootConfigData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::BootConfigData (*)(::cordl_internals::intptr_t)>(&::UnityEngine::BootConfigData::WrapBootConfigData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2b55d7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::BootConfigData>::get(),
                            "WrapBootConfigData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::BootConfigData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::BootConfigData::*)(::cordl_internals::intptr_t)>(&::UnityEngine::BootConfigData::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2b55ddc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::BootConfigData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::BootConfigData::__set_m_Ptr(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::UnityEngine::BootConfigData::__get_m_Ptr() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::UnityEngine::BootConfigData ::UnityEngine::BootConfigData::WrapBootConfigData(::cordl_internals::intptr_t nativeHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::BootConfigData>::get(),
                            "WrapBootConfigData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::BootConfigData, false>(nullptr, ___internal_method, nativeHandle);
}
// Ctor Parameters [CppParam { name: "nativeHandle", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::UnityEngine::BootConfigData::BootConfigData(::cordl_internals::intptr_t nativeHandle)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BootConfigData>(nativeHandle))) {}
 void ::UnityEngine::BootConfigData::_ctor(::cordl_internals::intptr_t nativeHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::BootConfigData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, nativeHandle);
}
} // end anonymous namespace
