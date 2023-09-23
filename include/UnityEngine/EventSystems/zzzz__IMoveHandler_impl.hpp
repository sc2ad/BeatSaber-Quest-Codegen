#pragma once
#include "UnityEngine/EventSystems/zzzz__IMoveHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__AxisEventData_def.hpp"
//  Writing Method size for method: UnityEngine::EventSystems::IMoveHandler.OnMove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::IMoveHandler::*)(UnityEngine::EventSystems::AxisEventData)>(&UnityEngine::EventSystems::IMoveHandler::OnMove)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::EventSystems::IMoveHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::IMoveHandler>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::EventSystems::IEventSystemHandler
constexpr  UnityEngine::EventSystems::IMoveHandler::operator UnityEngine::EventSystems::IEventSystemHandler() const noexcept {
return UnityEngine::EventSystems::IEventSystemHandler(::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::EventSystems::IMoveHandler::OnMove(UnityEngine::EventSystems::AxisEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::EventSystems::IMoveHandler>::get(),
                            "OnMove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::AxisEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
