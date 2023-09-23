#pragma once
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_impl.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__TouchPressControl_def.hpp"
//  Writing Method size for method: UnityEngine::InputSystem::Controls::TouchPressControl.FinishSetup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Controls::TouchPressControl::*)()>(&UnityEngine::InputSystem::Controls::TouchPressControl::FinishSetup)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2979324;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::Controls::TouchPressControl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Controls::TouchPressControl>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Controls::TouchPressControl.ReadUnprocessedValueFromState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::InputSystem::Controls::TouchPressControl::*)(void*)>(&UnityEngine::InputSystem::Controls::TouchPressControl::ReadUnprocessedValueFromState)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x29793d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::Controls::TouchPressControl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Controls::TouchPressControl>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Controls::TouchPressControl.WriteValueIntoState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Controls::TouchPressControl::*)(float_t, void*)>(&UnityEngine::InputSystem::Controls::TouchPressControl::WriteValueIntoState)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x29795ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::Controls::TouchPressControl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Controls::TouchPressControl>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Controls::TouchPressControl._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Controls::TouchPressControl::*)()>(&UnityEngine::InputSystem::Controls::TouchPressControl::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x29795ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Controls::TouchPressControl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::InputSystem::Controls::TouchPressControl::FinishSetup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Controls::TouchPressControl>::get(),
                            "FinishSetup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t UnityEngine::InputSystem::Controls::TouchPressControl::ReadUnprocessedValueFromState(void* statePtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Controls::TouchPressControl>::get(),
                            "ReadUnprocessedValueFromState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, statePtr);
}
 void UnityEngine::InputSystem::Controls::TouchPressControl::WriteValueIntoState(float_t value, void* statePtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Controls::TouchPressControl>::get(),
                            "WriteValueIntoState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value, statePtr);
}
// Ctor Parameters []
 UnityEngine::InputSystem::Controls::TouchPressControl::TouchPressControl()  : UnityEngine::InputSystem::Controls::ButtonControl(THROW_UNLESS(::il2cpp_utils::New<TouchPressControl>())) {}
 void UnityEngine::InputSystem::Controls::TouchPressControl::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Controls::TouchPressControl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
