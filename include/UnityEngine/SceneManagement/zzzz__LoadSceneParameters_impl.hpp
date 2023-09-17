#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/SceneManagement/zzzz__LoadSceneParameters_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneMode_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LocalPhysicsMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::SceneManagement::LoadSceneParameters.set_loadSceneMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::SceneManagement::LoadSceneParameters::*)(::UnityEngine::SceneManagement::LoadSceneMode)>(&::UnityEngine::SceneManagement::LoadSceneParameters::set_loadSceneMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b7703c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::LoadSceneParameters>::get(),
                            "set_loadSceneMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SceneManagement::LoadSceneParameters._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::SceneManagement::LoadSceneParameters::*)(::UnityEngine::SceneManagement::LoadSceneMode)>(&::UnityEngine::SceneManagement::LoadSceneParameters::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b77044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::LoadSceneParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "m_LoadSceneMode", ty: "::UnityEngine::SceneManagement::LoadSceneMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalPhysicsMode", ty: "::UnityEngine::SceneManagement::LocalPhysicsMode", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::SceneManagement::LoadSceneParameters::LoadSceneParameters(::UnityEngine::SceneManagement::LoadSceneMode m_LoadSceneMode, ::UnityEngine::SceneManagement::LocalPhysicsMode m_LocalPhysicsMode) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_LoadSceneMode = m_LoadSceneMode;
this->m_LocalPhysicsMode = m_LocalPhysicsMode;
}
constexpr void ::UnityEngine::SceneManagement::LoadSceneParameters::__set_m_LoadSceneMode(::UnityEngine::SceneManagement::LoadSceneMode value)  {
::cordl_internals::setInstanceField<::UnityEngine::SceneManagement::LoadSceneMode, 0x0>(this->__instance, std::forward<::UnityEngine::SceneManagement::LoadSceneMode>(value));
}
constexpr ::UnityEngine::SceneManagement::LoadSceneMode ::UnityEngine::SceneManagement::LoadSceneParameters::__get_m_LoadSceneMode() const {
return ::cordl_internals::getInstanceField<::UnityEngine::SceneManagement::LoadSceneMode, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::SceneManagement::LoadSceneParameters::__set_m_LocalPhysicsMode(::UnityEngine::SceneManagement::LocalPhysicsMode value)  {
::cordl_internals::setInstanceField<::UnityEngine::SceneManagement::LocalPhysicsMode, 0x4>(this->__instance, std::forward<::UnityEngine::SceneManagement::LocalPhysicsMode>(value));
}
constexpr ::UnityEngine::SceneManagement::LocalPhysicsMode ::UnityEngine::SceneManagement::LoadSceneParameters::__get_m_LocalPhysicsMode() const {
return ::cordl_internals::getInstanceField<::UnityEngine::SceneManagement::LocalPhysicsMode, 0x4>(this->__instance);
}
 void ::UnityEngine::SceneManagement::LoadSceneParameters::set_loadSceneMode(::UnityEngine::SceneManagement::LoadSceneMode value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::LoadSceneParameters>::get(),
                            "set_loadSceneMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 void ::UnityEngine::SceneManagement::LoadSceneParameters::_ctor(::UnityEngine::SceneManagement::LoadSceneMode mode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SceneManagement::LoadSceneParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, mode);
}
} // end anonymous namespace
