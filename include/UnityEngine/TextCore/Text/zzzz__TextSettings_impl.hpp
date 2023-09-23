#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextSettings_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__UnicodeLineBreakingRules_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextStyleSheet_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__SpriteAsset_def.hpp"
//  Writing Method size for method: UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextSettings__FontReferenceMap._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextSettings__FontReferenceMap::*)(UnityEngine::Font, UnityEngine::TextCore::Text::FontAsset)>(&UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextSettings__FontReferenceMap::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc8d1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextSettings__FontReferenceMap>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Font>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::Text::FontAsset>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "font", ty: "UnityEngine::Font", modifiers: "", def_value: Some("csnull") }, CppParam { name: "fontAsset", ty: "UnityEngine::TextCore::Text::FontAsset", modifiers: "", def_value: Some("csnull") }]
constexpr UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextSettings__FontReferenceMap::UnityEngine__TextCore__Text__TextSettings__FontReferenceMap(UnityEngine::Font font, UnityEngine::TextCore::Text::FontAsset fontAsset) noexcept : ::bs_hook::ValueTypeWrapper() {this->font = font;
this->fontAsset = fontAsset;
}
constexpr void UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextSettings__FontReferenceMap::__set_font(UnityEngine::Font value)  {
::cordl_internals::setInstanceField<UnityEngine::Font, 0x0>(this->__instance, std::forward<UnityEngine::Font>(value));
}
constexpr UnityEngine::Font UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextSettings__FontReferenceMap::__get_font() const {
return ::cordl_internals::getInstanceField<UnityEngine::Font, 0x0>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextSettings__FontReferenceMap::__set_fontAsset(UnityEngine::TextCore::Text::FontAsset value)  {
::cordl_internals::setInstanceField<UnityEngine::TextCore::Text::FontAsset, 0x8>(this->__instance, std::forward<UnityEngine::TextCore::Text::FontAsset>(value));
}
constexpr UnityEngine::TextCore::Text::FontAsset UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextSettings__FontReferenceMap::__get_fontAsset() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextCore::Text::FontAsset, 0x8>(this->__instance);
}
 void UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextSettings__FontReferenceMap::_ctor(UnityEngine::Font font, UnityEngine::TextCore::Text::FontAsset fontAsset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextSettings__FontReferenceMap>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Font>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::Text::FontAsset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, font, fontAsset);
}
//  Writing Method size for method: UnityEngine::TextCore::Text::TextSettings.get_version
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::TextCore::Text::TextSettings::*)()>(&UnityEngine::TextCore::Text::TextSettings::get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc86a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "get_version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::Text::TextSettings.set_version
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::Text::TextSettings::*)(::StringW)>(&UnityEngine::TextCore::Text::TextSettings::set_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc86a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "set_version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::Text::TextSettings.get_defaultFontAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::TextCore::Text::FontAsset (UnityEngine::TextCore::Text::TextSettings::*)()>(&UnityEngine::TextCore::Text::TextSettings::get_defaultFontAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc86b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "get_defaultFontAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::Text::TextSettings.set_defaultFontAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::Text::TextSettings::*)(UnityEngine::TextCore::Text::FontAsset)>(&UnityEngine::TextCore::Text::TextSettings::set_defaultFontAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc86b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "set_defaultFontAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::Text::FontAsset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::Text::TextSettings.get_defaultFontAssetPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::TextCore::Text::TextSettings::*)()>(&UnityEngine::TextCore::Text::TextSettings::get_defaultFontAssetPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc86c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "get_defaultFontAssetPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::Text::TextSettings.set_defaultFontAssetPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::Text::TextSettings::*)(::StringW)>(&UnityEngine::TextCore::Text::TextSettings::set_defaultFontAssetPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc86c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "set_defaultFontAssetPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::Text::TextSettings.get_fallbackFontAssets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::TextCore::Text::FontAsset> (UnityEngine::TextCore::Text::TextSettings::*)()>(&UnityEngine::TextCore::Text::TextSettings::get_fallbackFontAssets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc86d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "get_fallbackFontAssets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::Text::TextSettings.set_fallbackFontAssets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::Text::TextSettings::*)(System::Collections::Generic::List_1<UnityEngine::TextCore::Text::FontAsset>)>(&UnityEngine::TextCore::Text::TextSettings::set_fallbackFontAssets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc86d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "set_fallbackFontAssets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::TextCore::Text::FontAsset>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::Text::TextSettings.get_matchMaterialPreset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TextCore::Text::TextSettings::*)()>(&UnityEngine::TextCore::Text::TextSettings::get_matchMaterialPreset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc86e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "get_matchMaterialPreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::Text::TextSettings.set_matchMaterialPreset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::Text::TextSettings::*)(bool)>(&UnityEngine::TextCore::Text::TextSettings::set_matchMaterialPreset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2bc86e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "set_matchMaterialPreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::Text::TextSettings.get_missingCharacterUnicode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::TextCore::Text::TextSettings::*)()>(&UnityEngine::TextCore::Text::TextSettings::get_missingCharacterUnicode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc86f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "get_missingCharacterUnicode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::Text::TextSettings.set_missingCharacterUnicode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::Text::TextSettings::*)(int32_t)>(&UnityEngine::TextCore::Text::TextSettings::set_missingCharacterUnicode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc86fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "set_missingCharacterUnicode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::Text::TextSettings.get_clearDynamicDataOnBuild
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TextCore::Text::TextSettings::*)()>(&UnityEngine::TextCore::Text::TextSettings::get_clearDynamicDataOnBuild)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc8704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "get_clearDynamicDataOnBuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::Text::TextSettings.set_clearDynamicDataOnBuild
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::Text::TextSettings::*)(bool)>(&UnityEngine::TextCore::Text::TextSettings::set_clearDynamicDataOnBuild)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2bc870c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "set_clearDynamicDataOnBuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::Text::TextSettings.get_defaultSpriteAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::TextCore::Text::SpriteAsset (UnityEngine::TextCore::Text::TextSettings::*)()>(&UnityEngine::TextCore::Text::TextSettings::get_defaultSpriteAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc8718;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "get_defaultSpriteAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::Text::TextSettings.set_defaultSpriteAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::Text::TextSettings::*)(UnityEngine::TextCore::Text::SpriteAsset)>(&UnityEngine::TextCore::Text::TextSettings::set_defaultSpriteAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc8720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "set_defaultSpriteAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::Text::SpriteAsset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::Text::TextSettings.get_defaultSpriteAssetPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::TextCore::Text::TextSettings::*)()>(&UnityEngine::TextCore::Text::TextSettings::get_defaultSpriteAssetPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc8728;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "get_defaultSpriteAssetPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::Text::TextSettings.set_defaultSpriteAssetPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::Text::TextSettings::*)(::StringW)>(&UnityEngine::TextCore::Text::TextSettings::set_defaultSpriteAssetPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc8730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "set_defaultSpriteAssetPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::Text::TextSettings.get_fallbackSpriteAssets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::TextCore::Text::SpriteAsset> (UnityEngine::TextCore::Text::TextSettings::*)()>(&UnityEngine::TextCore::Text::TextSettings::get_fallbackSpriteAssets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc8738;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "get_fallbackSpriteAssets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::Text::TextSettings.set_fallbackSpriteAssets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::Text::TextSettings::*)(System::Collections::Generic::List_1<UnityEngine::TextCore::Text::SpriteAsset>)>(&UnityEngine::TextCore::Text::TextSettings::set_fallbackSpriteAssets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc8740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "set_fallbackSpriteAssets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::TextCore::Text::SpriteAsset>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::Text::TextSettings.get_missingSpriteCharacterUnicode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (UnityEngine::TextCore::Text::TextSettings::*)()>(&UnityEngine::TextCore::Text::TextSettings::get_missingSpriteCharacterUnicode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc8748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "get_missingSpriteCharacterUnicode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::Text::TextSettings.set_missingSpriteCharacterUnicode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::Text::TextSettings::*)(uint32_t)>(&UnityEngine::TextCore::Text::TextSettings::set_missingSpriteCharacterUnicode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc8750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "set_missingSpriteCharacterUnicode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::Text::TextSettings.get_defaultStyleSheet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::TextCore::Text::TextStyleSheet (UnityEngine::TextCore::Text::TextSettings::*)()>(&UnityEngine::TextCore::Text::TextSettings::get_defaultStyleSheet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc8758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "get_defaultStyleSheet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::Text::TextSettings.set_defaultStyleSheet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::Text::TextSettings::*)(UnityEngine::TextCore::Text::TextStyleSheet)>(&UnityEngine::TextCore::Text::TextSettings::set_defaultStyleSheet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc8760;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "set_defaultStyleSheet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::Text::TextStyleSheet>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::Text::TextSettings.get_styleSheetsResourcePath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::TextCore::Text::TextSettings::*)()>(&UnityEngine::TextCore::Text::TextSettings::get_styleSheetsResourcePath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc8768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "get_styleSheetsResourcePath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::Text::TextSettings.set_styleSheetsResourcePath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::Text::TextSettings::*)(::StringW)>(&UnityEngine::TextCore::Text::TextSettings::set_styleSheetsResourcePath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc8770;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "set_styleSheetsResourcePath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::Text::TextSettings.get_defaultColorGradientPresetsPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::TextCore::Text::TextSettings::*)()>(&UnityEngine::TextCore::Text::TextSettings::get_defaultColorGradientPresetsPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc8778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "get_defaultColorGradientPresetsPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::Text::TextSettings.set_defaultColorGradientPresetsPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::Text::TextSettings::*)(::StringW)>(&UnityEngine::TextCore::Text::TextSettings::set_defaultColorGradientPresetsPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc8780;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "set_defaultColorGradientPresetsPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::Text::TextSettings.get_lineBreakingRules
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::TextCore::Text::UnicodeLineBreakingRules (UnityEngine::TextCore::Text::TextSettings::*)()>(&UnityEngine::TextCore::Text::TextSettings::get_lineBreakingRules)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2bc8788;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "get_lineBreakingRules",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::Text::TextSettings.set_lineBreakingRules
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::Text::TextSettings::*)(UnityEngine::TextCore::Text::UnicodeLineBreakingRules)>(&UnityEngine::TextCore::Text::TextSettings::set_lineBreakingRules)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc880c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "set_lineBreakingRules",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::Text::UnicodeLineBreakingRules>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::Text::TextSettings.get_displayWarnings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TextCore::Text::TextSettings::*)()>(&UnityEngine::TextCore::Text::TextSettings::get_displayWarnings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc8814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "get_displayWarnings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::Text::TextSettings.set_displayWarnings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::Text::TextSettings::*)(bool)>(&UnityEngine::TextCore::Text::TextSettings::set_displayWarnings)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2bc881c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "set_displayWarnings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::Text::TextSettings.InitializeFontReferenceLookup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::Text::TextSettings::*)()>(&UnityEngine::TextCore::Text::TextSettings::InitializeFontReferenceLookup)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x2bc8828;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "InitializeFontReferenceLookup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::Text::TextSettings.GetCachedFontAssetInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::TextCore::Text::FontAsset (UnityEngine::TextCore::Text::TextSettings::*)(UnityEngine::Font)>(&UnityEngine::TextCore::Text::TextSettings::GetCachedFontAssetInternal)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x2bc8a14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "GetCachedFontAssetInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Font>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::Text::TextSettings._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::Text::TextSettings::*)()>(&UnityEngine::TextCore::Text::TextSettings::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2bc8d24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::TextCore::Text::TextSettings::__set_m_Version(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::TextCore::Text::TextSettings::__get_m_Version() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__set_m_DefaultFontAsset(UnityEngine::TextCore::Text::FontAsset value)  {
::cordl_internals::setInstanceField<UnityEngine::TextCore::Text::FontAsset, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::TextCore::Text::FontAsset>(value));
}
constexpr UnityEngine::TextCore::Text::FontAsset UnityEngine::TextCore::Text::TextSettings::__get_m_DefaultFontAsset() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextCore::Text::FontAsset, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__set_m_DefaultFontAssetPath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::TextCore::Text::TextSettings::__get_m_DefaultFontAssetPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__set_m_FallbackFontAssets(System::Collections::Generic::List_1<UnityEngine::TextCore::Text::FontAsset> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::TextCore::Text::FontAsset>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::TextCore::Text::FontAsset>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::TextCore::Text::FontAsset> UnityEngine::TextCore::Text::TextSettings::__get_m_FallbackFontAssets() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::TextCore::Text::FontAsset>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__set_m_MatchMaterialPreset(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::TextCore::Text::TextSettings::__get_m_MatchMaterialPreset() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__set_m_MissingCharacterUnicode(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::Text::TextSettings::__get_m_MissingCharacterUnicode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__set_m_ClearDynamicDataOnBuild(bool value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::TextCore::Text::TextSettings::__get_m_ClearDynamicDataOnBuild() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__set_m_DefaultSpriteAsset(UnityEngine::TextCore::Text::SpriteAsset value)  {
::cordl_internals::setInstanceField<UnityEngine::TextCore::Text::SpriteAsset, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::TextCore::Text::SpriteAsset>(value));
}
constexpr UnityEngine::TextCore::Text::SpriteAsset UnityEngine::TextCore::Text::TextSettings::__get_m_DefaultSpriteAsset() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextCore::Text::SpriteAsset, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__set_m_DefaultSpriteAssetPath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::TextCore::Text::TextSettings::__get_m_DefaultSpriteAssetPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__set_m_FallbackSpriteAssets(System::Collections::Generic::List_1<UnityEngine::TextCore::Text::SpriteAsset> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::TextCore::Text::SpriteAsset>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::TextCore::Text::SpriteAsset>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::TextCore::Text::SpriteAsset> UnityEngine::TextCore::Text::TextSettings::__get_m_FallbackSpriteAssets() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::TextCore::Text::SpriteAsset>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__set_m_MissingSpriteCharacterUnicode(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::TextCore::Text::TextSettings::__get_m_MissingSpriteCharacterUnicode() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__set_m_DefaultStyleSheet(UnityEngine::TextCore::Text::TextStyleSheet value)  {
::cordl_internals::setInstanceField<UnityEngine::TextCore::Text::TextStyleSheet, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::TextCore::Text::TextStyleSheet>(value));
}
constexpr UnityEngine::TextCore::Text::TextStyleSheet UnityEngine::TextCore::Text::TextSettings::__get_m_DefaultStyleSheet() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextCore::Text::TextStyleSheet, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__set_m_StyleSheetsResourcePath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::TextCore::Text::TextSettings::__get_m_StyleSheetsResourcePath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__set_m_DefaultColorGradientPresetsPath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::TextCore::Text::TextSettings::__get_m_DefaultColorGradientPresetsPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__set_m_UnicodeLineBreakingRules(UnityEngine::TextCore::Text::UnicodeLineBreakingRules value)  {
::cordl_internals::setInstanceField<UnityEngine::TextCore::Text::UnicodeLineBreakingRules, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::TextCore::Text::UnicodeLineBreakingRules>(value));
}
constexpr UnityEngine::TextCore::Text::UnicodeLineBreakingRules UnityEngine::TextCore::Text::TextSettings::__get_m_UnicodeLineBreakingRules() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextCore::Text::UnicodeLineBreakingRules, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__set_m_DisplayWarnings(bool value)  {
::cordl_internals::setInstanceField<bool, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::TextCore::Text::TextSettings::__get_m_DisplayWarnings() const {
return ::cordl_internals::getInstanceField<bool, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__set_m_FontLookup(System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::TextCore::Text::FontAsset> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::TextCore::Text::FontAsset>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::TextCore::Text::FontAsset>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::TextCore::Text::FontAsset> UnityEngine::TextCore::Text::TextSettings::__get_m_FontLookup() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<int32_t,UnityEngine::TextCore::Text::FontAsset>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::TextCore::Text::TextSettings::__set_m_FontReferences(System::Collections::Generic::List_1<UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextSettings__FontReferenceMap> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextSettings__FontReferenceMap>, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextSettings__FontReferenceMap>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextSettings__FontReferenceMap> UnityEngine::TextCore::Text::TextSettings::__get_m_FontReferences() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::TextCore::Text::UnityEngine__TextCore__Text__TextSettings__FontReferenceMap>, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW UnityEngine::TextCore::Text::TextSettings::get_version()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "get_version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::TextCore::Text::TextSettings::set_version(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "set_version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::TextCore::Text::FontAsset UnityEngine::TextCore::Text::TextSettings::get_defaultFontAsset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "get_defaultFontAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::TextCore::Text::FontAsset, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::TextCore::Text::TextSettings::set_defaultFontAsset(UnityEngine::TextCore::Text::FontAsset value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "set_defaultFontAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::Text::FontAsset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW UnityEngine::TextCore::Text::TextSettings::get_defaultFontAssetPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "get_defaultFontAssetPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::TextCore::Text::TextSettings::set_defaultFontAssetPath(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "set_defaultFontAssetPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Collections::Generic::List_1<UnityEngine::TextCore::Text::FontAsset> UnityEngine::TextCore::Text::TextSettings::get_fallbackFontAssets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "get_fallbackFontAssets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<UnityEngine::TextCore::Text::FontAsset>, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::TextCore::Text::TextSettings::set_fallbackFontAssets(System::Collections::Generic::List_1<UnityEngine::TextCore::Text::FontAsset> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "set_fallbackFontAssets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::TextCore::Text::FontAsset>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::TextCore::Text::TextSettings::get_matchMaterialPreset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "get_matchMaterialPreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::TextCore::Text::TextSettings::set_matchMaterialPreset(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "set_matchMaterialPreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t UnityEngine::TextCore::Text::TextSettings::get_missingCharacterUnicode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "get_missingCharacterUnicode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::TextCore::Text::TextSettings::set_missingCharacterUnicode(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "set_missingCharacterUnicode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::TextCore::Text::TextSettings::get_clearDynamicDataOnBuild()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "get_clearDynamicDataOnBuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::TextCore::Text::TextSettings::set_clearDynamicDataOnBuild(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "set_clearDynamicDataOnBuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::TextCore::Text::SpriteAsset UnityEngine::TextCore::Text::TextSettings::get_defaultSpriteAsset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "get_defaultSpriteAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::TextCore::Text::SpriteAsset, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::TextCore::Text::TextSettings::set_defaultSpriteAsset(UnityEngine::TextCore::Text::SpriteAsset value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "set_defaultSpriteAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::Text::SpriteAsset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW UnityEngine::TextCore::Text::TextSettings::get_defaultSpriteAssetPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "get_defaultSpriteAssetPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::TextCore::Text::TextSettings::set_defaultSpriteAssetPath(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "set_defaultSpriteAssetPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Collections::Generic::List_1<UnityEngine::TextCore::Text::SpriteAsset> UnityEngine::TextCore::Text::TextSettings::get_fallbackSpriteAssets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "get_fallbackSpriteAssets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<UnityEngine::TextCore::Text::SpriteAsset>, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::TextCore::Text::TextSettings::set_fallbackSpriteAssets(System::Collections::Generic::List_1<UnityEngine::TextCore::Text::SpriteAsset> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "set_fallbackSpriteAssets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::TextCore::Text::SpriteAsset>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 uint32_t UnityEngine::TextCore::Text::TextSettings::get_missingSpriteCharacterUnicode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "get_missingSpriteCharacterUnicode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::TextCore::Text::TextSettings::set_missingSpriteCharacterUnicode(uint32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "set_missingSpriteCharacterUnicode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::TextCore::Text::TextStyleSheet UnityEngine::TextCore::Text::TextSettings::get_defaultStyleSheet()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "get_defaultStyleSheet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::TextCore::Text::TextStyleSheet, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::TextCore::Text::TextSettings::set_defaultStyleSheet(UnityEngine::TextCore::Text::TextStyleSheet value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "set_defaultStyleSheet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::Text::TextStyleSheet>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW UnityEngine::TextCore::Text::TextSettings::get_styleSheetsResourcePath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "get_styleSheetsResourcePath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::TextCore::Text::TextSettings::set_styleSheetsResourcePath(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "set_styleSheetsResourcePath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW UnityEngine::TextCore::Text::TextSettings::get_defaultColorGradientPresetsPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "get_defaultColorGradientPresetsPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::TextCore::Text::TextSettings::set_defaultColorGradientPresetsPath(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "set_defaultColorGradientPresetsPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::TextCore::Text::UnicodeLineBreakingRules UnityEngine::TextCore::Text::TextSettings::get_lineBreakingRules()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "get_lineBreakingRules",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::TextCore::Text::UnicodeLineBreakingRules, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::TextCore::Text::TextSettings::set_lineBreakingRules(UnityEngine::TextCore::Text::UnicodeLineBreakingRules value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "set_lineBreakingRules",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::Text::UnicodeLineBreakingRules>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::TextCore::Text::TextSettings::get_displayWarnings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "get_displayWarnings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::TextCore::Text::TextSettings::set_displayWarnings(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "set_displayWarnings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::TextCore::Text::TextSettings::InitializeFontReferenceLookup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "InitializeFontReferenceLookup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::TextCore::Text::FontAsset UnityEngine::TextCore::Text::TextSettings::GetCachedFontAssetInternal(UnityEngine::Font font)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            "GetCachedFontAssetInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Font>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::TextCore::Text::FontAsset, false>(const_cast<void*>(instance), ___internal_method, font);
}
// Ctor Parameters []
 UnityEngine::TextCore::Text::TextSettings::TextSettings()  : UnityEngine::ScriptableObject(THROW_UNLESS(::il2cpp_utils::New<TextSettings>())) {}
 void UnityEngine::TextCore::Text::TextSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextSettings>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
