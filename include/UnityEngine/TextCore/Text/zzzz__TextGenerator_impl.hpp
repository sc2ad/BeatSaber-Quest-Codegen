#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/TextCore/Text/zzzz__TextGenerator_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextProcessingStack_1_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextElementType_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontStyleStack_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__WordWrapState_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextElement_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextGenerationSettings_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextFontWeight_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextAlignment_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__XmlTagAttribute_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__MaterialReference_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontStyles_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextElementInfo_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__SpriteAsset_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextColorGradient_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__Extents_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__RichTextTagAttribute_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextInfo_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__Character_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextGenerator__SpecialCharacter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextGenerator__SpecialCharacter::*)(::UnityEngine::TextCore::Text::Character, int32_t)>(&::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextGenerator__SpecialCharacter::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2bca0f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextGenerator__SpecialCharacter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::Character>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "character", ty: "::UnityEngine::TextCore::Text::Character", modifiers: "", def_value: Some("csnull") }, CppParam { name: "fontAsset", ty: "::UnityEngine::TextCore::Text::FontAsset", modifiers: "", def_value: Some("csnull") }, CppParam { name: "material", ty: "::UnityEngine::Material", modifiers: "", def_value: Some("csnull") }, CppParam { name: "materialIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextGenerator__SpecialCharacter::____UnityEngine__TextCore__Text__TextGenerator__SpecialCharacter(::UnityEngine::TextCore::Text::Character character, ::UnityEngine::TextCore::Text::FontAsset fontAsset, ::UnityEngine::Material material, int32_t materialIndex) noexcept : ::bs_hook::ValueTypeWrapper() {this->character = character;
this->fontAsset = fontAsset;
this->material = material;
this->materialIndex = materialIndex;
}
constexpr void ::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextGenerator__SpecialCharacter::__set_character(::UnityEngine::TextCore::Text::Character value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::Character, 0x0>(this->__instance, std::forward<::UnityEngine::TextCore::Text::Character>(value));
}
constexpr ::UnityEngine::TextCore::Text::Character ::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextGenerator__SpecialCharacter::__get_character() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::Character, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextGenerator__SpecialCharacter::__set_fontAsset(::UnityEngine::TextCore::Text::FontAsset value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::FontAsset, 0x8>(this->__instance, std::forward<::UnityEngine::TextCore::Text::FontAsset>(value));
}
constexpr ::UnityEngine::TextCore::Text::FontAsset ::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextGenerator__SpecialCharacter::__get_fontAsset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::FontAsset, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextGenerator__SpecialCharacter::__set_material(::UnityEngine::Material value)  {
::cordl_internals::setInstanceField<::UnityEngine::Material, 0x10>(this->__instance, std::forward<::UnityEngine::Material>(value));
}
constexpr ::UnityEngine::Material ::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextGenerator__SpecialCharacter::__get_material() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Material, 0x10>(this->__instance);
}
constexpr void ::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextGenerator__SpecialCharacter::__set_materialIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextGenerator__SpecialCharacter::__get_materialIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->__instance);
}
 void ::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextGenerator__SpecialCharacter::_ctor(::UnityEngine::TextCore::Text::Character character, int32_t materialIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextGenerator__SpecialCharacter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::Character>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, character, materialIndex);
}
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.GetTextGenerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::Text::TextGenerator (*)()>(&::UnityEngine::TextCore::Text::TextGenerator::GetTextGenerator)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2bb34e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "GetTextGenerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.GenerateText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::TextCore::Text::TextGenerationSettings, ::UnityEngine::TextCore::Text::TextInfo)>(&::UnityEngine::TextCore::Text::TextGenerator::GenerateText)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2bb3a38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "GenerateText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.GetCursorPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::TextCore::Text::TextInfo, ::UnityEngine::Rect, int32_t, bool)>(&::UnityEngine::TextCore::Text::TextGenerator::GetCursorPosition)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2bb3ce0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "GetCursorPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.GetPreferredValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::TextCore::Text::TextGenerationSettings, ::UnityEngine::TextCore::Text::TextInfo)>(&::UnityEngine::TextCore::Text::TextGenerator::GetPreferredValues)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2bb3e18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "GetPreferredValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.Prepare
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)(::UnityEngine::TextCore::Text::TextGenerationSettings, ::UnityEngine::TextCore::Text::TextInfo)>(&::UnityEngine::TextCore::Text::TextGenerator::Prepare)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2bb3bac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "Prepare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.GenerateTextMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)(::UnityEngine::TextCore::Text::TextGenerationSettings, ::UnityEngine::TextCore::Text::TextInfo)>(&::UnityEngine::TextCore::Text::TextGenerator::GenerateTextMesh)> {
  constexpr static std::size_t size = 0x68c8;
  constexpr static std::size_t addrs = 0x2bacc1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "GenerateTextMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.SaveWordWrappingState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)(ByRef<::UnityEngine::TextCore::Text::WordWrapState>, int32_t, int32_t, ::UnityEngine::TextCore::Text::TextInfo)>(&::UnityEngine::TextCore::Text::TextGenerator::SaveWordWrappingState)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x2bb5038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "SaveWordWrappingState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::Text::WordWrapState>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.RestoreWordWrappingState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::TextCore::Text::TextGenerator::*)(ByRef<::UnityEngine::TextCore::Text::WordWrapState>, ::UnityEngine::TextCore::Text::TextInfo)>(&::UnityEngine::TextCore::Text::TextGenerator::RestoreWordWrappingState)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x2bb5250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "RestoreWordWrappingState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::Text::WordWrapState>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.ValidateHtmlTag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::TextCore::Text::TextGenerator::*)(::ArrayW<int32_t>, int32_t, ByRef<int32_t>, ::UnityEngine::TextCore::Text::TextGenerationSettings, ::UnityEngine::TextCore::Text::TextInfo)>(&::UnityEngine::TextCore::Text::TextGenerator::ValidateHtmlTag)> {
  constexpr static std::size_t size = 0x42ac;
  constexpr static std::size_t addrs = 0x2bb548c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "ValidateHtmlTag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.SaveGlyphVertexInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)(float_t, float_t, ::UnityEngine::Color32, ::UnityEngine::TextCore::Text::TextGenerationSettings, ::UnityEngine::TextCore::Text::TextInfo)>(&::UnityEngine::TextCore::Text::TextGenerator::SaveGlyphVertexInfo)> {
  constexpr static std::size_t size = 0x1dec;
  constexpr static std::size_t addrs = 0x2bb9738;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "SaveGlyphVertexInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.SaveSpriteVertexInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)(::UnityEngine::Color32, ::UnityEngine::TextCore::Text::TextGenerationSettings, ::UnityEngine::TextCore::Text::TextInfo)>(&::UnityEngine::TextCore::Text::TextGenerator::SaveSpriteVertexInfo)> {
  constexpr static std::size_t size = 0x1ab4;
  constexpr static std::size_t addrs = 0x2bbb524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "SaveSpriteVertexInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.DrawUnderlineMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ByRef<int32_t>, float_t, float_t, float_t, float_t, ::UnityEngine::Color32, ::UnityEngine::TextCore::Text::TextGenerationSettings, ::UnityEngine::TextCore::Text::TextInfo)>(&::UnityEngine::TextCore::Text::TextGenerator::DrawUnderlineMesh)> {
  constexpr static std::size_t size = 0xf68;
  constexpr static std::size_t addrs = 0x2bbcfd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "DrawUnderlineMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.DrawTextHighlight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ByRef<int32_t>, ::UnityEngine::Color32, ::UnityEngine::TextCore::Text::TextGenerationSettings, ::UnityEngine::TextCore::Text::TextInfo)>(&::UnityEngine::TextCore::Text::TextGenerator::DrawTextHighlight)> {
  constexpr static std::size_t size = 0x5ac;
  constexpr static std::size_t addrs = 0x2bbe078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "DrawTextHighlight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.ClearMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, ::UnityEngine::TextCore::Text::TextInfo)>(&::UnityEngine::TextCore::Text::TextGenerator::ClearMesh)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2bbe624;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "ClearMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.EnableMasking
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)()>(&::UnityEngine::TextCore::Text::TextGenerator::EnableMasking)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2bbe644;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "EnableMasking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.DisableMasking
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)()>(&::UnityEngine::TextCore::Text::TextGenerator::DisableMasking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bbe650;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "DisableMasking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.SetArraySizes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)(::ArrayW<int32_t>, ::UnityEngine::TextCore::Text::TextGenerationSettings, ::UnityEngine::TextCore::Text::TextInfo)>(&::UnityEngine::TextCore::Text::TextGenerator::SetArraySizes)> {
  constexpr static std::size_t size = 0xe78;
  constexpr static std::size_t addrs = 0x2bb41c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "SetArraySizes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.GetTextElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::Text::TextElement (::UnityEngine::TextCore::Text::TextGenerator::*)(::UnityEngine::TextCore::Text::TextGenerationSettings, uint32_t, ::UnityEngine::TextCore::Text::FontAsset, ::UnityEngine::TextCore::Text::FontStyles, ::UnityEngine::TextCore::Text::TextFontWeight, ByRef<bool>)>(&::UnityEngine::TextCore::Text::TextGenerator::GetTextElement)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x2bbe658;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "GetTextElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextFontWeight>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.ComputeMarginSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)(::UnityEngine::Rect, ::UnityEngine::Vector4)>(&::UnityEngine::TextCore::Text::TextGenerator::ComputeMarginSize)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2bb4080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "ComputeMarginSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.GetSpecialCharacters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)(::UnityEngine::TextCore::Text::TextGenerationSettings)>(&::UnityEngine::TextCore::Text::TextGenerator::GetSpecialCharacters)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2bb4058;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "GetSpecialCharacters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.GetEllipsisSpecialCharacter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)(::UnityEngine::TextCore::Text::TextGenerationSettings)>(&::UnityEngine::TextCore::Text::TextGenerator::GetEllipsisSpecialCharacter)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2bbe944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "GetEllipsisSpecialCharacter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.GetUnderlineSpecialCharacter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)(::UnityEngine::TextCore::Text::TextGenerationSettings)>(&::UnityEngine::TextCore::Text::TextGenerator::GetUnderlineSpecialCharacter)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2bbdf40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "GetUnderlineSpecialCharacter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.GetPaddingForMaterial
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::TextCore::Text::TextGenerator::*)(::UnityEngine::Material, bool)>(&::UnityEngine::TextCore::Text::TextGenerator::GetPaddingForMaterial)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2bbead0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "GetPaddingForMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.GetPreferredValuesInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::TextCore::Text::TextGenerator::*)(::UnityEngine::TextCore::Text::TextGenerationSettings, ::UnityEngine::TextCore::Text::TextInfo)>(&::UnityEngine::TextCore::Text::TextGenerator::GetPreferredValuesInternal)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2bb3f44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "GetPreferredValuesInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator.CalculatePreferredValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::TextCore::Text::TextGenerator::*)(float_t, ::UnityEngine::Vector2, bool, ::UnityEngine::TextCore::Text::TextGenerationSettings, ::UnityEngine::TextCore::Text::TextInfo)>(&::UnityEngine::TextCore::Text::TextGenerator::CalculatePreferredValues)> {
  constexpr static std::size_t size = 0x1c10;
  constexpr static std::size_t addrs = 0x2bbebe4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::TextCore::Text::TextGenerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextGenerator::*)()>(&::UnityEngine::TextCore::Text::TextGenerator::_ctor)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0x2bb355c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ::UnityEngine::TextCore::Text::TextGenerator::__set_s_TextGenerator(::UnityEngine::TextCore::Text::TextGenerator value)  {
::cordl_internals::setStaticField<::UnityEngine::TextCore::Text::TextGenerator, "s_TextGenerator", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get>(std::forward<::UnityEngine::TextCore::Text::TextGenerator>(value));
}
 ::UnityEngine::TextCore::Text::TextGenerator ::UnityEngine::TextCore::Text::TextGenerator::__get_s_TextGenerator()  {
return ::cordl_internals::getStaticField<::UnityEngine::TextCore::Text::TextGenerator, "s_TextGenerator", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get>();
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_RectTransformCorners(::ArrayW<::UnityEngine::Vector3> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Vector3>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::Vector3>>(value));
}
constexpr ::ArrayW<::UnityEngine::Vector3> ::UnityEngine::TextCore::Text::TextGenerator::__get_m_RectTransformCorners() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector3>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_MarginWidth(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::TextCore::Text::TextGenerator::__get_m_MarginWidth() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_MarginHeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::TextCore::Text::TextGenerator::__get_m_MarginHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_CharBuffer(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> ::UnityEngine::TextCore::Text::TextGenerator::__get_m_CharBuffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_PreferredWidth(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::TextCore::Text::TextGenerator::__get_m_PreferredWidth() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_PreferredHeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::TextCore::Text::TextGenerator::__get_m_PreferredHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_CurrentFontAsset(::UnityEngine::TextCore::Text::FontAsset value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::FontAsset, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::TextCore::Text::FontAsset>(value));
}
constexpr ::UnityEngine::TextCore::Text::FontAsset ::UnityEngine::TextCore::Text::TextGenerator::__get_m_CurrentFontAsset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::FontAsset, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_CurrentMaterial(::UnityEngine::Material value)  {
::cordl_internals::setInstanceField<::UnityEngine::Material, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Material>(value));
}
constexpr ::UnityEngine::Material ::UnityEngine::TextCore::Text::TextGenerator::__get_m_CurrentMaterial() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Material, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_CurrentMaterialIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextCore::Text::TextGenerator::__get_m_CurrentMaterialIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_MaterialReferenceStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference> value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference>>(value));
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference> ::UnityEngine::TextCore::Text::TextGenerator::__get_m_MaterialReferenceStack() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_Padding(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::TextCore::Text::TextGenerator::__get_m_Padding() const {
return ::cordl_internals::getInstanceField<float_t, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_CurrentSpriteAsset(::UnityEngine::TextCore::Text::SpriteAsset value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::SpriteAsset, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::TextCore::Text::SpriteAsset>(value));
}
constexpr ::UnityEngine::TextCore::Text::SpriteAsset ::UnityEngine::TextCore::Text::TextGenerator::__get_m_CurrentSpriteAsset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::SpriteAsset, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_TotalCharacterCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextCore::Text::TextGenerator::__get_m_TotalCharacterCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_FontScale(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xb4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::TextCore::Text::TextGenerator::__get_m_FontScale() const {
return ::cordl_internals::getInstanceField<float_t, 0xb4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_FontSize(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::TextCore::Text::TextGenerator::__get_m_FontSize() const {
return ::cordl_internals::getInstanceField<float_t, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_FontScaleMultiplier(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xbc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::TextCore::Text::TextGenerator::__get_m_FontScaleMultiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0xbc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_CurrentFontSize(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::TextCore::Text::TextGenerator::__get_m_CurrentFontSize() const {
return ::cordl_internals::getInstanceField<float_t, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_SizeStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>>(value));
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> ::UnityEngine::TextCore::Text::TextGenerator::__get_m_SizeStack() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_FontStyleInternal(::UnityEngine::TextCore::Text::FontStyles value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::FontStyles, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::TextCore::Text::FontStyles>(value));
}
constexpr ::UnityEngine::TextCore::Text::FontStyles ::UnityEngine::TextCore::Text::TextGenerator::__get_m_FontStyleInternal() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::FontStyles, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_FontStyleStack(::UnityEngine::TextCore::Text::FontStyleStack value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::FontStyleStack, 0xec>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::TextCore::Text::FontStyleStack>(value));
}
constexpr ::UnityEngine::TextCore::Text::FontStyleStack ::UnityEngine::TextCore::Text::TextGenerator::__get_m_FontStyleStack() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::FontStyleStack, 0xec>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_FontWeightInternal(::UnityEngine::TextCore::Text::TextFontWeight value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::TextFontWeight, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::TextCore::Text::TextFontWeight>(value));
}
constexpr ::UnityEngine::TextCore::Text::TextFontWeight ::UnityEngine::TextCore::Text::TextGenerator::__get_m_FontWeightInternal() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextFontWeight, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_FontWeightStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextFontWeight> value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextFontWeight>, 0x100>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextFontWeight>>(value));
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextFontWeight> ::UnityEngine::TextCore::Text::TextGenerator::__get_m_FontWeightStack() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextFontWeight>, 0x100>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_LineJustification(::UnityEngine::TextCore::Text::TextAlignment value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::TextAlignment, 0x120>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::TextCore::Text::TextAlignment>(value));
}
constexpr ::UnityEngine::TextCore::Text::TextAlignment ::UnityEngine::TextCore::Text::TextGenerator::__get_m_LineJustification() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextAlignment, 0x120>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_LineJustificationStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextAlignment> value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextAlignment>, 0x128>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextAlignment>>(value));
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextAlignment> ::UnityEngine::TextCore::Text::TextGenerator::__get_m_LineJustificationStack() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextAlignment>, 0x128>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_BaselineOffset(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x148>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::TextCore::Text::TextGenerator::__get_m_BaselineOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x148>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_BaselineOffsetStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>, 0x150>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>>(value));
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> ::UnityEngine::TextCore::Text::TextGenerator::__get_m_BaselineOffsetStack() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>, 0x150>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_FontColor32(::UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color32, 0x170>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color32>(value));
}
constexpr ::UnityEngine::Color32 ::UnityEngine::TextCore::Text::TextGenerator::__get_m_FontColor32() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color32, 0x170>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_HtmlColor(::UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color32, 0x174>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color32>(value));
}
constexpr ::UnityEngine::Color32 ::UnityEngine::TextCore::Text::TextGenerator::__get_m_HtmlColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color32, 0x174>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_UnderlineColor(::UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color32, 0x178>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color32>(value));
}
constexpr ::UnityEngine::Color32 ::UnityEngine::TextCore::Text::TextGenerator::__get_m_UnderlineColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color32, 0x178>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_StrikethroughColor(::UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color32, 0x17c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color32>(value));
}
constexpr ::UnityEngine::Color32 ::UnityEngine::TextCore::Text::TextGenerator::__get_m_StrikethroughColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color32, 0x17c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_ColorStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>, 0x180>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>>(value));
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> ::UnityEngine::TextCore::Text::TextGenerator::__get_m_ColorStack() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>, 0x180>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_UnderlineColorStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>, 0x1a0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>>(value));
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> ::UnityEngine::TextCore::Text::TextGenerator::__get_m_UnderlineColorStack() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>, 0x1a0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_StrikethroughColorStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>, 0x1c0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>>(value));
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> ::UnityEngine::TextCore::Text::TextGenerator::__get_m_StrikethroughColorStack() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>, 0x1c0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_HighlightColorStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>, 0x1e0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>>(value));
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> ::UnityEngine::TextCore::Text::TextGenerator::__get_m_HighlightColorStack() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>, 0x1e0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_ColorGradientPreset(::UnityEngine::TextCore::Text::TextColorGradient value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::TextColorGradient, 0x200>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::TextCore::Text::TextColorGradient>(value));
}
constexpr ::UnityEngine::TextCore::Text::TextColorGradient ::UnityEngine::TextCore::Text::TextGenerator::__get_m_ColorGradientPreset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextColorGradient, 0x200>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_ColorGradientStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextColorGradient> value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextColorGradient>, 0x208>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextColorGradient>>(value));
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextColorGradient> ::UnityEngine::TextCore::Text::TextGenerator::__get_m_ColorGradientStack() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextColorGradient>, 0x208>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_ActionStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, 0x230>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>(value));
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> ::UnityEngine::TextCore::Text::TextGenerator::__get_m_ActionStack() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, 0x230>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_IsFxMatrixSet(bool value)  {
::cordl_internals::setInstanceField<bool, 0x250>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::TextCore::Text::TextGenerator::__get_m_IsFxMatrixSet() const {
return ::cordl_internals::getInstanceField<bool, 0x250>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_LineOffset(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x254>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::TextCore::Text::TextGenerator::__get_m_LineOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x254>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_LineHeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x258>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::TextCore::Text::TextGenerator::__get_m_LineHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x258>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_CSpacing(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x25c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::TextCore::Text::TextGenerator::__get_m_CSpacing() const {
return ::cordl_internals::getInstanceField<float_t, 0x25c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_MonoSpacing(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x260>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::TextCore::Text::TextGenerator::__get_m_MonoSpacing() const {
return ::cordl_internals::getInstanceField<float_t, 0x260>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_XAdvance(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x264>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::TextCore::Text::TextGenerator::__get_m_XAdvance() const {
return ::cordl_internals::getInstanceField<float_t, 0x264>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_TagLineIndent(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x268>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::TextCore::Text::TextGenerator::__get_m_TagLineIndent() const {
return ::cordl_internals::getInstanceField<float_t, 0x268>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_TagIndent(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x26c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::TextCore::Text::TextGenerator::__get_m_TagIndent() const {
return ::cordl_internals::getInstanceField<float_t, 0x26c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_IndentStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>, 0x270>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>>(value));
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> ::UnityEngine::TextCore::Text::TextGenerator::__get_m_IndentStack() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>, 0x270>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_TagNoParsing(bool value)  {
::cordl_internals::setInstanceField<bool, 0x290>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::TextCore::Text::TextGenerator::__get_m_TagNoParsing() const {
return ::cordl_internals::getInstanceField<bool, 0x290>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_CharacterCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x294>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextCore::Text::TextGenerator::__get_m_CharacterCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x294>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_FirstCharacterOfLine(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x298>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextCore::Text::TextGenerator::__get_m_FirstCharacterOfLine() const {
return ::cordl_internals::getInstanceField<int32_t, 0x298>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_LastCharacterOfLine(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x29c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextCore::Text::TextGenerator::__get_m_LastCharacterOfLine() const {
return ::cordl_internals::getInstanceField<int32_t, 0x29c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_FirstVisibleCharacterOfLine(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2a0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextCore::Text::TextGenerator::__get_m_FirstVisibleCharacterOfLine() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2a0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_LastVisibleCharacterOfLine(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2a4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextCore::Text::TextGenerator::__get_m_LastVisibleCharacterOfLine() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2a4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_MaxLineAscender(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2a8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::TextCore::Text::TextGenerator::__get_m_MaxLineAscender() const {
return ::cordl_internals::getInstanceField<float_t, 0x2a8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_MaxLineDescender(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2ac>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::TextCore::Text::TextGenerator::__get_m_MaxLineDescender() const {
return ::cordl_internals::getInstanceField<float_t, 0x2ac>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_LineNumber(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2b0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextCore::Text::TextGenerator::__get_m_LineNumber() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2b0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_LineVisibleCharacterCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2b4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextCore::Text::TextGenerator::__get_m_LineVisibleCharacterCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2b4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_FirstOverflowCharacterIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2b8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextCore::Text::TextGenerator::__get_m_FirstOverflowCharacterIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2b8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_PageNumber(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2bc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextCore::Text::TextGenerator::__get_m_PageNumber() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2bc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_MarginLeft(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2c0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::TextCore::Text::TextGenerator::__get_m_MarginLeft() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_MarginRight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2c4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::TextCore::Text::TextGenerator::__get_m_MarginRight() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_Width(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2c8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::TextCore::Text::TextGenerator::__get_m_Width() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_MeshExtents(::UnityEngine::TextCore::Text::Extents value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::Extents, 0x2cc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::TextCore::Text::Extents>(value));
}
constexpr ::UnityEngine::TextCore::Text::Extents ::UnityEngine::TextCore::Text::TextGenerator::__get_m_MeshExtents() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::Extents, 0x2cc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_MaxCapHeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2dc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::TextCore::Text::TextGenerator::__get_m_MaxCapHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x2dc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_MaxAscender(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2e0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::TextCore::Text::TextGenerator::__get_m_MaxAscender() const {
return ::cordl_internals::getInstanceField<float_t, 0x2e0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_MaxDescender(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2e4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::TextCore::Text::TextGenerator::__get_m_MaxDescender() const {
return ::cordl_internals::getInstanceField<float_t, 0x2e4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_IsNewPage(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2e8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::TextCore::Text::TextGenerator::__get_m_IsNewPage() const {
return ::cordl_internals::getInstanceField<bool, 0x2e8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_IsNonBreakingSpace(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2e9>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::TextCore::Text::TextGenerator::__get_m_IsNonBreakingSpace() const {
return ::cordl_internals::getInstanceField<bool, 0x2e9>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_SavedWordWrapState(::UnityEngine::TextCore::Text::WordWrapState value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::WordWrapState, 0x2f0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::TextCore::Text::WordWrapState>(value));
}
constexpr ::UnityEngine::TextCore::Text::WordWrapState ::UnityEngine::TextCore::Text::TextGenerator::__get_m_SavedWordWrapState() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::WordWrapState, 0x2f0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_SavedLineState(::UnityEngine::TextCore::Text::WordWrapState value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::WordWrapState, 0x600>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::TextCore::Text::WordWrapState>(value));
}
constexpr ::UnityEngine::TextCore::Text::WordWrapState ::UnityEngine::TextCore::Text::TextGenerator::__get_m_SavedLineState() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::WordWrapState, 0x600>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_LoopCountA(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x910>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextCore::Text::TextGenerator::__get_m_LoopCountA() const {
return ::cordl_internals::getInstanceField<int32_t, 0x910>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_TextElementType(::UnityEngine::TextCore::Text::TextElementType value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::TextElementType, 0x914>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::TextCore::Text::TextElementType>(value));
}
constexpr ::UnityEngine::TextCore::Text::TextElementType ::UnityEngine::TextCore::Text::TextGenerator::__get_m_TextElementType() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextElementType, 0x914>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_IsParsingText(bool value)  {
::cordl_internals::setInstanceField<bool, 0x915>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::TextCore::Text::TextGenerator::__get_m_IsParsingText() const {
return ::cordl_internals::getInstanceField<bool, 0x915>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_SpriteIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x918>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextCore::Text::TextGenerator::__get_m_SpriteIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x918>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_SpriteColor(::UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color32, 0x91c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color32>(value));
}
constexpr ::UnityEngine::Color32 ::UnityEngine::TextCore::Text::TextGenerator::__get_m_SpriteColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color32, 0x91c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_CachedTextElement(::UnityEngine::TextCore::Text::TextElement value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::TextElement, 0x920>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::TextCore::Text::TextElement>(value));
}
constexpr ::UnityEngine::TextCore::Text::TextElement ::UnityEngine::TextCore::Text::TextGenerator::__get_m_CachedTextElement() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextElement, 0x920>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_HighlightColor(::UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color32, 0x928>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color32>(value));
}
constexpr ::UnityEngine::Color32 ::UnityEngine::TextCore::Text::TextGenerator::__get_m_HighlightColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color32, 0x928>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_CharWidthAdjDelta(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x92c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::TextCore::Text::TextGenerator::__get_m_CharWidthAdjDelta() const {
return ::cordl_internals::getInstanceField<float_t, 0x92c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_FxMatrix(::UnityEngine::Matrix4x4 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Matrix4x4, 0x930>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Matrix4x4>(value));
}
constexpr ::UnityEngine::Matrix4x4 ::UnityEngine::TextCore::Text::TextGenerator::__get_m_FxMatrix() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Matrix4x4, 0x930>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_MaxFontSize(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x970>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::TextCore::Text::TextGenerator::__get_m_MaxFontSize() const {
return ::cordl_internals::getInstanceField<float_t, 0x970>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_MinFontSize(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x974>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::TextCore::Text::TextGenerator::__get_m_MinFontSize() const {
return ::cordl_internals::getInstanceField<float_t, 0x974>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_IsCharacterWrappingEnabled(bool value)  {
::cordl_internals::setInstanceField<bool, 0x978>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::TextCore::Text::TextGenerator::__get_m_IsCharacterWrappingEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0x978>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_StartOfLineAscender(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x97c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::TextCore::Text::TextGenerator::__get_m_StartOfLineAscender() const {
return ::cordl_internals::getInstanceField<float_t, 0x97c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_LineSpacingDelta(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x980>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::TextCore::Text::TextGenerator::__get_m_LineSpacingDelta() const {
return ::cordl_internals::getInstanceField<float_t, 0x980>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_IsMaskingEnabled(bool value)  {
::cordl_internals::setInstanceField<bool, 0x984>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::TextCore::Text::TextGenerator::__get_m_IsMaskingEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0x984>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_MaterialReferences(::ArrayW<::UnityEngine::TextCore::Text::MaterialReference> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::TextCore::Text::MaterialReference>, 0x988>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::TextCore::Text::MaterialReference>>(value));
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::MaterialReference> ::UnityEngine::TextCore::Text::TextGenerator::__get_m_MaterialReferences() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::TextCore::Text::MaterialReference>, 0x988>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_SpriteCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x990>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextCore::Text::TextGenerator::__get_m_SpriteCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x990>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_StyleStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, 0x998>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>(value));
}
constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> ::UnityEngine::TextCore::Text::TextGenerator::__get_m_StyleStack() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, 0x998>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_SpriteAnimationId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x9b8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextCore::Text::TextGenerator::__get_m_SpriteAnimationId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x9b8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_InternalTextParsingBuffer(::ArrayW<uint32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint32_t>, 0x9c0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint32_t>>(value));
}
constexpr ::ArrayW<uint32_t> ::UnityEngine::TextCore::Text::TextGenerator::__get_m_InternalTextParsingBuffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint32_t>, 0x9c0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_Attributes(::ArrayW<::UnityEngine::TextCore::Text::RichTextTagAttribute> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::TextCore::Text::RichTextTagAttribute>, 0x9c8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::TextCore::Text::RichTextTagAttribute>>(value));
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::RichTextTagAttribute> ::UnityEngine::TextCore::Text::TextGenerator::__get_m_Attributes() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::TextCore::Text::RichTextTagAttribute>, 0x9c8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_XmlAttribute(::ArrayW<::UnityEngine::TextCore::Text::XmlTagAttribute> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::TextCore::Text::XmlTagAttribute>, 0x9d0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::TextCore::Text::XmlTagAttribute>>(value));
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::XmlTagAttribute> ::UnityEngine::TextCore::Text::TextGenerator::__get_m_XmlAttribute() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::TextCore::Text::XmlTagAttribute>, 0x9d0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_RichTextTag(::ArrayW<char16_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<char16_t>, 0x9d8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<char16_t>>(value));
}
constexpr ::ArrayW<char16_t> ::UnityEngine::TextCore::Text::TextGenerator::__get_m_RichTextTag() const {
return ::cordl_internals::getInstanceField<::ArrayW<char16_t>, 0x9d8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_MaterialReferenceIndexLookup(::System::Collections::Generic::Dictionary_2<int32_t,int32_t> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>, 0x9e0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t> ::UnityEngine::TextCore::Text::TextGenerator::__get_m_MaterialReferenceIndexLookup() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>, 0x9e0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_IsCalculatingPreferredValues(bool value)  {
::cordl_internals::setInstanceField<bool, 0x9e8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::TextCore::Text::TextGenerator::__get_m_IsCalculatingPreferredValues() const {
return ::cordl_internals::getInstanceField<bool, 0x9e8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_DefaultSpriteAsset(::UnityEngine::TextCore::Text::SpriteAsset value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::SpriteAsset, 0x9f0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::TextCore::Text::SpriteAsset>(value));
}
constexpr ::UnityEngine::TextCore::Text::SpriteAsset ::UnityEngine::TextCore::Text::TextGenerator::__get_m_DefaultSpriteAsset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::SpriteAsset, 0x9f0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_TintSprite(bool value)  {
::cordl_internals::setInstanceField<bool, 0x9f8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::TextCore::Text::TextGenerator::__get_m_TintSprite() const {
return ::cordl_internals::getInstanceField<bool, 0x9f8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_Ellipsis(::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextGenerator__SpecialCharacter value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextGenerator__SpecialCharacter, 0xa00>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextGenerator__SpecialCharacter>(value));
}
constexpr ::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextGenerator__SpecialCharacter ::UnityEngine::TextCore::Text::TextGenerator::__get_m_Ellipsis() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextGenerator__SpecialCharacter, 0xa00>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_Underline(::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextGenerator__SpecialCharacter value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextGenerator__SpecialCharacter, 0xa20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextGenerator__SpecialCharacter>(value));
}
constexpr ::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextGenerator__SpecialCharacter ::UnityEngine::TextCore::Text::TextGenerator::__get_m_Underline() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextGenerator__SpecialCharacter, 0xa20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_IsUsingBold(bool value)  {
::cordl_internals::setInstanceField<bool, 0xa40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::TextCore::Text::TextGenerator::__get_m_IsUsingBold() const {
return ::cordl_internals::getInstanceField<bool, 0xa40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_IsSdfShader(bool value)  {
::cordl_internals::setInstanceField<bool, 0xa41>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::TextCore::Text::TextGenerator::__get_m_IsSdfShader() const {
return ::cordl_internals::getInstanceField<bool, 0xa41>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_InternalTextElementInfo(::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo>, 0xa48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo>>(value));
}
constexpr ::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo> ::UnityEngine::TextCore::Text::TextGenerator::__get_m_InternalTextElementInfo() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo>, 0xa48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::TextCore::Text::TextGenerator::__set_m_RecursiveCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xa50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextCore::Text::TextGenerator::__get_m_RecursiveCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0xa50>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::UnityEngine::TextCore::Text::TextGenerator ::UnityEngine::TextCore::Text::TextGenerator::GetTextGenerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "GetTextGenerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::TextGenerator, false>(nullptr, ___internal_method);
}
 void ::UnityEngine::TextCore::Text::TextGenerator::GenerateText(::UnityEngine::TextCore::Text::TextGenerationSettings settings, ::UnityEngine::TextCore::Text::TextInfo textInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "GenerateText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, settings, textInfo);
}
/// @param inverseYAxis: bool (default: true)
 ::UnityEngine::Vector2 ::UnityEngine::TextCore::Text::TextGenerator::GetCursorPosition(::UnityEngine::TextCore::Text::TextInfo textInfo, ::UnityEngine::Rect screenRect, int32_t index, bool inverseYAxis)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "GetCursorPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, textInfo, screenRect, index, inverseYAxis);
}
 ::UnityEngine::Vector2 ::UnityEngine::TextCore::Text::TextGenerator::GetPreferredValues(::UnityEngine::TextCore::Text::TextGenerationSettings settings, ::UnityEngine::TextCore::Text::TextInfo textInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "GetPreferredValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, settings, textInfo);
}
 void ::UnityEngine::TextCore::Text::TextGenerator::Prepare(::UnityEngine::TextCore::Text::TextGenerationSettings generationSettings, ::UnityEngine::TextCore::Text::TextInfo textInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "Prepare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, generationSettings, textInfo);
}
 void ::UnityEngine::TextCore::Text::TextGenerator::GenerateTextMesh(::UnityEngine::TextCore::Text::TextGenerationSettings generationSettings, ::UnityEngine::TextCore::Text::TextInfo textInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "GenerateTextMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, generationSettings, textInfo);
}
 void ::UnityEngine::TextCore::Text::TextGenerator::SaveWordWrappingState(ByRef<::UnityEngine::TextCore::Text::WordWrapState> state, int32_t index, int32_t count, ::UnityEngine::TextCore::Text::TextInfo textInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "SaveWordWrappingState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::Text::WordWrapState>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state, index, count, textInfo);
}
 int32_t ::UnityEngine::TextCore::Text::TextGenerator::RestoreWordWrappingState(ByRef<::UnityEngine::TextCore::Text::WordWrapState> state, ::UnityEngine::TextCore::Text::TextInfo textInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "RestoreWordWrappingState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TextCore::Text::WordWrapState>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, state, textInfo);
}
 bool ::UnityEngine::TextCore::Text::TextGenerator::ValidateHtmlTag(::ArrayW<int32_t> chars, int32_t startIndex, ByRef<int32_t> endIndex, ::UnityEngine::TextCore::Text::TextGenerationSettings generationSettings, ::UnityEngine::TextCore::Text::TextInfo textInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "ValidateHtmlTag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, chars, startIndex, endIndex, generationSettings, textInfo);
}
 void ::UnityEngine::TextCore::Text::TextGenerator::SaveGlyphVertexInfo(float_t padding, float_t stylePadding, ::UnityEngine::Color32 vertexColor, ::UnityEngine::TextCore::Text::TextGenerationSettings generationSettings, ::UnityEngine::TextCore::Text::TextInfo textInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "SaveGlyphVertexInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, padding, stylePadding, vertexColor, generationSettings, textInfo);
}
 void ::UnityEngine::TextCore::Text::TextGenerator::SaveSpriteVertexInfo(::UnityEngine::Color32 vertexColor, ::UnityEngine::TextCore::Text::TextGenerationSettings generationSettings, ::UnityEngine::TextCore::Text::TextInfo textInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "SaveSpriteVertexInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, vertexColor, generationSettings, textInfo);
}
 void ::UnityEngine::TextCore::Text::TextGenerator::DrawUnderlineMesh(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ByRef<int32_t> index, float_t startScale, float_t endScale, float_t maxScale, float_t sdfScale, ::UnityEngine::Color32 underlineColor, ::UnityEngine::TextCore::Text::TextGenerationSettings generationSettings, ::UnityEngine::TextCore::Text::TextInfo textInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "DrawUnderlineMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, start, end, index, startScale, endScale, maxScale, sdfScale, underlineColor, generationSettings, textInfo);
}
 void ::UnityEngine::TextCore::Text::TextGenerator::DrawTextHighlight(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ByRef<int32_t> index, ::UnityEngine::Color32 highlightColor, ::UnityEngine::TextCore::Text::TextGenerationSettings generationSettings, ::UnityEngine::TextCore::Text::TextInfo textInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "DrawTextHighlight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, start, end, index, highlightColor, generationSettings, textInfo);
}
 void ::UnityEngine::TextCore::Text::TextGenerator::ClearMesh(bool updateMesh, ::UnityEngine::TextCore::Text::TextInfo textInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "ClearMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, updateMesh, textInfo);
}
 void ::UnityEngine::TextCore::Text::TextGenerator::EnableMasking()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "EnableMasking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextCore::Text::TextGenerator::DisableMasking()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "DisableMasking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::TextCore::Text::TextGenerator::SetArraySizes(::ArrayW<int32_t> chars, ::UnityEngine::TextCore::Text::TextGenerationSettings generationSettings, ::UnityEngine::TextCore::Text::TextInfo textInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "SetArraySizes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, chars, generationSettings, textInfo);
}
 ::UnityEngine::TextCore::Text::TextElement ::UnityEngine::TextCore::Text::TextGenerator::GetTextElement(::UnityEngine::TextCore::Text::TextGenerationSettings generationSettings, uint32_t unicode, ::UnityEngine::TextCore::Text::FontAsset fontAsset, ::UnityEngine::TextCore::Text::FontStyles fontStyle, ::UnityEngine::TextCore::Text::TextFontWeight fontWeight, ByRef<bool> isUsingAlternativeTypeface)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "GetTextElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextFontWeight>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::TextElement, false>(const_cast<void*>(instance), ___internal_method, generationSettings, unicode, fontAsset, fontStyle, fontWeight, isUsingAlternativeTypeface);
}
 void ::UnityEngine::TextCore::Text::TextGenerator::ComputeMarginSize(::UnityEngine::Rect rect, ::UnityEngine::Vector4 margins)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "ComputeMarginSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rect, margins);
}
 void ::UnityEngine::TextCore::Text::TextGenerator::GetSpecialCharacters(::UnityEngine::TextCore::Text::TextGenerationSettings generationSettings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "GetSpecialCharacters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, generationSettings);
}
 void ::UnityEngine::TextCore::Text::TextGenerator::GetEllipsisSpecialCharacter(::UnityEngine::TextCore::Text::TextGenerationSettings generationSettings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "GetEllipsisSpecialCharacter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, generationSettings);
}
 void ::UnityEngine::TextCore::Text::TextGenerator::GetUnderlineSpecialCharacter(::UnityEngine::TextCore::Text::TextGenerationSettings generationSettings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "GetUnderlineSpecialCharacter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, generationSettings);
}
 float_t ::UnityEngine::TextCore::Text::TextGenerator::GetPaddingForMaterial(::UnityEngine::Material material, bool extraPadding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "GetPaddingForMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, material, extraPadding);
}
 ::UnityEngine::Vector2 ::UnityEngine::TextCore::Text::TextGenerator::GetPreferredValuesInternal(::UnityEngine::TextCore::Text::TextGenerationSettings generationSettings, ::UnityEngine::TextCore::Text::TextInfo textInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "GetPreferredValuesInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method, generationSettings, textInfo);
}
 ::UnityEngine::Vector2 ::UnityEngine::TextCore::Text::TextGenerator::CalculatePreferredValues(float_t defaultFontSize, ::UnityEngine::Vector2 marginSize, bool ignoreTextAutoSizing, ::UnityEngine::TextCore::Text::TextGenerationSettings generationSettings, ::UnityEngine::TextCore::Text::TextInfo textInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            "CalculatePreferredValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextGenerationSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::TextInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method, defaultFontSize, marginSize, ignoreTextAutoSizing, generationSettings, textInfo);
}
// Ctor Parameters []
 ::UnityEngine::TextCore::Text::TextGenerator::TextGenerator()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<TextGenerator>())) {}
 void ::UnityEngine::TextCore::Text::TextGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
