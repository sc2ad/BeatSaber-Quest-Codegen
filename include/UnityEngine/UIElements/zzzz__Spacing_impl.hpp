#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Spacing_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::Spacing.get_horizontal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::UIElements::Spacing::*)()>(&UnityEngine::UIElements::Spacing::get_horizontal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2c440fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Spacing>::get(),
                            "get_horizontal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::Spacing.get_vertical
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::UIElements::Spacing::*)()>(&UnityEngine::UIElements::Spacing::get_vertical)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2c4410c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Spacing>::get(),
                            "get_vertical",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::Spacing._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Spacing::*)(float_t, float_t, float_t, float_t)>(&UnityEngine::UIElements::Spacing::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c4411c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Spacing>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::Spacing.op_Subtraction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rect (*)(UnityEngine::Rect, UnityEngine::UIElements::Spacing)>(&UnityEngine::UIElements::Spacing::op_Subtraction)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2c44128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Spacing>::get(),
                            "op_Subtraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::Spacing>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "left", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "top", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "right", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottom", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::Spacing::Spacing(float_t left, float_t top, float_t right, float_t bottom) noexcept : ::bs_hook::ValueTypeWrapper() {this->left = left;
this->top = top;
this->right = right;
this->bottom = bottom;
}
constexpr void UnityEngine::UIElements::Spacing::__set_left(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::UIElements::Spacing::__get_left() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::UIElements::Spacing::__set_top(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::UIElements::Spacing::__get_top() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->__instance);
}
constexpr void UnityEngine::UIElements::Spacing::__set_right(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x8>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::UIElements::Spacing::__get_right() const {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->__instance);
}
constexpr void UnityEngine::UIElements::Spacing::__set_bottom(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xc>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::UIElements::Spacing::__get_bottom() const {
return ::cordl_internals::getInstanceField<float_t, 0xc>(this->__instance);
}
 float_t UnityEngine::UIElements::Spacing::get_horizontal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Spacing>::get(),
                            "get_horizontal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 float_t UnityEngine::UIElements::Spacing::get_vertical()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Spacing>::get(),
                            "get_vertical",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::UIElements::Spacing::_ctor(float_t left, float_t top, float_t right, float_t bottom)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Spacing>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, left, top, right, bottom);
}
 UnityEngine::Rect UnityEngine::UIElements::Spacing::op_Subtraction(UnityEngine::Rect r, UnityEngine::UIElements::Spacing a)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::Spacing>::get(),
                            "op_Subtraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::Spacing>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Rect, false>(nullptr, ___internal_method, r, a);
}
