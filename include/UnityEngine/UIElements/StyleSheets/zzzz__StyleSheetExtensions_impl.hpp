#pragma once
#include "UnityEngine/UIElements/StyleSheets/zzzz__StyleSheetExtensions_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueHandle_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::StyleSheetExtensions.ReadAsString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(UnityEngine::UIElements::StyleSheet, UnityEngine::UIElements::StyleValueHandle)>(&UnityEngine::UIElements::StyleSheets::StyleSheetExtensions::ReadAsString)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x2c6cec0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::StyleSheetExtensions>::get(),
                            "ReadAsString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleSheet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleValueHandle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::StyleSheets::StyleSheetExtensions.IsVarFunction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::UIElements::StyleValueHandle)>(&UnityEngine::UIElements::StyleSheets::StyleSheetExtensions::IsVarFunction)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2c6d430;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::StyleSheetExtensions>::get(),
                            "IsVarFunction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleValueHandle>::get()}
                        )));
    return ___internal_method;
  }
};
 ::StringW UnityEngine::UIElements::StyleSheets::StyleSheetExtensions::ReadAsString(UnityEngine::UIElements::StyleSheet sheet, UnityEngine::UIElements::StyleValueHandle handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::StyleSheetExtensions>::get(),
                            "ReadAsString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleSheet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleValueHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, sheet, handle);
}
 bool UnityEngine::UIElements::StyleSheets::StyleSheetExtensions::IsVarFunction(UnityEngine::UIElements::StyleValueHandle handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleSheets::StyleSheetExtensions>::get(),
                            "IsVarFunction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleValueHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, handle);
}
