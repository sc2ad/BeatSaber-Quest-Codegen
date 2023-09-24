#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "TMPro/zzzz__TMP_DefaultControls_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "TMPro/zzzz__TMP_DefaultControls_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
// Ctor Parameters [CppParam { name: "standard", ty: "UnityEngine::Sprite", modifiers: "", def_value: Some("csnull") }, CppParam { name: "background", ty: "UnityEngine::Sprite", modifiers: "", def_value: Some("csnull") }, CppParam { name: "inputField", ty: "UnityEngine::Sprite", modifiers: "", def_value: Some("csnull") }, CppParam { name: "knob", ty: "UnityEngine::Sprite", modifiers: "", def_value: Some("csnull") }, CppParam { name: "checkmark", ty: "UnityEngine::Sprite", modifiers: "", def_value: Some("csnull") }, CppParam { name: "dropdown", ty: "UnityEngine::Sprite", modifiers: "", def_value: Some("csnull") }, CppParam { name: "mask", ty: "UnityEngine::Sprite", modifiers: "", def_value: Some("csnull") }]
constexpr TMPro::TMPro__TMP_DefaultControls__Resources::TMPro__TMP_DefaultControls__Resources(UnityEngine::Sprite standard, UnityEngine::Sprite background, UnityEngine::Sprite inputField, UnityEngine::Sprite knob, UnityEngine::Sprite checkmark, UnityEngine::Sprite dropdown, UnityEngine::Sprite mask) noexcept : ::bs_hook::ValueTypeWrapper() {this->standard = standard;
this->background = background;
this->inputField = inputField;
this->knob = knob;
this->checkmark = checkmark;
this->dropdown = dropdown;
this->mask = mask;
}
constexpr void TMPro::TMPro__TMP_DefaultControls__Resources::__set_standard(UnityEngine::Sprite value)  {
::cordl_internals::setInstanceField<UnityEngine::Sprite, 0x0>(this->__instance, std::forward<UnityEngine::Sprite>(value));
}
constexpr UnityEngine::Sprite TMPro::TMPro__TMP_DefaultControls__Resources::__get_standard() const {
return ::cordl_internals::getInstanceField<UnityEngine::Sprite, 0x0>(this->__instance);
}
constexpr void TMPro::TMPro__TMP_DefaultControls__Resources::__set_background(UnityEngine::Sprite value)  {
::cordl_internals::setInstanceField<UnityEngine::Sprite, 0x8>(this->__instance, std::forward<UnityEngine::Sprite>(value));
}
constexpr UnityEngine::Sprite TMPro::TMPro__TMP_DefaultControls__Resources::__get_background() const {
return ::cordl_internals::getInstanceField<UnityEngine::Sprite, 0x8>(this->__instance);
}
constexpr void TMPro::TMPro__TMP_DefaultControls__Resources::__set_inputField(UnityEngine::Sprite value)  {
::cordl_internals::setInstanceField<UnityEngine::Sprite, 0x10>(this->__instance, std::forward<UnityEngine::Sprite>(value));
}
constexpr UnityEngine::Sprite TMPro::TMPro__TMP_DefaultControls__Resources::__get_inputField() const {
return ::cordl_internals::getInstanceField<UnityEngine::Sprite, 0x10>(this->__instance);
}
constexpr void TMPro::TMPro__TMP_DefaultControls__Resources::__set_knob(UnityEngine::Sprite value)  {
::cordl_internals::setInstanceField<UnityEngine::Sprite, 0x18>(this->__instance, std::forward<UnityEngine::Sprite>(value));
}
constexpr UnityEngine::Sprite TMPro::TMPro__TMP_DefaultControls__Resources::__get_knob() const {
return ::cordl_internals::getInstanceField<UnityEngine::Sprite, 0x18>(this->__instance);
}
constexpr void TMPro::TMPro__TMP_DefaultControls__Resources::__set_checkmark(UnityEngine::Sprite value)  {
::cordl_internals::setInstanceField<UnityEngine::Sprite, 0x20>(this->__instance, std::forward<UnityEngine::Sprite>(value));
}
constexpr UnityEngine::Sprite TMPro::TMPro__TMP_DefaultControls__Resources::__get_checkmark() const {
return ::cordl_internals::getInstanceField<UnityEngine::Sprite, 0x20>(this->__instance);
}
constexpr void TMPro::TMPro__TMP_DefaultControls__Resources::__set_dropdown(UnityEngine::Sprite value)  {
::cordl_internals::setInstanceField<UnityEngine::Sprite, 0x28>(this->__instance, std::forward<UnityEngine::Sprite>(value));
}
constexpr UnityEngine::Sprite TMPro::TMPro__TMP_DefaultControls__Resources::__get_dropdown() const {
return ::cordl_internals::getInstanceField<UnityEngine::Sprite, 0x28>(this->__instance);
}
constexpr void TMPro::TMPro__TMP_DefaultControls__Resources::__set_mask(UnityEngine::Sprite value)  {
::cordl_internals::setInstanceField<UnityEngine::Sprite, 0x30>(this->__instance, std::forward<UnityEngine::Sprite>(value));
}
constexpr UnityEngine::Sprite TMPro::TMPro__TMP_DefaultControls__Resources::__get_mask() const {
return ::cordl_internals::getInstanceField<UnityEngine::Sprite, 0x30>(this->__instance);
}
//  Writing Method size for method: TMPro::TMP_DefaultControls.CreateUIElementRoot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject (*)(::StringW, UnityEngine::Vector2)>(&TMPro::TMP_DefaultControls::CreateUIElementRoot)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2a6ab48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_DefaultControls>::get(),
                            "CreateUIElementRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_DefaultControls.CreateUIObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject (*)(::StringW, UnityEngine::GameObject)>(&TMPro::TMP_DefaultControls::CreateUIObject)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2a6abf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_DefaultControls>::get(),
                            "CreateUIObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_DefaultControls.SetDefaultTextValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(TMPro::TMP_Text)>(&TMPro::TMP_DefaultControls::SetDefaultTextValues)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2a6adb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_DefaultControls>::get(),
                            "SetDefaultTextValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_DefaultControls.SetDefaultColorTransitionValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UI::Selectable)>(&TMPro::TMP_DefaultControls::SetDefaultColorTransitionValues)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a6ae38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_DefaultControls>::get(),
                            "SetDefaultColorTransitionValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::Selectable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_DefaultControls.SetParentAndAlign
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::GameObject, UnityEngine::GameObject)>(&TMPro::TMP_DefaultControls::SetParentAndAlign)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2a6acb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_DefaultControls>::get(),
                            "SetParentAndAlign",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_DefaultControls.SetLayerRecursively
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::GameObject, int32_t)>(&TMPro::TMP_DefaultControls::SetLayerRecursively)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2a6ae48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_DefaultControls>::get(),
                            "SetLayerRecursively",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_DefaultControls.CreateScrollbar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject (*)(TMPro::TMPro__TMP_DefaultControls__Resources)>(&TMPro::TMP_DefaultControls::CreateScrollbar)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x2a6af2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_DefaultControls>::get(),
                            "CreateScrollbar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMPro__TMP_DefaultControls__Resources>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_DefaultControls.CreateButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject (*)(TMPro::TMPro__TMP_DefaultControls__Resources)>(&TMPro::TMP_DefaultControls::CreateButton)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x2a6b1f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_DefaultControls>::get(),
                            "CreateButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMPro__TMP_DefaultControls__Resources>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_DefaultControls.CreateText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject (*)(TMPro::TMPro__TMP_DefaultControls__Resources)>(&TMPro::TMP_DefaultControls::CreateText)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2a6b4b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_DefaultControls>::get(),
                            "CreateText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMPro__TMP_DefaultControls__Resources>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_DefaultControls.CreateInputField
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject (*)(TMPro::TMPro__TMP_DefaultControls__Resources)>(&TMPro::TMP_DefaultControls::CreateInputField)> {
  constexpr static std::size_t size = 0x65c;
  constexpr static std::size_t addrs = 0x2a6b550;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_DefaultControls>::get(),
                            "CreateInputField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMPro__TMP_DefaultControls__Resources>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_DefaultControls.CreateDropdown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject (*)(TMPro::TMPro__TMP_DefaultControls__Resources)>(&TMPro::TMP_DefaultControls::CreateDropdown)> {
  constexpr static std::size_t size = 0xdf4;
  constexpr static std::size_t addrs = 0x2a6bd50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_DefaultControls>::get(),
                            "CreateDropdown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMPro__TMP_DefaultControls__Resources>::get()}
                        )));
    return ___internal_method;
  }
};
 void TMPro::TMP_DefaultControls::__set_s_TextElementSize(UnityEngine::Vector2 value)  {
::cordl_internals::setStaticField<UnityEngine::Vector2, "s_TextElementSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_DefaultControls>::get>(std::forward<UnityEngine::Vector2>(value));
}
 UnityEngine::Vector2 TMPro::TMP_DefaultControls::__get_s_TextElementSize()  {
return ::cordl_internals::getStaticField<UnityEngine::Vector2, "s_TextElementSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_DefaultControls>::get>();
}
 void TMPro::TMP_DefaultControls::__set_s_ThickElementSize(UnityEngine::Vector2 value)  {
::cordl_internals::setStaticField<UnityEngine::Vector2, "s_ThickElementSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_DefaultControls>::get>(std::forward<UnityEngine::Vector2>(value));
}
 UnityEngine::Vector2 TMPro::TMP_DefaultControls::__get_s_ThickElementSize()  {
return ::cordl_internals::getStaticField<UnityEngine::Vector2, "s_ThickElementSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_DefaultControls>::get>();
}
 void TMPro::TMP_DefaultControls::__set_s_ThinElementSize(UnityEngine::Vector2 value)  {
::cordl_internals::setStaticField<UnityEngine::Vector2, "s_ThinElementSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_DefaultControls>::get>(std::forward<UnityEngine::Vector2>(value));
}
 UnityEngine::Vector2 TMPro::TMP_DefaultControls::__get_s_ThinElementSize()  {
return ::cordl_internals::getStaticField<UnityEngine::Vector2, "s_ThinElementSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_DefaultControls>::get>();
}
 void TMPro::TMP_DefaultControls::__set_s_DefaultSelectableColor(UnityEngine::Color value)  {
::cordl_internals::setStaticField<UnityEngine::Color, "s_DefaultSelectableColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_DefaultControls>::get>(std::forward<UnityEngine::Color>(value));
}
 UnityEngine::Color TMPro::TMP_DefaultControls::__get_s_DefaultSelectableColor()  {
return ::cordl_internals::getStaticField<UnityEngine::Color, "s_DefaultSelectableColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_DefaultControls>::get>();
}
 void TMPro::TMP_DefaultControls::__set_s_TextColor(UnityEngine::Color value)  {
::cordl_internals::setStaticField<UnityEngine::Color, "s_TextColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_DefaultControls>::get>(std::forward<UnityEngine::Color>(value));
}
 UnityEngine::Color TMPro::TMP_DefaultControls::__get_s_TextColor()  {
return ::cordl_internals::getStaticField<UnityEngine::Color, "s_TextColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_DefaultControls>::get>();
}
 UnityEngine::GameObject TMPro::TMP_DefaultControls::CreateUIElementRoot(::StringW name, UnityEngine::Vector2 size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_DefaultControls>::get(),
                            "CreateUIElementRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::GameObject, false>(nullptr, ___internal_method, name, size);
}
 UnityEngine::GameObject TMPro::TMP_DefaultControls::CreateUIObject(::StringW name, UnityEngine::GameObject parent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_DefaultControls>::get(),
                            "CreateUIObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::GameObject, false>(nullptr, ___internal_method, name, parent);
}
 void TMPro::TMP_DefaultControls::SetDefaultTextValues(TMPro::TMP_Text lbl)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_DefaultControls>::get(),
                            "SetDefaultTextValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMP_Text>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, lbl);
}
 void TMPro::TMP_DefaultControls::SetDefaultColorTransitionValues(UnityEngine::UI::Selectable slider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_DefaultControls>::get(),
                            "SetDefaultColorTransitionValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::Selectable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, slider);
}
 void TMPro::TMP_DefaultControls::SetParentAndAlign(UnityEngine::GameObject child, UnityEngine::GameObject parent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_DefaultControls>::get(),
                            "SetParentAndAlign",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, child, parent);
}
 void TMPro::TMP_DefaultControls::SetLayerRecursively(UnityEngine::GameObject go, int32_t layer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_DefaultControls>::get(),
                            "SetLayerRecursively",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, go, layer);
}
 UnityEngine::GameObject TMPro::TMP_DefaultControls::CreateScrollbar(TMPro::TMPro__TMP_DefaultControls__Resources resources)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_DefaultControls>::get(),
                            "CreateScrollbar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMPro__TMP_DefaultControls__Resources>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::GameObject, false>(nullptr, ___internal_method, resources);
}
 UnityEngine::GameObject TMPro::TMP_DefaultControls::CreateButton(TMPro::TMPro__TMP_DefaultControls__Resources resources)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_DefaultControls>::get(),
                            "CreateButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMPro__TMP_DefaultControls__Resources>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::GameObject, false>(nullptr, ___internal_method, resources);
}
 UnityEngine::GameObject TMPro::TMP_DefaultControls::CreateText(TMPro::TMPro__TMP_DefaultControls__Resources resources)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_DefaultControls>::get(),
                            "CreateText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMPro__TMP_DefaultControls__Resources>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::GameObject, false>(nullptr, ___internal_method, resources);
}
 UnityEngine::GameObject TMPro::TMP_DefaultControls::CreateInputField(TMPro::TMPro__TMP_DefaultControls__Resources resources)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_DefaultControls>::get(),
                            "CreateInputField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMPro__TMP_DefaultControls__Resources>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::GameObject, false>(nullptr, ___internal_method, resources);
}
 UnityEngine::GameObject TMPro::TMP_DefaultControls::CreateDropdown(TMPro::TMPro__TMP_DefaultControls__Resources resources)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_DefaultControls>::get(),
                            "CreateDropdown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::TMPro__TMP_DefaultControls__Resources>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::GameObject, false>(nullptr, ___internal_method, resources);
}
