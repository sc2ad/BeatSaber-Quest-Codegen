#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__ImageWithHint_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "HMUI/zzzz__HoverHint_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: HMUI::ImageWithHint.set_sprite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ImageWithHint::*)(UnityEngine::Sprite)>(&HMUI::ImageWithHint::set_sprite)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1fcd074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageWithHint>::get(),
                            "set_sprite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Sprite>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::ImageWithHint.get_sprite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Sprite (HMUI::ImageWithHint::*)()>(&HMUI::ImageWithHint::get_sprite)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1fcd090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageWithHint>::get(),
                            "get_sprite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::ImageWithHint.set_hintText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ImageWithHint::*)(::StringW)>(&HMUI::ImageWithHint::set_hintText)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1fcd0ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageWithHint>::get(),
                            "set_hintText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::ImageWithHint._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ImageWithHint::*)()>(&HMUI::ImageWithHint::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fcd0c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageWithHint>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::ImageWithHint::__set__image(UnityEngine::UI::Image value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Image, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::Image>(value));
}
constexpr UnityEngine::UI::Image HMUI::ImageWithHint::__get__image() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Image, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::ImageWithHint::__set__hoverHint(HMUI::HoverHint value)  {
::cordl_internals::setInstanceField<HMUI::HoverHint, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HMUI::HoverHint>(value));
}
constexpr HMUI::HoverHint HMUI::ImageWithHint::__get__hoverHint() const {
return ::cordl_internals::getInstanceField<HMUI::HoverHint, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void HMUI::ImageWithHint::set_sprite(UnityEngine::Sprite value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageWithHint>::get(),
                            "set_sprite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Sprite>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Sprite HMUI::ImageWithHint::get_sprite()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageWithHint>::get(),
                            "get_sprite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Sprite, false>(const_cast<void*>(instance), ___internal_method);
}
 void HMUI::ImageWithHint::set_hintText(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageWithHint>::get(),
                            "set_hintText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters []
 HMUI::ImageWithHint::ImageWithHint()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<ImageWithHint>())) {}
 void HMUI::ImageWithHint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ImageWithHint>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
