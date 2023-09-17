#pragma once
namespace {
#include "UnityEngine/Rendering/zzzz__SplashScreen_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::SplashScreen.get_isFinished
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::Rendering::SplashScreen::get_isFinished)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2b74844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SplashScreen>::get(),
                            "get_isFinished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 bool ::UnityEngine::Rendering::SplashScreen::get_isFinished()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SplashScreen>::get(),
                            "get_isFinished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
} // end anonymous namespace
