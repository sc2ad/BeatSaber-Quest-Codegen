#pragma once
#include "UnityEngine/InputSystem/zzzz__InputControl_1_impl.hpp"
namespace {
#include "UnityEngine/InputSystem/Controls/zzzz__DoubleControl_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::DoubleControl._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Controls::DoubleControl::*)()>(&::UnityEngine::InputSystem::Controls::DoubleControl::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2977e48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::DoubleControl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::DoubleControl.ReadUnprocessedValueFromState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::InputSystem::Controls::DoubleControl::*)(void*)>(&::UnityEngine::InputSystem::Controls::DoubleControl::ReadUnprocessedValueFromState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2977ed0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::InputSystem::Controls::DoubleControl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::DoubleControl>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::DoubleControl.WriteValueIntoState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Controls::DoubleControl::*)(double_t, void*)>(&::UnityEngine::InputSystem::Controls::DoubleControl::WriteValueIntoState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2977edc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::InputSystem::Controls::DoubleControl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::DoubleControl>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::UnityEngine::InputSystem::Controls::DoubleControl::DoubleControl()  : ::UnityEngine::InputSystem::InputControl_1<double_t>(THROW_UNLESS(::il2cpp_utils::New<DoubleControl>())) {}
 void ::UnityEngine::InputSystem::Controls::DoubleControl::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::DoubleControl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 double_t ::UnityEngine::InputSystem::Controls::DoubleControl::ReadUnprocessedValueFromState(void* statePtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::DoubleControl>::get(),
                            "ReadUnprocessedValueFromState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(instance), ___internal_method, statePtr);
}
 void ::UnityEngine::InputSystem::Controls::DoubleControl::WriteValueIntoState(double_t value, void* statePtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::DoubleControl>::get(),
                            "WriteValueIntoState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value, statePtr);
}
} // end anonymous namespace
