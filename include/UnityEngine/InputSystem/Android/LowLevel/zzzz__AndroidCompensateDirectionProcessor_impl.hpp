#pragma once
#include "UnityEngine/InputSystem/Processors/zzzz__CompensateDirectionProcessor_impl.hpp"
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidCompensateDirectionProcessor_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
//  Writing Method size for method: UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor::*)(UnityEngine::Vector3, UnityEngine::InputSystem::InputControl)>(&UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor::Process)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x29545d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor::*)()>(&UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29545ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 UnityEngine::Vector3 UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor::Process(UnityEngine::Vector3 vector, UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method, vector, control);
}
// Ctor Parameters []
 UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor::AndroidCompensateDirectionProcessor()  : UnityEngine::InputSystem::Processors::CompensateDirectionProcessor(THROW_UNLESS(::il2cpp_utils::New<AndroidCompensateDirectionProcessor>())) {}
 void UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
