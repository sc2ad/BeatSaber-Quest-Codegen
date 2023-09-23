#pragma once
#include "GlobalNamespace/zzzz__InMultiplayerRichPresenceData_impl.hpp"
#include "GlobalNamespace/zzzz__PlayingMultiplayerRichPresenceData_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
//  Writing Method size for method: GlobalNamespace::PlayingMultiplayerRichPresenceData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayingMultiplayerRichPresenceData::*)(GlobalNamespace::IDifficultyBeatmap, bool)>(&GlobalNamespace::PlayingMultiplayerRichPresenceData::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2229d4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayingMultiplayerRichPresenceData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IDifficultyBeatmap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "difficultyBeatmap", ty: "GlobalNamespace::IDifficultyBeatmap", modifiers: "", def_value: None }, CppParam { name: "atMaxPartySize", ty: "bool", modifiers: "", def_value: None }]
 GlobalNamespace::PlayingMultiplayerRichPresenceData::PlayingMultiplayerRichPresenceData(GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, bool atMaxPartySize)  : GlobalNamespace::InMultiplayerRichPresenceData(THROW_UNLESS(::il2cpp_utils::New<PlayingMultiplayerRichPresenceData>(difficultyBeatmap, atMaxPartySize))) {}
 void GlobalNamespace::PlayingMultiplayerRichPresenceData::_ctor(GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, bool atMaxPartySize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayingMultiplayerRichPresenceData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IDifficultyBeatmap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, difficultyBeatmap, atMaxPartySize);
}
