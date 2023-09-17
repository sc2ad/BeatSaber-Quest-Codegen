#pragma once
#include "UnityEngine/TextCore/zzzz__Glyph_impl.hpp"
namespace {
#include "UnityEngine/TextCore/Text/zzzz__SpriteGlyph_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::SpriteGlyph._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::SpriteGlyph::*)()>(&::UnityEngine::TextCore::Text::SpriteGlyph::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bd48f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::SpriteGlyph>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::TextCore::Text::SpriteGlyph::__set_sprite(::UnityEngine::Sprite value)  {
::cordl_internals::setInstanceField<::UnityEngine::Sprite, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Sprite>(value));
}
constexpr ::UnityEngine::Sprite ::UnityEngine::TextCore::Text::SpriteGlyph::__get_sprite() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Sprite, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::UnityEngine::TextCore::Text::SpriteGlyph::SpriteGlyph()  : ::UnityEngine::TextCore::Glyph(THROW_UNLESS(::il2cpp_utils::New<SpriteGlyph>())) {}
 void ::UnityEngine::TextCore::Text::SpriteGlyph::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::SpriteGlyph>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
