#pragma once
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ReloadDataEvent_def.hpp"
//  Writing Method size for method: HoudiniEngineUnity::HEU_ReloadDataEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ReloadDataEvent::*)()>(&HoudiniEngineUnity::HEU_ReloadDataEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1fdab7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_ReloadDataEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 HoudiniEngineUnity::HEU_ReloadDataEvent::HEU_ReloadDataEvent()  : UnityEngine::Events::UnityEvent_1<HoudiniEngineUnity::HEU_ReloadEventData>(THROW_UNLESS(::il2cpp_utils::New<HEU_ReloadDataEvent>())) {}
 void HoudiniEngineUnity::HEU_ReloadDataEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_ReloadDataEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
