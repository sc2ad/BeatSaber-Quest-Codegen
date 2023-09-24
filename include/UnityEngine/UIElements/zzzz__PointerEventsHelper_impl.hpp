#pragma once
#include "UnityEngine/UIElements/zzzz__PointerEventsHelper_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPointerEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::PointerEventsHelper.SendOverOut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UIElements::VisualElement, UnityEngine::UIElements::VisualElement, UnityEngine::UIElements::IPointerEvent, UnityEngine::Vector2, int32_t)>(&UnityEngine::UIElements::PointerEventsHelper::SendOverOut)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x2cd1ea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PointerEventsHelper>::get(),
                            "SendOverOut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IPointerEvent>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
template<typename TLeaveEvent,typename TEnterEvent>
 void UnityEngine::UIElements::PointerEventsHelper::SendEnterLeave(UnityEngine::UIElements::VisualElement previousTopElementUnderPointer, UnityEngine::UIElements::VisualElement currentTopElementUnderPointer, UnityEngine::UIElements::IPointerEvent triggerEvent, UnityEngine::Vector2 position, int32_t pointerId)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PointerEventsHelper>::get(),
                        "SendEnterLeave",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TLeaveEvent>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TEnterEvent>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IPointerEvent>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TLeaveEvent>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TEnterEvent>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, previousTopElementUnderPointer, currentTopElementUnderPointer, triggerEvent, position, pointerId);
}
 void UnityEngine::UIElements::PointerEventsHelper::SendOverOut(UnityEngine::UIElements::VisualElement previousTopElementUnderPointer, UnityEngine::UIElements::VisualElement currentTopElementUnderPointer, UnityEngine::UIElements::IPointerEvent triggerEvent, UnityEngine::Vector2 position, int32_t pointerId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PointerEventsHelper>::get(),
                            "SendOverOut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IPointerEvent>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, previousTopElementUnderPointer, currentTopElementUnderPointer, triggerEvent, position, pointerId);
}
