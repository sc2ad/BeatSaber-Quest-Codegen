#pragma once
#include "UnityEngine/TextCore/zzzz__Glyph_impl.hpp"
#include "TMPro/zzzz__TMP_SpriteGlyph_def.hpp"
#include "UnityEngine/TextCore/zzzz__GlyphMetrics_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "UnityEngine/TextCore/zzzz__GlyphRect_def.hpp"
//  Writing Method size for method: TMPro::TMP_SpriteGlyph._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_SpriteGlyph::*)()>(&TMPro::TMP_SpriteGlyph::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aaccc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_SpriteGlyph>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_SpriteGlyph._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_SpriteGlyph::*)(uint32_t, UnityEngine::TextCore::GlyphMetrics, UnityEngine::TextCore::GlyphRect, float_t, int32_t)>(&TMPro::TMP_SpriteGlyph::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2aad034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_SpriteGlyph>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::GlyphMetrics>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::GlyphRect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::TMP_SpriteGlyph._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_SpriteGlyph::*)(uint32_t, UnityEngine::TextCore::GlyphMetrics, UnityEngine::TextCore::GlyphRect, float_t, int32_t, UnityEngine::Sprite)>(&TMPro::TMP_SpriteGlyph::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2aad0f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_SpriteGlyph>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::GlyphMetrics>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::GlyphRect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Sprite>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void TMPro::TMP_SpriteGlyph::__set_sprite(UnityEngine::Sprite value)  {
::cordl_internals::setInstanceField<UnityEngine::Sprite, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Sprite>(value));
}
constexpr UnityEngine::Sprite TMPro::TMP_SpriteGlyph::__get_sprite() const {
return ::cordl_internals::getInstanceField<UnityEngine::Sprite, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 TMPro::TMP_SpriteGlyph::TMP_SpriteGlyph()  : UnityEngine::TextCore::Glyph(THROW_UNLESS(::il2cpp_utils::New<TMP_SpriteGlyph>())) {}
 void TMPro::TMP_SpriteGlyph::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_SpriteGlyph>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "index", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "metrics", ty: "UnityEngine::TextCore::GlyphMetrics", modifiers: "", def_value: None }, CppParam { name: "glyphRect", ty: "UnityEngine::TextCore::GlyphRect", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "atlasIndex", ty: "int32_t", modifiers: "", def_value: None }]
 TMPro::TMP_SpriteGlyph::TMP_SpriteGlyph(uint32_t index, UnityEngine::TextCore::GlyphMetrics metrics, UnityEngine::TextCore::GlyphRect glyphRect, float_t scale, int32_t atlasIndex)  : UnityEngine::TextCore::Glyph(THROW_UNLESS(::il2cpp_utils::New<TMP_SpriteGlyph>(index, metrics, glyphRect, scale, atlasIndex))) {}
 void TMPro::TMP_SpriteGlyph::_ctor(uint32_t index, UnityEngine::TextCore::GlyphMetrics metrics, UnityEngine::TextCore::GlyphRect glyphRect, float_t scale, int32_t atlasIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_SpriteGlyph>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::GlyphMetrics>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::GlyphRect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, index, metrics, glyphRect, scale, atlasIndex);
}
// Ctor Parameters [CppParam { name: "index", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "metrics", ty: "UnityEngine::TextCore::GlyphMetrics", modifiers: "", def_value: None }, CppParam { name: "glyphRect", ty: "UnityEngine::TextCore::GlyphRect", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "atlasIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "sprite", ty: "UnityEngine::Sprite", modifiers: "", def_value: None }]
 TMPro::TMP_SpriteGlyph::TMP_SpriteGlyph(uint32_t index, UnityEngine::TextCore::GlyphMetrics metrics, UnityEngine::TextCore::GlyphRect glyphRect, float_t scale, int32_t atlasIndex, UnityEngine::Sprite sprite)  : UnityEngine::TextCore::Glyph(THROW_UNLESS(::il2cpp_utils::New<TMP_SpriteGlyph>(index, metrics, glyphRect, scale, atlasIndex, sprite))) {}
 void TMPro::TMP_SpriteGlyph::_ctor(uint32_t index, UnityEngine::TextCore::GlyphMetrics metrics, UnityEngine::TextCore::GlyphRect glyphRect, float_t scale, int32_t atlasIndex, UnityEngine::Sprite sprite)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::TMP_SpriteGlyph>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::GlyphMetrics>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::GlyphRect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Sprite>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, index, metrics, glyphRect, scale, atlasIndex, sprite);
}
