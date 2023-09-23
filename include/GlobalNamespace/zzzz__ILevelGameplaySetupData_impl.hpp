#pragma once
#include "GlobalNamespace/zzzz__ILevelGameplaySetupData_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__PreviewDifficultyBeatmap_def.hpp"
//  Writing Method size for method: GlobalNamespace::ILevelGameplaySetupData.get_beatmapLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PreviewDifficultyBeatmap (GlobalNamespace::ILevelGameplaySetupData::*)()>(&GlobalNamespace::ILevelGameplaySetupData::get_beatmapLevel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::ILevelGameplaySetupData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ILevelGameplaySetupData>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ILevelGameplaySetupData.get_gameplayModifiers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayModifiers (GlobalNamespace::ILevelGameplaySetupData::*)()>(&GlobalNamespace::ILevelGameplaySetupData::get_gameplayModifiers)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::ILevelGameplaySetupData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ILevelGameplaySetupData>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 GlobalNamespace::PreviewDifficultyBeatmap GlobalNamespace::ILevelGameplaySetupData::get_beatmapLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ILevelGameplaySetupData>::get(),
                            "get_beatmapLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::PreviewDifficultyBeatmap, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GameplayModifiers GlobalNamespace::ILevelGameplaySetupData::get_gameplayModifiers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ILevelGameplaySetupData>::get(),
                            "get_gameplayModifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GameplayModifiers, false>(const_cast<void*>(instance), ___internal_method);
}
