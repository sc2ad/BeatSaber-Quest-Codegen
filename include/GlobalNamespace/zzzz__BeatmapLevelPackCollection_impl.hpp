#pragma once
#include "GlobalNamespace/zzzz__BeatmapLevelPackCollection_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelPackCollection_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelPack_def.hpp"
//  Writing Method size for method: GlobalNamespace::BeatmapLevelPackCollection.get_beatmapLevelPacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<GlobalNamespace::IBeatmapLevelPack> (GlobalNamespace::BeatmapLevelPackCollection::*)()>(&GlobalNamespace::BeatmapLevelPackCollection::get_beatmapLevelPacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e5170;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelPackCollection>::get(),
                            "get_beatmapLevelPacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapLevelPackCollection._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapLevelPackCollection::*)(::ArrayW<GlobalNamespace::IBeatmapLevelPack>)>(&GlobalNamespace::BeatmapLevelPackCollection::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21e5178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelPackCollection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<GlobalNamespace::IBeatmapLevelPack>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IBeatmapLevelPackCollection
constexpr  GlobalNamespace::BeatmapLevelPackCollection::operator GlobalNamespace::IBeatmapLevelPackCollection() const noexcept {
return GlobalNamespace::IBeatmapLevelPackCollection(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapLevelPackCollection::__set__beatmapLevelPacks(::ArrayW<GlobalNamespace::IBeatmapLevelPack> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::IBeatmapLevelPack>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::IBeatmapLevelPack>>(value));
}
constexpr ::ArrayW<GlobalNamespace::IBeatmapLevelPack> GlobalNamespace::BeatmapLevelPackCollection::__get__beatmapLevelPacks() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::IBeatmapLevelPack>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::ArrayW<GlobalNamespace::IBeatmapLevelPack> GlobalNamespace::BeatmapLevelPackCollection::get_beatmapLevelPacks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelPackCollection>::get(),
                            "get_beatmapLevelPacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<GlobalNamespace::IBeatmapLevelPack>, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::BeatmapLevelPackCollection GlobalNamespace::BeatmapLevelPackCollection::New_ctor(::ArrayW<GlobalNamespace::IBeatmapLevelPack> beatmapLevelPacks)  {
GlobalNamespace::BeatmapLevelPackCollection o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::BeatmapLevelPackCollection>(beatmapLevelPacks))};
return o;
}
 void GlobalNamespace::BeatmapLevelPackCollection::_ctor(::ArrayW<GlobalNamespace::IBeatmapLevelPack> beatmapLevelPacks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapLevelPackCollection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<GlobalNamespace::IBeatmapLevelPack>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapLevelPacks);
}
