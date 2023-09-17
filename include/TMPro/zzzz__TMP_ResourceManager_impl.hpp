#pragma once
namespace {
#include "TMPro/zzzz__TMP_ResourceManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "TMPro/zzzz__TMP_Settings_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/zzzz__TMP_FontAsset_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_ResourceManager.GetTextSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_Settings (*)()>(&::TMPro::TMP_ResourceManager::GetTextSettings)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2aa7c0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager>::get(),
                            "GetTextSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_ResourceManager.AddFontAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::TMPro::TMP_FontAsset)>(&::TMPro::TMP_ResourceManager::AddFontAsset)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2aa7d1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager>::get(),
                            "AddFontAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_ResourceManager.TryGetFontAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t, ByRef<::TMPro::TMP_FontAsset>)>(&::TMPro::TMP_ResourceManager::TryGetFontAsset)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2aa7e70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager>::get(),
                            "TryGetFontAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::TMPro::TMP_FontAsset>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_ResourceManager.RebuildFontAssetCache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::TMPro::TMP_ResourceManager::RebuildFontAssetCache)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2aa7f04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager>::get(),
                            "RebuildFontAssetCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_ResourceManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_ResourceManager::*)()>(&::TMPro::TMP_ResourceManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aa7c04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ::TMPro::TMP_ResourceManager::__set_s_instance(::TMPro::TMP_ResourceManager value)  {
::cordl_internals::setStaticField<::TMPro::TMP_ResourceManager, "s_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager>::get>(std::forward<::TMPro::TMP_ResourceManager>(value));
}
 ::TMPro::TMP_ResourceManager ::TMPro::TMP_ResourceManager::__get_s_instance()  {
return ::cordl_internals::getStaticField<::TMPro::TMP_ResourceManager, "s_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager>::get>();
}
 void ::TMPro::TMP_ResourceManager::__set_s_TextSettings(::TMPro::TMP_Settings value)  {
::cordl_internals::setStaticField<::TMPro::TMP_Settings, "s_TextSettings", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager>::get>(std::forward<::TMPro::TMP_Settings>(value));
}
 ::TMPro::TMP_Settings ::TMPro::TMP_ResourceManager::__get_s_TextSettings()  {
return ::cordl_internals::getStaticField<::TMPro::TMP_Settings, "s_TextSettings", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager>::get>();
}
 void ::TMPro::TMP_ResourceManager::__set_s_FontAssetReferences(::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset> value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset>, "s_FontAssetReferences", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager>::get>(std::forward<::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset>>(value));
}
 ::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset> ::TMPro::TMP_ResourceManager::__get_s_FontAssetReferences()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset>, "s_FontAssetReferences", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager>::get>();
}
 void ::TMPro::TMP_ResourceManager::__set_s_FontAssetReferenceLookup(::System::Collections::Generic::Dictionary_2<int32_t,::TMPro::TMP_FontAsset> value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::TMPro::TMP_FontAsset>, "s_FontAssetReferenceLookup", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager>::get>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::TMPro::TMP_FontAsset>>(value));
}
 ::System::Collections::Generic::Dictionary_2<int32_t,::TMPro::TMP_FontAsset> ::TMPro::TMP_ResourceManager::__get_s_FontAssetReferenceLookup()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::TMPro::TMP_FontAsset>, "s_FontAssetReferenceLookup", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager>::get>();
}
 ::TMPro::TMP_Settings ::TMPro::TMP_ResourceManager::GetTextSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager>::get(),
                            "GetTextSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_Settings, false>(nullptr, ___internal_method);
}
 void ::TMPro::TMP_ResourceManager::AddFontAsset(::TMPro::TMP_FontAsset fontAsset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager>::get(),
                            "AddFontAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, fontAsset);
}
 bool ::TMPro::TMP_ResourceManager::TryGetFontAsset(int32_t hashcode, ByRef<::TMPro::TMP_FontAsset> fontAsset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager>::get(),
                            "TryGetFontAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::TMPro::TMP_FontAsset>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, hashcode, fontAsset);
}
 void ::TMPro::TMP_ResourceManager::RebuildFontAssetCache(int32_t instanceID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager>::get(),
                            "RebuildFontAssetCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, instanceID);
}
// Ctor Parameters []
 ::TMPro::TMP_ResourceManager::TMP_ResourceManager()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<TMP_ResourceManager>())) {}
 void ::TMPro::TMP_ResourceManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
