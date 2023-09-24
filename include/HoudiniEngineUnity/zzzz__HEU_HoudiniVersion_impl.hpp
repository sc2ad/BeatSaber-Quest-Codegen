#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniVersion_def.hpp"
//  Writing Method size for method: HoudiniEngineUnity::HEU_HoudiniVersion._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_HoudiniVersion::*)()>(&HoudiniEngineUnity::HEU_HoudiniVersion::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x201f7f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_HoudiniVersion>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 HoudiniEngineUnity::HEU_HoudiniVersion HoudiniEngineUnity::HEU_HoudiniVersion::New_ctor()  {
HoudiniEngineUnity::HEU_HoudiniVersion o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HEU_HoudiniVersion>())};
return o;
}
 void HoudiniEngineUnity::HEU_HoudiniVersion::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_HoudiniVersion>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
