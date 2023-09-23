#pragma once
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRLoaderBase_impl.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRLoader_def.hpp"
//  Writing Method size for method: UnityEngine::XR::OpenXR::OpenXRLoader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::OpenXR::OpenXRLoader::*)()>(&UnityEngine::XR::OpenXR::OpenXRLoader::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2ae5774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 UnityEngine::XR::OpenXR::OpenXRLoader::OpenXRLoader()  : UnityEngine::XR::OpenXR::OpenXRLoaderBase(THROW_UNLESS(::il2cpp_utils::New<OpenXRLoader>())) {}
 void UnityEngine::XR::OpenXR::OpenXRLoader::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::OpenXRLoader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
