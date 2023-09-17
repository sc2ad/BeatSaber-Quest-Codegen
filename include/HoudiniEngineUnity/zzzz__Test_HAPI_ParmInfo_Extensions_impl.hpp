#pragma once
namespace {
#include "HoudiniEngineUnity/zzzz__Test_HAPI_ParmInfo_Extensions_def.hpp"
#include "HoudiniEngineUnity/zzzz__Test_HAPI_ParmInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_ParmInfo_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::Test_HAPI_ParmInfo_Extensions.ToTestObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::Test_HAPI_ParmInfo (*)(::HoudiniEngineUnity::HAPI_ParmInfo)>(&::HoudiniEngineUnity::Test_HAPI_ParmInfo_Extensions::ToTestObject)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2071920;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_ParmInfo_Extensions>::get(),
                            "ToTestObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_ParmInfo>::get()}
                        )));
    return ___internal_method;
  }
};
 ::HoudiniEngineUnity::Test_HAPI_ParmInfo ::HoudiniEngineUnity::Test_HAPI_ParmInfo_Extensions::ToTestObject(::HoudiniEngineUnity::HAPI_ParmInfo self)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_ParmInfo_Extensions>::get(),
                            "ToTestObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_ParmInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::Test_HAPI_ParmInfo, false>(nullptr, ___internal_method, self);
}
} // end anonymous namespace
