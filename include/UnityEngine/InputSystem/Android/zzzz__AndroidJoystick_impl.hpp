#pragma once
#include "UnityEngine/InputSystem/zzzz__Joystick_impl.hpp"
#include "UnityEngine/InputSystem/Android/zzzz__AndroidJoystick_def.hpp"
//  Writing Method size for method: UnityEngine::InputSystem::Android::AndroidJoystick._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Android::AndroidJoystick::*)()>(&UnityEngine::InputSystem::Android::AndroidJoystick::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2953040;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Android::AndroidJoystick>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 UnityEngine::InputSystem::Android::AndroidJoystick::AndroidJoystick()  : UnityEngine::InputSystem::Joystick(THROW_UNLESS(::il2cpp_utils::New<AndroidJoystick>())) {}
 void UnityEngine::InputSystem::Android::AndroidJoystick::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Android::AndroidJoystick>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
