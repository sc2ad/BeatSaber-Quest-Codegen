#pragma once
#include "UnityEngine/InputSystem/zzzz__AttitudeSensor_impl.hpp"
#include "UnityEngine/InputSystem/Android/zzzz__AndroidRotationVector_def.hpp"
//  Writing Method size for method: UnityEngine::InputSystem::Android::AndroidRotationVector._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Android::AndroidRotationVector::*)()>(&UnityEngine::InputSystem::Android::AndroidRotationVector::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2953098;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Android::AndroidRotationVector>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 UnityEngine::InputSystem::Android::AndroidRotationVector UnityEngine::InputSystem::Android::AndroidRotationVector::New_ctor()  {
UnityEngine::InputSystem::Android::AndroidRotationVector o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::InputSystem::Android::AndroidRotationVector>())};
return o;
}
 void UnityEngine::InputSystem::Android::AndroidRotationVector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Android::AndroidRotationVector>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
