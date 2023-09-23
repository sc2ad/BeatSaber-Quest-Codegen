#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PageControlElement_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "HMUI/zzzz__ImageView_def.hpp"
//  Writing Method size for method: GlobalNamespace::PageControlElement.get_rectTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::RectTransform (GlobalNamespace::PageControlElement::*)()>(&GlobalNamespace::PageControlElement::get_rectTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x218ec48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PageControlElement>::get(),
                            "get_rectTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PageControlElement.SetSelected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PageControlElement::*)(bool)>(&GlobalNamespace::PageControlElement::SetSelected)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x218ea1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PageControlElement>::get(),
                            "SetSelected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PageControlElement._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PageControlElement::*)()>(&GlobalNamespace::PageControlElement::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x218ec50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PageControlElement>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::PageControlElement::__set__rectTransform(UnityEngine::RectTransform value)  {
::cordl_internals::setInstanceField<UnityEngine::RectTransform, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::RectTransform>(value));
}
constexpr UnityEngine::RectTransform GlobalNamespace::PageControlElement::__get__rectTransform() const {
return ::cordl_internals::getInstanceField<UnityEngine::RectTransform, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PageControlElement::__set__imageView(HMUI::ImageView value)  {
::cordl_internals::setInstanceField<HMUI::ImageView, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HMUI::ImageView>(value));
}
constexpr HMUI::ImageView GlobalNamespace::PageControlElement::__get__imageView() const {
return ::cordl_internals::getInstanceField<HMUI::ImageView, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PageControlElement::__set__selectedColor(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color GlobalNamespace::PageControlElement::__get__selectedColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PageControlElement::__set__unselectedColor(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color GlobalNamespace::PageControlElement::__get__unselectedColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::RectTransform GlobalNamespace::PageControlElement::get_rectTransform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PageControlElement>::get(),
                            "get_rectTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::RectTransform, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PageControlElement::SetSelected(bool isSelected)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PageControlElement>::get(),
                            "SetSelected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, isSelected);
}
// Ctor Parameters []
 GlobalNamespace::PageControlElement::PageControlElement()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<PageControlElement>())) {}
 void GlobalNamespace::PageControlElement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PageControlElement>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
