#pragma once
#include "UnityEngine/InputSystem/zzzz__AmbientTemperatureSensor_impl.hpp"
#include "UnityEngine/InputSystem/Android/zzzz__AndroidAmbientTemperature_def.hpp"
//  Writing Method size for method: UnityEngine::InputSystem::Android::AndroidAmbientTemperature._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Android::AndroidAmbientTemperature::*)()>(&UnityEngine::InputSystem::Android::AndroidAmbientTemperature::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29530a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Android::AndroidAmbientTemperature>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 UnityEngine::InputSystem::Android::AndroidAmbientTemperature::AndroidAmbientTemperature()  : UnityEngine::InputSystem::AmbientTemperatureSensor(THROW_UNLESS(::il2cpp_utils::New<AndroidAmbientTemperature>())) {}
 void UnityEngine::InputSystem::Android::AndroidAmbientTemperature::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Android::AndroidAmbientTemperature>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
