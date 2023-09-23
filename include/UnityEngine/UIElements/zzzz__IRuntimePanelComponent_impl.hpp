#pragma once
#include "UnityEngine/UIElements/zzzz__IRuntimePanelComponent_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::IRuntimePanelComponent.set_panel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::IRuntimePanelComponent::*)(UnityEngine::UIElements::IPanel)>(&UnityEngine::UIElements::IRuntimePanelComponent::set_panel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::IRuntimePanelComponent),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::IRuntimePanelComponent>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void UnityEngine::UIElements::IRuntimePanelComponent::set_panel(UnityEngine::UIElements::IPanel value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::IRuntimePanelComponent>::get(),
                            "set_panel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IPanel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
