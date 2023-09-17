#pragma once
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
namespace {
#include "HoudiniEngineUnity/zzzz__HEU_PreAssetEvent_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PreAssetEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PreAssetEvent::*)()>(&::HoudiniEngineUnity::HEU_PreAssetEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1fdace4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PreAssetEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::HoudiniEngineUnity::HEU_PreAssetEvent::HEU_PreAssetEvent()  : ::UnityEngine::Events::UnityEvent_1<::HoudiniEngineUnity::HEU_PreAssetEventData>(THROW_UNLESS(::il2cpp_utils::New<HEU_PreAssetEvent>())) {}
 void ::HoudiniEngineUnity::HEU_PreAssetEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PreAssetEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
