#pragma once
#include "UnityEngine/UI/zzzz__RectangularVertexClipper_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: UnityEngine::UI::RectangularVertexClipper.GetCanvasRect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rect (UnityEngine::UI::RectangularVertexClipper::*)(UnityEngine::RectTransform, UnityEngine::Canvas)>(&UnityEngine::UI::RectangularVertexClipper::GetCanvasRect)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2bda3f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::RectangularVertexClipper>::get(),
                            "GetCanvasRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RectTransform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Canvas>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::RectangularVertexClipper._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::RectangularVertexClipper::*)()>(&UnityEngine::UI::RectangularVertexClipper::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2bda568;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::RectangularVertexClipper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UI::RectangularVertexClipper::__set_m_WorldCorners(::ArrayW<UnityEngine::Vector3> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::Vector3>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::Vector3>>(value));
}
constexpr ::ArrayW<UnityEngine::Vector3> UnityEngine::UI::RectangularVertexClipper::__get_m_WorldCorners() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::Vector3>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::RectangularVertexClipper::__set_m_CanvasCorners(::ArrayW<UnityEngine::Vector3> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::Vector3>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::Vector3>>(value));
}
constexpr ::ArrayW<UnityEngine::Vector3> UnityEngine::UI::RectangularVertexClipper::__get_m_CanvasCorners() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::Vector3>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::Rect UnityEngine::UI::RectangularVertexClipper::GetCanvasRect(UnityEngine::RectTransform t, UnityEngine::Canvas c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::RectangularVertexClipper>::get(),
                            "GetCanvasRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RectTransform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Canvas>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Rect, false>(const_cast<void*>(instance), ___internal_method, t, c);
}
// Ctor Parameters []
 UnityEngine::UI::RectangularVertexClipper::RectangularVertexClipper()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<RectangularVertexClipper>())) {}
 void UnityEngine::UI::RectangularVertexClipper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::RectangularVertexClipper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
