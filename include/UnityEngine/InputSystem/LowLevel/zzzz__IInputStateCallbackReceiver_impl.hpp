#pragma once
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateCallbackReceiver_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver.OnNextUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver::*)()>(&UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver::OnNextUpdate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver.OnStateEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver::*)(UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver::OnStateEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver.GetStateOffsetForEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver::*)(UnityEngine::InputSystem::InputControl, UnityEngine::InputSystem::LowLevel::InputEventPtr, ByRef<uint32_t>)>(&UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver::GetStateOffsetForEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
 void UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver::OnNextUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver>::get(),
                            "OnNextUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver::OnStateEvent(UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver>::get(),
                            "OnStateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventPtr);
}
 bool UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver::GetStateOffsetForEvent(UnityEngine::InputSystem::InputControl control, UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ByRef<uint32_t> offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver>::get(),
                            "GetStateOffsetForEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, control, eventPtr, offset);
}
