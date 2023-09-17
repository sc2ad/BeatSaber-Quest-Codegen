#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/TextCore/Text/zzzz__TextResourceManager_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef::*)(int32_t, int32_t, int32_t, ::UnityEngine::TextCore::Text::FontAsset)>(&::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2bd21b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontAsset>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "nameHashCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "familyNameHashCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "styleNameHashCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "familyNameAndStyleHashCode", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fontAsset", ty: "::UnityEngine::TextCore::Text::FontAsset", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef::____UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef(int32_t nameHashCode, int32_t familyNameHashCode, int32_t styleNameHashCode, int64_t familyNameAndStyleHashCode, ::UnityEngine::TextCore::Text::FontAsset fontAsset) noexcept : ::bs_hook::ValueTypeWrapper() {this->nameHashCode = nameHashCode;
this->familyNameHashCode = familyNameHashCode;
this->styleNameHashCode = styleNameHashCode;
this->familyNameAndStyleHashCode = familyNameAndStyleHashCode;
this->fontAsset = fontAsset;
}
constexpr void ::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef::__set_nameHashCode(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef::__get_nameHashCode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef::__set_familyNameHashCode(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef::__get_familyNameHashCode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void ::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef::__set_styleNameHashCode(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef::__get_styleNameHashCode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef::__set_familyNameAndStyleHashCode(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x10>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t ::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef::__get_familyNameAndStyleHashCode() const {
return ::cordl_internals::getInstanceField<int64_t, 0x10>(this->__instance);
}
constexpr void ::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef::__set_fontAsset(::UnityEngine::TextCore::Text::FontAsset value)  {
::cordl_internals::setInstanceField<::UnityEngine::TextCore::Text::FontAsset, 0x18>(this->__instance, std::forward<::UnityEngine::TextCore::Text::FontAsset>(value));
}
constexpr ::UnityEngine::TextCore::Text::FontAsset ::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef::__get_fontAsset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TextCore::Text::FontAsset, 0x18>(this->__instance);
}
 void ::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef::_ctor(int32_t nameHashCode, int32_t familyNameHashCode, int32_t styleNameHashCode, ::UnityEngine::TextCore::Text::FontAsset fontAsset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontAsset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, nameHashCode, familyNameHashCode, styleNameHashCode, fontAsset);
}
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextResourceManager.AddFontAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::TextCore::Text::FontAsset)>(&::UnityEngine::TextCore::Text::TextResourceManager::AddFontAsset)> {
  constexpr static std::size_t size = 0x4f4;
  constexpr static std::size_t addrs = 0x2bd1c6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextResourceManager>::get(),
                            "AddFontAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontAsset>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::UnityEngine::TextCore::Text::TextResourceManager::__set_s_FontAssetReferences(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef> value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef>, "s_FontAssetReferences", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextResourceManager>::get>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef>>(value));
}
 ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef> ::UnityEngine::TextCore::Text::TextResourceManager::__get_s_FontAssetReferences()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::TextCore::Text::____UnityEngine__TextCore__Text__TextResourceManager__FontAssetRef>, "s_FontAssetReferences", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextResourceManager>::get>();
}
 void ::UnityEngine::TextCore::Text::TextResourceManager::__set_s_FontAssetNameReferenceLookup(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::TextCore::Text::FontAsset> value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::TextCore::Text::FontAsset>, "s_FontAssetNameReferenceLookup", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextResourceManager>::get>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::TextCore::Text::FontAsset>>(value));
}
 ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::TextCore::Text::FontAsset> ::UnityEngine::TextCore::Text::TextResourceManager::__get_s_FontAssetNameReferenceLookup()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::TextCore::Text::FontAsset>, "s_FontAssetNameReferenceLookup", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextResourceManager>::get>();
}
 void ::UnityEngine::TextCore::Text::TextResourceManager::__set_s_FontAssetFamilyNameAndStyleReferenceLookup(::System::Collections::Generic::Dictionary_2<int64_t,::UnityEngine::TextCore::Text::FontAsset> value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int64_t,::UnityEngine::TextCore::Text::FontAsset>, "s_FontAssetFamilyNameAndStyleReferenceLookup", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextResourceManager>::get>(std::forward<::System::Collections::Generic::Dictionary_2<int64_t,::UnityEngine::TextCore::Text::FontAsset>>(value));
}
 ::System::Collections::Generic::Dictionary_2<int64_t,::UnityEngine::TextCore::Text::FontAsset> ::UnityEngine::TextCore::Text::TextResourceManager::__get_s_FontAssetFamilyNameAndStyleReferenceLookup()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int64_t,::UnityEngine::TextCore::Text::FontAsset>, "s_FontAssetFamilyNameAndStyleReferenceLookup", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextResourceManager>::get>();
}
 void ::UnityEngine::TextCore::Text::TextResourceManager::__set_s_FontAssetRemovalList(::System::Collections::Generic::List_1<int32_t> value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<int32_t>, "s_FontAssetRemovalList", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextResourceManager>::get>(std::forward<::System::Collections::Generic::List_1<int32_t>>(value));
}
 ::System::Collections::Generic::List_1<int32_t> ::UnityEngine::TextCore::Text::TextResourceManager::__get_s_FontAssetRemovalList()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<int32_t>, "s_FontAssetRemovalList", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextResourceManager>::get>();
}
 void ::UnityEngine::TextCore::Text::TextResourceManager::__set_k_RegularStyleHashCode(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "k_RegularStyleHashCode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextResourceManager>::get>(std::forward<int32_t>(value));
}
 int32_t ::UnityEngine::TextCore::Text::TextResourceManager::__get_k_RegularStyleHashCode()  {
return ::cordl_internals::getStaticField<int32_t, "k_RegularStyleHashCode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextResourceManager>::get>();
}
 void ::UnityEngine::TextCore::Text::TextResourceManager::AddFontAsset(::UnityEngine::TextCore::Text::FontAsset fontAsset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextResourceManager>::get(),
                            "AddFontAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontAsset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, fontAsset);
}
} // end anonymous namespace
