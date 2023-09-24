#pragma once
#include "UnityEngine/InputSystem/XInput/zzzz__XInputController_impl.hpp"
#include "UnityEngine/InputSystem/Android/zzzz__XboxOneGamepadAndroid_def.hpp"
//  Writing Method size for method: UnityEngine::InputSystem::Android::XboxOneGamepadAndroid._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Android::XboxOneGamepadAndroid::*)()>(&UnityEngine::InputSystem::Android::XboxOneGamepadAndroid::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2953050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Android::XboxOneGamepadAndroid>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 UnityEngine::InputSystem::Android::XboxOneGamepadAndroid UnityEngine::InputSystem::Android::XboxOneGamepadAndroid::New_ctor()  {
UnityEngine::InputSystem::Android::XboxOneGamepadAndroid o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::InputSystem::Android::XboxOneGamepadAndroid>())};
return o;
}
 void UnityEngine::InputSystem::Android::XboxOneGamepadAndroid::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Android::XboxOneGamepadAndroid>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
