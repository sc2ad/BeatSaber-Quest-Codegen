#pragma once
#include "UnityEngine/zzzz__ColorUtility_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: UnityEngine::ColorUtility.ToHtmlStringRGB
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(UnityEngine::Color)>(&UnityEngine::ColorUtility::ToHtmlStringRGB)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x2b62084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ColorUtility>::get(),
                            "ToHtmlStringRGB",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
 ::StringW UnityEngine::ColorUtility::ToHtmlStringRGB(UnityEngine::Color color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ColorUtility>::get(),
                            "ToHtmlStringRGB",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, color);
}
