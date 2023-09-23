#pragma once
#include "UnityEngine/EventSystems/zzzz__ISelectHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
//  Writing Method size for method: UnityEngine::EventSystems::ISelectHandler.OnSelect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::ISelectHandler::*)(UnityEngine::EventSystems::BaseEventData)>(&UnityEngine::EventSystems::ISelectHandler::OnSelect)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::EventSystems::ISelectHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::ISelectHandler>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::EventSystems::IEventSystemHandler
constexpr  UnityEngine::EventSystems::ISelectHandler::operator UnityEngine::EventSystems::IEventSystemHandler() const noexcept {
return UnityEngine::EventSystems::IEventSystemHandler(::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::EventSystems::ISelectHandler::OnSelect(UnityEngine::EventSystems::BaseEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::ISelectHandler>::get(),
                            "OnSelect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::BaseEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
