#pragma once
#include "UnityEngine/InputSystem/zzzz__HumiditySensor_impl.hpp"
namespace {
#include "UnityEngine/InputSystem/Android/zzzz__AndroidRelativeHumidity_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::AndroidRelativeHumidity._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Android::AndroidRelativeHumidity::*)()>(&::UnityEngine::InputSystem::Android::AndroidRelativeHumidity::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29530a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::AndroidRelativeHumidity>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::UnityEngine::InputSystem::Android::AndroidRelativeHumidity::AndroidRelativeHumidity()  : ::UnityEngine::InputSystem::HumiditySensor(THROW_UNLESS(::il2cpp_utils::New<AndroidRelativeHumidity>())) {}
 void ::UnityEngine::InputSystem::Android::AndroidRelativeHumidity::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::AndroidRelativeHumidity>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
