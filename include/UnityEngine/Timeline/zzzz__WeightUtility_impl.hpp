#pragma once
namespace {
#include "UnityEngine/Timeline/zzzz__WeightUtility_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::WeightUtility.NormalizeMixer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::UnityEngine::Playables::Playable)>(&::UnityEngine::Timeline::WeightUtility::NormalizeMixer)> {
  constexpr static std::size_t size = 0x1188;
  constexpr static std::size_t addrs = 0x2adbaf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::WeightUtility>::get(),
                            "NormalizeMixer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get()}
                        )));
    return ___internal_method;
  }
};
 float_t ::UnityEngine::Timeline::WeightUtility::NormalizeMixer(::UnityEngine::Playables::Playable mixer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::WeightUtility>::get(),
                            "NormalizeMixer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, mixer);
}
} // end anonymous namespace
