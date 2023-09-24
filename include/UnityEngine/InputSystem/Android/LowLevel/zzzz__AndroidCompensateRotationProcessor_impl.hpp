#pragma once
#include "UnityEngine/InputSystem/Processors/zzzz__CompensateRotationProcessor_impl.hpp"
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidCompensateRotationProcessor_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
//  Writing Method size for method: UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor::*)(UnityEngine::Quaternion, UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor::Process)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x29545f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor::*)()>(&UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2954628;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 UnityEngine::Quaternion UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor::Process(UnityEngine::Quaternion value, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Quaternion, false>(const_cast<void*>(instance), ___internal_method, value, control);
}
 UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor::New_ctor()  {
UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor>())};
return o;
}
 void UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateRotationProcessor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
