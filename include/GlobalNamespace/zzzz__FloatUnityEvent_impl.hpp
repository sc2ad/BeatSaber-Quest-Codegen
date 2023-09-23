#pragma once
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "GlobalNamespace/zzzz__FloatUnityEvent_def.hpp"
//  Writing Method size for method: GlobalNamespace::FloatUnityEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FloatUnityEvent::*)()>(&GlobalNamespace::FloatUnityEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1f83c20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FloatUnityEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 GlobalNamespace::FloatUnityEvent::FloatUnityEvent()  : UnityEngine::Events::UnityEvent_1<float_t>(THROW_UNLESS(::il2cpp_utils::New<FloatUnityEvent>())) {}
 void GlobalNamespace::FloatUnityEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::FloatUnityEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
