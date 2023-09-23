#pragma once
#include "UnityEngine/UIElements/zzzz__StyleValueFunctionExtension_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueFunction_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::StyleValueFunctionExtension.ToUssString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(UnityEngine::UIElements::StyleValueFunction)>(&UnityEngine::UIElements::StyleValueFunctionExtension::ToUssString)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2cf3f64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleValueFunctionExtension>::get(),
                            "ToUssString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleValueFunction>::get()}
                        )));
    return ___internal_method;
  }
};
 ::StringW UnityEngine::UIElements::StyleValueFunctionExtension::ToUssString(UnityEngine::UIElements::StyleValueFunction svf)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::StyleValueFunctionExtension>::get(),
                            "ToUssString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::StyleValueFunction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, svf);
}
