#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "TMPro/zzzz__TMP_FontStyleStack_def.hpp"
#include "TMPro/zzzz__FontStyles_def.hpp"
//  Writing Method size for method: TMPro::TMP_FontStyleStack.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_FontStyleStack::*)()>(&TMPro::TMP_FontStyleStack::Clear)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ab14dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_FontStyleStack>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_FontStyleStack.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (TMPro::TMP_FontStyleStack::*)(TMPro::FontStyles)>(&TMPro::TMP_FontStyleStack::Add)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2ab14e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_FontStyleStack>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::FontStyles>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_FontStyleStack.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (TMPro::TMP_FontStyleStack::*)(TMPro::FontStyles)>(&TMPro::TMP_FontStyleStack::Remove)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2ab15e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_FontStyleStack>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::FontStyles>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "bold", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "italic", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "underline", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "strikethrough", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "highlight", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "superscript", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "subscript", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "uppercase", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lowercase", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "smallcaps", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr TMPro::TMP_FontStyleStack::TMP_FontStyleStack(uint8_t bold, uint8_t italic, uint8_t underline, uint8_t strikethrough, uint8_t highlight, uint8_t superscript, uint8_t subscript, uint8_t uppercase, uint8_t lowercase, uint8_t smallcaps) noexcept : ::bs_hook::ValueTypeWrapper() {this->bold = bold;
this->italic = italic;
this->underline = underline;
this->strikethrough = strikethrough;
this->highlight = highlight;
this->superscript = superscript;
this->subscript = subscript;
this->uppercase = uppercase;
this->lowercase = lowercase;
this->smallcaps = smallcaps;
}
constexpr void TMPro::TMP_FontStyleStack::__set_bold(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t TMPro::TMP_FontStyleStack::__get_bold() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr void TMPro::TMP_FontStyleStack::__set_italic(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x1>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t TMPro::TMP_FontStyleStack::__get_italic() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x1>(this->__instance);
}
constexpr void TMPro::TMP_FontStyleStack::__set_underline(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x2>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t TMPro::TMP_FontStyleStack::__get_underline() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x2>(this->__instance);
}
constexpr void TMPro::TMP_FontStyleStack::__set_strikethrough(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x3>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t TMPro::TMP_FontStyleStack::__get_strikethrough() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x3>(this->__instance);
}
constexpr void TMPro::TMP_FontStyleStack::__set_highlight(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x4>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t TMPro::TMP_FontStyleStack::__get_highlight() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x4>(this->__instance);
}
constexpr void TMPro::TMP_FontStyleStack::__set_superscript(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x5>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t TMPro::TMP_FontStyleStack::__get_superscript() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x5>(this->__instance);
}
constexpr void TMPro::TMP_FontStyleStack::__set_subscript(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x6>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t TMPro::TMP_FontStyleStack::__get_subscript() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x6>(this->__instance);
}
constexpr void TMPro::TMP_FontStyleStack::__set_uppercase(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x7>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t TMPro::TMP_FontStyleStack::__get_uppercase() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x7>(this->__instance);
}
constexpr void TMPro::TMP_FontStyleStack::__set_lowercase(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x8>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t TMPro::TMP_FontStyleStack::__get_lowercase() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x8>(this->__instance);
}
constexpr void TMPro::TMP_FontStyleStack::__set_smallcaps(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x9>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t TMPro::TMP_FontStyleStack::__get_smallcaps() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x9>(this->__instance);
}
 void TMPro::TMP_FontStyleStack::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_FontStyleStack>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 uint8_t TMPro::TMP_FontStyleStack::Add(TMPro::FontStyles style)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_FontStyleStack>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::FontStyles>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, style);
}
 uint8_t TMPro::TMP_FontStyleStack::Remove(TMPro::FontStyles style)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_FontStyleStack>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::FontStyles>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, style);
}
