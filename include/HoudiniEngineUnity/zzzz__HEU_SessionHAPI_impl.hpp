#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionHAPI_def.hpp"
//  Writing Method size for method: HoudiniEngineUnity::HEU_SessionHAPI._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_SessionHAPI::*)()>(&HoudiniEngineUnity::HEU_SessionHAPI::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x20311f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionHAPI>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 HoudiniEngineUnity::HEU_SessionHAPI::HEU_SessionHAPI()  : HoudiniEngineUnity::HEU_SessionBase(THROW_UNLESS(::il2cpp_utils::New<HEU_SessionHAPI>())) {}
 void HoudiniEngineUnity::HEU_SessionHAPI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_SessionHAPI>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
