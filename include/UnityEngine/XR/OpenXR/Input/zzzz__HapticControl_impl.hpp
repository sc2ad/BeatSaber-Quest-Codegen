#pragma once
#include "UnityEngine/InputSystem/zzzz__InputControl_1_impl.hpp"
namespace {
#include "UnityEngine/XR/OpenXR/Input/zzzz__HapticControl_def.hpp"
#include "UnityEngine/XR/OpenXR/Input/zzzz__Haptic_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::HapticControl._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Input::HapticControl::*)()>(&::UnityEngine::XR::OpenXR::Input::HapticControl::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2aed734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::HapticControl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::HapticControl.ReadUnprocessedValueFromState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::OpenXR::Input::Haptic (::UnityEngine::XR::OpenXR::Input::HapticControl::*)(void*)>(&::UnityEngine::XR::OpenXR::Input::HapticControl::ReadUnprocessedValueFromState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aed78c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::XR::OpenXR::Input::HapticControl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::HapticControl>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::UnityEngine::XR::OpenXR::Input::HapticControl::HapticControl()  : ::UnityEngine::InputSystem::InputControl_1<::UnityEngine::XR::OpenXR::Input::Haptic>(THROW_UNLESS(::il2cpp_utils::New<HapticControl>())) {}
 void ::UnityEngine::XR::OpenXR::Input::HapticControl::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::HapticControl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::XR::OpenXR::Input::Haptic ::UnityEngine::XR::OpenXR::Input::HapticControl::ReadUnprocessedValueFromState(void* statePtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::HapticControl>::get(),
                            "ReadUnprocessedValueFromState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::Input::Haptic, false>(const_cast<void*>(instance), ___internal_method, statePtr);
}
} // end anonymous namespace
