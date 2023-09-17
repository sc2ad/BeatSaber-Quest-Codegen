#pragma once
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_impl.hpp"
namespace {
#include "UnityEngine/InputSystem/Controls/zzzz__AnyKeyControl_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::AnyKeyControl._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Controls::AnyKeyControl::*)()>(&::UnityEngine::InputSystem::Controls::AnyKeyControl::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2977018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AnyKeyControl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::AnyKeyControl.ReadUnprocessedValueFromState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::Controls::AnyKeyControl::*)(void*)>(&::UnityEngine::InputSystem::Controls::AnyKeyControl::ReadUnprocessedValueFromState)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2977110;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::InputSystem::Controls::AnyKeyControl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AnyKeyControl>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::UnityEngine::InputSystem::Controls::AnyKeyControl::AnyKeyControl()  : ::UnityEngine::InputSystem::Controls::ButtonControl(THROW_UNLESS(::il2cpp_utils::New<AnyKeyControl>())) {}
 void ::UnityEngine::InputSystem::Controls::AnyKeyControl::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AnyKeyControl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::UnityEngine::InputSystem::Controls::AnyKeyControl::ReadUnprocessedValueFromState(void* statePtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AnyKeyControl>::get(),
                            "ReadUnprocessedValueFromState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, statePtr);
}
} // end anonymous namespace
