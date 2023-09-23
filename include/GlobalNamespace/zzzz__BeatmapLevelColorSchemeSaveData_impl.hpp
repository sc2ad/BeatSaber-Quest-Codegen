#pragma once
#include "GlobalNamespace/zzzz__BeatmapLevelColorSchemeSaveData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSaveData_def.hpp"
//  Writing Method size for method: GlobalNamespace::BeatmapLevelColorSchemeSaveData.IsDefault
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BeatmapLevelColorSchemeSaveData::*)()>(&GlobalNamespace::BeatmapLevelColorSchemeSaveData::IsDefault)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x21df0e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelColorSchemeSaveData>::get(),
                            "IsDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapLevelColorSchemeSaveData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapLevelColorSchemeSaveData::*)()>(&GlobalNamespace::BeatmapLevelColorSchemeSaveData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21df244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelColorSchemeSaveData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BeatmapLevelColorSchemeSaveData::__set_useOverride(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::BeatmapLevelColorSchemeSaveData::__get_useOverride() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapLevelColorSchemeSaveData::__set_colorScheme(GlobalNamespace::GlobalNamespace__PlayerSaveData__ColorScheme value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__PlayerSaveData__ColorScheme, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__PlayerSaveData__ColorScheme>(value));
}
constexpr GlobalNamespace::GlobalNamespace__PlayerSaveData__ColorScheme GlobalNamespace::BeatmapLevelColorSchemeSaveData::__get_colorScheme() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__PlayerSaveData__ColorScheme, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool GlobalNamespace::BeatmapLevelColorSchemeSaveData::IsDefault()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelColorSchemeSaveData>::get(),
                            "IsDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::BeatmapLevelColorSchemeSaveData::BeatmapLevelColorSchemeSaveData()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BeatmapLevelColorSchemeSaveData>())) {}
 void GlobalNamespace::BeatmapLevelColorSchemeSaveData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelColorSchemeSaveData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
