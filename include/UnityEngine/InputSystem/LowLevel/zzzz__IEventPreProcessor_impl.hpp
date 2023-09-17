#pragma once
namespace {
#include "UnityEngine/InputSystem/LowLevel/zzzz__IEventPreProcessor_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::IEventPreProcessor.PreProcessEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::LowLevel::IEventPreProcessor::*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&::UnityEngine::InputSystem::LowLevel::IEventPreProcessor::PreProcessEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::InputSystem::LowLevel::IEventPreProcessor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::IEventPreProcessor>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 bool ::UnityEngine::InputSystem::LowLevel::IEventPreProcessor::PreProcessEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr currentEventPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::IEventPreProcessor>::get(),
                            "PreProcessEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, currentEventPtr);
}
} // end anonymous namespace
