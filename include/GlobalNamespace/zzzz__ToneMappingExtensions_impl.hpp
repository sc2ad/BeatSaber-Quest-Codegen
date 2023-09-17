#pragma once
namespace {
#include "GlobalNamespace/zzzz__ToneMappingExtensions_def.hpp"
#include "GlobalNamespace/zzzz__ToneMapping_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ToneMappingExtensions.SetShaderKeyword
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::ToneMapping)>(&::GlobalNamespace::ToneMappingExtensions::SetShaderKeyword)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x1f95f20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ToneMappingExtensions>::get(),
                            "SetShaderKeyword",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ToneMapping>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::GlobalNamespace::ToneMappingExtensions::__set__shaderKeywordMap(::ArrayW<::StringW> value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "_shaderKeywordMap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ToneMappingExtensions>::get>(std::forward<::ArrayW<::StringW>>(value));
}
 ::ArrayW<::StringW> ::GlobalNamespace::ToneMappingExtensions::__get__shaderKeywordMap()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "_shaderKeywordMap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ToneMappingExtensions>::get>();
}
 void ::GlobalNamespace::ToneMappingExtensions::SetShaderKeyword(::GlobalNamespace::ToneMapping toneMapping)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ToneMappingExtensions>::get(),
                            "SetShaderKeyword",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ToneMapping>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, toneMapping);
}
} // end anonymous namespace
