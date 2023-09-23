#pragma once
#include "UnityEngine/TextCore/LowLevel/zzzz__FontEngine_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__FontEngineError_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__FontReference_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphMarshallingStruct_def.hpp"
#include "UnityEngine/TextCore/zzzz__GlyphRect_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphRenderMode_def.hpp"
#include "UnityEngine/TextCore/zzzz__Glyph_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/TextCore/zzzz__FaceInfo_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphLoadFlags_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphPackingMode_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphPairAdjustmentRecord_def.hpp"
//  Writing Method size for method: UnityEngine::TextCore::LowLevel::FontEngine.InitializeFontEngine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::TextCore::LowLevel::FontEngineError (*)()>(&UnityEngine::TextCore::LowLevel::FontEngine::InitializeFontEngine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2baa98c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "InitializeFontEngine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::LowLevel::FontEngine.InitializeFontEngine_Internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&UnityEngine::TextCore::LowLevel::FontEngine::InitializeFontEngine_Internal)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2baa9f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "InitializeFontEngine_Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::LowLevel::FontEngine.LoadFontFace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::TextCore::LowLevel::FontEngineError (*)(::StringW, int32_t, int32_t)>(&UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2baaa1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "LoadFontFace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::LowLevel::FontEngine.LoadFontFace_With_Size_And_FaceIndex_Internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, int32_t, int32_t)>(&UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace_With_Size_And_FaceIndex_Internal)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2baaaa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "LoadFontFace_With_Size_And_FaceIndex_Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::LowLevel::FontEngine.LoadFontFace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::TextCore::LowLevel::FontEngineError (*)(UnityEngine::Font, int32_t)>(&UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2baaafc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "LoadFontFace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Font>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::LowLevel::FontEngine.LoadFontFace_With_Size_FromFont_Internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(UnityEngine::Font, int32_t)>(&UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace_With_Size_FromFont_Internal)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2baab80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "LoadFontFace_With_Size_FromFont_Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Font>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::LowLevel::FontEngine.LoadFontFace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::TextCore::LowLevel::FontEngineError (*)(UnityEngine::Font, int32_t, int32_t)>(&UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2baabc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "LoadFontFace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Font>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::LowLevel::FontEngine.LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(UnityEngine::Font, int32_t, int32_t)>(&UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2baac50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Font>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::LowLevel::FontEngine.LoadFontFace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::TextCore::LowLevel::FontEngineError (*)(::StringW, ::StringW, int32_t)>(&UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2baaca4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "LoadFontFace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::LowLevel::FontEngine.LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, ::StringW, int32_t)>(&UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2baad30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::LowLevel::FontEngine.TryGetSystemFontReference
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW, ByRef<UnityEngine::TextCore::LowLevel::FontReference>)>(&UnityEngine::TextCore::LowLevel::FontEngine::TryGetSystemFontReference)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2baad84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "TryGetSystemFontReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::TextCore::LowLevel::FontReference>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::LowLevel::FontEngine.TryGetSystemFontReference_Internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW, ByRef<UnityEngine::TextCore::LowLevel::FontReference>)>(&UnityEngine::TextCore::LowLevel::FontEngine::TryGetSystemFontReference_Internal)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2baae10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "TryGetSystemFontReference_Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::TextCore::LowLevel::FontReference>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::LowLevel::FontEngine.GetFaceInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::TextCore::FaceInfo (*)()>(&UnityEngine::TextCore::LowLevel::FontEngine::GetFaceInfo)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2baae64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "GetFaceInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::LowLevel::FontEngine.GetFaceInfo_Internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(ByRef<UnityEngine::TextCore::FaceInfo>)>(&UnityEngine::TextCore::LowLevel::FontEngine::GetFaceInfo_Internal)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2baaf04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "GetFaceInfo_Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::TextCore::FaceInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::LowLevel::FontEngine.GetGlyphIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(uint32_t)>(&UnityEngine::TextCore::LowLevel::FontEngine::GetGlyphIndex)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2baaf40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "GetGlyphIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::LowLevel::FontEngine.TryGetGlyphWithUnicodeValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint32_t, UnityEngine::TextCore::LowLevel::GlyphLoadFlags, ByRef<UnityEngine::TextCore::Glyph>)>(&UnityEngine::TextCore::LowLevel::FontEngine::TryGetGlyphWithUnicodeValue)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2baaf7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "TryGetGlyphWithUnicodeValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::LowLevel::GlyphLoadFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::TextCore::Glyph>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::LowLevel::FontEngine.TryGetGlyphWithUnicodeValue_Internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint32_t, UnityEngine::TextCore::LowLevel::GlyphLoadFlags, ByRef<UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>)>(&UnityEngine::TextCore::LowLevel::FontEngine::TryGetGlyphWithUnicodeValue_Internal)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2bab0d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "TryGetGlyphWithUnicodeValue_Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::LowLevel::GlyphLoadFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::LowLevel::FontEngine.TryGetGlyphWithIndexValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint32_t, UnityEngine::TextCore::LowLevel::GlyphLoadFlags, ByRef<UnityEngine::TextCore::Glyph>)>(&UnityEngine::TextCore::LowLevel::FontEngine::TryGetGlyphWithIndexValue)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2bab124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "TryGetGlyphWithIndexValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::LowLevel::GlyphLoadFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::TextCore::Glyph>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::LowLevel::FontEngine.TryGetGlyphWithIndexValue_Internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint32_t, UnityEngine::TextCore::LowLevel::GlyphLoadFlags, ByRef<UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>)>(&UnityEngine::TextCore::LowLevel::FontEngine::TryGetGlyphWithIndexValue_Internal)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2bab278;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "TryGetGlyphWithIndexValue_Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::LowLevel::GlyphLoadFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::LowLevel::FontEngine.SetTextureUploadMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&UnityEngine::TextCore::LowLevel::FontEngine::SetTextureUploadMode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2bab2cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "SetTextureUploadMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::LowLevel::FontEngine.TryAddGlyphToTexture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint32_t, int32_t, UnityEngine::TextCore::LowLevel::GlyphPackingMode, System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect>, System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect>, UnityEngine::TextCore::LowLevel::GlyphRenderMode, UnityEngine::Texture2D, ByRef<UnityEngine::TextCore::Glyph>)>(&UnityEngine::TextCore::LowLevel::FontEngine::TryAddGlyphToTexture)> {
  constexpr static std::size_t size = 0x530;
  constexpr static std::size_t addrs = 0x2bab308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "TryAddGlyphToTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::LowLevel::GlyphPackingMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Texture2D>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::TextCore::Glyph>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::LowLevel::FontEngine.TryAddGlyphToTexture_Internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint32_t, int32_t, UnityEngine::TextCore::LowLevel::GlyphPackingMode, ByRef<::ArrayW<UnityEngine::TextCore::GlyphRect>>, ByRef<int32_t>, ByRef<::ArrayW<UnityEngine::TextCore::GlyphRect>>, ByRef<int32_t>, UnityEngine::TextCore::LowLevel::GlyphRenderMode, UnityEngine::Texture2D, ByRef<UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>)>(&UnityEngine::TextCore::LowLevel::FontEngine::TryAddGlyphToTexture_Internal)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2bab838;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "TryAddGlyphToTexture_Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::LowLevel::GlyphPackingMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<UnityEngine::TextCore::GlyphRect>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<UnityEngine::TextCore::GlyphRect>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Texture2D>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::LowLevel::FontEngine.TryAddGlyphsToTexture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Collections::Generic::List_1<uint32_t>, int32_t, UnityEngine::TextCore::LowLevel::GlyphPackingMode, System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect>, System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect>, UnityEngine::TextCore::LowLevel::GlyphRenderMode, UnityEngine::Texture2D, ByRef<::ArrayW<UnityEngine::TextCore::Glyph>>)>(&UnityEngine::TextCore::LowLevel::FontEngine::TryAddGlyphsToTexture)> {
  constexpr static std::size_t size = 0x888;
  constexpr static std::size_t addrs = 0x2bab8d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "TryAddGlyphsToTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::LowLevel::GlyphPackingMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Texture2D>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<UnityEngine::TextCore::Glyph>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::LowLevel::FontEngine.TryAddGlyphsToTexture_Internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint32_t>, int32_t, UnityEngine::TextCore::LowLevel::GlyphPackingMode, ByRef<::ArrayW<UnityEngine::TextCore::GlyphRect>>, ByRef<int32_t>, ByRef<::ArrayW<UnityEngine::TextCore::GlyphRect>>, ByRef<int32_t>, UnityEngine::TextCore::LowLevel::GlyphRenderMode, UnityEngine::Texture2D, ByRef<::ArrayW<UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>>, ByRef<int32_t>)>(&UnityEngine::TextCore::LowLevel::FontEngine::TryAddGlyphsToTexture_Internal)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2bac17c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "TryAddGlyphsToTexture_Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::LowLevel::GlyphPackingMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<UnityEngine::TextCore::GlyphRect>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<UnityEngine::TextCore::GlyphRect>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Texture2D>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::LowLevel::FontEngine.GetGlyphPairAdjustmentTable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> (*)(::ArrayW<uint32_t>)>(&UnityEngine::TextCore::LowLevel::FontEngine::GetGlyphPairAdjustmentTable)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2bac224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "GetGlyphPairAdjustmentTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::LowLevel::FontEngine.GetGlyphPairAdjustmentRecords
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> (*)(System::Collections::Generic::List_1<uint32_t>, ByRef<int32_t>)>(&UnityEngine::TextCore::LowLevel::FontEngine::GetGlyphPairAdjustmentRecords)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x2bac3f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "GetGlyphPairAdjustmentRecords",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::LowLevel::FontEngine.PopulatePairAdjustmentRecordMarshallingArray_from_KernTable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<uint32_t>, ByRef<int32_t>)>(&UnityEngine::TextCore::LowLevel::FontEngine::PopulatePairAdjustmentRecordMarshallingArray_from_KernTable)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2bac374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "PopulatePairAdjustmentRecordMarshallingArray_from_KernTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::LowLevel::FontEngine.GetPairAdjustmentRecordsFromMarshallingArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(ByRef<::ArrayW<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>)>(&UnityEngine::TextCore::LowLevel::FontEngine::GetPairAdjustmentRecordsFromMarshallingArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2bac3b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "GetPairAdjustmentRecordsFromMarshallingArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::LowLevel::FontEngine.ResetAtlasTexture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Texture2D)>(&UnityEngine::TextCore::LowLevel::FontEngine::ResetAtlasTexture)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2bac57c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "ResetAtlasTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Texture2D>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::TextCore::LowLevel::FontEngine::__set_s_Glyphs(::ArrayW<UnityEngine::TextCore::Glyph> value)  {
::cordl_internals::setStaticField<::ArrayW<UnityEngine::TextCore::Glyph>, "s_Glyphs", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get>(std::forward<::ArrayW<UnityEngine::TextCore::Glyph>>(value));
}
 ::ArrayW<UnityEngine::TextCore::Glyph> UnityEngine::TextCore::LowLevel::FontEngine::__get_s_Glyphs()  {
return ::cordl_internals::getStaticField<::ArrayW<UnityEngine::TextCore::Glyph>, "s_Glyphs", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get>();
}
 void UnityEngine::TextCore::LowLevel::FontEngine::__set_s_GlyphIndexes_MarshallingArray_A(::ArrayW<uint32_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint32_t>, "s_GlyphIndexes_MarshallingArray_A", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get>(std::forward<::ArrayW<uint32_t>>(value));
}
 ::ArrayW<uint32_t> UnityEngine::TextCore::LowLevel::FontEngine::__get_s_GlyphIndexes_MarshallingArray_A()  {
return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "s_GlyphIndexes_MarshallingArray_A", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get>();
}
 void UnityEngine::TextCore::LowLevel::FontEngine::__set_s_GlyphMarshallingStruct_IN(::ArrayW<UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct> value)  {
::cordl_internals::setStaticField<::ArrayW<UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>, "s_GlyphMarshallingStruct_IN", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get>(std::forward<::ArrayW<UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>>(value));
}
 ::ArrayW<UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct> UnityEngine::TextCore::LowLevel::FontEngine::__get_s_GlyphMarshallingStruct_IN()  {
return ::cordl_internals::getStaticField<::ArrayW<UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>, "s_GlyphMarshallingStruct_IN", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get>();
}
 void UnityEngine::TextCore::LowLevel::FontEngine::__set_s_GlyphMarshallingStruct_OUT(::ArrayW<UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct> value)  {
::cordl_internals::setStaticField<::ArrayW<UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>, "s_GlyphMarshallingStruct_OUT", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get>(std::forward<::ArrayW<UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>>(value));
}
 ::ArrayW<UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct> UnityEngine::TextCore::LowLevel::FontEngine::__get_s_GlyphMarshallingStruct_OUT()  {
return ::cordl_internals::getStaticField<::ArrayW<UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>, "s_GlyphMarshallingStruct_OUT", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get>();
}
 void UnityEngine::TextCore::LowLevel::FontEngine::__set_s_FreeGlyphRects(::ArrayW<UnityEngine::TextCore::GlyphRect> value)  {
::cordl_internals::setStaticField<::ArrayW<UnityEngine::TextCore::GlyphRect>, "s_FreeGlyphRects", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get>(std::forward<::ArrayW<UnityEngine::TextCore::GlyphRect>>(value));
}
 ::ArrayW<UnityEngine::TextCore::GlyphRect> UnityEngine::TextCore::LowLevel::FontEngine::__get_s_FreeGlyphRects()  {
return ::cordl_internals::getStaticField<::ArrayW<UnityEngine::TextCore::GlyphRect>, "s_FreeGlyphRects", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get>();
}
 void UnityEngine::TextCore::LowLevel::FontEngine::__set_s_UsedGlyphRects(::ArrayW<UnityEngine::TextCore::GlyphRect> value)  {
::cordl_internals::setStaticField<::ArrayW<UnityEngine::TextCore::GlyphRect>, "s_UsedGlyphRects", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get>(std::forward<::ArrayW<UnityEngine::TextCore::GlyphRect>>(value));
}
 ::ArrayW<UnityEngine::TextCore::GlyphRect> UnityEngine::TextCore::LowLevel::FontEngine::__get_s_UsedGlyphRects()  {
return ::cordl_internals::getStaticField<::ArrayW<UnityEngine::TextCore::GlyphRect>, "s_UsedGlyphRects", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get>();
}
 void UnityEngine::TextCore::LowLevel::FontEngine::__set_s_PairAdjustmentRecords_MarshallingArray(::ArrayW<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> value)  {
::cordl_internals::setStaticField<::ArrayW<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>, "s_PairAdjustmentRecords_MarshallingArray", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get>(std::forward<::ArrayW<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>(value));
}
 ::ArrayW<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> UnityEngine::TextCore::LowLevel::FontEngine::__get_s_PairAdjustmentRecords_MarshallingArray()  {
return ::cordl_internals::getStaticField<::ArrayW<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>, "s_PairAdjustmentRecords_MarshallingArray", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get>();
}
 void UnityEngine::TextCore::LowLevel::FontEngine::__set_s_GlyphLookupDictionary(System::Collections::Generic::Dictionary_2<uint32_t,UnityEngine::TextCore::Glyph> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::Dictionary_2<uint32_t,UnityEngine::TextCore::Glyph>, "s_GlyphLookupDictionary", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get>(std::forward<System::Collections::Generic::Dictionary_2<uint32_t,UnityEngine::TextCore::Glyph>>(value));
}
 System::Collections::Generic::Dictionary_2<uint32_t,UnityEngine::TextCore::Glyph> UnityEngine::TextCore::LowLevel::FontEngine::__get_s_GlyphLookupDictionary()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::Dictionary_2<uint32_t,UnityEngine::TextCore::Glyph>, "s_GlyphLookupDictionary", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get>();
}
 UnityEngine::TextCore::LowLevel::FontEngineError UnityEngine::TextCore::LowLevel::FontEngine::InitializeFontEngine()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "InitializeFontEngine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::TextCore::LowLevel::FontEngineError, false>(nullptr, ___internal_method);
}
 int32_t UnityEngine::TextCore::LowLevel::FontEngine::InitializeFontEngine_Internal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "InitializeFontEngine_Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
 UnityEngine::TextCore::LowLevel::FontEngineError UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace(::StringW filePath, int32_t pointSize, int32_t faceIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "LoadFontFace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::TextCore::LowLevel::FontEngineError, false>(nullptr, ___internal_method, filePath, pointSize, faceIndex);
}
 int32_t UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace_With_Size_And_FaceIndex_Internal(::StringW filePath, int32_t pointSize, int32_t faceIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "LoadFontFace_With_Size_And_FaceIndex_Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, filePath, pointSize, faceIndex);
}
 UnityEngine::TextCore::LowLevel::FontEngineError UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace(UnityEngine::Font font, int32_t pointSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "LoadFontFace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Font>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::TextCore::LowLevel::FontEngineError, false>(nullptr, ___internal_method, font, pointSize);
}
 int32_t UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace_With_Size_FromFont_Internal(UnityEngine::Font font, int32_t pointSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "LoadFontFace_With_Size_FromFont_Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Font>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, font, pointSize);
}
 UnityEngine::TextCore::LowLevel::FontEngineError UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace(UnityEngine::Font font, int32_t pointSize, int32_t faceIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "LoadFontFace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Font>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::TextCore::LowLevel::FontEngineError, false>(nullptr, ___internal_method, font, pointSize, faceIndex);
}
 int32_t UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal(UnityEngine::Font font, int32_t pointSize, int32_t faceIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Font>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, font, pointSize, faceIndex);
}
 UnityEngine::TextCore::LowLevel::FontEngineError UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace(::StringW familyName, ::StringW styleName, int32_t pointSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "LoadFontFace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::TextCore::LowLevel::FontEngineError, false>(nullptr, ___internal_method, familyName, styleName, pointSize);
}
 int32_t UnityEngine::TextCore::LowLevel::FontEngine::LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal(::StringW familyName, ::StringW styleName, int32_t pointSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, familyName, styleName, pointSize);
}
 bool UnityEngine::TextCore::LowLevel::FontEngine::TryGetSystemFontReference(::StringW familyName, ::StringW styleName, ByRef<UnityEngine::TextCore::LowLevel::FontReference> fontRef)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "TryGetSystemFontReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::TextCore::LowLevel::FontReference>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, familyName, styleName, fontRef);
}
 bool UnityEngine::TextCore::LowLevel::FontEngine::TryGetSystemFontReference_Internal(::StringW familyName, ::StringW styleName, ByRef<UnityEngine::TextCore::LowLevel::FontReference> fontRef)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "TryGetSystemFontReference_Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::TextCore::LowLevel::FontReference>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, familyName, styleName, fontRef);
}
 UnityEngine::TextCore::FaceInfo UnityEngine::TextCore::LowLevel::FontEngine::GetFaceInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "GetFaceInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::TextCore::FaceInfo, false>(nullptr, ___internal_method);
}
 int32_t UnityEngine::TextCore::LowLevel::FontEngine::GetFaceInfo_Internal(ByRef<UnityEngine::TextCore::FaceInfo> faceInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "GetFaceInfo_Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::TextCore::FaceInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, faceInfo);
}
 uint32_t UnityEngine::TextCore::LowLevel::FontEngine::GetGlyphIndex(uint32_t unicode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "GetGlyphIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, unicode);
}
 bool UnityEngine::TextCore::LowLevel::FontEngine::TryGetGlyphWithUnicodeValue(uint32_t unicode, UnityEngine::TextCore::LowLevel::GlyphLoadFlags flags, ByRef<UnityEngine::TextCore::Glyph> glyph)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "TryGetGlyphWithUnicodeValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::LowLevel::GlyphLoadFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::TextCore::Glyph>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, unicode, flags, glyph);
}
 bool UnityEngine::TextCore::LowLevel::FontEngine::TryGetGlyphWithUnicodeValue_Internal(uint32_t unicode, UnityEngine::TextCore::LowLevel::GlyphLoadFlags loadFlags, ByRef<UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct> glyphStruct)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "TryGetGlyphWithUnicodeValue_Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::LowLevel::GlyphLoadFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, unicode, loadFlags, glyphStruct);
}
 bool UnityEngine::TextCore::LowLevel::FontEngine::TryGetGlyphWithIndexValue(uint32_t glyphIndex, UnityEngine::TextCore::LowLevel::GlyphLoadFlags flags, ByRef<UnityEngine::TextCore::Glyph> glyph)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "TryGetGlyphWithIndexValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::LowLevel::GlyphLoadFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::TextCore::Glyph>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, glyphIndex, flags, glyph);
}
 bool UnityEngine::TextCore::LowLevel::FontEngine::TryGetGlyphWithIndexValue_Internal(uint32_t glyphIndex, UnityEngine::TextCore::LowLevel::GlyphLoadFlags loadFlags, ByRef<UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct> glyphStruct)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "TryGetGlyphWithIndexValue_Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::LowLevel::GlyphLoadFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, glyphIndex, loadFlags, glyphStruct);
}
 void UnityEngine::TextCore::LowLevel::FontEngine::SetTextureUploadMode(bool shouldUploadImmediately)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "SetTextureUploadMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, shouldUploadImmediately);
}
 bool UnityEngine::TextCore::LowLevel::FontEngine::TryAddGlyphToTexture(uint32_t glyphIndex, int32_t padding, UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode, System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect> freeGlyphRects, System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect> usedGlyphRects, UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, UnityEngine::Texture2D texture, ByRef<UnityEngine::TextCore::Glyph> glyph)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "TryAddGlyphToTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::LowLevel::GlyphPackingMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Texture2D>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::TextCore::Glyph>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, glyphIndex, padding, packingMode, freeGlyphRects, usedGlyphRects, renderMode, texture, glyph);
}
 bool UnityEngine::TextCore::LowLevel::FontEngine::TryAddGlyphToTexture_Internal(uint32_t glyphIndex, int32_t padding, UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode, ByRef<::ArrayW<UnityEngine::TextCore::GlyphRect>> freeGlyphRects, ByRef<int32_t> freeGlyphRectCount, ByRef<::ArrayW<UnityEngine::TextCore::GlyphRect>> usedGlyphRects, ByRef<int32_t> usedGlyphRectCount, UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, UnityEngine::Texture2D texture, ByRef<UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct> glyph)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "TryAddGlyphToTexture_Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::LowLevel::GlyphPackingMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<UnityEngine::TextCore::GlyphRect>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<UnityEngine::TextCore::GlyphRect>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Texture2D>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, glyphIndex, padding, packingMode, freeGlyphRects, freeGlyphRectCount, usedGlyphRects, usedGlyphRectCount, renderMode, texture, glyph);
}
 bool UnityEngine::TextCore::LowLevel::FontEngine::TryAddGlyphsToTexture(System::Collections::Generic::List_1<uint32_t> glyphIndexes, int32_t padding, UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode, System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect> freeGlyphRects, System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect> usedGlyphRects, UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, UnityEngine::Texture2D texture, ByRef<::ArrayW<UnityEngine::TextCore::Glyph>> glyphs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "TryAddGlyphsToTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::LowLevel::GlyphPackingMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::TextCore::GlyphRect>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Texture2D>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<UnityEngine::TextCore::Glyph>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, glyphIndexes, padding, packingMode, freeGlyphRects, usedGlyphRects, renderMode, texture, glyphs);
}
 bool UnityEngine::TextCore::LowLevel::FontEngine::TryAddGlyphsToTexture_Internal(::ArrayW<uint32_t> glyphIndex, int32_t padding, UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode, ByRef<::ArrayW<UnityEngine::TextCore::GlyphRect>> freeGlyphRects, ByRef<int32_t> freeGlyphRectCount, ByRef<::ArrayW<UnityEngine::TextCore::GlyphRect>> usedGlyphRects, ByRef<int32_t> usedGlyphRectCount, UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, UnityEngine::Texture2D texture, ByRef<::ArrayW<UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>> glyphs, ByRef<int32_t> glyphCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "TryAddGlyphsToTexture_Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::LowLevel::GlyphPackingMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<UnityEngine::TextCore::GlyphRect>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<UnityEngine::TextCore::GlyphRect>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::LowLevel::GlyphRenderMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Texture2D>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, glyphIndex, padding, packingMode, freeGlyphRects, freeGlyphRectCount, usedGlyphRects, usedGlyphRectCount, renderMode, texture, glyphs, glyphCount);
}
 ::ArrayW<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> UnityEngine::TextCore::LowLevel::FontEngine::GetGlyphPairAdjustmentTable(::ArrayW<uint32_t> glyphIndexes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "GetGlyphPairAdjustmentTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>, false>(nullptr, ___internal_method, glyphIndexes);
}
 ::ArrayW<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> UnityEngine::TextCore::LowLevel::FontEngine::GetGlyphPairAdjustmentRecords(System::Collections::Generic::List_1<uint32_t> glyphIndexes, ByRef<int32_t> recordCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "GetGlyphPairAdjustmentRecords",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>, false>(nullptr, ___internal_method, glyphIndexes, recordCount);
}
 int32_t UnityEngine::TextCore::LowLevel::FontEngine::PopulatePairAdjustmentRecordMarshallingArray_from_KernTable(::ArrayW<uint32_t> glyphIndexes, ByRef<int32_t> recordCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "PopulatePairAdjustmentRecordMarshallingArray_from_KernTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, glyphIndexes, recordCount);
}
 int32_t UnityEngine::TextCore::LowLevel::FontEngine::GetPairAdjustmentRecordsFromMarshallingArray(ByRef<::ArrayW<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>> glyphPairAdjustmentRecords)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "GetPairAdjustmentRecordsFromMarshallingArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, glyphPairAdjustmentRecords);
}
template<typename T>
 void UnityEngine::TextCore::LowLevel::FontEngine::GenericListToMarshallingArray(ByRef<System::Collections::Generic::List_1<T>> srcList, ByRef<::ArrayW<T>> dstArray)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                        "GenericListToMarshallingArray",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Collections::Generic::List_1<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T>>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, srcList, dstArray);
}
template<typename T>
 void UnityEngine::TextCore::LowLevel::FontEngine::SetMarshallingArraySize(ByRef<::ArrayW<T>> marshallingArray, int32_t recordCount)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                        "SetMarshallingArraySize",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, marshallingArray, recordCount);
}
 void UnityEngine::TextCore::LowLevel::FontEngine::ResetAtlasTexture(UnityEngine::Texture2D texture)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::FontEngine>::get(),
                            "ResetAtlasTexture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Texture2D>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, texture);
}
