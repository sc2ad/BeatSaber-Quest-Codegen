#pragma once
namespace {
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputUpdateCallbackReceiver_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::IInputUpdateCallbackReceiver.OnUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::IInputUpdateCallbackReceiver::*)()>(&::UnityEngine::InputSystem::LowLevel::IInputUpdateCallbackReceiver::OnUpdate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::InputSystem::LowLevel::IInputUpdateCallbackReceiver),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::IInputUpdateCallbackReceiver>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void ::UnityEngine::InputSystem::LowLevel::IInputUpdateCallbackReceiver::OnUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::IInputUpdateCallbackReceiver>::get(),
                            "OnUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace