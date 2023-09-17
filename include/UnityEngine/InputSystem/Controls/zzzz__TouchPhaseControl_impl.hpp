#pragma once
#include "UnityEngine/InputSystem/zzzz__InputControl_1_impl.hpp"
namespace {
#include "UnityEngine/InputSystem/Controls/zzzz__TouchPhaseControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__TouchPhase_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::TouchPhaseControl._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Controls::TouchPhaseControl::*)()>(&::UnityEngine::InputSystem::Controls::TouchPhaseControl::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2979268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::TouchPhaseControl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::TouchPhaseControl.ReadUnprocessedValueFromState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::TouchPhase (::UnityEngine::InputSystem::Controls::TouchPhaseControl::*)(void*)>(&::UnityEngine::InputSystem::Controls::TouchPhaseControl::ReadUnprocessedValueFromState)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x29792f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::InputSystem::Controls::TouchPhaseControl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::TouchPhaseControl>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::TouchPhaseControl.WriteValueIntoState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Controls::TouchPhaseControl::*)(::UnityEngine::InputSystem::TouchPhase, void*)>(&::UnityEngine::InputSystem::Controls::TouchPhaseControl::WriteValueIntoState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2979318;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::InputSystem::Controls::TouchPhaseControl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::TouchPhaseControl>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::UnityEngine::InputSystem::Controls::TouchPhaseControl::TouchPhaseControl()  : ::UnityEngine::InputSystem::InputControl_1<::UnityEngine::InputSystem::TouchPhase>(THROW_UNLESS(::il2cpp_utils::New<TouchPhaseControl>())) {}
 void ::UnityEngine::InputSystem::Controls::TouchPhaseControl::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::TouchPhaseControl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::InputSystem::TouchPhase ::UnityEngine::InputSystem::Controls::TouchPhaseControl::ReadUnprocessedValueFromState(void* statePtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::TouchPhaseControl>::get(),
                            "ReadUnprocessedValueFromState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::TouchPhase, false>(const_cast<void*>(instance), ___internal_method, statePtr);
}
 void ::UnityEngine::InputSystem::Controls::TouchPhaseControl::WriteValueIntoState(::UnityEngine::InputSystem::TouchPhase value, void* statePtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::TouchPhaseControl>::get(),
                            "WriteValueIntoState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::TouchPhase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value, statePtr);
}
} // end anonymous namespace
