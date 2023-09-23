#pragma once
#include "UnityEngine/zzzz__PropertyNameUtils_def.hpp"
#include "UnityEngine/zzzz__PropertyName_def.hpp"
//  Writing Method size for method: UnityEngine::PropertyNameUtils.PropertyNameFromString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::PropertyName (*)(::StringW)>(&UnityEngine::PropertyNameUtils::PropertyNameFromString)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2b5149c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PropertyNameUtils>::get(),
                            "PropertyNameFromString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::PropertyNameUtils.PropertyNameFromString_Injected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ByRef<UnityEngine::PropertyName>)>(&UnityEngine::PropertyNameUtils::PropertyNameFromString_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b51668;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PropertyNameUtils>::get(),
                            "PropertyNameFromString_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::PropertyName>>::get()}
                        )));
    return ___internal_method;
  }
};
 UnityEngine::PropertyName UnityEngine::PropertyNameUtils::PropertyNameFromString(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PropertyNameUtils>::get(),
                            "PropertyNameFromString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::PropertyName, false>(nullptr, ___internal_method, name);
}
 void UnityEngine::PropertyNameUtils::PropertyNameFromString_Injected(::StringW name, ByRef<UnityEngine::PropertyName> ret)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::PropertyNameUtils>::get(),
                            "PropertyNameFromString_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::PropertyName>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, ret);
}
