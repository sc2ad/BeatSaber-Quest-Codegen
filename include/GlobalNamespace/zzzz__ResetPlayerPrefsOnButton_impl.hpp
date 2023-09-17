#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__ResetPlayerPrefsOnButton_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ResetPlayerPrefsOnButton.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ResetPlayerPrefsOnButton::*)()>(&::GlobalNamespace::ResetPlayerPrefsOnButton::Update)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1f79f9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResetPlayerPrefsOnButton>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResetPlayerPrefsOnButton._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ResetPlayerPrefsOnButton::*)()>(&::GlobalNamespace::ResetPlayerPrefsOnButton::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1f79fc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResetPlayerPrefsOnButton>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::ResetPlayerPrefsOnButton::__set__keyCode(::UnityEngine::KeyCode value)  {
::cordl_internals::setInstanceField<::UnityEngine::KeyCode, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::KeyCode>(value));
}
constexpr ::UnityEngine::KeyCode ::GlobalNamespace::ResetPlayerPrefsOnButton::__get__keyCode() const {
return ::cordl_internals::getInstanceField<::UnityEngine::KeyCode, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::ResetPlayerPrefsOnButton::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResetPlayerPrefsOnButton>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::ResetPlayerPrefsOnButton::ResetPlayerPrefsOnButton()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<ResetPlayerPrefsOnButton>())) {}
 void ::GlobalNamespace::ResetPlayerPrefsOnButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResetPlayerPrefsOnButton>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
