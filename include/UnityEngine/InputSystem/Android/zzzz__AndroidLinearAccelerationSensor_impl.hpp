#pragma once
#include "UnityEngine/InputSystem/zzzz__LinearAccelerationSensor_impl.hpp"
#include "UnityEngine/InputSystem/Android/zzzz__AndroidLinearAccelerationSensor_def.hpp"
//  Writing Method size for method: UnityEngine::InputSystem::Android::AndroidLinearAccelerationSensor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Android::AndroidLinearAccelerationSensor::*)()>(&UnityEngine::InputSystem::Android::AndroidLinearAccelerationSensor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2953090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Android::AndroidLinearAccelerationSensor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 UnityEngine::InputSystem::Android::AndroidLinearAccelerationSensor UnityEngine::InputSystem::Android::AndroidLinearAccelerationSensor::New_ctor()  {
UnityEngine::InputSystem::Android::AndroidLinearAccelerationSensor o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::InputSystem::Android::AndroidLinearAccelerationSensor>())};
return o;
}
 void UnityEngine::InputSystem::Android::AndroidLinearAccelerationSensor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Android::AndroidLinearAccelerationSensor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
