#pragma once
#include "HoudiniEngineUnity/zzzz__Test_LayerMask_Extensions_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "HoudiniEngineUnity/zzzz__Test_LayerMask_def.hpp"
//  Writing Method size for method: HoudiniEngineUnity::Test_LayerMask_Extensions.ToTestObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::Test_LayerMask (*)(UnityEngine::LayerMask)>(&HoudiniEngineUnity::Test_LayerMask_Extensions::ToTestObject)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x20741ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_LayerMask_Extensions>::get(),
                            "ToTestObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::LayerMask>::get()}
                        )));
    return ___internal_method;
  }
};
 HoudiniEngineUnity::Test_LayerMask HoudiniEngineUnity::Test_LayerMask_Extensions::ToTestObject(UnityEngine::LayerMask self)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_LayerMask_Extensions>::get(),
                            "ToTestObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::LayerMask>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::Test_LayerMask, false>(nullptr, ___internal_method, self);
}
