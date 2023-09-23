#pragma once
#include "UnityEngine/UI/zzzz__MultipleDisplayUtilities_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
//  Writing Method size for method: UnityEngine::UI::MultipleDisplayUtilities.GetRelativeMousePositionForDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::EventSystems::PointerEventData, ByRef<UnityEngine::Vector2>)>(&UnityEngine::UI::MultipleDisplayUtilities::GetRelativeMousePositionForDrag)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2c0499c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::MultipleDisplayUtilities>::get(),
                            "GetRelativeMousePositionForDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector2>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::MultipleDisplayUtilities.RelativeMouseAtScaled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::Vector2)>(&UnityEngine::UI::MultipleDisplayUtilities::RelativeMouseAtScaled)> {
  constexpr static std::size_t size = 0x468;
  constexpr static std::size_t addrs = 0x2c04a04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::MultipleDisplayUtilities>::get(),
                            "RelativeMouseAtScaled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
 bool UnityEngine::UI::MultipleDisplayUtilities::GetRelativeMousePositionForDrag(UnityEngine::EventSystems::PointerEventData eventData, ByRef<UnityEngine::Vector2> position)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::MultipleDisplayUtilities>::get(),
                            "GetRelativeMousePositionForDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, eventData, position);
}
 UnityEngine::Vector3 UnityEngine::UI::MultipleDisplayUtilities::RelativeMouseAtScaled(UnityEngine::Vector2 position)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::MultipleDisplayUtilities>::get(),
                            "RelativeMouseAtScaled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(nullptr, ___internal_method, position);
}
