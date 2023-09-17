#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/UI/zzzz__MaskableGraphic_impl.hpp"
namespace {
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "TMPro/zzzz__TMP_CharacterInfo_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "TMPro/zzzz__TMP_ColorGradient_def.hpp"
#include "TMPro/zzzz__TMP_VertexDataUpdateFlags_def.hpp"
#include "TMPro/zzzz__TMP_StyleSheet_def.hpp"
#include "TMPro/zzzz__WordWrapState_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "TMPro/zzzz__TMP_Style_def.hpp"
#include "TMPro/zzzz__TextOverflowModes_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "TMPro/zzzz__Extents_def.hpp"
#include "TMPro/zzzz__HighlightState_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "TMPro/zzzz__TMP_FontAsset_def.hpp"
#include "TMPro/zzzz__TMP_TextElement_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "TMPro/zzzz__TextAlignmentOptions_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "TMPro/zzzz__TextureMappingOptions_def.hpp"
#include "TMPro/zzzz__TMP_SpriteAnimator_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "TMPro/zzzz__FontStyles_def.hpp"
#include "TMPro/zzzz__TMP_TextElementType_def.hpp"
#include "TMPro/zzzz__TextRenderFlags_def.hpp"
#include "TMPro/zzzz__VertexSortingOrder_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "TMPro/zzzz__VerticalAlignmentOptions_def.hpp"
#include "TMPro/zzzz__RichTextTagAttribute_def.hpp"
#include "TMPro/zzzz__HorizontalAlignmentOptions_def.hpp"
#include "TMPro/zzzz__ITextPreprocessor_def.hpp"
#include "TMPro/zzzz__TMP_SpriteAsset_def.hpp"
#include "TMPro/zzzz__TMP_TextProcessingStack_1_def.hpp"
#include "TMPro/zzzz__FontWeight_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/UI/zzzz__LayoutElement_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "TMPro/zzzz__TMP_TextInfo_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "TMPro/zzzz__ColorMode_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "TMPro/zzzz__MaterialReference_def.hpp"
#include "TMPro/zzzz__TMP_FontStyleStack_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "TMPro/zzzz__VertexGradient_def.hpp"
#include "TMPro/zzzz__TMP_Character_def.hpp"
//  Writing Method size for method: ::TMPro::____TMPro__TMP_Text__CharacterSubstitution._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::____TMPro__TMP_Text__CharacterSubstitution::*)(int32_t, uint32_t)>(&::TMPro::____TMPro__TMP_Text__CharacterSubstitution::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ab0190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_Text__CharacterSubstitution>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unicode", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::____TMPro__TMP_Text__CharacterSubstitution::____TMPro__TMP_Text__CharacterSubstitution(int32_t index, uint32_t unicode) noexcept : ::bs_hook::ValueTypeWrapper() {this->index = index;
this->unicode = unicode;
}
constexpr void ::TMPro::____TMPro__TMP_Text__CharacterSubstitution::__set_index(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::____TMPro__TMP_Text__CharacterSubstitution::__get_index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::TMPro::____TMPro__TMP_Text__CharacterSubstitution::__set_unicode(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x4>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::TMPro::____TMPro__TMP_Text__CharacterSubstitution::__get_unicode() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x4>(this->__instance);
}
 void ::TMPro::____TMPro__TMP_Text__CharacterSubstitution::_ctor(int32_t index, uint32_t unicode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_Text__CharacterSubstitution>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, index, unicode);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::____TMPro__TMP_Text__TextInputSources::____TMPro__TMP_Text__TextInputSources(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::TMPro::____TMPro__TMP_Text__TextInputSources::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::____TMPro__TMP_Text__TextInputSources::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::TMPro::____TMPro__TMP_Text__TextInputSources  ::TMPro::____TMPro__TMP_Text__TextInputSources::TextInputBox{0};
constexpr ::TMPro::____TMPro__TMP_Text__TextInputSources  ::TMPro::____TMPro__TMP_Text__TextInputSources::SetText{1};
constexpr ::TMPro::____TMPro__TMP_Text__TextInputSources  ::TMPro::____TMPro__TMP_Text__TextInputSources::SetTextArray{2};
constexpr ::TMPro::____TMPro__TMP_Text__TextInputSources  ::TMPro::____TMPro__TMP_Text__TextInputSources::TextString{3};
// Ctor Parameters [CppParam { name: "unicode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "stringIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::____TMPro__TMP_Text__UnicodeChar::____TMPro__TMP_Text__UnicodeChar(int32_t unicode, int32_t stringIndex, int32_t length) noexcept : ::bs_hook::ValueTypeWrapper() {this->unicode = unicode;
this->stringIndex = stringIndex;
this->length = length;
}
constexpr void ::TMPro::____TMPro__TMP_Text__UnicodeChar::__set_unicode(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::____TMPro__TMP_Text__UnicodeChar::__get_unicode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::TMPro::____TMPro__TMP_Text__UnicodeChar::__set_stringIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::____TMPro__TMP_Text__UnicodeChar::__get_stringIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void ::TMPro::____TMPro__TMP_Text__UnicodeChar::__set_length(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::____TMPro__TMP_Text__UnicodeChar::__get_length() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
//  Writing Method size for method: ::TMPro::____TMPro__TMP_Text__SpecialCharacter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::____TMPro__TMP_Text__SpecialCharacter::*)(::TMPro::TMP_Character, int32_t)>(&::TMPro::____TMPro__TMP_Text__SpecialCharacter::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2ab0198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_Text__SpecialCharacter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Character>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "character", ty: "::TMPro::TMP_Character", modifiers: "", def_value: Some("csnull") }, CppParam { name: "fontAsset", ty: "::TMPro::TMP_FontAsset", modifiers: "", def_value: Some("csnull") }, CppParam { name: "material", ty: "::UnityEngine::Material", modifiers: "", def_value: Some("csnull") }, CppParam { name: "materialIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::____TMPro__TMP_Text__SpecialCharacter::____TMPro__TMP_Text__SpecialCharacter(::TMPro::TMP_Character character, ::TMPro::TMP_FontAsset fontAsset, ::UnityEngine::Material material, int32_t materialIndex) noexcept : ::bs_hook::ValueTypeWrapper() {this->character = character;
this->fontAsset = fontAsset;
this->material = material;
this->materialIndex = materialIndex;
}
constexpr void ::TMPro::____TMPro__TMP_Text__SpecialCharacter::__set_character(::TMPro::TMP_Character value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_Character, 0x0>(this->__instance, std::forward<::TMPro::TMP_Character>(value));
}
constexpr ::TMPro::TMP_Character ::TMPro::____TMPro__TMP_Text__SpecialCharacter::__get_character() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_Character, 0x0>(this->__instance);
}
constexpr void ::TMPro::____TMPro__TMP_Text__SpecialCharacter::__set_fontAsset(::TMPro::TMP_FontAsset value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_FontAsset, 0x8>(this->__instance, std::forward<::TMPro::TMP_FontAsset>(value));
}
constexpr ::TMPro::TMP_FontAsset ::TMPro::____TMPro__TMP_Text__SpecialCharacter::__get_fontAsset() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_FontAsset, 0x8>(this->__instance);
}
constexpr void ::TMPro::____TMPro__TMP_Text__SpecialCharacter::__set_material(::UnityEngine::Material value)  {
::cordl_internals::setInstanceField<::UnityEngine::Material, 0x10>(this->__instance, std::forward<::UnityEngine::Material>(value));
}
constexpr ::UnityEngine::Material ::TMPro::____TMPro__TMP_Text__SpecialCharacter::__get_material() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Material, 0x10>(this->__instance);
}
constexpr void ::TMPro::____TMPro__TMP_Text__SpecialCharacter::__set_materialIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::____TMPro__TMP_Text__SpecialCharacter::__get_materialIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->__instance);
}
 void ::TMPro::____TMPro__TMP_Text__SpecialCharacter::_ctor(::TMPro::TMP_Character character, int32_t materialIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_Text__SpecialCharacter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Character>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, character, materialIndex);
}
//  Writing Method size for method: ::TMPro::____TMPro__TMP_Text__TextBackingContainer.get_Capacity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::____TMPro__TMP_Text__TextBackingContainer::*)()>(&::TMPro::____TMPro__TMP_Text__TextBackingContainer::get_Capacity)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2ab0284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_Text__TextBackingContainer>::get(),
                            "get_Capacity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::____TMPro__TMP_Text__TextBackingContainer.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::____TMPro__TMP_Text__TextBackingContainer::*)()>(&::TMPro::____TMPro__TMP_Text__TextBackingContainer::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ab02a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_Text__TextBackingContainer>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::____TMPro__TMP_Text__TextBackingContainer.set_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::____TMPro__TMP_Text__TextBackingContainer::*)(int32_t)>(&::TMPro::____TMPro__TMP_Text__TextBackingContainer::set_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ab02a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_Text__TextBackingContainer>::get(),
                            "set_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::____TMPro__TMP_Text__TextBackingContainer.get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::TMPro::____TMPro__TMP_Text__TextBackingContainer::*)(int32_t)>(&::TMPro::____TMPro__TMP_Text__TextBackingContainer::get_Item)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2ab02b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_Text__TextBackingContainer>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::____TMPro__TMP_Text__TextBackingContainer.set_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::____TMPro__TMP_Text__TextBackingContainer::*)(int32_t, uint32_t)>(&::TMPro::____TMPro__TMP_Text__TextBackingContainer::set_Item)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2ab02e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_Text__TextBackingContainer>::get(),
                            "set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::____TMPro__TMP_Text__TextBackingContainer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::____TMPro__TMP_Text__TextBackingContainer::*)(int32_t)>(&::TMPro::____TMPro__TMP_Text__TextBackingContainer::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2ab03a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_Text__TextBackingContainer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::____TMPro__TMP_Text__TextBackingContainer.Resize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::____TMPro__TMP_Text__TextBackingContainer::*)(int32_t)>(&::TMPro::____TMPro__TMP_Text__TextBackingContainer::Resize)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2ab0340;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_Text__TextBackingContainer>::get(),
                            "Resize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::____TMPro__TMP_Text__TextBackingContainer::____TMPro__TMP_Text__TextBackingContainer(::ArrayW<uint32_t> m_Array, int32_t m_Count) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Array = m_Array;
this->m_Count = m_Count;
}
constexpr void ::TMPro::____TMPro__TMP_Text__TextBackingContainer::__set_m_Array(::ArrayW<uint32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint32_t>, 0x0>(this->__instance, std::forward<::ArrayW<uint32_t>>(value));
}
constexpr ::ArrayW<uint32_t> ::TMPro::____TMPro__TMP_Text__TextBackingContainer::__get_m_Array() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint32_t>, 0x0>(this->__instance);
}
constexpr void ::TMPro::____TMPro__TMP_Text__TextBackingContainer::__set_m_Count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::____TMPro__TMP_Text__TextBackingContainer::__get_m_Count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
 int32_t ::TMPro::____TMPro__TMP_Text__TextBackingContainer::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_Text__TextBackingContainer>::get(),
                            "get_Capacity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t ::TMPro::____TMPro__TMP_Text__TextBackingContainer::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_Text__TextBackingContainer>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::TMPro::____TMPro__TMP_Text__TextBackingContainer::set_Count(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_Text__TextBackingContainer>::get(),
                            "set_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 uint32_t ::TMPro::____TMPro__TMP_Text__TextBackingContainer::get_Item(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_Text__TextBackingContainer>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, index);
}
 void ::TMPro::____TMPro__TMP_Text__TextBackingContainer::set_Item(int32_t index, uint32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_Text__TextBackingContainer>::get(),
                            "set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, index, value);
}
 void ::TMPro::____TMPro__TMP_Text__TextBackingContainer::_ctor(int32_t size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_Text__TextBackingContainer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, size);
}
 void ::TMPro::____TMPro__TMP_Text__TextBackingContainer::Resize(int32_t size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_Text__TextBackingContainer>::get(),
                            "Resize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, size);
}
//  Writing Method size for method: ::TMPro::____TMPro__TMP_Text____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::____TMPro__TMP_Text____c::*)()>(&::TMPro::____TMPro__TMP_Text____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ab0468;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_Text____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::____TMPro__TMP_Text____c.__ctor_b__622_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::____TMPro__TMP_Text____c::*)(::TMPro::TMP_TextInfo)>(&::TMPro::____TMPro__TMP_Text____c::__ctor_b__622_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ab0470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_Text____c>::get(),
                            "<.ctor>b__622_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_TextInfo>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::TMPro::____TMPro__TMP_Text____c::__set___9(::TMPro::____TMPro__TMP_Text____c value)  {
::cordl_internals::setStaticField<::TMPro::____TMPro__TMP_Text____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_Text____c>::get>(std::forward<::TMPro::____TMPro__TMP_Text____c>(value));
}
 ::TMPro::____TMPro__TMP_Text____c ::TMPro::____TMPro__TMP_Text____c::__get___9()  {
return ::cordl_internals::getStaticField<::TMPro::____TMPro__TMP_Text____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_Text____c>::get>();
}
 void ::TMPro::____TMPro__TMP_Text____c::__set___9__622_0(::System::Action_1<::TMPro::TMP_TextInfo> value)  {
::cordl_internals::setStaticField<::System::Action_1<::TMPro::TMP_TextInfo>, "<>9__622_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_Text____c>::get>(std::forward<::System::Action_1<::TMPro::TMP_TextInfo>>(value));
}
 ::System::Action_1<::TMPro::TMP_TextInfo> ::TMPro::____TMPro__TMP_Text____c::__get___9__622_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::TMPro::TMP_TextInfo>, "<>9__622_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_Text____c>::get>();
}
// Ctor Parameters []
 ::TMPro::____TMPro__TMP_Text____c::____TMPro__TMP_Text____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____TMPro__TMP_Text____c>())) {}
 void ::TMPro::____TMPro__TMP_Text____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_Text____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::____TMPro__TMP_Text____c::__ctor_b__622_0(::TMPro::TMP_TextInfo _p0_)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::____TMPro__TMP_Text____c>::get(),
                            "<.ctor>b__622_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_TextInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, _p0_);
}
//  Writing Method size for method: ::TMPro::TMP_Text.get_text
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_text)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2a86674;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  65
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_text
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::StringW)>(&::TMPro::TMP_Text::set_text)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2a8675c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  66
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_textPreprocessor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::ITextPreprocessor (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_textPreprocessor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a867f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_textPreprocessor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_textPreprocessor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::TMPro::ITextPreprocessor)>(&::TMPro::TMP_Text::set_textPreprocessor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a867fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_textPreprocessor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::ITextPreprocessor>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_isRightToLeftText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_isRightToLeftText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a86804;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_isRightToLeftText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_isRightToLeftText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(bool)>(&::TMPro::TMP_Text::set_isRightToLeftText)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2a8680c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_isRightToLeftText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_font
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_FontAsset (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_font)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a86860;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_font",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_font
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::TMPro::TMP_FontAsset)>(&::TMPro::TMP_Text::set_font)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2a86868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_font",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_fontSharedMaterial
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_fontSharedMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a86930;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  67
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_fontSharedMaterial
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::UnityEngine::Material)>(&::TMPro::TMP_Text::set_fontSharedMaterial)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2a86938;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  68
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_fontSharedMaterials
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Material> (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_fontSharedMaterials)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a86a00;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  69
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_fontSharedMaterials
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::ArrayW<::UnityEngine::Material>)>(&::TMPro::TMP_Text::set_fontSharedMaterials)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2a86a10;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  70
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_fontMaterial
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_fontMaterial)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2a86a5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_fontMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_fontMaterial
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::UnityEngine::Material)>(&::TMPro::TMP_Text::set_fontMaterial)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2a86a70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_fontMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_fontMaterials
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Material> (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_fontMaterials)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2a86b6c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  71
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_fontMaterials
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::ArrayW<::UnityEngine::Material>)>(&::TMPro::TMP_Text::set_fontMaterials)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2a86b80;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  72
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_color
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_color)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2a86bcc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_color
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::UnityEngine::Color)>(&::TMPro::TMP_Text::set_color)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2a86be0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_alpha
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_alpha)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a86c58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_alpha",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_alpha
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(float_t)>(&::TMPro::TMP_Text::set_alpha)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2a86c60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_alpha",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_enableVertexGradient
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_enableVertexGradient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a86c8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_enableVertexGradient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_enableVertexGradient
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(bool)>(&::TMPro::TMP_Text::set_enableVertexGradient)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2a86c94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_enableVertexGradient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_colorGradient
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::VertexGradient (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_colorGradient)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2a86cc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_colorGradient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_colorGradient
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::TMPro::VertexGradient)>(&::TMPro::TMP_Text::set_colorGradient)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2a86cd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_colorGradient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::VertexGradient>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_colorGradientPreset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_ColorGradient (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_colorGradientPreset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a86d00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_colorGradientPreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_colorGradientPreset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::TMPro::TMP_ColorGradient)>(&::TMPro::TMP_Text::set_colorGradientPreset)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a86d08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_colorGradientPreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_ColorGradient>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_spriteAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_SpriteAsset (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_spriteAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a86d24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_spriteAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_spriteAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::TMPro::TMP_SpriteAsset)>(&::TMPro::TMP_Text::set_spriteAsset)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2a86d2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_spriteAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_SpriteAsset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_tintAllSprites
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_tintAllSprites)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a86d68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_tintAllSprites",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_tintAllSprites
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(bool)>(&::TMPro::TMP_Text::set_tintAllSprites)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2a86d70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_tintAllSprites",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_styleSheet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_StyleSheet (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_styleSheet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a86da0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_styleSheet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_styleSheet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::TMPro::TMP_StyleSheet)>(&::TMPro::TMP_Text::set_styleSheet)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2a86da8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_styleSheet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_StyleSheet>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_textStyle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_Style (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_textStyle)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2a86de4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_textStyle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_textStyle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::TMPro::TMP_Style)>(&::TMPro::TMP_Text::set_textStyle)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2a86f0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_textStyle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Style>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_overrideColorTags
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_overrideColorTags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a86f58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_overrideColorTags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_overrideColorTags
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(bool)>(&::TMPro::TMP_Text::set_overrideColorTags)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2a86f60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_overrideColorTags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_faceColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color32 (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_faceColor)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x2a86f90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_faceColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_faceColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::UnityEngine::Color32)>(&::TMPro::TMP_Text::set_faceColor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2a87308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_faceColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_outlineColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color32 (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_outlineColor)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x2a87390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_outlineColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_outlineColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::UnityEngine::Color32)>(&::TMPro::TMP_Text::set_outlineColor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2a87708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_outlineColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_outlineWidth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_outlineWidth)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2a8777c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_outlineWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_outlineWidth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(float_t)>(&::TMPro::TMP_Text::set_outlineWidth)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2a87838;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_outlineWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_fontSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_fontSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a87898;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_fontSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_fontSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(float_t)>(&::TMPro::TMP_Text::set_fontSize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2a878a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_fontSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_fontWeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::FontWeight (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_fontWeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a87900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_fontWeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_fontWeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::TMPro::FontWeight)>(&::TMPro::TMP_Text::set_fontWeight)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2a87908;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_fontWeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::FontWeight>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_pixelsPerUnit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_pixelsPerUnit)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2a87958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_pixelsPerUnit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_enableAutoSizing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_enableAutoSizing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a87ac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_enableAutoSizing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_enableAutoSizing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(bool)>(&::TMPro::TMP_Text::set_enableAutoSizing)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2a87ad0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_enableAutoSizing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_fontSizeMin
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_fontSizeMin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a87b1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_fontSizeMin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_fontSizeMin
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(float_t)>(&::TMPro::TMP_Text::set_fontSizeMin)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2a87b24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_fontSizeMin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_fontSizeMax
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_fontSizeMax)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a87b6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_fontSizeMax",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_fontSizeMax
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(float_t)>(&::TMPro::TMP_Text::set_fontSizeMax)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2a87b74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_fontSizeMax",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_fontStyle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::FontStyles (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_fontStyle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a87bbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_fontStyle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_fontStyle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::TMPro::FontStyles)>(&::TMPro::TMP_Text::set_fontStyle)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2a87bc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_fontStyle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::FontStyles>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_isUsingBold
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_isUsingBold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a87c14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_isUsingBold",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_horizontalAlignment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::HorizontalAlignmentOptions (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_horizontalAlignment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a87c1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_horizontalAlignment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_horizontalAlignment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::TMPro::HorizontalAlignmentOptions)>(&::TMPro::TMP_Text::set_horizontalAlignment)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2a87c24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_horizontalAlignment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::HorizontalAlignmentOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_verticalAlignment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::VerticalAlignmentOptions (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_verticalAlignment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a87c50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_verticalAlignment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_verticalAlignment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::TMPro::VerticalAlignmentOptions)>(&::TMPro::TMP_Text::set_verticalAlignment)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2a87c58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_verticalAlignment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::VerticalAlignmentOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_alignment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TextAlignmentOptions (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_alignment)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a87c84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_alignment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_alignment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::TMPro::TextAlignmentOptions)>(&::TMPro::TMP_Text::set_alignment)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2a87c94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_alignment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TextAlignmentOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_characterSpacing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_characterSpacing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a87cd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_characterSpacing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_characterSpacing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(float_t)>(&::TMPro::TMP_Text::set_characterSpacing)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2a87ce0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_characterSpacing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_wordSpacing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_wordSpacing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a87d30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_wordSpacing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_wordSpacing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(float_t)>(&::TMPro::TMP_Text::set_wordSpacing)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2a87d38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_wordSpacing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_lineSpacing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_lineSpacing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a87d88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_lineSpacing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_lineSpacing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(float_t)>(&::TMPro::TMP_Text::set_lineSpacing)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2a87d90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_lineSpacing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_lineSpacingAdjustment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_lineSpacingAdjustment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a87de0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_lineSpacingAdjustment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_lineSpacingAdjustment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(float_t)>(&::TMPro::TMP_Text::set_lineSpacingAdjustment)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2a87de8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_lineSpacingAdjustment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_paragraphSpacing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_paragraphSpacing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a87e38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_paragraphSpacing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_paragraphSpacing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(float_t)>(&::TMPro::TMP_Text::set_paragraphSpacing)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2a87e40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_paragraphSpacing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_characterWidthAdjustment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_characterWidthAdjustment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a87e90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_characterWidthAdjustment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_characterWidthAdjustment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(float_t)>(&::TMPro::TMP_Text::set_characterWidthAdjustment)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2a87e98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_characterWidthAdjustment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_enableWordWrapping
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_enableWordWrapping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a87ee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_enableWordWrapping",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_enableWordWrapping
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(bool)>(&::TMPro::TMP_Text::set_enableWordWrapping)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2a87ef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_enableWordWrapping",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_wordWrappingRatios
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_wordWrappingRatios)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a87f44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_wordWrappingRatios",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_wordWrappingRatios
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(float_t)>(&::TMPro::TMP_Text::set_wordWrappingRatios)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2a87f4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_wordWrappingRatios",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_overflowMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TextOverflowModes (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_overflowMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a87f9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_overflowMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_overflowMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::TMPro::TextOverflowModes)>(&::TMPro::TMP_Text::set_overflowMode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2a87fa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_overflowMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TextOverflowModes>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_isTextOverflowing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_isTextOverflowing)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a87ff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_isTextOverflowing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_firstOverflowCharacterIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_firstOverflowCharacterIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a88004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_firstOverflowCharacterIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_linkedTextComponent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_Text (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_linkedTextComponent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a8800c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_linkedTextComponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_linkedTextComponent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::TMPro::TMP_Text)>(&::TMPro::TMP_Text::set_linkedTextComponent)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2a88014;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_linkedTextComponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_isTextTruncated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_isTextTruncated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a882f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_isTextTruncated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_enableKerning
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_enableKerning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a88300;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_enableKerning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_enableKerning
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(bool)>(&::TMPro::TMP_Text::set_enableKerning)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2a88308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_enableKerning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_extraPadding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_extraPadding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a8835c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_extraPadding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_extraPadding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(bool)>(&::TMPro::TMP_Text::set_extraPadding)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2a88364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_extraPadding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_richText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_richText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a883b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_richText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_richText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(bool)>(&::TMPro::TMP_Text::set_richText)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2a883c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_richText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_parseCtrlCharacters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_parseCtrlCharacters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a88414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_parseCtrlCharacters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_parseCtrlCharacters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(bool)>(&::TMPro::TMP_Text::set_parseCtrlCharacters)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2a8841c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_parseCtrlCharacters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_isOverlay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_isOverlay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a88470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_isOverlay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_isOverlay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(bool)>(&::TMPro::TMP_Text::set_isOverlay)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2a88478;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_isOverlay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_isOrthographic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_isOrthographic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a884cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_isOrthographic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_isOrthographic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(bool)>(&::TMPro::TMP_Text::set_isOrthographic)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2a884d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_isOrthographic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_enableCulling
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_enableCulling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a88504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_enableCulling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_enableCulling
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(bool)>(&::TMPro::TMP_Text::set_enableCulling)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2a8850c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_enableCulling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_ignoreVisibility
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_ignoreVisibility)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a88548;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_ignoreVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_ignoreVisibility
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(bool)>(&::TMPro::TMP_Text::set_ignoreVisibility)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2a88550;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_ignoreVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_horizontalMapping
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TextureMappingOptions (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_horizontalMapping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a88570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_horizontalMapping",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_horizontalMapping
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::TMPro::TextureMappingOptions)>(&::TMPro::TMP_Text::set_horizontalMapping)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2a88578;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_horizontalMapping",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TextureMappingOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_verticalMapping
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TextureMappingOptions (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_verticalMapping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a885a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_verticalMapping",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_verticalMapping
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::TMPro::TextureMappingOptions)>(&::TMPro::TMP_Text::set_verticalMapping)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2a885ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_verticalMapping",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TextureMappingOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_mappingUvLineOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_mappingUvLineOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a885d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_mappingUvLineOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_mappingUvLineOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(float_t)>(&::TMPro::TMP_Text::set_mappingUvLineOffset)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2a885e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_mappingUvLineOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_renderMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TextRenderFlags (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_renderMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a8860c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_renderMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_renderMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::TMPro::TextRenderFlags)>(&::TMPro::TMP_Text::set_renderMode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a88614;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_renderMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TextRenderFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_geometrySortingOrder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::VertexSortingOrder (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_geometrySortingOrder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a88630;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_geometrySortingOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_geometrySortingOrder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::TMPro::VertexSortingOrder)>(&::TMPro::TMP_Text::set_geometrySortingOrder)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a88638;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_geometrySortingOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::VertexSortingOrder>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_isTextObjectScaleStatic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_isTextObjectScaleStatic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a88654;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_isTextObjectScaleStatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_isTextObjectScaleStatic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(bool)>(&::TMPro::TMP_Text::set_isTextObjectScaleStatic)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2a8865c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_isTextObjectScaleStatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_vertexBufferAutoSizeReduction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_vertexBufferAutoSizeReduction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a886dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_vertexBufferAutoSizeReduction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_vertexBufferAutoSizeReduction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(bool)>(&::TMPro::TMP_Text::set_vertexBufferAutoSizeReduction)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2a886e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_vertexBufferAutoSizeReduction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_firstVisibleCharacter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_firstVisibleCharacter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a88704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_firstVisibleCharacter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_firstVisibleCharacter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(int32_t)>(&::TMPro::TMP_Text::set_firstVisibleCharacter)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2a8870c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_firstVisibleCharacter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_maxVisibleCharacters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_maxVisibleCharacters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a88738;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_maxVisibleCharacters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_maxVisibleCharacters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(int32_t)>(&::TMPro::TMP_Text::set_maxVisibleCharacters)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2a88740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_maxVisibleCharacters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_maxVisibleWords
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_maxVisibleWords)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a8876c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_maxVisibleWords",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_maxVisibleWords
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(int32_t)>(&::TMPro::TMP_Text::set_maxVisibleWords)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2a88774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_maxVisibleWords",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_maxVisibleLines
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_maxVisibleLines)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a887a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_maxVisibleLines",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_maxVisibleLines
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(int32_t)>(&::TMPro::TMP_Text::set_maxVisibleLines)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2a887a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_maxVisibleLines",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_useMaxVisibleDescender
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_useMaxVisibleDescender)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a887d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_useMaxVisibleDescender",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_useMaxVisibleDescender
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(bool)>(&::TMPro::TMP_Text::set_useMaxVisibleDescender)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2a887dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_useMaxVisibleDescender",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_pageToDisplay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_pageToDisplay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a8880c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_pageToDisplay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_pageToDisplay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(int32_t)>(&::TMPro::TMP_Text::set_pageToDisplay)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2a88814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_pageToDisplay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_margin
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_margin)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2a88840;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  73
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_margin
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::UnityEngine::Vector4)>(&::TMPro::TMP_Text::set_margin)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2a88854;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  74
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_textInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_TextInfo (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_textInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a888f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_textInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_havePropertiesChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_havePropertiesChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a888f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_havePropertiesChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_havePropertiesChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(bool)>(&::TMPro::TMP_Text::set_havePropertiesChanged)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2a88900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_havePropertiesChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_isUsingLegacyAnimationComponent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_isUsingLegacyAnimationComponent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a88928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_isUsingLegacyAnimationComponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_isUsingLegacyAnimationComponent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(bool)>(&::TMPro::TMP_Text::set_isUsingLegacyAnimationComponent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a88930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_isUsingLegacyAnimationComponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_transform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_transform)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2a8893c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_transform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_rectTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectTransform (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_rectTransform)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2a889d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_rectTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_autoSizeTextContainer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_autoSizeTextContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a88a64;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  75
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_autoSizeTextContainer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(bool)>(&::TMPro::TMP_Text::set_autoSizeTextContainer)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a88a6c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  76
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_mesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Mesh (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_mesh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a88a78;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  77
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_isVolumetricText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_isVolumetricText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a88a80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_isVolumetricText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.set_isVolumetricText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(bool)>(&::TMPro::TMP_Text::set_isVolumetricText)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2a88a88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_isVolumetricText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_bounds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Bounds (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_bounds)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2a88af0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_bounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_textBounds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Bounds (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_textBounds)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2a88ba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_textBounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.add_OnFontAssetRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Func_3<int32_t,::StringW,::TMPro::TMP_FontAsset>)>(&::TMPro::TMP_Text::add_OnFontAssetRequest)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2a88d64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "add_OnFontAssetRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_3<int32_t,::StringW,::TMPro::TMP_FontAsset>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.remove_OnFontAssetRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Func_3<int32_t,::StringW,::TMPro::TMP_FontAsset>)>(&::TMPro::TMP_Text::remove_OnFontAssetRequest)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2a88e58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "remove_OnFontAssetRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_3<int32_t,::StringW,::TMPro::TMP_FontAsset>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.add_OnSpriteAssetRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Func_3<int32_t,::StringW,::TMPro::TMP_SpriteAsset>)>(&::TMPro::TMP_Text::add_OnSpriteAssetRequest)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2a88f4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "add_OnSpriteAssetRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_3<int32_t,::StringW,::TMPro::TMP_SpriteAsset>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.remove_OnSpriteAssetRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Func_3<int32_t,::StringW,::TMPro::TMP_SpriteAsset>)>(&::TMPro::TMP_Text::remove_OnSpriteAssetRequest)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2a89040;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "remove_OnSpriteAssetRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_3<int32_t,::StringW,::TMPro::TMP_SpriteAsset>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.add_OnPreRenderText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::System::Action_1<::TMPro::TMP_TextInfo>)>(&::TMPro::TMP_Text::add_OnPreRenderText)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2a89134;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  78
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.remove_OnPreRenderText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::System::Action_1<::TMPro::TMP_TextInfo>)>(&::TMPro::TMP_Text::remove_OnPreRenderText)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2a891e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  79
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_spriteAnimator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_SpriteAnimator (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_spriteAnimator)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2a8929c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_spriteAnimator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_flexibleHeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_flexibleHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a89388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_flexibleHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_flexibleWidth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_flexibleWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a89390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_flexibleWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_minWidth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_minWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a89398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_minWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_minHeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_minHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a893a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_minHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_maxWidth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_maxWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a893a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_maxWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_maxHeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_maxHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a893b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_maxHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_layoutElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::LayoutElement (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_layoutElement)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2a893b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_layoutElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_preferredWidth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_preferredWidth)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a8944c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  84
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_preferredHeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_preferredHeight)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a895a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  85
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_renderedWidth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_renderedWidth)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a89748;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  86
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_renderedHeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_renderedHeight)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2a89750;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  87
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.get_layoutPriority
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::get_layoutPriority)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a89778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_layoutPriority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.LoadFontAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::LoadFontAsset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a89780;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  89
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.SetSharedMaterial
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::UnityEngine::Material)>(&::TMPro::TMP_Text::SetSharedMaterial)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a89784;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  90
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.GetMaterial
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material (::TMPro::TMP_Text::*)(::UnityEngine::Material)>(&::TMPro::TMP_Text::GetMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a89788;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  91
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.SetFontBaseMaterial
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::UnityEngine::Material)>(&::TMPro::TMP_Text::SetFontBaseMaterial)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a89790;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  92
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.GetSharedMaterials
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Material> (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::GetSharedMaterials)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a89794;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  93
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.SetSharedMaterials
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::ArrayW<::UnityEngine::Material>)>(&::TMPro::TMP_Text::SetSharedMaterials)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a8979c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  94
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.GetMaterials
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Material> (::TMPro::TMP_Text::*)(::ArrayW<::UnityEngine::Material>)>(&::TMPro::TMP_Text::GetMaterials)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a897a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  95
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.CreateMaterialInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material (::TMPro::TMP_Text::*)(::UnityEngine::Material)>(&::TMPro::TMP_Text::CreateMaterialInstance)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2a897a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  96
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.SetVertexColorGradient
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::TMPro::TMP_ColorGradient)>(&::TMPro::TMP_Text::SetVertexColorGradient)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2a89868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetVertexColorGradient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_ColorGradient>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.SetTextSortingOrder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::TMPro::VertexSortingOrder)>(&::TMPro::TMP_Text::SetTextSortingOrder)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a89920;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetTextSortingOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::VertexSortingOrder>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.SetTextSortingOrder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::ArrayW<int32_t>)>(&::TMPro::TMP_Text::SetTextSortingOrder)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a89924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetTextSortingOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.SetFaceColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::UnityEngine::Color32)>(&::TMPro::TMP_Text::SetFaceColor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a89928;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  97
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.SetOutlineColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::UnityEngine::Color32)>(&::TMPro::TMP_Text::SetOutlineColor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a8992c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  98
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.SetOutlineThickness
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(float_t)>(&::TMPro::TMP_Text::SetOutlineThickness)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a89930;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  99
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.SetShaderDepth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::SetShaderDepth)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a89934;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  100
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.SetCulling
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::SetCulling)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a89938;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  101
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.UpdateCulling
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::UpdateCulling)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a8993c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  102
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.GetPaddingForMaterial
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::GetPaddingForMaterial)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2a89940;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  103
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.GetPaddingForMaterial
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_Text::*)(::UnityEngine::Material)>(&::TMPro::TMP_Text::GetPaddingForMaterial)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2a89a60;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  104
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.GetTextContainerLocalCorners
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector3> (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::GetTextContainerLocalCorners)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a89b60;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  105
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.ForceMeshUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(bool, bool)>(&::TMPro::TMP_Text::ForceMeshUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a89b68;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  106
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.UpdateGeometry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::UnityEngine::Mesh, int32_t)>(&::TMPro::TMP_Text::UpdateGeometry)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a89b6c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  107
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.UpdateVertexData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::TMPro::TMP_VertexDataUpdateFlags)>(&::TMPro::TMP_Text::UpdateVertexData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a89b70;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  108
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.UpdateVertexData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::UpdateVertexData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a89b74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  109
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.SetVertices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::ArrayW<::UnityEngine::Vector3>)>(&::TMPro::TMP_Text::SetVertices)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a89b78;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  110
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.UpdateMeshPadding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::UpdateMeshPadding)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a89b7c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  111
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.CrossFadeColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::UnityEngine::Color, float_t, bool, bool)>(&::TMPro::TMP_Text::CrossFadeColor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2a89b80;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  47
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.CrossFadeAlpha
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(float_t, float_t, bool)>(&::TMPro::TMP_Text::CrossFadeAlpha)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2a89c08;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  49
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.InternalCrossFadeColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::UnityEngine::Color, float_t, bool, bool)>(&::TMPro::TMP_Text::InternalCrossFadeColor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a89c5c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  112
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.InternalCrossFadeAlpha
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(float_t, float_t, bool)>(&::TMPro::TMP_Text::InternalCrossFadeAlpha)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a89c60;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  113
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.ParseInputText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::ParseInputText)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2a89c64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "ParseInputText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.PopulateTextBackingArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::StringW)>(&::TMPro::TMP_Text::PopulateTextBackingArray)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a89d64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "PopulateTextBackingArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.PopulateTextBackingArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::StringW, int32_t, int32_t)>(&::TMPro::TMP_Text::PopulateTextBackingArray)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a8a7ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "PopulateTextBackingArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.PopulateTextBackingArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::System::Text::StringBuilder, int32_t, int32_t)>(&::TMPro::TMP_Text::PopulateTextBackingArray)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2a8a8e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "PopulateTextBackingArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.PopulateTextBackingArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::TMPro::TMP_Text::PopulateTextBackingArray)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2a8aa0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "PopulateTextBackingArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.PopulateTextProcessingArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::PopulateTextProcessingArray)> {
  constexpr static std::size_t size = 0xa70;
  constexpr static std::size_t addrs = 0x2a89d7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "PopulateTextProcessingArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.SetTextInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::StringW)>(&::TMPro::TMP_Text::SetTextInternal)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2a8bdb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetTextInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.SetText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::StringW, bool)>(&::TMPro::TMP_Text::SetText)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2a8be00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.SetText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::StringW, float_t)>(&::TMPro::TMP_Text::SetText)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2a8be7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.SetText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::StringW, float_t, float_t)>(&::TMPro::TMP_Text::SetText)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a8c15c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.SetText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::StringW, float_t, float_t, float_t)>(&::TMPro::TMP_Text::SetText)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a8c178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.SetText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::StringW, float_t, float_t, float_t, float_t)>(&::TMPro::TMP_Text::SetText)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2a8c190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.SetText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::StringW, float_t, float_t, float_t, float_t, float_t)>(&::TMPro::TMP_Text::SetText)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a8c1a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.SetText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::StringW, float_t, float_t, float_t, float_t, float_t, float_t)>(&::TMPro::TMP_Text::SetText)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a8c1b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.SetText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::StringW, float_t, float_t, float_t, float_t, float_t, float_t, float_t)>(&::TMPro::TMP_Text::SetText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a8c1c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.SetText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::StringW, float_t, float_t, float_t, float_t, float_t, float_t, float_t, float_t)>(&::TMPro::TMP_Text::SetText)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x2a8be9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.SetText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::System::Text::StringBuilder)>(&::TMPro::TMP_Text::SetText)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2a8c4a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.SetText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::System::Text::StringBuilder, int32_t, int32_t)>(&::TMPro::TMP_Text::SetText)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2a8c4e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.SetText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::ArrayW<char16_t>)>(&::TMPro::TMP_Text::SetText)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a8c544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.SetText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::TMPro::TMP_Text::SetText)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a8c5b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.SetCharArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::ArrayW<char16_t>)>(&::TMPro::TMP_Text::SetCharArray)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a8c5bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetCharArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.SetCharArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::TMPro::TMP_Text::SetCharArray)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2a8c55c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetCharArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.GetStyle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_Style (::TMPro::TMP_Text::*)(int32_t)>(&::TMPro::TMP_Text::GetStyle)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2a86e1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetStyle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.ReplaceOpeningStyleTag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_Text::*)(ByRef<::TMPro::____TMPro__TMP_Text__TextBackingContainer>, int32_t, ByRef<int32_t>, ByRef<::ArrayW<::TMPro::____TMPro__TMP_Text__UnicodeChar>>, ByRef<int32_t>)>(&::TMPro::TMP_Text::ReplaceOpeningStyleTag)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x2a8b1dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "ReplaceOpeningStyleTag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::TMPro::____TMPro__TMP_Text__TextBackingContainer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::TMPro::____TMPro__TMP_Text__UnicodeChar>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.ReplaceOpeningStyleTag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_Text::*)(ByRef<::ArrayW<int32_t>>, int32_t, ByRef<int32_t>, ByRef<::ArrayW<::TMPro::____TMPro__TMP_Text__UnicodeChar>>, ByRef<int32_t>)>(&::TMPro::TMP_Text::ReplaceOpeningStyleTag)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x2a8c9dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "ReplaceOpeningStyleTag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::TMPro::____TMPro__TMP_Text__UnicodeChar>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.ReplaceClosingStyleTag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(ByRef<::TMPro::____TMPro__TMP_Text__TextBackingContainer>, int32_t, ByRef<::ArrayW<::TMPro::____TMPro__TMP_Text__UnicodeChar>>, ByRef<int32_t>)>(&::TMPro::TMP_Text::ReplaceClosingStyleTag)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x2a8b5fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "ReplaceClosingStyleTag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::TMPro::____TMPro__TMP_Text__TextBackingContainer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::TMPro::____TMPro__TMP_Text__UnicodeChar>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.ReplaceClosingStyleTag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(ByRef<::ArrayW<int32_t>>, int32_t, ByRef<::ArrayW<::TMPro::____TMPro__TMP_Text__UnicodeChar>>, ByRef<int32_t>)>(&::TMPro::TMP_Text::ReplaceClosingStyleTag)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x2a8cdfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "ReplaceClosingStyleTag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::TMPro::____TMPro__TMP_Text__UnicodeChar>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.InsertOpeningStyleTag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_Text::*)(::TMPro::TMP_Style, int32_t, ByRef<::ArrayW<::TMPro::____TMPro__TMP_Text__UnicodeChar>>, ByRef<int32_t>)>(&::TMPro::TMP_Text::InsertOpeningStyleTag)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x2a8ab20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "InsertOpeningStyleTag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Style>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::TMPro::____TMPro__TMP_Text__UnicodeChar>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.InsertClosingStyleTag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(ByRef<::ArrayW<::TMPro::____TMPro__TMP_Text__UnicodeChar>>, ByRef<int32_t>)>(&::TMPro::TMP_Text::InsertClosingStyleTag)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x2a8b9ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "InsertClosingStyleTag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::TMPro::____TMPro__TMP_Text__UnicodeChar>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.GetMarkupTagHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_Text::*)(::ArrayW<int32_t>, int32_t)>(&::TMPro::TMP_Text::GetMarkupTagHashCode)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2a8c8c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetMarkupTagHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.GetMarkupTagHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_Text::*)(::TMPro::____TMPro__TMP_Text__TextBackingContainer, int32_t)>(&::TMPro::TMP_Text::GetMarkupTagHashCode)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2a8b0d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetMarkupTagHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::____TMPro__TMP_Text__TextBackingContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.GetStyleHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_Text::*)(ByRef<::ArrayW<int32_t>>, int32_t, ByRef<int32_t>)>(&::TMPro::TMP_Text::GetStyleHashCode)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2a8d1ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetStyleHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.GetStyleHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_Text::*)(ByRef<::TMPro::____TMPro__TMP_Text__TextBackingContainer>, int32_t, ByRef<int32_t>)>(&::TMPro::TMP_Text::GetStyleHashCode)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2a8c5d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetStyleHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::TMPro::____TMPro__TMP_Text__TextBackingContainer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.AddFloatToInternalTextBackingArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(float_t, int32_t, int32_t, ByRef<int32_t>)>(&::TMPro::TMP_Text::AddFloatToInternalTextBackingArray)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x2a8c1c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "AddFloatToInternalTextBackingArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.AddIntegerToInternalTextBackingArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(double_t, int32_t, ByRef<int32_t>)>(&::TMPro::TMP_Text::AddIntegerToInternalTextBackingArray)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2a8d2c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "AddIntegerToInternalTextBackingArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.InternalTextBackingArrayToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::InternalTextBackingArrayToString)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a86688;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "InternalTextBackingArrayToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.SetArraySizes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_Text::*)(::ArrayW<::TMPro::____TMPro__TMP_Text__UnicodeChar>)>(&::TMPro::TMP_Text::SetArraySizes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a8d3f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  114
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.GetPreferredValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::GetPreferredValues)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2a8d400;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetPreferredValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.GetPreferredValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::TMPro::TMP_Text::*)(float_t, float_t)>(&::TMPro::TMP_Text::GetPreferredValues)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2a8d44c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetPreferredValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.GetPreferredValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::TMPro::TMP_Text::*)(::StringW)>(&::TMPro::TMP_Text::GetPreferredValues)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2a8d600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetPreferredValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.GetPreferredValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::TMPro::TMP_Text::*)(::StringW, float_t, float_t)>(&::TMPro::TMP_Text::GetPreferredValues)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2a8d728;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetPreferredValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.GetPreferredWidth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::GetPreferredWidth)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2a89464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetPreferredWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.GetPreferredWidth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_Text::*)(::UnityEngine::Vector2)>(&::TMPro::TMP_Text::GetPreferredWidth)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2a8d4f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetPreferredWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.GetPreferredHeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::GetPreferredHeight)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2a895bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetPreferredHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.GetPreferredHeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_Text::*)(::UnityEngine::Vector2)>(&::TMPro::TMP_Text::GetPreferredHeight)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2a8d554;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetPreferredHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.GetRenderedValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::GetRenderedValues)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2a8d7ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetRenderedValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.GetRenderedValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::TMPro::TMP_Text::*)(bool)>(&::TMPro::TMP_Text::GetRenderedValues)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2a8d82c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetRenderedValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.GetRenderedWidth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::GetRenderedWidth)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a8974c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetRenderedWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.GetRenderedWidth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_Text::*)(bool)>(&::TMPro::TMP_Text::GetRenderedWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a8da4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetRenderedWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.GetRenderedHeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::GetRenderedHeight)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2a89764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetRenderedHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.GetRenderedHeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_Text::*)(bool)>(&::TMPro::TMP_Text::GetRenderedHeight)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a8da54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetRenderedHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.CalculatePreferredValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::TMPro::TMP_Text::*)(ByRef<float_t>, ::UnityEngine::Vector2, bool, bool)>(&::TMPro::TMP_Text::CalculatePreferredValues)> {
  constexpr static std::size_t size = 0x20ac;
  constexpr static std::size_t addrs = 0x2a8da6c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  115
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.GetCompoundBounds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Bounds (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::GetCompoundBounds)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a96140;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  116
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.GetCanvasSpaceClippingRect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::GetCanvasSpaceClippingRect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a9614c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  117
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.GetTextBounds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Bounds (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::GetTextBounds)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2a88be4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetTextBounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.GetTextBounds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Bounds (::TMPro::TMP_Text::*)(bool)>(&::TMPro::TMP_Text::GetTextBounds)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x2a8d870;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetTextBounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.AdjustLineOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(int32_t, int32_t, float_t)>(&::TMPro::TMP_Text::AdjustLineOffset)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x2a96154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "AdjustLineOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.ResizeLineExtents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(int32_t)>(&::TMPro::TMP_Text::ResizeLineExtents)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x2a9630c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "ResizeLineExtents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.GetTextInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_TextInfo (::TMPro::TMP_Text::*)(::StringW)>(&::TMPro::TMP_Text::GetTextInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a964b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  118
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.ComputeMarginSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::ComputeMarginSize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a964bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  119
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.InsertNewLine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(int32_t, float_t, float_t, float_t, float_t, float_t, float_t, float_t, float_t, ByRef<bool>, ByRef<float_t>)>(&::TMPro::TMP_Text::InsertNewLine)> {
  constexpr static std::size_t size = 0x4cc;
  constexpr static std::size_t addrs = 0x2a964c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "InsertNewLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.SaveWordWrappingState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(ByRef<::TMPro::WordWrapState>, int32_t, int32_t)>(&::TMPro::TMP_Text::SaveWordWrappingState)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x2a95e80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SaveWordWrappingState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::TMPro::WordWrapState>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.RestoreWordWrappingState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_Text::*)(ByRef<::TMPro::WordWrapState>)>(&::TMPro::TMP_Text::RestoreWordWrappingState)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x2a95b98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "RestoreWordWrappingState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::TMPro::WordWrapState>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.SaveGlyphVertexInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(float_t, float_t, ::UnityEngine::Color32)>(&::TMPro::TMP_Text::SaveGlyphVertexInfo)> {
  constexpr static std::size_t size = 0x32e0;
  constexpr static std::size_t addrs = 0x2a9698c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  120
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.SaveSpriteVertexInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::UnityEngine::Color32)>(&::TMPro::TMP_Text::SaveSpriteVertexInfo)> {
  constexpr static std::size_t size = 0x2240;
  constexpr static std::size_t addrs = 0x2a99c6c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  121
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.FillCharacterVertexBuffers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(int32_t, int32_t)>(&::TMPro::TMP_Text::FillCharacterVertexBuffers)> {
  constexpr static std::size_t size = 0x6d8;
  constexpr static std::size_t addrs = 0x2a9beac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  122
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.FillCharacterVertexBuffers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(int32_t, int32_t, bool)>(&::TMPro::TMP_Text::FillCharacterVertexBuffers)> {
  constexpr static std::size_t size = 0xae4;
  constexpr static std::size_t addrs = 0x2a9c584;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  123
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.FillSpriteVertexBuffers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(int32_t, int32_t)>(&::TMPro::TMP_Text::FillSpriteVertexBuffers)> {
  constexpr static std::size_t size = 0x6d8;
  constexpr static std::size_t addrs = 0x2a9d068;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  124
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.DrawUnderlineMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ByRef<int32_t>, float_t, float_t, float_t, float_t, ::UnityEngine::Color32)>(&::TMPro::TMP_Text::DrawUnderlineMesh)> {
  constexpr static std::size_t size = 0xdc0;
  constexpr static std::size_t addrs = 0x2a9d740;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  125
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.DrawTextHighlight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ByRef<int32_t>, ::UnityEngine::Color32)>(&::TMPro::TMP_Text::DrawTextHighlight)> {
  constexpr static std::size_t size = 0x4d8;
  constexpr static std::size_t addrs = 0x2a9e6b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  126
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.LoadDefaultSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::LoadDefaultSettings)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x2a9eb88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "LoadDefaultSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.GetSpecialCharacters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::TMPro::TMP_FontAsset)>(&::TMPro::TMP_Text::GetSpecialCharacters)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2a9edfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetSpecialCharacters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.GetEllipsisSpecialCharacter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::TMPro::TMP_FontAsset)>(&::TMPro::TMP_Text::GetEllipsisSpecialCharacter)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x2a9ee24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetEllipsisSpecialCharacter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.GetUnderlineSpecialCharacter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::TMPro::TMP_FontAsset)>(&::TMPro::TMP_Text::GetUnderlineSpecialCharacter)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2a9e500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetUnderlineSpecialCharacter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.ReplaceTagWithCharacter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::ArrayW<int32_t>, int32_t, int32_t, char16_t)>(&::TMPro::TMP_Text::ReplaceTagWithCharacter)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2a9f068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "ReplaceTagWithCharacter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.GetFontAssetForWeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_FontAsset (::TMPro::TMP_Text::*)(int32_t)>(&::TMPro::TMP_Text::GetFontAssetForWeight)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2a9f0e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetFontAssetForWeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.GetTextElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_TextElement (::TMPro::TMP_Text::*)(uint32_t, ::TMPro::TMP_FontAsset, ::TMPro::FontStyles, ::TMPro::FontWeight, ByRef<bool>)>(&::TMPro::TMP_Text::GetTextElement)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x2a9f158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetTextElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::FontStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::FontWeight>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.SetActiveSubMeshes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(bool)>(&::TMPro::TMP_Text::SetActiveSubMeshes)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a9f53c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  127
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.DestroySubMeshObjects
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::DestroySubMeshObjects)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a9f540;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  128
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.ClearMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::ClearMesh)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a9f544;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  129
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.ClearMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(bool)>(&::TMPro::TMP_Text::ClearMesh)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a9f548;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  130
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.GetParsedText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::GetParsedText)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a9f54c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  131
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.IsSelfOrLinkedAncestor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_Text::*)(::TMPro::TMP_Text)>(&::TMPro::TMP_Text::IsSelfOrLinkedAncestor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2a88218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "IsSelfOrLinkedAncestor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.ReleaseLinkedTextComponent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)(::TMPro::TMP_Text)>(&::TMPro::TMP_Text::ReleaseLinkedTextComponent)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2a88100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "ReleaseLinkedTextComponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.PackUV
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::TMPro::TMP_Text::*)(float_t, float_t, float_t)>(&::TMPro::TMP_Text::PackUV)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2a9e650;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "PackUV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.PackUV
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_Text::*)(float_t, float_t)>(&::TMPro::TMP_Text::PackUV)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2a9f644;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "PackUV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.InternalUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::InternalUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a9f6a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::TMPro::TMP_Text),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                                  132
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.HexToInt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_Text::*)(char16_t)>(&::TMPro::TMP_Text::HexToInt)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2a9f6a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "HexToInt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.GetUTF16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_Text::*)(::StringW, int32_t)>(&::TMPro::TMP_Text::GetUTF16)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2a9f6d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetUTF16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.GetUTF16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_Text::*)(::ArrayW<int32_t>, int32_t)>(&::TMPro::TMP_Text::GetUTF16)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2a8c6e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetUTF16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.GetUTF16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_Text::*)(::ArrayW<uint32_t>, int32_t)>(&::TMPro::TMP_Text::GetUTF16)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2a9f77c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetUTF16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.GetUTF16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_Text::*)(::System::Text::StringBuilder, int32_t)>(&::TMPro::TMP_Text::GetUTF16)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2a9f824;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetUTF16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.GetUTF16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_Text::*)(::TMPro::____TMPro__TMP_Text__TextBackingContainer, int32_t)>(&::TMPro::TMP_Text::GetUTF16)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2a8aef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetUTF16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::____TMPro__TMP_Text__TextBackingContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.GetUTF32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_Text::*)(::StringW, int32_t)>(&::TMPro::TMP_Text::GetUTF32)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2a9f8cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetUTF32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.GetUTF32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_Text::*)(::ArrayW<int32_t>, int32_t)>(&::TMPro::TMP_Text::GetUTF32)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2a8c788;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetUTF32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.GetUTF32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_Text::*)(::ArrayW<uint32_t>, int32_t)>(&::TMPro::TMP_Text::GetUTF32)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2a9fa04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetUTF32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.GetUTF32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_Text::*)(::System::Text::StringBuilder, int32_t)>(&::TMPro::TMP_Text::GetUTF32)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2a9fb3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetUTF32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.GetUTF32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_Text::*)(::TMPro::____TMPro__TMP_Text__TextBackingContainer, int32_t)>(&::TMPro::TMP_Text::GetUTF32)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2a8af98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetUTF32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::____TMPro__TMP_Text__TextBackingContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.HexCharsToColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color32 (::TMPro::TMP_Text::*)(::ArrayW<char16_t>, int32_t)>(&::TMPro::TMP_Text::HexCharsToColor)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x2a9fc74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "HexCharsToColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.HexCharsToColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color32 (::TMPro::TMP_Text::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::TMPro::TMP_Text::HexCharsToColor)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x2aa0088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "HexCharsToColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.GetAttributeParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::TMPro::TMP_Text::*)(::ArrayW<char16_t>, int32_t, int32_t, ByRef<::ArrayW<float_t>>)>(&::TMPro::TMP_Text::GetAttributeParameters)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2aa02d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetAttributeParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<float_t>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.ConvertToFloat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_Text::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::TMPro::TMP_Text::ConvertToFloat)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2aa0504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "ConvertToFloat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.ConvertToFloat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::TMPro::TMP_Text::*)(::ArrayW<char16_t>, int32_t, int32_t, ByRef<int32_t>)>(&::TMPro::TMP_Text::ConvertToFloat)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2aa0380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "ConvertToFloat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text.ValidateHtmlTag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_Text::*)(::ArrayW<::TMPro::____TMPro__TMP_Text__UnicodeChar>, int32_t, ByRef<int32_t>)>(&::TMPro::TMP_Text::ValidateHtmlTag)> {
  constexpr static std::size_t size = 0x6080;
  constexpr static std::size_t addrs = 0x2a8fb18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "ValidateHtmlTag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::TMPro::____TMPro__TMP_Text__UnicodeChar>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Text._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Text::*)()>(&::TMPro::TMP_Text::_ctor)> {
  constexpr static std::size_t size = 0xd30;
  constexpr static std::size_t addrs = 0x2aa051c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::TMPro::TMP_Text::__set_m_text(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::TMPro::TMP_Text::__get_m_text() const {
return ::cordl_internals::getInstanceField<::StringW, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_IsTextBackingStringDirty(bool value)  {
::cordl_internals::setInstanceField<bool, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get_m_IsTextBackingStringDirty() const {
return ::cordl_internals::getInstanceField<bool, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_TextPreprocessor(::TMPro::ITextPreprocessor value)  {
::cordl_internals::setInstanceField<::TMPro::ITextPreprocessor, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::ITextPreprocessor>(value));
}
constexpr ::TMPro::ITextPreprocessor ::TMPro::TMP_Text::__get_m_TextPreprocessor() const {
return ::cordl_internals::getInstanceField<::TMPro::ITextPreprocessor, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_isRightToLeft(bool value)  {
::cordl_internals::setInstanceField<bool, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get_m_isRightToLeft() const {
return ::cordl_internals::getInstanceField<bool, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_fontAsset(::TMPro::TMP_FontAsset value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_FontAsset, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TMP_FontAsset>(value));
}
constexpr ::TMPro::TMP_FontAsset ::TMPro::TMP_Text::__get_m_fontAsset() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_FontAsset, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_currentFontAsset(::TMPro::TMP_FontAsset value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_FontAsset, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TMP_FontAsset>(value));
}
constexpr ::TMPro::TMP_FontAsset ::TMPro::TMP_Text::__get_m_currentFontAsset() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_FontAsset, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_isSDFShader(bool value)  {
::cordl_internals::setInstanceField<bool, 0x100>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get_m_isSDFShader() const {
return ::cordl_internals::getInstanceField<bool, 0x100>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_sharedMaterial(::UnityEngine::Material value)  {
::cordl_internals::setInstanceField<::UnityEngine::Material, 0x108>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Material>(value));
}
constexpr ::UnityEngine::Material ::TMPro::TMP_Text::__get_m_sharedMaterial() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Material, 0x108>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_currentMaterial(::UnityEngine::Material value)  {
::cordl_internals::setInstanceField<::UnityEngine::Material, 0x110>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Material>(value));
}
constexpr ::UnityEngine::Material ::TMPro::TMP_Text::__get_m_currentMaterial() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Material, 0x110>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::TMPro::TMP_Text::__set_m_materialReferences(::ArrayW<::TMPro::MaterialReference> value)  {
::cordl_internals::setStaticField<::ArrayW<::TMPro::MaterialReference>, "m_materialReferences", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get>(std::forward<::ArrayW<::TMPro::MaterialReference>>(value));
}
 ::ArrayW<::TMPro::MaterialReference> ::TMPro::TMP_Text::__get_m_materialReferences()  {
return ::cordl_internals::getStaticField<::ArrayW<::TMPro::MaterialReference>, "m_materialReferences", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get>();
}
 void ::TMPro::TMP_Text::__set_m_materialReferenceIndexLookup(::System::Collections::Generic::Dictionary_2<int32_t,int32_t> value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>, "m_materialReferenceIndexLookup", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>>(value));
}
 ::System::Collections::Generic::Dictionary_2<int32_t,int32_t> ::TMPro::TMP_Text::__get_m_materialReferenceIndexLookup()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>, "m_materialReferenceIndexLookup", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get>();
}
 void ::TMPro::TMP_Text::__set_m_materialReferenceStack(::TMPro::TMP_TextProcessingStack_1<::TMPro::MaterialReference> value)  {
::cordl_internals::setStaticField<::TMPro::TMP_TextProcessingStack_1<::TMPro::MaterialReference>, "m_materialReferenceStack", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get>(std::forward<::TMPro::TMP_TextProcessingStack_1<::TMPro::MaterialReference>>(value));
}
 ::TMPro::TMP_TextProcessingStack_1<::TMPro::MaterialReference> ::TMPro::TMP_Text::__get_m_materialReferenceStack()  {
return ::cordl_internals::getStaticField<::TMPro::TMP_TextProcessingStack_1<::TMPro::MaterialReference>, "m_materialReferenceStack", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get>();
}
constexpr void ::TMPro::TMP_Text::__set_m_currentMaterialIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x118>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TMP_Text::__get_m_currentMaterialIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x118>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_fontSharedMaterials(::ArrayW<::UnityEngine::Material> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Material>, 0x120>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::Material>>(value));
}
constexpr ::ArrayW<::UnityEngine::Material> ::TMPro::TMP_Text::__get_m_fontSharedMaterials() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Material>, 0x120>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_fontMaterial(::UnityEngine::Material value)  {
::cordl_internals::setInstanceField<::UnityEngine::Material, 0x128>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Material>(value));
}
constexpr ::UnityEngine::Material ::TMPro::TMP_Text::__get_m_fontMaterial() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Material, 0x128>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_fontMaterials(::ArrayW<::UnityEngine::Material> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Material>, 0x130>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::Material>>(value));
}
constexpr ::ArrayW<::UnityEngine::Material> ::TMPro::TMP_Text::__get_m_fontMaterials() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Material>, 0x130>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_isMaterialDirty(bool value)  {
::cordl_internals::setInstanceField<bool, 0x138>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get_m_isMaterialDirty() const {
return ::cordl_internals::getInstanceField<bool, 0x138>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_fontColor32(::UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color32, 0x13c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color32>(value));
}
constexpr ::UnityEngine::Color32 ::TMPro::TMP_Text::__get_m_fontColor32() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color32, 0x13c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_fontColor(::UnityEngine::Color value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x140>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color ::TMPro::TMP_Text::__get_m_fontColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x140>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::TMPro::TMP_Text::__set_s_colorWhite(::UnityEngine::Color32 value)  {
::cordl_internals::setStaticField<::UnityEngine::Color32, "s_colorWhite", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get>(std::forward<::UnityEngine::Color32>(value));
}
 ::UnityEngine::Color32 ::TMPro::TMP_Text::__get_s_colorWhite()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color32, "s_colorWhite", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get>();
}
constexpr void ::TMPro::TMP_Text::__set_m_underlineColor(::UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color32, 0x150>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color32>(value));
}
constexpr ::UnityEngine::Color32 ::TMPro::TMP_Text::__get_m_underlineColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color32, 0x150>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_strikethroughColor(::UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color32, 0x154>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color32>(value));
}
constexpr ::UnityEngine::Color32 ::TMPro::TMP_Text::__get_m_strikethroughColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color32, 0x154>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_enableVertexGradient(bool value)  {
::cordl_internals::setInstanceField<bool, 0x158>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get_m_enableVertexGradient() const {
return ::cordl_internals::getInstanceField<bool, 0x158>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_colorMode(::TMPro::ColorMode value)  {
::cordl_internals::setInstanceField<::TMPro::ColorMode, 0x15c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::ColorMode>(value));
}
constexpr ::TMPro::ColorMode ::TMPro::TMP_Text::__get_m_colorMode() const {
return ::cordl_internals::getInstanceField<::TMPro::ColorMode, 0x15c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_fontColorGradient(::TMPro::VertexGradient value)  {
::cordl_internals::setInstanceField<::TMPro::VertexGradient, 0x160>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::VertexGradient>(value));
}
constexpr ::TMPro::VertexGradient ::TMPro::TMP_Text::__get_m_fontColorGradient() const {
return ::cordl_internals::getInstanceField<::TMPro::VertexGradient, 0x160>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_fontColorGradientPreset(::TMPro::TMP_ColorGradient value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_ColorGradient, 0x1a0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TMP_ColorGradient>(value));
}
constexpr ::TMPro::TMP_ColorGradient ::TMPro::TMP_Text::__get_m_fontColorGradientPreset() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_ColorGradient, 0x1a0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_spriteAsset(::TMPro::TMP_SpriteAsset value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_SpriteAsset, 0x1a8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TMP_SpriteAsset>(value));
}
constexpr ::TMPro::TMP_SpriteAsset ::TMPro::TMP_Text::__get_m_spriteAsset() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_SpriteAsset, 0x1a8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_tintAllSprites(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1b0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get_m_tintAllSprites() const {
return ::cordl_internals::getInstanceField<bool, 0x1b0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_tintSprite(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1b1>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get_m_tintSprite() const {
return ::cordl_internals::getInstanceField<bool, 0x1b1>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_spriteColor(::UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color32, 0x1b4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color32>(value));
}
constexpr ::UnityEngine::Color32 ::TMPro::TMP_Text::__get_m_spriteColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color32, 0x1b4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_StyleSheet(::TMPro::TMP_StyleSheet value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_StyleSheet, 0x1b8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TMP_StyleSheet>(value));
}
constexpr ::TMPro::TMP_StyleSheet ::TMPro::TMP_Text::__get_m_StyleSheet() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_StyleSheet, 0x1b8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_TextStyle(::TMPro::TMP_Style value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_Style, 0x1c0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TMP_Style>(value));
}
constexpr ::TMPro::TMP_Style ::TMPro::TMP_Text::__get_m_TextStyle() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_Style, 0x1c0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_TextStyleHashCode(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TMP_Text::__get_m_TextStyleHashCode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_overrideHtmlColors(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1cc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get_m_overrideHtmlColors() const {
return ::cordl_internals::getInstanceField<bool, 0x1cc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_faceColor(::UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color32, 0x1d0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color32>(value));
}
constexpr ::UnityEngine::Color32 ::TMPro::TMP_Text::__get_m_faceColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color32, 0x1d0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_outlineColor(::UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color32, 0x1d4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color32>(value));
}
constexpr ::UnityEngine::Color32 ::TMPro::TMP_Text::__get_m_outlineColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color32, 0x1d4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_outlineWidth(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1d8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_outlineWidth() const {
return ::cordl_internals::getInstanceField<float_t, 0x1d8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_fontSize(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1dc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_fontSize() const {
return ::cordl_internals::getInstanceField<float_t, 0x1dc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_currentFontSize(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1e0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_currentFontSize() const {
return ::cordl_internals::getInstanceField<float_t, 0x1e0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_fontSizeBase(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1e4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_fontSizeBase() const {
return ::cordl_internals::getInstanceField<float_t, 0x1e4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_sizeStack(::TMPro::TMP_TextProcessingStack_1<float_t> value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_TextProcessingStack_1<float_t>, 0x1e8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TMP_TextProcessingStack_1<float_t>>(value));
}
constexpr ::TMPro::TMP_TextProcessingStack_1<float_t> ::TMPro::TMP_Text::__get_m_sizeStack() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_TextProcessingStack_1<float_t>, 0x1e8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_fontWeight(::TMPro::FontWeight value)  {
::cordl_internals::setInstanceField<::TMPro::FontWeight, 0x208>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::FontWeight>(value));
}
constexpr ::TMPro::FontWeight ::TMPro::TMP_Text::__get_m_fontWeight() const {
return ::cordl_internals::getInstanceField<::TMPro::FontWeight, 0x208>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_FontWeightInternal(::TMPro::FontWeight value)  {
::cordl_internals::setInstanceField<::TMPro::FontWeight, 0x20c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::FontWeight>(value));
}
constexpr ::TMPro::FontWeight ::TMPro::TMP_Text::__get_m_FontWeightInternal() const {
return ::cordl_internals::getInstanceField<::TMPro::FontWeight, 0x20c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_FontWeightStack(::TMPro::TMP_TextProcessingStack_1<::TMPro::FontWeight> value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_TextProcessingStack_1<::TMPro::FontWeight>, 0x210>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TMP_TextProcessingStack_1<::TMPro::FontWeight>>(value));
}
constexpr ::TMPro::TMP_TextProcessingStack_1<::TMPro::FontWeight> ::TMPro::TMP_Text::__get_m_FontWeightStack() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_TextProcessingStack_1<::TMPro::FontWeight>, 0x210>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_enableAutoSizing(bool value)  {
::cordl_internals::setInstanceField<bool, 0x230>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get_m_enableAutoSizing() const {
return ::cordl_internals::getInstanceField<bool, 0x230>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_maxFontSize(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x234>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_maxFontSize() const {
return ::cordl_internals::getInstanceField<float_t, 0x234>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_minFontSize(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x238>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_minFontSize() const {
return ::cordl_internals::getInstanceField<float_t, 0x238>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_AutoSizeIterationCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x23c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TMP_Text::__get_m_AutoSizeIterationCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x23c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_AutoSizeMaxIterationCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x240>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TMP_Text::__get_m_AutoSizeMaxIterationCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x240>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_IsAutoSizePointSizeSet(bool value)  {
::cordl_internals::setInstanceField<bool, 0x244>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get_m_IsAutoSizePointSizeSet() const {
return ::cordl_internals::getInstanceField<bool, 0x244>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_fontSizeMin(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x248>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_fontSizeMin() const {
return ::cordl_internals::getInstanceField<float_t, 0x248>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_fontSizeMax(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x24c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_fontSizeMax() const {
return ::cordl_internals::getInstanceField<float_t, 0x24c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_fontStyle(::TMPro::FontStyles value)  {
::cordl_internals::setInstanceField<::TMPro::FontStyles, 0x250>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::FontStyles>(value));
}
constexpr ::TMPro::FontStyles ::TMPro::TMP_Text::__get_m_fontStyle() const {
return ::cordl_internals::getInstanceField<::TMPro::FontStyles, 0x250>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_FontStyleInternal(::TMPro::FontStyles value)  {
::cordl_internals::setInstanceField<::TMPro::FontStyles, 0x254>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::FontStyles>(value));
}
constexpr ::TMPro::FontStyles ::TMPro::TMP_Text::__get_m_FontStyleInternal() const {
return ::cordl_internals::getInstanceField<::TMPro::FontStyles, 0x254>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_fontStyleStack(::TMPro::TMP_FontStyleStack value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_FontStyleStack, 0x258>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TMP_FontStyleStack>(value));
}
constexpr ::TMPro::TMP_FontStyleStack ::TMPro::TMP_Text::__get_m_fontStyleStack() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_FontStyleStack, 0x258>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_isUsingBold(bool value)  {
::cordl_internals::setInstanceField<bool, 0x262>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get_m_isUsingBold() const {
return ::cordl_internals::getInstanceField<bool, 0x262>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_HorizontalAlignment(::TMPro::HorizontalAlignmentOptions value)  {
::cordl_internals::setInstanceField<::TMPro::HorizontalAlignmentOptions, 0x264>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::HorizontalAlignmentOptions>(value));
}
constexpr ::TMPro::HorizontalAlignmentOptions ::TMPro::TMP_Text::__get_m_HorizontalAlignment() const {
return ::cordl_internals::getInstanceField<::TMPro::HorizontalAlignmentOptions, 0x264>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_VerticalAlignment(::TMPro::VerticalAlignmentOptions value)  {
::cordl_internals::setInstanceField<::TMPro::VerticalAlignmentOptions, 0x268>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::VerticalAlignmentOptions>(value));
}
constexpr ::TMPro::VerticalAlignmentOptions ::TMPro::TMP_Text::__get_m_VerticalAlignment() const {
return ::cordl_internals::getInstanceField<::TMPro::VerticalAlignmentOptions, 0x268>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_textAlignment(::TMPro::TextAlignmentOptions value)  {
::cordl_internals::setInstanceField<::TMPro::TextAlignmentOptions, 0x26c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TextAlignmentOptions>(value));
}
constexpr ::TMPro::TextAlignmentOptions ::TMPro::TMP_Text::__get_m_textAlignment() const {
return ::cordl_internals::getInstanceField<::TMPro::TextAlignmentOptions, 0x26c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_lineJustification(::TMPro::HorizontalAlignmentOptions value)  {
::cordl_internals::setInstanceField<::TMPro::HorizontalAlignmentOptions, 0x270>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::HorizontalAlignmentOptions>(value));
}
constexpr ::TMPro::HorizontalAlignmentOptions ::TMPro::TMP_Text::__get_m_lineJustification() const {
return ::cordl_internals::getInstanceField<::TMPro::HorizontalAlignmentOptions, 0x270>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_lineJustificationStack(::TMPro::TMP_TextProcessingStack_1<::TMPro::HorizontalAlignmentOptions> value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_TextProcessingStack_1<::TMPro::HorizontalAlignmentOptions>, 0x278>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TMP_TextProcessingStack_1<::TMPro::HorizontalAlignmentOptions>>(value));
}
constexpr ::TMPro::TMP_TextProcessingStack_1<::TMPro::HorizontalAlignmentOptions> ::TMPro::TMP_Text::__get_m_lineJustificationStack() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_TextProcessingStack_1<::TMPro::HorizontalAlignmentOptions>, 0x278>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_textContainerLocalCorners(::ArrayW<::UnityEngine::Vector3> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Vector3>, 0x298>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::Vector3>>(value));
}
constexpr ::ArrayW<::UnityEngine::Vector3> ::TMPro::TMP_Text::__get_m_textContainerLocalCorners() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector3>, 0x298>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_characterSpacing(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2a0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_characterSpacing() const {
return ::cordl_internals::getInstanceField<float_t, 0x2a0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_cSpacing(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2a4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_cSpacing() const {
return ::cordl_internals::getInstanceField<float_t, 0x2a4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_monoSpacing(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2a8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_monoSpacing() const {
return ::cordl_internals::getInstanceField<float_t, 0x2a8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_wordSpacing(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2ac>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_wordSpacing() const {
return ::cordl_internals::getInstanceField<float_t, 0x2ac>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_lineSpacing(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2b0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_lineSpacing() const {
return ::cordl_internals::getInstanceField<float_t, 0x2b0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_lineSpacingDelta(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2b4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_lineSpacingDelta() const {
return ::cordl_internals::getInstanceField<float_t, 0x2b4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_lineHeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2b8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_lineHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x2b8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_IsDrivenLineSpacing(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2bc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get_m_IsDrivenLineSpacing() const {
return ::cordl_internals::getInstanceField<bool, 0x2bc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_lineSpacingMax(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2c0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_lineSpacingMax() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_paragraphSpacing(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2c4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_paragraphSpacing() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_charWidthMaxAdj(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2c8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_charWidthMaxAdj() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_charWidthAdjDelta(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2cc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_charWidthAdjDelta() const {
return ::cordl_internals::getInstanceField<float_t, 0x2cc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_enableWordWrapping(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2d0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get_m_enableWordWrapping() const {
return ::cordl_internals::getInstanceField<bool, 0x2d0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_isCharacterWrappingEnabled(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2d1>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get_m_isCharacterWrappingEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0x2d1>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_isNonBreakingSpace(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2d2>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get_m_isNonBreakingSpace() const {
return ::cordl_internals::getInstanceField<bool, 0x2d2>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_isIgnoringAlignment(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2d3>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get_m_isIgnoringAlignment() const {
return ::cordl_internals::getInstanceField<bool, 0x2d3>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_wordWrappingRatios(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2d4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_wordWrappingRatios() const {
return ::cordl_internals::getInstanceField<float_t, 0x2d4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_overflowMode(::TMPro::TextOverflowModes value)  {
::cordl_internals::setInstanceField<::TMPro::TextOverflowModes, 0x2d8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TextOverflowModes>(value));
}
constexpr ::TMPro::TextOverflowModes ::TMPro::TMP_Text::__get_m_overflowMode() const {
return ::cordl_internals::getInstanceField<::TMPro::TextOverflowModes, 0x2d8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_firstOverflowCharacterIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2dc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TMP_Text::__get_m_firstOverflowCharacterIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2dc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_linkedTextComponent(::TMPro::TMP_Text value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_Text, 0x2e0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TMP_Text>(value));
}
constexpr ::TMPro::TMP_Text ::TMPro::TMP_Text::__get_m_linkedTextComponent() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_Text, 0x2e0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_parentLinkedComponent(::TMPro::TMP_Text value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_Text, 0x2e8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TMP_Text>(value));
}
constexpr ::TMPro::TMP_Text ::TMPro::TMP_Text::__get_parentLinkedComponent() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_Text, 0x2e8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_isTextTruncated(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2f0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get_m_isTextTruncated() const {
return ::cordl_internals::getInstanceField<bool, 0x2f0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_enableKerning(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2f1>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get_m_enableKerning() const {
return ::cordl_internals::getInstanceField<bool, 0x2f1>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_GlyphHorizontalAdvanceAdjustment(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2f4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_GlyphHorizontalAdvanceAdjustment() const {
return ::cordl_internals::getInstanceField<float_t, 0x2f4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_enableExtraPadding(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2f8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get_m_enableExtraPadding() const {
return ::cordl_internals::getInstanceField<bool, 0x2f8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_checkPaddingRequired(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2f9>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get_checkPaddingRequired() const {
return ::cordl_internals::getInstanceField<bool, 0x2f9>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_isRichText(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2fa>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get_m_isRichText() const {
return ::cordl_internals::getInstanceField<bool, 0x2fa>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_parseCtrlCharacters(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2fb>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get_m_parseCtrlCharacters() const {
return ::cordl_internals::getInstanceField<bool, 0x2fb>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_isOverlay(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2fc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get_m_isOverlay() const {
return ::cordl_internals::getInstanceField<bool, 0x2fc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_isOrthographic(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2fd>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get_m_isOrthographic() const {
return ::cordl_internals::getInstanceField<bool, 0x2fd>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_isCullingEnabled(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2fe>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get_m_isCullingEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0x2fe>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_isMaskingEnabled(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2ff>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get_m_isMaskingEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0x2ff>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_isMaskUpdateRequired(bool value)  {
::cordl_internals::setInstanceField<bool, 0x300>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get_isMaskUpdateRequired() const {
return ::cordl_internals::getInstanceField<bool, 0x300>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_ignoreCulling(bool value)  {
::cordl_internals::setInstanceField<bool, 0x301>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get_m_ignoreCulling() const {
return ::cordl_internals::getInstanceField<bool, 0x301>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_horizontalMapping(::TMPro::TextureMappingOptions value)  {
::cordl_internals::setInstanceField<::TMPro::TextureMappingOptions, 0x304>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TextureMappingOptions>(value));
}
constexpr ::TMPro::TextureMappingOptions ::TMPro::TMP_Text::__get_m_horizontalMapping() const {
return ::cordl_internals::getInstanceField<::TMPro::TextureMappingOptions, 0x304>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_verticalMapping(::TMPro::TextureMappingOptions value)  {
::cordl_internals::setInstanceField<::TMPro::TextureMappingOptions, 0x308>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TextureMappingOptions>(value));
}
constexpr ::TMPro::TextureMappingOptions ::TMPro::TMP_Text::__get_m_verticalMapping() const {
return ::cordl_internals::getInstanceField<::TMPro::TextureMappingOptions, 0x308>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_uvLineOffset(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x30c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_uvLineOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x30c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_renderMode(::TMPro::TextRenderFlags value)  {
::cordl_internals::setInstanceField<::TMPro::TextRenderFlags, 0x310>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TextRenderFlags>(value));
}
constexpr ::TMPro::TextRenderFlags ::TMPro::TMP_Text::__get_m_renderMode() const {
return ::cordl_internals::getInstanceField<::TMPro::TextRenderFlags, 0x310>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_geometrySortingOrder(::TMPro::VertexSortingOrder value)  {
::cordl_internals::setInstanceField<::TMPro::VertexSortingOrder, 0x314>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::VertexSortingOrder>(value));
}
constexpr ::TMPro::VertexSortingOrder ::TMPro::TMP_Text::__get_m_geometrySortingOrder() const {
return ::cordl_internals::getInstanceField<::TMPro::VertexSortingOrder, 0x314>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_IsTextObjectScaleStatic(bool value)  {
::cordl_internals::setInstanceField<bool, 0x318>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get_m_IsTextObjectScaleStatic() const {
return ::cordl_internals::getInstanceField<bool, 0x318>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_VertexBufferAutoSizeReduction(bool value)  {
::cordl_internals::setInstanceField<bool, 0x319>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get_m_VertexBufferAutoSizeReduction() const {
return ::cordl_internals::getInstanceField<bool, 0x319>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_firstVisibleCharacter(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x31c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TMP_Text::__get_m_firstVisibleCharacter() const {
return ::cordl_internals::getInstanceField<int32_t, 0x31c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_maxVisibleCharacters(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x320>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TMP_Text::__get_m_maxVisibleCharacters() const {
return ::cordl_internals::getInstanceField<int32_t, 0x320>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_maxVisibleWords(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x324>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TMP_Text::__get_m_maxVisibleWords() const {
return ::cordl_internals::getInstanceField<int32_t, 0x324>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_maxVisibleLines(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x328>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TMP_Text::__get_m_maxVisibleLines() const {
return ::cordl_internals::getInstanceField<int32_t, 0x328>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_useMaxVisibleDescender(bool value)  {
::cordl_internals::setInstanceField<bool, 0x32c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get_m_useMaxVisibleDescender() const {
return ::cordl_internals::getInstanceField<bool, 0x32c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_pageToDisplay(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x330>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TMP_Text::__get_m_pageToDisplay() const {
return ::cordl_internals::getInstanceField<int32_t, 0x330>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_isNewPage(bool value)  {
::cordl_internals::setInstanceField<bool, 0x334>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get_m_isNewPage() const {
return ::cordl_internals::getInstanceField<bool, 0x334>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_margin(::UnityEngine::Vector4 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector4, 0x338>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector4>(value));
}
constexpr ::UnityEngine::Vector4 ::TMPro::TMP_Text::__get_m_margin() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector4, 0x338>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_marginLeft(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x348>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_marginLeft() const {
return ::cordl_internals::getInstanceField<float_t, 0x348>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_marginRight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x34c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_marginRight() const {
return ::cordl_internals::getInstanceField<float_t, 0x34c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_marginWidth(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x350>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_marginWidth() const {
return ::cordl_internals::getInstanceField<float_t, 0x350>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_marginHeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x354>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_marginHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x354>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_width(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x358>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_width() const {
return ::cordl_internals::getInstanceField<float_t, 0x358>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_textInfo(::TMPro::TMP_TextInfo value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_TextInfo, 0x360>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TMP_TextInfo>(value));
}
constexpr ::TMPro::TMP_TextInfo ::TMPro::TMP_Text::__get_m_textInfo() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_TextInfo, 0x360>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_havePropertiesChanged(bool value)  {
::cordl_internals::setInstanceField<bool, 0x368>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get_m_havePropertiesChanged() const {
return ::cordl_internals::getInstanceField<bool, 0x368>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_isUsingLegacyAnimationComponent(bool value)  {
::cordl_internals::setInstanceField<bool, 0x369>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get_m_isUsingLegacyAnimationComponent() const {
return ::cordl_internals::getInstanceField<bool, 0x369>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_transform(::UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform, 0x370>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Transform>(value));
}
constexpr ::UnityEngine::Transform ::TMPro::TMP_Text::__get_m_transform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform, 0x370>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_rectTransform(::UnityEngine::RectTransform value)  {
::cordl_internals::setInstanceField<::UnityEngine::RectTransform, 0x378>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::RectTransform>(value));
}
constexpr ::UnityEngine::RectTransform ::TMPro::TMP_Text::__get_m_rectTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform, 0x378>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_PreviousRectTransformSize(::UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x380>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2 ::TMPro::TMP_Text::__get_m_PreviousRectTransformSize() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x380>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_PreviousPivotPosition(::UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x388>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2 ::TMPro::TMP_Text::__get_m_PreviousPivotPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x388>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set__autoSizeTextContainer_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x390>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get__autoSizeTextContainer_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x390>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_autoSizeTextContainer(bool value)  {
::cordl_internals::setInstanceField<bool, 0x391>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get_m_autoSizeTextContainer() const {
return ::cordl_internals::getInstanceField<bool, 0x391>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_mesh(::UnityEngine::Mesh value)  {
::cordl_internals::setInstanceField<::UnityEngine::Mesh, 0x398>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Mesh>(value));
}
constexpr ::UnityEngine::Mesh ::TMPro::TMP_Text::__get_m_mesh() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Mesh, 0x398>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_isVolumetricText(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3a0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get_m_isVolumetricText() const {
return ::cordl_internals::getInstanceField<bool, 0x3a0>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::TMPro::TMP_Text::__set_OnFontAssetRequest(::System::Func_3<int32_t,::StringW,::TMPro::TMP_FontAsset> value)  {
::cordl_internals::setStaticField<::System::Func_3<int32_t,::StringW,::TMPro::TMP_FontAsset>, "OnFontAssetRequest", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get>(std::forward<::System::Func_3<int32_t,::StringW,::TMPro::TMP_FontAsset>>(value));
}
 ::System::Func_3<int32_t,::StringW,::TMPro::TMP_FontAsset> ::TMPro::TMP_Text::__get_OnFontAssetRequest()  {
return ::cordl_internals::getStaticField<::System::Func_3<int32_t,::StringW,::TMPro::TMP_FontAsset>, "OnFontAssetRequest", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get>();
}
 void ::TMPro::TMP_Text::__set_OnSpriteAssetRequest(::System::Func_3<int32_t,::StringW,::TMPro::TMP_SpriteAsset> value)  {
::cordl_internals::setStaticField<::System::Func_3<int32_t,::StringW,::TMPro::TMP_SpriteAsset>, "OnSpriteAssetRequest", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get>(std::forward<::System::Func_3<int32_t,::StringW,::TMPro::TMP_SpriteAsset>>(value));
}
 ::System::Func_3<int32_t,::StringW,::TMPro::TMP_SpriteAsset> ::TMPro::TMP_Text::__get_OnSpriteAssetRequest()  {
return ::cordl_internals::getStaticField<::System::Func_3<int32_t,::StringW,::TMPro::TMP_SpriteAsset>, "OnSpriteAssetRequest", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get>();
}
constexpr void ::TMPro::TMP_Text::__set_OnPreRenderText(::System::Action_1<::TMPro::TMP_TextInfo> value)  {
::cordl_internals::setInstanceField<::System::Action_1<::TMPro::TMP_TextInfo>, 0x3a8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_1<::TMPro::TMP_TextInfo>>(value));
}
constexpr ::System::Action_1<::TMPro::TMP_TextInfo> ::TMPro::TMP_Text::__get_OnPreRenderText() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::TMPro::TMP_TextInfo>, 0x3a8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_spriteAnimator(::TMPro::TMP_SpriteAnimator value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_SpriteAnimator, 0x3b0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TMP_SpriteAnimator>(value));
}
constexpr ::TMPro::TMP_SpriteAnimator ::TMPro::TMP_Text::__get_m_spriteAnimator() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_SpriteAnimator, 0x3b0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_flexibleHeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x3b8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_flexibleHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x3b8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_flexibleWidth(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x3bc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_flexibleWidth() const {
return ::cordl_internals::getInstanceField<float_t, 0x3bc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_minWidth(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x3c0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_minWidth() const {
return ::cordl_internals::getInstanceField<float_t, 0x3c0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_minHeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x3c4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_minHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x3c4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_maxWidth(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x3c8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_maxWidth() const {
return ::cordl_internals::getInstanceField<float_t, 0x3c8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_maxHeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x3cc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_maxHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x3cc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_LayoutElement(::UnityEngine::UI::LayoutElement value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::LayoutElement, 0x3d0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::LayoutElement>(value));
}
constexpr ::UnityEngine::UI::LayoutElement ::TMPro::TMP_Text::__get_m_LayoutElement() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::LayoutElement, 0x3d0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_preferredWidth(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x3d8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_preferredWidth() const {
return ::cordl_internals::getInstanceField<float_t, 0x3d8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_renderedWidth(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x3dc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_renderedWidth() const {
return ::cordl_internals::getInstanceField<float_t, 0x3dc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_isPreferredWidthDirty(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3e0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get_m_isPreferredWidthDirty() const {
return ::cordl_internals::getInstanceField<bool, 0x3e0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_preferredHeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x3e4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_preferredHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x3e4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_renderedHeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x3e8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_renderedHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x3e8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_isPreferredHeightDirty(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3ec>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get_m_isPreferredHeightDirty() const {
return ::cordl_internals::getInstanceField<bool, 0x3ec>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_isCalculatingPreferredValues(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3ed>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get_m_isCalculatingPreferredValues() const {
return ::cordl_internals::getInstanceField<bool, 0x3ed>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_layoutPriority(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x3f0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TMP_Text::__get_m_layoutPriority() const {
return ::cordl_internals::getInstanceField<int32_t, 0x3f0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_isLayoutDirty(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3f4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get_m_isLayoutDirty() const {
return ::cordl_internals::getInstanceField<bool, 0x3f4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_isAwake(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3f5>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get_m_isAwake() const {
return ::cordl_internals::getInstanceField<bool, 0x3f5>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_isWaitingOnResourceLoad(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3f6>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get_m_isWaitingOnResourceLoad() const {
return ::cordl_internals::getInstanceField<bool, 0x3f6>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_inputSource(::TMPro::____TMPro__TMP_Text__TextInputSources value)  {
::cordl_internals::setInstanceField<::TMPro::____TMPro__TMP_Text__TextInputSources, 0x3f8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::____TMPro__TMP_Text__TextInputSources>(value));
}
constexpr ::TMPro::____TMPro__TMP_Text__TextInputSources ::TMPro::TMP_Text::__get_m_inputSource() const {
return ::cordl_internals::getInstanceField<::TMPro::____TMPro__TMP_Text__TextInputSources, 0x3f8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_fontScaleMultiplier(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x3fc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_fontScaleMultiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0x3fc>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::TMPro::TMP_Text::__set_m_htmlTag(::ArrayW<char16_t> value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t>, "m_htmlTag", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get>(std::forward<::ArrayW<char16_t>>(value));
}
 ::ArrayW<char16_t> ::TMPro::TMP_Text::__get_m_htmlTag()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "m_htmlTag", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get>();
}
 void ::TMPro::TMP_Text::__set_m_xmlAttribute(::ArrayW<::TMPro::RichTextTagAttribute> value)  {
::cordl_internals::setStaticField<::ArrayW<::TMPro::RichTextTagAttribute>, "m_xmlAttribute", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get>(std::forward<::ArrayW<::TMPro::RichTextTagAttribute>>(value));
}
 ::ArrayW<::TMPro::RichTextTagAttribute> ::TMPro::TMP_Text::__get_m_xmlAttribute()  {
return ::cordl_internals::getStaticField<::ArrayW<::TMPro::RichTextTagAttribute>, "m_xmlAttribute", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get>();
}
 void ::TMPro::TMP_Text::__set_m_attributeParameterValues(::ArrayW<float_t> value)  {
::cordl_internals::setStaticField<::ArrayW<float_t>, "m_attributeParameterValues", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get>(std::forward<::ArrayW<float_t>>(value));
}
 ::ArrayW<float_t> ::TMPro::TMP_Text::__get_m_attributeParameterValues()  {
return ::cordl_internals::getStaticField<::ArrayW<float_t>, "m_attributeParameterValues", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get>();
}
constexpr void ::TMPro::TMP_Text::__set_tag_LineIndent(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x400>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_tag_LineIndent() const {
return ::cordl_internals::getInstanceField<float_t, 0x400>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_tag_Indent(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x404>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_tag_Indent() const {
return ::cordl_internals::getInstanceField<float_t, 0x404>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_indentStack(::TMPro::TMP_TextProcessingStack_1<float_t> value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_TextProcessingStack_1<float_t>, 0x408>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TMP_TextProcessingStack_1<float_t>>(value));
}
constexpr ::TMPro::TMP_TextProcessingStack_1<float_t> ::TMPro::TMP_Text::__get_m_indentStack() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_TextProcessingStack_1<float_t>, 0x408>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_tag_NoParsing(bool value)  {
::cordl_internals::setInstanceField<bool, 0x428>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get_tag_NoParsing() const {
return ::cordl_internals::getInstanceField<bool, 0x428>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_isParsingText(bool value)  {
::cordl_internals::setInstanceField<bool, 0x429>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get_m_isParsingText() const {
return ::cordl_internals::getInstanceField<bool, 0x429>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_FXMatrix(::UnityEngine::Matrix4x4 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Matrix4x4, 0x42c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Matrix4x4>(value));
}
constexpr ::UnityEngine::Matrix4x4 ::TMPro::TMP_Text::__get_m_FXMatrix() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Matrix4x4, 0x42c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_isFXMatrixSet(bool value)  {
::cordl_internals::setInstanceField<bool, 0x46c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get_m_isFXMatrixSet() const {
return ::cordl_internals::getInstanceField<bool, 0x46c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_TextProcessingArray(::ArrayW<::TMPro::____TMPro__TMP_Text__UnicodeChar> value)  {
::cordl_internals::setInstanceField<::ArrayW<::TMPro::____TMPro__TMP_Text__UnicodeChar>, 0x470>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::TMPro::____TMPro__TMP_Text__UnicodeChar>>(value));
}
constexpr ::ArrayW<::TMPro::____TMPro__TMP_Text__UnicodeChar> ::TMPro::TMP_Text::__get_m_TextProcessingArray() const {
return ::cordl_internals::getInstanceField<::ArrayW<::TMPro::____TMPro__TMP_Text__UnicodeChar>, 0x470>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_InternalTextProcessingArraySize(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x478>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TMP_Text::__get_m_InternalTextProcessingArraySize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x478>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_internalCharacterInfo(::ArrayW<::TMPro::TMP_CharacterInfo> value)  {
::cordl_internals::setInstanceField<::ArrayW<::TMPro::TMP_CharacterInfo>, 0x480>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::TMPro::TMP_CharacterInfo>>(value));
}
constexpr ::ArrayW<::TMPro::TMP_CharacterInfo> ::TMPro::TMP_Text::__get_m_internalCharacterInfo() const {
return ::cordl_internals::getInstanceField<::ArrayW<::TMPro::TMP_CharacterInfo>, 0x480>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_totalCharacterCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x488>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TMP_Text::__get_m_totalCharacterCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x488>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::TMPro::TMP_Text::__set_m_SavedWordWrapState(::TMPro::WordWrapState value)  {
::cordl_internals::setStaticField<::TMPro::WordWrapState, "m_SavedWordWrapState", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get>(std::forward<::TMPro::WordWrapState>(value));
}
 ::TMPro::WordWrapState ::TMPro::TMP_Text::__get_m_SavedWordWrapState()  {
return ::cordl_internals::getStaticField<::TMPro::WordWrapState, "m_SavedWordWrapState", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get>();
}
 void ::TMPro::TMP_Text::__set_m_SavedLineState(::TMPro::WordWrapState value)  {
::cordl_internals::setStaticField<::TMPro::WordWrapState, "m_SavedLineState", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get>(std::forward<::TMPro::WordWrapState>(value));
}
 ::TMPro::WordWrapState ::TMPro::TMP_Text::__get_m_SavedLineState()  {
return ::cordl_internals::getStaticField<::TMPro::WordWrapState, "m_SavedLineState", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get>();
}
 void ::TMPro::TMP_Text::__set_m_SavedEllipsisState(::TMPro::WordWrapState value)  {
::cordl_internals::setStaticField<::TMPro::WordWrapState, "m_SavedEllipsisState", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get>(std::forward<::TMPro::WordWrapState>(value));
}
 ::TMPro::WordWrapState ::TMPro::TMP_Text::__get_m_SavedEllipsisState()  {
return ::cordl_internals::getStaticField<::TMPro::WordWrapState, "m_SavedEllipsisState", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get>();
}
 void ::TMPro::TMP_Text::__set_m_SavedLastValidState(::TMPro::WordWrapState value)  {
::cordl_internals::setStaticField<::TMPro::WordWrapState, "m_SavedLastValidState", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get>(std::forward<::TMPro::WordWrapState>(value));
}
 ::TMPro::WordWrapState ::TMPro::TMP_Text::__get_m_SavedLastValidState()  {
return ::cordl_internals::getStaticField<::TMPro::WordWrapState, "m_SavedLastValidState", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get>();
}
 void ::TMPro::TMP_Text::__set_m_SavedSoftLineBreakState(::TMPro::WordWrapState value)  {
::cordl_internals::setStaticField<::TMPro::WordWrapState, "m_SavedSoftLineBreakState", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get>(std::forward<::TMPro::WordWrapState>(value));
}
 ::TMPro::WordWrapState ::TMPro::TMP_Text::__get_m_SavedSoftLineBreakState()  {
return ::cordl_internals::getStaticField<::TMPro::WordWrapState, "m_SavedSoftLineBreakState", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get>();
}
 void ::TMPro::TMP_Text::__set_m_EllipsisInsertionCandidateStack(::TMPro::TMP_TextProcessingStack_1<::TMPro::WordWrapState> value)  {
::cordl_internals::setStaticField<::TMPro::TMP_TextProcessingStack_1<::TMPro::WordWrapState>, "m_EllipsisInsertionCandidateStack", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get>(std::forward<::TMPro::TMP_TextProcessingStack_1<::TMPro::WordWrapState>>(value));
}
 ::TMPro::TMP_TextProcessingStack_1<::TMPro::WordWrapState> ::TMPro::TMP_Text::__get_m_EllipsisInsertionCandidateStack()  {
return ::cordl_internals::getStaticField<::TMPro::TMP_TextProcessingStack_1<::TMPro::WordWrapState>, "m_EllipsisInsertionCandidateStack", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get>();
}
constexpr void ::TMPro::TMP_Text::__set_m_characterCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x48c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TMP_Text::__get_m_characterCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_firstCharacterOfLine(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x490>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TMP_Text::__get_m_firstCharacterOfLine() const {
return ::cordl_internals::getInstanceField<int32_t, 0x490>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_firstVisibleCharacterOfLine(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x494>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TMP_Text::__get_m_firstVisibleCharacterOfLine() const {
return ::cordl_internals::getInstanceField<int32_t, 0x494>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_lastCharacterOfLine(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x498>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TMP_Text::__get_m_lastCharacterOfLine() const {
return ::cordl_internals::getInstanceField<int32_t, 0x498>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_lastVisibleCharacterOfLine(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x49c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TMP_Text::__get_m_lastVisibleCharacterOfLine() const {
return ::cordl_internals::getInstanceField<int32_t, 0x49c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_lineNumber(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4a0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TMP_Text::__get_m_lineNumber() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4a0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_lineVisibleCharacterCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4a4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TMP_Text::__get_m_lineVisibleCharacterCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4a4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_pageNumber(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4a8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TMP_Text::__get_m_pageNumber() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4a8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_PageAscender(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4ac>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_PageAscender() const {
return ::cordl_internals::getInstanceField<float_t, 0x4ac>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_maxTextAscender(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4b0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_maxTextAscender() const {
return ::cordl_internals::getInstanceField<float_t, 0x4b0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_maxCapHeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4b4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_maxCapHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x4b4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_ElementAscender(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4b8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_ElementAscender() const {
return ::cordl_internals::getInstanceField<float_t, 0x4b8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_ElementDescender(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4bc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_ElementDescender() const {
return ::cordl_internals::getInstanceField<float_t, 0x4bc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_maxLineAscender(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4c0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_maxLineAscender() const {
return ::cordl_internals::getInstanceField<float_t, 0x4c0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_maxLineDescender(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4c4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_maxLineDescender() const {
return ::cordl_internals::getInstanceField<float_t, 0x4c4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_startOfLineAscender(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4c8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_startOfLineAscender() const {
return ::cordl_internals::getInstanceField<float_t, 0x4c8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_startOfLineDescender(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4cc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_startOfLineDescender() const {
return ::cordl_internals::getInstanceField<float_t, 0x4cc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_lineOffset(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4d0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_lineOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x4d0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_meshExtents(::TMPro::Extents value)  {
::cordl_internals::setInstanceField<::TMPro::Extents, 0x4d4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::Extents>(value));
}
constexpr ::TMPro::Extents ::TMPro::TMP_Text::__get_m_meshExtents() const {
return ::cordl_internals::getInstanceField<::TMPro::Extents, 0x4d4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_htmlColor(::UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color32, 0x4e4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color32>(value));
}
constexpr ::UnityEngine::Color32 ::TMPro::TMP_Text::__get_m_htmlColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color32, 0x4e4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_colorStack(::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>, 0x4e8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>>(value));
}
constexpr ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> ::TMPro::TMP_Text::__get_m_colorStack() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>, 0x4e8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_underlineColorStack(::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>, 0x508>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>>(value));
}
constexpr ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> ::TMPro::TMP_Text::__get_m_underlineColorStack() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>, 0x508>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_strikethroughColorStack(::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>, 0x528>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>>(value));
}
constexpr ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> ::TMPro::TMP_Text::__get_m_strikethroughColorStack() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>, 0x528>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_HighlightStateStack(::TMPro::TMP_TextProcessingStack_1<::TMPro::HighlightState> value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_TextProcessingStack_1<::TMPro::HighlightState>, 0x548>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TMP_TextProcessingStack_1<::TMPro::HighlightState>>(value));
}
constexpr ::TMPro::TMP_TextProcessingStack_1<::TMPro::HighlightState> ::TMPro::TMP_Text::__get_m_HighlightStateStack() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_TextProcessingStack_1<::TMPro::HighlightState>, 0x548>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_colorGradientPreset(::TMPro::TMP_ColorGradient value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_ColorGradient, 0x578>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TMP_ColorGradient>(value));
}
constexpr ::TMPro::TMP_ColorGradient ::TMPro::TMP_Text::__get_m_colorGradientPreset() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_ColorGradient, 0x578>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_colorGradientStack(::TMPro::TMP_TextProcessingStack_1<::TMPro::TMP_ColorGradient> value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_TextProcessingStack_1<::TMPro::TMP_ColorGradient>, 0x580>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TMP_TextProcessingStack_1<::TMPro::TMP_ColorGradient>>(value));
}
constexpr ::TMPro::TMP_TextProcessingStack_1<::TMPro::TMP_ColorGradient> ::TMPro::TMP_Text::__get_m_colorGradientStack() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_TextProcessingStack_1<::TMPro::TMP_ColorGradient>, 0x580>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_colorGradientPresetIsTinted(bool value)  {
::cordl_internals::setInstanceField<bool, 0x5a8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get_m_colorGradientPresetIsTinted() const {
return ::cordl_internals::getInstanceField<bool, 0x5a8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_tabSpacing(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x5ac>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_tabSpacing() const {
return ::cordl_internals::getInstanceField<float_t, 0x5ac>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_spacing(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x5b0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_spacing() const {
return ::cordl_internals::getInstanceField<float_t, 0x5b0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_TextStyleStacks(::ArrayW<::TMPro::TMP_TextProcessingStack_1<int32_t>> value)  {
::cordl_internals::setInstanceField<::ArrayW<::TMPro::TMP_TextProcessingStack_1<int32_t>>, 0x5b8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::TMPro::TMP_TextProcessingStack_1<int32_t>>>(value));
}
constexpr ::ArrayW<::TMPro::TMP_TextProcessingStack_1<int32_t>> ::TMPro::TMP_Text::__get_m_TextStyleStacks() const {
return ::cordl_internals::getInstanceField<::ArrayW<::TMPro::TMP_TextProcessingStack_1<int32_t>>, 0x5b8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_TextStyleStackDepth(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x5c0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TMP_Text::__get_m_TextStyleStackDepth() const {
return ::cordl_internals::getInstanceField<int32_t, 0x5c0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_ItalicAngleStack(::TMPro::TMP_TextProcessingStack_1<int32_t> value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_TextProcessingStack_1<int32_t>, 0x5c8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TMP_TextProcessingStack_1<int32_t>>(value));
}
constexpr ::TMPro::TMP_TextProcessingStack_1<int32_t> ::TMPro::TMP_Text::__get_m_ItalicAngleStack() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_TextProcessingStack_1<int32_t>, 0x5c8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_ItalicAngle(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x5e8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TMP_Text::__get_m_ItalicAngle() const {
return ::cordl_internals::getInstanceField<int32_t, 0x5e8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_actionStack(::TMPro::TMP_TextProcessingStack_1<int32_t> value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_TextProcessingStack_1<int32_t>, 0x5f0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TMP_TextProcessingStack_1<int32_t>>(value));
}
constexpr ::TMPro::TMP_TextProcessingStack_1<int32_t> ::TMPro::TMP_Text::__get_m_actionStack() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_TextProcessingStack_1<int32_t>, 0x5f0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_padding(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x610>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_padding() const {
return ::cordl_internals::getInstanceField<float_t, 0x610>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_baselineOffset(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x614>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_baselineOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x614>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_baselineOffsetStack(::TMPro::TMP_TextProcessingStack_1<float_t> value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_TextProcessingStack_1<float_t>, 0x618>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TMP_TextProcessingStack_1<float_t>>(value));
}
constexpr ::TMPro::TMP_TextProcessingStack_1<float_t> ::TMPro::TMP_Text::__get_m_baselineOffsetStack() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_TextProcessingStack_1<float_t>, 0x618>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_xAdvance(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x638>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::TMP_Text::__get_m_xAdvance() const {
return ::cordl_internals::getInstanceField<float_t, 0x638>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_textElementType(::TMPro::TMP_TextElementType value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_TextElementType, 0x63c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TMP_TextElementType>(value));
}
constexpr ::TMPro::TMP_TextElementType ::TMPro::TMP_Text::__get_m_textElementType() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_TextElementType, 0x63c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_cached_TextElement(::TMPro::TMP_TextElement value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_TextElement, 0x640>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TMP_TextElement>(value));
}
constexpr ::TMPro::TMP_TextElement ::TMPro::TMP_Text::__get_m_cached_TextElement() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_TextElement, 0x640>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_Ellipsis(::TMPro::____TMPro__TMP_Text__SpecialCharacter value)  {
::cordl_internals::setInstanceField<::TMPro::____TMPro__TMP_Text__SpecialCharacter, 0x648>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::____TMPro__TMP_Text__SpecialCharacter>(value));
}
constexpr ::TMPro::____TMPro__TMP_Text__SpecialCharacter ::TMPro::TMP_Text::__get_m_Ellipsis() const {
return ::cordl_internals::getInstanceField<::TMPro::____TMPro__TMP_Text__SpecialCharacter, 0x648>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_Underline(::TMPro::____TMPro__TMP_Text__SpecialCharacter value)  {
::cordl_internals::setInstanceField<::TMPro::____TMPro__TMP_Text__SpecialCharacter, 0x668>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::____TMPro__TMP_Text__SpecialCharacter>(value));
}
constexpr ::TMPro::____TMPro__TMP_Text__SpecialCharacter ::TMPro::TMP_Text::__get_m_Underline() const {
return ::cordl_internals::getInstanceField<::TMPro::____TMPro__TMP_Text__SpecialCharacter, 0x668>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_defaultSpriteAsset(::TMPro::TMP_SpriteAsset value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_SpriteAsset, 0x688>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TMP_SpriteAsset>(value));
}
constexpr ::TMPro::TMP_SpriteAsset ::TMPro::TMP_Text::__get_m_defaultSpriteAsset() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_SpriteAsset, 0x688>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_currentSpriteAsset(::TMPro::TMP_SpriteAsset value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_SpriteAsset, 0x690>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TMP_SpriteAsset>(value));
}
constexpr ::TMPro::TMP_SpriteAsset ::TMPro::TMP_Text::__get_m_currentSpriteAsset() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_SpriteAsset, 0x690>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_spriteCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x698>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TMP_Text::__get_m_spriteCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x698>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_spriteIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x69c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TMP_Text::__get_m_spriteIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x69c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_spriteAnimationID(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x6a0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TMP_Text::__get_m_spriteAnimationID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x6a0>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::TMPro::TMP_Text::__set_k_ParseTextMarker(::Unity::Profiling::ProfilerMarker value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_ParseTextMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
 ::Unity::Profiling::ProfilerMarker ::TMPro::TMP_Text::__get_k_ParseTextMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_ParseTextMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get>();
}
 void ::TMPro::TMP_Text::__set_k_InsertNewLineMarker(::Unity::Profiling::ProfilerMarker value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_InsertNewLineMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
 ::Unity::Profiling::ProfilerMarker ::TMPro::TMP_Text::__get_k_InsertNewLineMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_InsertNewLineMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get>();
}
constexpr void ::TMPro::TMP_Text::__set_m_ignoreActiveState(bool value)  {
::cordl_internals::setInstanceField<bool, 0x6a4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::TMPro::TMP_Text::__get_m_ignoreActiveState() const {
return ::cordl_internals::getInstanceField<bool, 0x6a4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_m_TextBackingArray(::TMPro::____TMPro__TMP_Text__TextBackingContainer value)  {
::cordl_internals::setInstanceField<::TMPro::____TMPro__TMP_Text__TextBackingContainer, 0x6a8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::____TMPro__TMP_Text__TextBackingContainer>(value));
}
constexpr ::TMPro::____TMPro__TMP_Text__TextBackingContainer ::TMPro::TMP_Text::__get_m_TextBackingArray() const {
return ::cordl_internals::getInstanceField<::TMPro::____TMPro__TMP_Text__TextBackingContainer, 0x6a8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::TMP_Text::__set_k_Power(::ArrayW<::System::Decimal> value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Decimal>, 0x6b8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::System::Decimal>>(value));
}
constexpr ::ArrayW<::System::Decimal> ::TMPro::TMP_Text::__get_k_Power() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Decimal>, 0x6b8>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::TMPro::TMP_Text::__set_k_LargePositiveVector2(::UnityEngine::Vector2 value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector2, "k_LargePositiveVector2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get>(std::forward<::UnityEngine::Vector2>(value));
}
 ::UnityEngine::Vector2 ::TMPro::TMP_Text::__get_k_LargePositiveVector2()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector2, "k_LargePositiveVector2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get>();
}
 void ::TMPro::TMP_Text::__set_k_LargeNegativeVector2(::UnityEngine::Vector2 value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector2, "k_LargeNegativeVector2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get>(std::forward<::UnityEngine::Vector2>(value));
}
 ::UnityEngine::Vector2 ::TMPro::TMP_Text::__get_k_LargeNegativeVector2()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector2, "k_LargeNegativeVector2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get>();
}
 void ::TMPro::TMP_Text::__set_k_LargePositiveFloat(float_t value)  {
::cordl_internals::setStaticField<float_t, "k_LargePositiveFloat", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get>(std::forward<float_t>(value));
}
 float_t ::TMPro::TMP_Text::__get_k_LargePositiveFloat()  {
return ::cordl_internals::getStaticField<float_t, "k_LargePositiveFloat", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get>();
}
 void ::TMPro::TMP_Text::__set_k_LargeNegativeFloat(float_t value)  {
::cordl_internals::setStaticField<float_t, "k_LargeNegativeFloat", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get>(std::forward<float_t>(value));
}
 float_t ::TMPro::TMP_Text::__get_k_LargeNegativeFloat()  {
return ::cordl_internals::getStaticField<float_t, "k_LargeNegativeFloat", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get>();
}
 void ::TMPro::TMP_Text::__set_k_LargePositiveInt(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "k_LargePositiveInt", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get>(std::forward<int32_t>(value));
}
 int32_t ::TMPro::TMP_Text::__get_k_LargePositiveInt()  {
return ::cordl_internals::getStaticField<int32_t, "k_LargePositiveInt", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get>();
}
 void ::TMPro::TMP_Text::__set_k_LargeNegativeInt(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "k_LargeNegativeInt", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get>(std::forward<int32_t>(value));
}
 int32_t ::TMPro::TMP_Text::__get_k_LargeNegativeInt()  {
return ::cordl_internals::getStaticField<int32_t, "k_LargeNegativeInt", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get>();
}
 ::StringW ::TMPro::TMP_Text::get_text()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_text(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::TMPro::ITextPreprocessor ::TMPro::TMP_Text::get_textPreprocessor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_textPreprocessor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::ITextPreprocessor, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_textPreprocessor(::TMPro::ITextPreprocessor value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_textPreprocessor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::ITextPreprocessor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::TMPro::TMP_Text::get_isRightToLeftText()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_isRightToLeftText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_isRightToLeftText(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_isRightToLeftText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::TMPro::TMP_FontAsset ::TMPro::TMP_Text::get_font()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_font",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_FontAsset, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_font(::TMPro::TMP_FontAsset value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_font",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::Material ::TMPro::TMP_Text::get_fontSharedMaterial()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_fontSharedMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Material, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_fontSharedMaterial(::UnityEngine::Material value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_fontSharedMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::ArrayW<::UnityEngine::Material> ::TMPro::TMP_Text::get_fontSharedMaterials()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_fontSharedMaterials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Material>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_fontSharedMaterials(::ArrayW<::UnityEngine::Material> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_fontSharedMaterials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Material>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::Material ::TMPro::TMP_Text::get_fontMaterial()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_fontMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Material, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_fontMaterial(::UnityEngine::Material value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_fontMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::ArrayW<::UnityEngine::Material> ::TMPro::TMP_Text::get_fontMaterials()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_fontMaterials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Material>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_fontMaterials(::ArrayW<::UnityEngine::Material> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_fontMaterials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Material>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::Color ::TMPro::TMP_Text::get_color()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_color(::UnityEngine::Color value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t ::TMPro::TMP_Text::get_alpha()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_alpha",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_alpha(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_alpha",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::TMPro::TMP_Text::get_enableVertexGradient()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_enableVertexGradient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_enableVertexGradient(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_enableVertexGradient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::TMPro::VertexGradient ::TMPro::TMP_Text::get_colorGradient()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_colorGradient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::VertexGradient, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_colorGradient(::TMPro::VertexGradient value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_colorGradient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::VertexGradient>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::TMPro::TMP_ColorGradient ::TMPro::TMP_Text::get_colorGradientPreset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_colorGradientPreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_ColorGradient, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_colorGradientPreset(::TMPro::TMP_ColorGradient value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_colorGradientPreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_ColorGradient>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::TMPro::TMP_SpriteAsset ::TMPro::TMP_Text::get_spriteAsset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_spriteAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_SpriteAsset, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_spriteAsset(::TMPro::TMP_SpriteAsset value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_spriteAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_SpriteAsset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::TMPro::TMP_Text::get_tintAllSprites()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_tintAllSprites",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_tintAllSprites(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_tintAllSprites",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::TMPro::TMP_StyleSheet ::TMPro::TMP_Text::get_styleSheet()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_styleSheet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_StyleSheet, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_styleSheet(::TMPro::TMP_StyleSheet value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_styleSheet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_StyleSheet>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::TMPro::TMP_Style ::TMPro::TMP_Text::get_textStyle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_textStyle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_Style, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_textStyle(::TMPro::TMP_Style value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_textStyle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Style>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::TMPro::TMP_Text::get_overrideColorTags()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_overrideColorTags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_overrideColorTags(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_overrideColorTags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::Color32 ::TMPro::TMP_Text::get_faceColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_faceColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color32, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_faceColor(::UnityEngine::Color32 value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_faceColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::Color32 ::TMPro::TMP_Text::get_outlineColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_outlineColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color32, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_outlineColor(::UnityEngine::Color32 value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_outlineColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t ::TMPro::TMP_Text::get_outlineWidth()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_outlineWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_outlineWidth(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_outlineWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t ::TMPro::TMP_Text::get_fontSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_fontSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_fontSize(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_fontSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::TMPro::FontWeight ::TMPro::TMP_Text::get_fontWeight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_fontWeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::FontWeight, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_fontWeight(::TMPro::FontWeight value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_fontWeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::FontWeight>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t ::TMPro::TMP_Text::get_pixelsPerUnit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_pixelsPerUnit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::TMPro::TMP_Text::get_enableAutoSizing()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_enableAutoSizing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_enableAutoSizing(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_enableAutoSizing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t ::TMPro::TMP_Text::get_fontSizeMin()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_fontSizeMin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_fontSizeMin(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_fontSizeMin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t ::TMPro::TMP_Text::get_fontSizeMax()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_fontSizeMax",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_fontSizeMax(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_fontSizeMax",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::TMPro::FontStyles ::TMPro::TMP_Text::get_fontStyle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_fontStyle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::FontStyles, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_fontStyle(::TMPro::FontStyles value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_fontStyle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::FontStyles>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::TMPro::TMP_Text::get_isUsingBold()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_isUsingBold",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::TMPro::HorizontalAlignmentOptions ::TMPro::TMP_Text::get_horizontalAlignment()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_horizontalAlignment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::HorizontalAlignmentOptions, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_horizontalAlignment(::TMPro::HorizontalAlignmentOptions value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_horizontalAlignment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::HorizontalAlignmentOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::TMPro::VerticalAlignmentOptions ::TMPro::TMP_Text::get_verticalAlignment()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_verticalAlignment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::VerticalAlignmentOptions, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_verticalAlignment(::TMPro::VerticalAlignmentOptions value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_verticalAlignment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::VerticalAlignmentOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::TMPro::TextAlignmentOptions ::TMPro::TMP_Text::get_alignment()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_alignment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::TextAlignmentOptions, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_alignment(::TMPro::TextAlignmentOptions value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_alignment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TextAlignmentOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t ::TMPro::TMP_Text::get_characterSpacing()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_characterSpacing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_characterSpacing(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_characterSpacing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t ::TMPro::TMP_Text::get_wordSpacing()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_wordSpacing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_wordSpacing(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_wordSpacing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t ::TMPro::TMP_Text::get_lineSpacing()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_lineSpacing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_lineSpacing(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_lineSpacing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t ::TMPro::TMP_Text::get_lineSpacingAdjustment()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_lineSpacingAdjustment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_lineSpacingAdjustment(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_lineSpacingAdjustment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t ::TMPro::TMP_Text::get_paragraphSpacing()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_paragraphSpacing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_paragraphSpacing(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_paragraphSpacing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t ::TMPro::TMP_Text::get_characterWidthAdjustment()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_characterWidthAdjustment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_characterWidthAdjustment(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_characterWidthAdjustment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::TMPro::TMP_Text::get_enableWordWrapping()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_enableWordWrapping",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_enableWordWrapping(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_enableWordWrapping",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t ::TMPro::TMP_Text::get_wordWrappingRatios()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_wordWrappingRatios",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_wordWrappingRatios(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_wordWrappingRatios",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::TMPro::TextOverflowModes ::TMPro::TMP_Text::get_overflowMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_overflowMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::TextOverflowModes, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_overflowMode(::TMPro::TextOverflowModes value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_overflowMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TextOverflowModes>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::TMPro::TMP_Text::get_isTextOverflowing()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_isTextOverflowing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::TMPro::TMP_Text::get_firstOverflowCharacterIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_firstOverflowCharacterIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::TMPro::TMP_Text ::TMPro::TMP_Text::get_linkedTextComponent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_linkedTextComponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_Text, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_linkedTextComponent(::TMPro::TMP_Text value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_linkedTextComponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::TMPro::TMP_Text::get_isTextTruncated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_isTextTruncated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::TMPro::TMP_Text::get_enableKerning()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_enableKerning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_enableKerning(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_enableKerning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::TMPro::TMP_Text::get_extraPadding()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_extraPadding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_extraPadding(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_extraPadding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::TMPro::TMP_Text::get_richText()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_richText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_richText(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_richText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::TMPro::TMP_Text::get_parseCtrlCharacters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_parseCtrlCharacters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_parseCtrlCharacters(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_parseCtrlCharacters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::TMPro::TMP_Text::get_isOverlay()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_isOverlay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_isOverlay(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_isOverlay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::TMPro::TMP_Text::get_isOrthographic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_isOrthographic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_isOrthographic(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_isOrthographic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::TMPro::TMP_Text::get_enableCulling()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_enableCulling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_enableCulling(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_enableCulling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::TMPro::TMP_Text::get_ignoreVisibility()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_ignoreVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_ignoreVisibility(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_ignoreVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::TMPro::TextureMappingOptions ::TMPro::TMP_Text::get_horizontalMapping()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_horizontalMapping",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::TextureMappingOptions, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_horizontalMapping(::TMPro::TextureMappingOptions value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_horizontalMapping",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TextureMappingOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::TMPro::TextureMappingOptions ::TMPro::TMP_Text::get_verticalMapping()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_verticalMapping",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::TextureMappingOptions, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_verticalMapping(::TMPro::TextureMappingOptions value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_verticalMapping",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TextureMappingOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t ::TMPro::TMP_Text::get_mappingUvLineOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_mappingUvLineOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_mappingUvLineOffset(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_mappingUvLineOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::TMPro::TextRenderFlags ::TMPro::TMP_Text::get_renderMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_renderMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::TextRenderFlags, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_renderMode(::TMPro::TextRenderFlags value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_renderMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TextRenderFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::TMPro::VertexSortingOrder ::TMPro::TMP_Text::get_geometrySortingOrder()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_geometrySortingOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::VertexSortingOrder, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_geometrySortingOrder(::TMPro::VertexSortingOrder value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_geometrySortingOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::VertexSortingOrder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::TMPro::TMP_Text::get_isTextObjectScaleStatic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_isTextObjectScaleStatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_isTextObjectScaleStatic(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_isTextObjectScaleStatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::TMPro::TMP_Text::get_vertexBufferAutoSizeReduction()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_vertexBufferAutoSizeReduction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_vertexBufferAutoSizeReduction(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_vertexBufferAutoSizeReduction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t ::TMPro::TMP_Text::get_firstVisibleCharacter()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_firstVisibleCharacter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_firstVisibleCharacter(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_firstVisibleCharacter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t ::TMPro::TMP_Text::get_maxVisibleCharacters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_maxVisibleCharacters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_maxVisibleCharacters(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_maxVisibleCharacters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t ::TMPro::TMP_Text::get_maxVisibleWords()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_maxVisibleWords",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_maxVisibleWords(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_maxVisibleWords",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t ::TMPro::TMP_Text::get_maxVisibleLines()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_maxVisibleLines",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_maxVisibleLines(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_maxVisibleLines",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::TMPro::TMP_Text::get_useMaxVisibleDescender()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_useMaxVisibleDescender",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_useMaxVisibleDescender(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_useMaxVisibleDescender",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t ::TMPro::TMP_Text::get_pageToDisplay()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_pageToDisplay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_pageToDisplay(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_pageToDisplay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::Vector4 ::TMPro::TMP_Text::get_margin()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_margin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_margin(::UnityEngine::Vector4 value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_margin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::TMPro::TMP_TextInfo ::TMPro::TMP_Text::get_textInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_textInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_TextInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::TMPro::TMP_Text::get_havePropertiesChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_havePropertiesChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_havePropertiesChanged(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_havePropertiesChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::TMPro::TMP_Text::get_isUsingLegacyAnimationComponent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_isUsingLegacyAnimationComponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_isUsingLegacyAnimationComponent(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_isUsingLegacyAnimationComponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::Transform ::TMPro::TMP_Text::get_transform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_transform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::RectTransform ::TMPro::TMP_Text::get_rectTransform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_rectTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RectTransform, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::TMPro::TMP_Text::get_autoSizeTextContainer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_autoSizeTextContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_autoSizeTextContainer(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_autoSizeTextContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::Mesh ::TMPro::TMP_Text::get_mesh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_mesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Mesh, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::TMPro::TMP_Text::get_isVolumetricText()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_isVolumetricText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::set_isVolumetricText(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "set_isVolumetricText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::Bounds ::TMPro::TMP_Text::get_bounds()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_bounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Bounds ::TMPro::TMP_Text::get_textBounds()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_textBounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::add_OnFontAssetRequest(::System::Func_3<int32_t,::StringW,::TMPro::TMP_FontAsset> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "add_OnFontAssetRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_3<int32_t,::StringW,::TMPro::TMP_FontAsset>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::TMPro::TMP_Text::remove_OnFontAssetRequest(::System::Func_3<int32_t,::StringW,::TMPro::TMP_FontAsset> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "remove_OnFontAssetRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_3<int32_t,::StringW,::TMPro::TMP_FontAsset>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::TMPro::TMP_Text::add_OnSpriteAssetRequest(::System::Func_3<int32_t,::StringW,::TMPro::TMP_SpriteAsset> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "add_OnSpriteAssetRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_3<int32_t,::StringW,::TMPro::TMP_SpriteAsset>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::TMPro::TMP_Text::remove_OnSpriteAssetRequest(::System::Func_3<int32_t,::StringW,::TMPro::TMP_SpriteAsset> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "remove_OnSpriteAssetRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_3<int32_t,::StringW,::TMPro::TMP_SpriteAsset>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::TMPro::TMP_Text::add_OnPreRenderText(::System::Action_1<::TMPro::TMP_TextInfo> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "add_OnPreRenderText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::TMPro::TMP_TextInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::TMPro::TMP_Text::remove_OnPreRenderText(::System::Action_1<::TMPro::TMP_TextInfo> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "remove_OnPreRenderText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::TMPro::TMP_TextInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::TMPro::TMP_SpriteAnimator ::TMPro::TMP_Text::get_spriteAnimator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_spriteAnimator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_SpriteAnimator, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::TMPro::TMP_Text::get_flexibleHeight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_flexibleHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::TMPro::TMP_Text::get_flexibleWidth()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_flexibleWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::TMPro::TMP_Text::get_minWidth()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_minWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::TMPro::TMP_Text::get_minHeight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_minHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::TMPro::TMP_Text::get_maxWidth()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_maxWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::TMPro::TMP_Text::get_maxHeight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_maxHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::UI::LayoutElement ::TMPro::TMP_Text::get_layoutElement()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_layoutElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::LayoutElement, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::TMPro::TMP_Text::get_preferredWidth()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_preferredWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::TMPro::TMP_Text::get_preferredHeight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_preferredHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::TMPro::TMP_Text::get_renderedWidth()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_renderedWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::TMPro::TMP_Text::get_renderedHeight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_renderedHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::TMPro::TMP_Text::get_layoutPriority()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "get_layoutPriority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::LoadFontAsset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "LoadFontAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::SetSharedMaterial(::UnityEngine::Material mat)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetSharedMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, mat);
}
 ::UnityEngine::Material ::TMPro::TMP_Text::GetMaterial(::UnityEngine::Material mat)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Material, false>(const_cast<void*>(instance), ___internal_method, mat);
}
 void ::TMPro::TMP_Text::SetFontBaseMaterial(::UnityEngine::Material mat)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetFontBaseMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, mat);
}
 ::ArrayW<::UnityEngine::Material> ::TMPro::TMP_Text::GetSharedMaterials()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetSharedMaterials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Material>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::SetSharedMaterials(::ArrayW<::UnityEngine::Material> materials)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetSharedMaterials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Material>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, materials);
}
 ::ArrayW<::UnityEngine::Material> ::TMPro::TMP_Text::GetMaterials(::ArrayW<::UnityEngine::Material> mats)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetMaterials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Material>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Material>, false>(const_cast<void*>(instance), ___internal_method, mats);
}
 ::UnityEngine::Material ::TMPro::TMP_Text::CreateMaterialInstance(::UnityEngine::Material source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "CreateMaterialInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Material, false>(const_cast<void*>(instance), ___internal_method, source);
}
 void ::TMPro::TMP_Text::SetVertexColorGradient(::TMPro::TMP_ColorGradient gradient)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetVertexColorGradient",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_ColorGradient>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, gradient);
}
 void ::TMPro::TMP_Text::SetTextSortingOrder(::TMPro::VertexSortingOrder order)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetTextSortingOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::VertexSortingOrder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, order);
}
 void ::TMPro::TMP_Text::SetTextSortingOrder(::ArrayW<int32_t> order)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetTextSortingOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, order);
}
 void ::TMPro::TMP_Text::SetFaceColor(::UnityEngine::Color32 color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetFaceColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, color);
}
 void ::TMPro::TMP_Text::SetOutlineColor(::UnityEngine::Color32 color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetOutlineColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, color);
}
 void ::TMPro::TMP_Text::SetOutlineThickness(float_t thickness)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetOutlineThickness",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, thickness);
}
 void ::TMPro::TMP_Text::SetShaderDepth()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetShaderDepth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::SetCulling()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetCulling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::UpdateCulling()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "UpdateCulling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::TMPro::TMP_Text::GetPaddingForMaterial()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetPaddingForMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::TMPro::TMP_Text::GetPaddingForMaterial(::UnityEngine::Material mat)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetPaddingForMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, mat);
}
 ::ArrayW<::UnityEngine::Vector3> ::TMPro::TMP_Text::GetTextContainerLocalCorners()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetTextContainerLocalCorners",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param ignoreActiveState: bool (default: false)
/// @param forceTextReparsing: bool (default: false)
 void ::TMPro::TMP_Text::ForceMeshUpdate(bool ignoreActiveState, bool forceTextReparsing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "ForceMeshUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ignoreActiveState, forceTextReparsing);
}
 void ::TMPro::TMP_Text::UpdateGeometry(::UnityEngine::Mesh mesh, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "UpdateGeometry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, mesh, index);
}
 void ::TMPro::TMP_Text::UpdateVertexData(::TMPro::TMP_VertexDataUpdateFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "UpdateVertexData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_VertexDataUpdateFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, flags);
}
 void ::TMPro::TMP_Text::UpdateVertexData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "UpdateVertexData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::SetVertices(::ArrayW<::UnityEngine::Vector3> vertices)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetVertices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, vertices);
}
 void ::TMPro::TMP_Text::UpdateMeshPadding()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "UpdateMeshPadding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::CrossFadeColor(::UnityEngine::Color targetColor, float_t duration, bool ignoreTimeScale, bool useAlpha)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "CrossFadeColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, targetColor, duration, ignoreTimeScale, useAlpha);
}
 void ::TMPro::TMP_Text::CrossFadeAlpha(float_t alpha, float_t duration, bool ignoreTimeScale)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "CrossFadeAlpha",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, alpha, duration, ignoreTimeScale);
}
 void ::TMPro::TMP_Text::InternalCrossFadeColor(::UnityEngine::Color targetColor, float_t duration, bool ignoreTimeScale, bool useAlpha)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "InternalCrossFadeColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, targetColor, duration, ignoreTimeScale, useAlpha);
}
 void ::TMPro::TMP_Text::InternalCrossFadeAlpha(float_t alpha, float_t duration, bool ignoreTimeScale)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "InternalCrossFadeAlpha",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, alpha, duration, ignoreTimeScale);
}
 void ::TMPro::TMP_Text::ParseInputText()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "ParseInputText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::PopulateTextBackingArray(::StringW sourceText)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "PopulateTextBackingArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sourceText);
}
 void ::TMPro::TMP_Text::PopulateTextBackingArray(::StringW sourceText, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "PopulateTextBackingArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sourceText, start, length);
}
 void ::TMPro::TMP_Text::PopulateTextBackingArray(::System::Text::StringBuilder sourceText, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "PopulateTextBackingArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sourceText, start, length);
}
 void ::TMPro::TMP_Text::PopulateTextBackingArray(::ArrayW<char16_t> sourceText, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "PopulateTextBackingArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sourceText, start, length);
}
 void ::TMPro::TMP_Text::PopulateTextProcessingArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "PopulateTextProcessingArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::SetTextInternal(::StringW sourceText)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetTextInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sourceText);
}
/// @param syncTextInputBox: bool (default: true)
 void ::TMPro::TMP_Text::SetText(::StringW sourceText, bool syncTextInputBox)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sourceText, syncTextInputBox);
}
 void ::TMPro::TMP_Text::SetText(::StringW sourceText, float_t arg0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sourceText, arg0);
}
 void ::TMPro::TMP_Text::SetText(::StringW sourceText, float_t arg0, float_t arg1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sourceText, arg0, arg1);
}
 void ::TMPro::TMP_Text::SetText(::StringW sourceText, float_t arg0, float_t arg1, float_t arg2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sourceText, arg0, arg1, arg2);
}
 void ::TMPro::TMP_Text::SetText(::StringW sourceText, float_t arg0, float_t arg1, float_t arg2, float_t arg3)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sourceText, arg0, arg1, arg2, arg3);
}
 void ::TMPro::TMP_Text::SetText(::StringW sourceText, float_t arg0, float_t arg1, float_t arg2, float_t arg3, float_t arg4)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sourceText, arg0, arg1, arg2, arg3, arg4);
}
 void ::TMPro::TMP_Text::SetText(::StringW sourceText, float_t arg0, float_t arg1, float_t arg2, float_t arg3, float_t arg4, float_t arg5)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sourceText, arg0, arg1, arg2, arg3, arg4, arg5);
}
 void ::TMPro::TMP_Text::SetText(::StringW sourceText, float_t arg0, float_t arg1, float_t arg2, float_t arg3, float_t arg4, float_t arg5, float_t arg6)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sourceText, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
}
 void ::TMPro::TMP_Text::SetText(::StringW sourceText, float_t arg0, float_t arg1, float_t arg2, float_t arg3, float_t arg4, float_t arg5, float_t arg6, float_t arg7)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sourceText, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}
 void ::TMPro::TMP_Text::SetText(::System::Text::StringBuilder sourceText)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sourceText);
}
 void ::TMPro::TMP_Text::SetText(::System::Text::StringBuilder sourceText, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sourceText, start, length);
}
 void ::TMPro::TMP_Text::SetText(::ArrayW<char16_t> sourceText)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sourceText);
}
 void ::TMPro::TMP_Text::SetText(::ArrayW<char16_t> sourceText, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sourceText, start, length);
}
 void ::TMPro::TMP_Text::SetCharArray(::ArrayW<char16_t> sourceText)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetCharArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sourceText);
}
 void ::TMPro::TMP_Text::SetCharArray(::ArrayW<char16_t> sourceText, int32_t start, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetCharArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sourceText, start, length);
}
 ::TMPro::TMP_Style ::TMPro::TMP_Text::GetStyle(int32_t hashCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetStyle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_Style, false>(const_cast<void*>(instance), ___internal_method, hashCode);
}
 bool ::TMPro::TMP_Text::ReplaceOpeningStyleTag(ByRef<::TMPro::____TMPro__TMP_Text__TextBackingContainer> sourceText, int32_t srcIndex, ByRef<int32_t> srcOffset, ByRef<::ArrayW<::TMPro::____TMPro__TMP_Text__UnicodeChar>> charBuffer, ByRef<int32_t> writeIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "ReplaceOpeningStyleTag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::TMPro::____TMPro__TMP_Text__TextBackingContainer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::TMPro::____TMPro__TMP_Text__UnicodeChar>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, sourceText, srcIndex, srcOffset, charBuffer, writeIndex);
}
 bool ::TMPro::TMP_Text::ReplaceOpeningStyleTag(ByRef<::ArrayW<int32_t>> sourceText, int32_t srcIndex, ByRef<int32_t> srcOffset, ByRef<::ArrayW<::TMPro::____TMPro__TMP_Text__UnicodeChar>> charBuffer, ByRef<int32_t> writeIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "ReplaceOpeningStyleTag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::TMPro::____TMPro__TMP_Text__UnicodeChar>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, sourceText, srcIndex, srcOffset, charBuffer, writeIndex);
}
 void ::TMPro::TMP_Text::ReplaceClosingStyleTag(ByRef<::TMPro::____TMPro__TMP_Text__TextBackingContainer> sourceText, int32_t srcIndex, ByRef<::ArrayW<::TMPro::____TMPro__TMP_Text__UnicodeChar>> charBuffer, ByRef<int32_t> writeIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "ReplaceClosingStyleTag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::TMPro::____TMPro__TMP_Text__TextBackingContainer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::TMPro::____TMPro__TMP_Text__UnicodeChar>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sourceText, srcIndex, charBuffer, writeIndex);
}
 void ::TMPro::TMP_Text::ReplaceClosingStyleTag(ByRef<::ArrayW<int32_t>> sourceText, int32_t srcIndex, ByRef<::ArrayW<::TMPro::____TMPro__TMP_Text__UnicodeChar>> charBuffer, ByRef<int32_t> writeIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "ReplaceClosingStyleTag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::TMPro::____TMPro__TMP_Text__UnicodeChar>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sourceText, srcIndex, charBuffer, writeIndex);
}
 bool ::TMPro::TMP_Text::InsertOpeningStyleTag(::TMPro::TMP_Style style, int32_t srcIndex, ByRef<::ArrayW<::TMPro::____TMPro__TMP_Text__UnicodeChar>> charBuffer, ByRef<int32_t> writeIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "InsertOpeningStyleTag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Style>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::TMPro::____TMPro__TMP_Text__UnicodeChar>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, style, srcIndex, charBuffer, writeIndex);
}
 void ::TMPro::TMP_Text::InsertClosingStyleTag(ByRef<::ArrayW<::TMPro::____TMPro__TMP_Text__UnicodeChar>> charBuffer, ByRef<int32_t> writeIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "InsertClosingStyleTag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::TMPro::____TMPro__TMP_Text__UnicodeChar>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, charBuffer, writeIndex);
}
 int32_t ::TMPro::TMP_Text::GetMarkupTagHashCode(::ArrayW<int32_t> tagDefinition, int32_t readIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetMarkupTagHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, tagDefinition, readIndex);
}
 int32_t ::TMPro::TMP_Text::GetMarkupTagHashCode(::TMPro::____TMPro__TMP_Text__TextBackingContainer tagDefinition, int32_t readIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetMarkupTagHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::____TMPro__TMP_Text__TextBackingContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, tagDefinition, readIndex);
}
 int32_t ::TMPro::TMP_Text::GetStyleHashCode(ByRef<::ArrayW<int32_t>> text, int32_t index, ByRef<int32_t> closeIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetStyleHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, text, index, closeIndex);
}
 int32_t ::TMPro::TMP_Text::GetStyleHashCode(ByRef<::TMPro::____TMPro__TMP_Text__TextBackingContainer> text, int32_t index, ByRef<int32_t> closeIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetStyleHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::TMPro::____TMPro__TMP_Text__TextBackingContainer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, text, index, closeIndex);
}
template<typename T>
 void ::TMPro::TMP_Text::ResizeInternalArray(ByRef<::ArrayW<T>> array)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                        "ResizeInternalArray",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T>>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array);
}
template<typename T>
 void ::TMPro::TMP_Text::ResizeInternalArray(ByRef<::ArrayW<T>> array, int32_t size)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                        "ResizeInternalArray",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, array, size);
}
 void ::TMPro::TMP_Text::AddFloatToInternalTextBackingArray(float_t value, int32_t padding, int32_t precision, ByRef<int32_t> writeIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "AddFloatToInternalTextBackingArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value, padding, precision, writeIndex);
}
 void ::TMPro::TMP_Text::AddIntegerToInternalTextBackingArray(double_t number, int32_t padding, ByRef<int32_t> writeIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "AddIntegerToInternalTextBackingArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, number, padding, writeIndex);
}
 ::StringW ::TMPro::TMP_Text::InternalTextBackingArrayToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "InternalTextBackingArrayToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::TMPro::TMP_Text::SetArraySizes(::ArrayW<::TMPro::____TMPro__TMP_Text__UnicodeChar> unicodeChars)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetArraySizes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::TMPro::____TMPro__TMP_Text__UnicodeChar>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, unicodeChars);
}
 ::UnityEngine::Vector2 ::TMPro::TMP_Text::GetPreferredValues()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetPreferredValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Vector2 ::TMPro::TMP_Text::GetPreferredValues(float_t width, float_t height)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetPreferredValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method, width, height);
}
 ::UnityEngine::Vector2 ::TMPro::TMP_Text::GetPreferredValues(::StringW text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetPreferredValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method, text);
}
 ::UnityEngine::Vector2 ::TMPro::TMP_Text::GetPreferredValues(::StringW text, float_t width, float_t height)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetPreferredValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method, text, width, height);
}
 float_t ::TMPro::TMP_Text::GetPreferredWidth()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetPreferredWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::TMPro::TMP_Text::GetPreferredWidth(::UnityEngine::Vector2 margin)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetPreferredWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, margin);
}
 float_t ::TMPro::TMP_Text::GetPreferredHeight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetPreferredHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::TMPro::TMP_Text::GetPreferredHeight(::UnityEngine::Vector2 margin)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetPreferredHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, margin);
}
 ::UnityEngine::Vector2 ::TMPro::TMP_Text::GetRenderedValues()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetRenderedValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Vector2 ::TMPro::TMP_Text::GetRenderedValues(bool onlyVisibleCharacters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetRenderedValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method, onlyVisibleCharacters);
}
 float_t ::TMPro::TMP_Text::GetRenderedWidth()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetRenderedWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::TMPro::TMP_Text::GetRenderedWidth(bool onlyVisibleCharacters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetRenderedWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, onlyVisibleCharacters);
}
 float_t ::TMPro::TMP_Text::GetRenderedHeight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetRenderedHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::TMPro::TMP_Text::GetRenderedHeight(bool onlyVisibleCharacters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetRenderedHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, onlyVisibleCharacters);
}
 ::UnityEngine::Vector2 ::TMPro::TMP_Text::CalculatePreferredValues(ByRef<float_t> fontSize, ::UnityEngine::Vector2 marginSize, bool isTextAutoSizingEnabled, bool isWordWrappingEnabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "CalculatePreferredValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method, fontSize, marginSize, isTextAutoSizingEnabled, isWordWrappingEnabled);
}
 ::UnityEngine::Bounds ::TMPro::TMP_Text::GetCompoundBounds()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetCompoundBounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Rect ::TMPro::TMP_Text::GetCanvasSpaceClippingRect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetCanvasSpaceClippingRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Bounds ::TMPro::TMP_Text::GetTextBounds()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetTextBounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Bounds ::TMPro::TMP_Text::GetTextBounds(bool onlyVisibleCharacters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetTextBounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds, false>(const_cast<void*>(instance), ___internal_method, onlyVisibleCharacters);
}
 void ::TMPro::TMP_Text::AdjustLineOffset(int32_t startIndex, int32_t endIndex, float_t offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "AdjustLineOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, startIndex, endIndex, offset);
}
 void ::TMPro::TMP_Text::ResizeLineExtents(int32_t size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "ResizeLineExtents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, size);
}
 ::TMPro::TMP_TextInfo ::TMPro::TMP_Text::GetTextInfo(::StringW text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetTextInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_TextInfo, false>(const_cast<void*>(instance), ___internal_method, text);
}
 void ::TMPro::TMP_Text::ComputeMarginSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "ComputeMarginSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::InsertNewLine(int32_t i, float_t baseScale, float_t currentElementScale, float_t currentEmScale, float_t glyphAdjustment, float_t boldSpacingAdjustment, float_t characterSpacingAdjustment, float_t width, float_t lineGap, ByRef<bool> isMaxVisibleDescenderSet, ByRef<float_t> maxVisibleDescender)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "InsertNewLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, i, baseScale, currentElementScale, currentEmScale, glyphAdjustment, boldSpacingAdjustment, characterSpacingAdjustment, width, lineGap, isMaxVisibleDescenderSet, maxVisibleDescender);
}
 void ::TMPro::TMP_Text::SaveWordWrappingState(ByRef<::TMPro::WordWrapState> state, int32_t index, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SaveWordWrappingState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::TMPro::WordWrapState>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state, index, count);
}
 int32_t ::TMPro::TMP_Text::RestoreWordWrappingState(ByRef<::TMPro::WordWrapState> state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "RestoreWordWrappingState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::TMPro::WordWrapState>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, state);
}
 void ::TMPro::TMP_Text::SaveGlyphVertexInfo(float_t padding, float_t style_padding, ::UnityEngine::Color32 vertexColor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SaveGlyphVertexInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, padding, style_padding, vertexColor);
}
 void ::TMPro::TMP_Text::SaveSpriteVertexInfo(::UnityEngine::Color32 vertexColor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SaveSpriteVertexInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, vertexColor);
}
 void ::TMPro::TMP_Text::FillCharacterVertexBuffers(int32_t i, int32_t index_X4)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "FillCharacterVertexBuffers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, i, index_X4);
}
 void ::TMPro::TMP_Text::FillCharacterVertexBuffers(int32_t i, int32_t index_X4, bool isVolumetric)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "FillCharacterVertexBuffers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, i, index_X4, isVolumetric);
}
 void ::TMPro::TMP_Text::FillSpriteVertexBuffers(int32_t i, int32_t index_X4)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "FillSpriteVertexBuffers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, i, index_X4);
}
 void ::TMPro::TMP_Text::DrawUnderlineMesh(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ByRef<int32_t> index, float_t startScale, float_t endScale, float_t maxScale, float_t sdfScale, ::UnityEngine::Color32 underlineColor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "DrawUnderlineMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, start, end, index, startScale, endScale, maxScale, sdfScale, underlineColor);
}
 void ::TMPro::TMP_Text::DrawTextHighlight(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ByRef<int32_t> index, ::UnityEngine::Color32 highlightColor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "DrawTextHighlight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, start, end, index, highlightColor);
}
 void ::TMPro::TMP_Text::LoadDefaultSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "LoadDefaultSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::GetSpecialCharacters(::TMPro::TMP_FontAsset fontAsset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetSpecialCharacters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, fontAsset);
}
 void ::TMPro::TMP_Text::GetEllipsisSpecialCharacter(::TMPro::TMP_FontAsset fontAsset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetEllipsisSpecialCharacter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, fontAsset);
}
 void ::TMPro::TMP_Text::GetUnderlineSpecialCharacter(::TMPro::TMP_FontAsset fontAsset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetUnderlineSpecialCharacter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, fontAsset);
}
 void ::TMPro::TMP_Text::ReplaceTagWithCharacter(::ArrayW<int32_t> chars, int32_t insertionIndex, int32_t tagLength, char16_t c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "ReplaceTagWithCharacter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, chars, insertionIndex, tagLength, c);
}
 ::TMPro::TMP_FontAsset ::TMPro::TMP_Text::GetFontAssetForWeight(int32_t fontWeight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetFontAssetForWeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_FontAsset, false>(const_cast<void*>(instance), ___internal_method, fontWeight);
}
 ::TMPro::TMP_TextElement ::TMPro::TMP_Text::GetTextElement(uint32_t unicode, ::TMPro::TMP_FontAsset fontAsset, ::TMPro::FontStyles fontStyle, ::TMPro::FontWeight fontWeight, ByRef<bool> isUsingAlternativeTypeface)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetTextElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::FontStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::FontWeight>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_TextElement, false>(const_cast<void*>(instance), ___internal_method, unicode, fontAsset, fontStyle, fontWeight, isUsingAlternativeTypeface);
}
 void ::TMPro::TMP_Text::SetActiveSubMeshes(bool state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "SetActiveSubMeshes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state);
}
 void ::TMPro::TMP_Text::DestroySubMeshObjects()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "DestroySubMeshObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::ClearMesh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "ClearMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::TMPro::TMP_Text::ClearMesh(bool uploadGeometry)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "ClearMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, uploadGeometry);
}
 ::StringW ::TMPro::TMP_Text::GetParsedText()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetParsedText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::TMPro::TMP_Text::IsSelfOrLinkedAncestor(::TMPro::TMP_Text targetTextComponent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "IsSelfOrLinkedAncestor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, targetTextComponent);
}
 void ::TMPro::TMP_Text::ReleaseLinkedTextComponent(::TMPro::TMP_Text targetTextComponent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "ReleaseLinkedTextComponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_Text>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, targetTextComponent);
}
 ::UnityEngine::Vector2 ::TMPro::TMP_Text::PackUV(float_t x, float_t y, float_t scale)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "PackUV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method, x, y, scale);
}
 float_t ::TMPro::TMP_Text::PackUV(float_t x, float_t y)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "PackUV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, x, y);
}
 void ::TMPro::TMP_Text::InternalUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "InternalUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::TMPro::TMP_Text::HexToInt(char16_t hex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "HexToInt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, hex);
}
 int32_t ::TMPro::TMP_Text::GetUTF16(::StringW text, int32_t i)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetUTF16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, text, i);
}
 int32_t ::TMPro::TMP_Text::GetUTF16(::ArrayW<int32_t> text, int32_t i)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetUTF16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, text, i);
}
 int32_t ::TMPro::TMP_Text::GetUTF16(::ArrayW<uint32_t> text, int32_t i)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetUTF16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, text, i);
}
 int32_t ::TMPro::TMP_Text::GetUTF16(::System::Text::StringBuilder text, int32_t i)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetUTF16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, text, i);
}
 int32_t ::TMPro::TMP_Text::GetUTF16(::TMPro::____TMPro__TMP_Text__TextBackingContainer text, int32_t i)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetUTF16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::____TMPro__TMP_Text__TextBackingContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, text, i);
}
 int32_t ::TMPro::TMP_Text::GetUTF32(::StringW text, int32_t i)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetUTF32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, text, i);
}
 int32_t ::TMPro::TMP_Text::GetUTF32(::ArrayW<int32_t> text, int32_t i)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetUTF32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, text, i);
}
 int32_t ::TMPro::TMP_Text::GetUTF32(::ArrayW<uint32_t> text, int32_t i)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetUTF32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, text, i);
}
 int32_t ::TMPro::TMP_Text::GetUTF32(::System::Text::StringBuilder text, int32_t i)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetUTF32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, text, i);
}
 int32_t ::TMPro::TMP_Text::GetUTF32(::TMPro::____TMPro__TMP_Text__TextBackingContainer text, int32_t i)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetUTF32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::____TMPro__TMP_Text__TextBackingContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, text, i);
}
 ::UnityEngine::Color32 ::TMPro::TMP_Text::HexCharsToColor(::ArrayW<char16_t> hexChars, int32_t tagCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "HexCharsToColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color32, false>(const_cast<void*>(instance), ___internal_method, hexChars, tagCount);
}
 ::UnityEngine::Color32 ::TMPro::TMP_Text::HexCharsToColor(::ArrayW<char16_t> hexChars, int32_t startIndex, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "HexCharsToColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color32, false>(const_cast<void*>(instance), ___internal_method, hexChars, startIndex, length);
}
 int32_t ::TMPro::TMP_Text::GetAttributeParameters(::ArrayW<char16_t> chars, int32_t startIndex, int32_t length, ByRef<::ArrayW<float_t>> parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "GetAttributeParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<float_t>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, chars, startIndex, length, parameters);
}
 float_t ::TMPro::TMP_Text::ConvertToFloat(::ArrayW<char16_t> chars, int32_t startIndex, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "ConvertToFloat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, chars, startIndex, length);
}
 float_t ::TMPro::TMP_Text::ConvertToFloat(::ArrayW<char16_t> chars, int32_t startIndex, int32_t length, ByRef<int32_t> lastIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "ConvertToFloat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, chars, startIndex, length, lastIndex);
}
 bool ::TMPro::TMP_Text::ValidateHtmlTag(::ArrayW<::TMPro::____TMPro__TMP_Text__UnicodeChar> chars, int32_t startIndex, ByRef<int32_t> endIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            "ValidateHtmlTag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::TMPro::____TMPro__TMP_Text__UnicodeChar>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, chars, startIndex, endIndex);
}
// Ctor Parameters []
 ::TMPro::TMP_Text::TMP_Text()  : ::UnityEngine::UI::MaskableGraphic(THROW_UNLESS(::il2cpp_utils::New<TMP_Text>())) {}
 void ::TMPro::TMP_Text::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Text>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
