#pragma once
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRLoaderBase_impl.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRLoaderNoPreInit_def.hpp"
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRLoaderNoPreInit._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::OpenXR::OpenXRLoaderNoPreInit::*)()>(&UnityEngine::XR::OpenXR::OpenXRLoaderNoPreInit::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2aeb2f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderNoPreInit>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 UnityEngine::XR::OpenXR::OpenXRLoaderNoPreInit UnityEngine::XR::OpenXR::OpenXRLoaderNoPreInit::New_ctor()  {
UnityEngine::XR::OpenXR::OpenXRLoaderNoPreInit o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::XR::OpenXR::OpenXRLoaderNoPreInit>())};
return o;
}
 void UnityEngine::XR::OpenXR::OpenXRLoaderNoPreInit::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoaderNoPreInit>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
