#pragma once
#include "UnityEngine/InputSystem/XR/zzzz__XRHMD_impl.hpp"
#include "Unity/XR/GoogleVr/zzzz__DaydreamHMD_def.hpp"
//  Writing Method size for method: Unity::XR::GoogleVr::DaydreamHMD._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::XR::GoogleVr::DaydreamHMD::*)()>(&Unity::XR::GoogleVr::DaydreamHMD::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28a31c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::GoogleVr::DaydreamHMD>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 Unity::XR::GoogleVr::DaydreamHMD::DaydreamHMD()  : UnityEngine::InputSystem::XR::XRHMD(THROW_UNLESS(::il2cpp_utils::New<DaydreamHMD>())) {}
 void Unity::XR::GoogleVr::DaydreamHMD::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::XR::GoogleVr::DaydreamHMD>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
