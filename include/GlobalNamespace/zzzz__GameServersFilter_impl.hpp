#pragma once
#include "GlobalNamespace/zzzz__GameServersFilter_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierMask_def.hpp"
//  Writing Method size for method: GlobalNamespace::GameServersFilter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServersFilter::*)()>(&GlobalNamespace::GameServersFilter::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x214ddb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameServersFilter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GameServersFilter::__set_filterByDifficulty(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GameServersFilter::__get_filterByDifficulty() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameServersFilter::__set_filteredDifficulty(GlobalNamespace::BeatmapDifficultyMask value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapDifficultyMask, 0x11>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapDifficultyMask>(value));
}
constexpr GlobalNamespace::BeatmapDifficultyMask GlobalNamespace::GameServersFilter::__get_filteredDifficulty() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapDifficultyMask, 0x11>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameServersFilter::__set_filterByModifiers(bool value)  {
::cordl_internals::setInstanceField<bool, 0x12>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GameServersFilter::__get_filterByModifiers() const {
return ::cordl_internals::getInstanceField<bool, 0x12>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameServersFilter::__set_filteredModifiers(GlobalNamespace::GameplayModifierMask value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameplayModifierMask, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameplayModifierMask>(value));
}
constexpr GlobalNamespace::GameplayModifierMask GlobalNamespace::GameServersFilter::__get_filteredModifiers() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameplayModifierMask, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameServersFilter::__set_filterBySongPacks(bool value)  {
::cordl_internals::setInstanceField<bool, 0x16>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GameServersFilter::__get_filterBySongPacks() const {
return ::cordl_internals::getInstanceField<bool, 0x16>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameServersFilter::__set_filteredSongPacks(GlobalNamespace::SongPackMask value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SongPackMask, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SongPackMask>(value));
}
constexpr GlobalNamespace::SongPackMask GlobalNamespace::GameServersFilter::__get_filteredSongPacks() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SongPackMask, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameServersFilter::__set_showFull(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GameServersFilter::__get_showFull() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameServersFilter::__set_showProtected(bool value)  {
::cordl_internals::setInstanceField<bool, 0x29>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GameServersFilter::__get_showProtected() const {
return ::cordl_internals::getInstanceField<bool, 0x29>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameServersFilter::__set_showInternetGames(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2a>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GameServersFilter::__get_showInternetGames() const {
return ::cordl_internals::getInstanceField<bool, 0x2a>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GameServersFilter::GameServersFilter()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GameServersFilter>())) {}
 void GlobalNamespace::GameServersFilter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameServersFilter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
