#pragma once
#include "HMUI/zzzz__SegmentedControlCell_impl.hpp"
namespace {
#include "HMUI/zzzz__IconSegmentedControlCell_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "HMUI/zzzz__HoverHint_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::HMUI::IconSegmentedControlCell.set_sprite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::IconSegmentedControlCell::*)(::UnityEngine::Sprite)>(&::HMUI::IconSegmentedControlCell::set_sprite)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1fac5e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControlCell>::get(),
                            "set_sprite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::IconSegmentedControlCell.get_sprite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Sprite (::HMUI::IconSegmentedControlCell::*)()>(&::HMUI::IconSegmentedControlCell::get_sprite)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1fac858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControlCell>::get(),
                            "get_sprite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::IconSegmentedControlCell.set_hintText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::IconSegmentedControlCell::*)(::StringW)>(&::HMUI::IconSegmentedControlCell::set_hintText)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1fac5fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControlCell>::get(),
                            "set_hintText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::IconSegmentedControlCell.set_iconSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::IconSegmentedControlCell::*)(float_t)>(&::HMUI::IconSegmentedControlCell::set_iconSize)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1fac6b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControlCell>::get(),
                            "set_iconSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::IconSegmentedControlCell.set_hideBackgroundImage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::IconSegmentedControlCell::*)(bool)>(&::HMUI::IconSegmentedControlCell::set_hideBackgroundImage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1fac618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControlCell>::get(),
                            "set_hideBackgroundImage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::IconSegmentedControlCell._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::IconSegmentedControlCell::*)()>(&::HMUI::IconSegmentedControlCell::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fac874;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControlCell>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::HMUI::IconSegmentedControlCell::__set__icon(::UnityEngine::UI::Image value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Image, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::Image>(value));
}
constexpr ::UnityEngine::UI::Image ::HMUI::IconSegmentedControlCell::__get__icon() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Image, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HMUI::IconSegmentedControlCell::__set__hoverHint(::HMUI::HoverHint value)  {
::cordl_internals::setInstanceField<::HMUI::HoverHint, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::HoverHint>(value));
}
constexpr ::HMUI::HoverHint ::HMUI::IconSegmentedControlCell::__get__hoverHint() const {
return ::cordl_internals::getInstanceField<::HMUI::HoverHint, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HMUI::IconSegmentedControlCell::__set__backgroundGameObject(::UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::GameObject>(value));
}
constexpr ::UnityEngine::GameObject ::HMUI::IconSegmentedControlCell::__get__backgroundGameObject() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::HMUI::IconSegmentedControlCell::set_sprite(::UnityEngine::Sprite value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControlCell>::get(),
                            "set_sprite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::Sprite ::HMUI::IconSegmentedControlCell::get_sprite()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControlCell>::get(),
                            "get_sprite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Sprite, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HMUI::IconSegmentedControlCell::set_hintText(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControlCell>::get(),
                            "set_hintText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::HMUI::IconSegmentedControlCell::set_iconSize(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControlCell>::get(),
                            "set_iconSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::HMUI::IconSegmentedControlCell::set_hideBackgroundImage(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControlCell>::get(),
                            "set_hideBackgroundImage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters []
 ::HMUI::IconSegmentedControlCell::IconSegmentedControlCell()  : ::HMUI::SegmentedControlCell(THROW_UNLESS(::il2cpp_utils::New<IconSegmentedControlCell>())) {}
 void ::HMUI::IconSegmentedControlCell::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IconSegmentedControlCell>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
