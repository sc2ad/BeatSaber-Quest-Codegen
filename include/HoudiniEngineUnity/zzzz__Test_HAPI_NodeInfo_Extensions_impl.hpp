#pragma once
#include "HoudiniEngineUnity/zzzz__Test_HAPI_NodeInfo_Extensions_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_NodeInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__Test_HAPI_NodeInfo_def.hpp"
//  Writing Method size for method: HoudiniEngineUnity::Test_HAPI_NodeInfo_Extensions.ToTestObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::Test_HAPI_NodeInfo (*)(HoudiniEngineUnity::HAPI_NodeInfo)>(&HoudiniEngineUnity::Test_HAPI_NodeInfo_Extensions::ToTestObject)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x207032c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_HAPI_NodeInfo_Extensions>::get(),
                            "ToTestObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HAPI_NodeInfo>::get()}
                        )));
    return ___internal_method;
  }
};
 HoudiniEngineUnity::Test_HAPI_NodeInfo HoudiniEngineUnity::Test_HAPI_NodeInfo_Extensions::ToTestObject(HoudiniEngineUnity::HAPI_NodeInfo self)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_HAPI_NodeInfo_Extensions>::get(),
                            "ToTestObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HAPI_NodeInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::Test_HAPI_NodeInfo, false>(nullptr, ___internal_method, self);
}
