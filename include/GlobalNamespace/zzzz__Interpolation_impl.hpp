#pragma once
#include "GlobalNamespace/zzzz__Interpolation_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
//  Writing Method size for method: GlobalNamespace::Interpolation.Interpolate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t, GlobalNamespace::EaseType)>(&GlobalNamespace::Interpolation::Interpolate)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x28799f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Interpolation>::get(),
                            "Interpolate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::EaseType>::get()}
                        )));
    return ___internal_method;
  }
};
 float_t GlobalNamespace::Interpolation::Interpolate(float_t t, GlobalNamespace::EaseType easeType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Interpolation>::get(),
                            "Interpolate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::EaseType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, t, easeType);
}
