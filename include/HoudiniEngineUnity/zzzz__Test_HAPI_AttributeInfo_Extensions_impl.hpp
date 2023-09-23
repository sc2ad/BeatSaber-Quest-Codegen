#pragma once
#include "HoudiniEngineUnity/zzzz__Test_HAPI_AttributeInfo_Extensions_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__Test_HAPI_AttributeInfo_def.hpp"
//  Writing Method size for method: HoudiniEngineUnity::Test_HAPI_AttributeInfo_Extensions.ToTestObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HoudiniEngineUnity::Test_HAPI_AttributeInfo (*)(HoudiniEngineUnity::HAPI_AttributeInfo)>(&HoudiniEngineUnity::Test_HAPI_AttributeInfo_Extensions::ToTestObject)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2070dc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_HAPI_AttributeInfo_Extensions>::get(),
                            "ToTestObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HAPI_AttributeInfo>::get()}
                        )));
    return ___internal_method;
  }
};
 HoudiniEngineUnity::Test_HAPI_AttributeInfo HoudiniEngineUnity::Test_HAPI_AttributeInfo_Extensions::ToTestObject(HoudiniEngineUnity::HAPI_AttributeInfo self)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::Test_HAPI_AttributeInfo_Extensions>::get(),
                            "ToTestObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HAPI_AttributeInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HoudiniEngineUnity::Test_HAPI_AttributeInfo, false>(nullptr, ___internal_method, self);
}
