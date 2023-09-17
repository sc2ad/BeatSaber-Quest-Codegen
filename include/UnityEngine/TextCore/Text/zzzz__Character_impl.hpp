#pragma once
#include "UnityEngine/TextCore/Text/zzzz__TextElement_impl.hpp"
namespace {
#include "UnityEngine/TextCore/Text/zzzz__Character_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
#include "UnityEngine/TextCore/zzzz__Glyph_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::Character._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::Character::*)()>(&::UnityEngine::TextCore::Text::Character::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2bcc318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::Character>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::Character._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::Character::*)(uint32_t, ::UnityEngine::TextCore::Text::FontAsset, ::UnityEngine::TextCore::Glyph)>(&::UnityEngine::TextCore::Text::Character::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2bc279c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::Character>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Glyph>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::Character._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::Character::*)(uint32_t, uint32_t)>(&::UnityEngine::TextCore::Text::Character::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2bc5c68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::Character>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::UnityEngine::TextCore::Text::Character::Character()  : ::UnityEngine::TextCore::Text::TextElement(THROW_UNLESS(::il2cpp_utils::New<Character>())) {}
 void ::UnityEngine::TextCore::Text::Character::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::Character>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "unicode", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "fontAsset", ty: "::UnityEngine::TextCore::Text::FontAsset", modifiers: "", def_value: None }, CppParam { name: "glyph", ty: "::UnityEngine::TextCore::Glyph", modifiers: "", def_value: None }]
 ::UnityEngine::TextCore::Text::Character::Character(uint32_t unicode, ::UnityEngine::TextCore::Text::FontAsset fontAsset, ::UnityEngine::TextCore::Glyph glyph)  : ::UnityEngine::TextCore::Text::TextElement(THROW_UNLESS(::il2cpp_utils::New<Character>(unicode, fontAsset, glyph))) {}
 void ::UnityEngine::TextCore::Text::Character::_ctor(uint32_t unicode, ::UnityEngine::TextCore::Text::FontAsset fontAsset, ::UnityEngine::TextCore::Glyph glyph)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::Character>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Glyph>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, unicode, fontAsset, glyph);
}
// Ctor Parameters [CppParam { name: "unicode", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "glyphIndex", ty: "uint32_t", modifiers: "", def_value: None }]
 ::UnityEngine::TextCore::Text::Character::Character(uint32_t unicode, uint32_t glyphIndex)  : ::UnityEngine::TextCore::Text::TextElement(THROW_UNLESS(::il2cpp_utils::New<Character>(unicode, glyphIndex))) {}
 void ::UnityEngine::TextCore::Text::Character::_ctor(uint32_t unicode, uint32_t glyphIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::Character>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, unicode, glyphIndex);
}
} // end anonymous namespace
