#pragma once
#include "UnityEngine/Yoga/zzzz__YogaConstants_def.hpp"
//  Writing Method size for method: UnityEngine::Yoga::YogaConstants.IsUndefined
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(float_t)>(&UnityEngine::Yoga::YogaConstants::IsUndefined)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2d2dbb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Yoga::YogaConstants>::get(),
                            "IsUndefined",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
 bool UnityEngine::Yoga::YogaConstants::IsUndefined(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Yoga::YogaConstants>::get(),
                            "IsUndefined",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value);
}
