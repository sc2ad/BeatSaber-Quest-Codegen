#pragma once
#include "UnityEngine/UIElements/zzzz__MouseEventsHelper_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__IMouseEvent_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::MouseEventsHelper.SendMouseOverMouseOut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UIElements::VisualElement, UnityEngine::UIElements::VisualElement, UnityEngine::UIElements::IMouseEvent, UnityEngine::Vector2)>(&UnityEngine::UIElements::MouseEventsHelper::SendMouseOverMouseOut)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x2cd2220;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::MouseEventsHelper>::get(),
                            "SendMouseOverMouseOut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IMouseEvent>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
template<typename TLeaveEvent,typename TEnterEvent>
 void UnityEngine::UIElements::MouseEventsHelper::SendEnterLeave(UnityEngine::UIElements::VisualElement previousTopElementUnderMouse, UnityEngine::UIElements::VisualElement currentTopElementUnderMouse, UnityEngine::UIElements::IMouseEvent triggerEvent, UnityEngine::Vector2 mousePosition)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::MouseEventsHelper>::get(),
                        "SendEnterLeave",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TLeaveEvent>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TEnterEvent>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IMouseEvent>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TLeaveEvent>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TEnterEvent>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, previousTopElementUnderMouse, currentTopElementUnderMouse, triggerEvent, mousePosition);
}
 void UnityEngine::UIElements::MouseEventsHelper::SendMouseOverMouseOut(UnityEngine::UIElements::VisualElement previousTopElementUnderMouse, UnityEngine::UIElements::VisualElement currentTopElementUnderMouse, UnityEngine::UIElements::IMouseEvent triggerEvent, UnityEngine::Vector2 mousePosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::MouseEventsHelper>::get(),
                            "SendMouseOverMouseOut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IMouseEvent>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, previousTopElementUnderMouse, currentTopElementUnderMouse, triggerEvent, mousePosition);
}
