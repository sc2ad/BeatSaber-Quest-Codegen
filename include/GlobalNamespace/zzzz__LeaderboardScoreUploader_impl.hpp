#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LeaderboardScoreUploader_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "GlobalNamespace/zzzz__PlatformLeaderboardsModel_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "GlobalNamespace/zzzz__HMAsyncRequest_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "GlobalNamespace/zzzz__PlatformLeaderboardsModel_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__ISaveData_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData.get_playerId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::*)()>(&GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::get_playerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c48dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get(),
                            "get_playerId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData.set_playerId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::*)(::StringW)>(&GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::set_playerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c48e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get(),
                            "set_playerId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData.get_beatmap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IDifficultyBeatmap (GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::*)()>(&GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::get_beatmap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c48ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get(),
                            "get_beatmap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData.set_beatmap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::*)(GlobalNamespace::IDifficultyBeatmap)>(&GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::set_beatmap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c48f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get(),
                            "set_beatmap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IDifficultyBeatmap>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData.get_gameplayModifiers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayModifiers (GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::*)()>(&GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::get_gameplayModifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c48fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get(),
                            "get_gameplayModifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData.set_gameplayModifiers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::*)(GlobalNamespace::GameplayModifiers)>(&GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::set_gameplayModifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c4904;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get(),
                            "set_gameplayModifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifiers>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData.get_multipliedScore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::*)()>(&GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::get_multipliedScore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c490c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get(),
                            "get_multipliedScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData.set_multipliedScore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::*)(int32_t)>(&GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::set_multipliedScore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c4914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get(),
                            "set_multipliedScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData.get_modifiedScore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::*)()>(&GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::get_modifiedScore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c491c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get(),
                            "get_modifiedScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData.set_modifiedScore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::*)(int32_t)>(&GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::set_modifiedScore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c4924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get(),
                            "set_modifiedScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData.get_fullCombo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::*)()>(&GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::get_fullCombo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c492c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get(),
                            "get_fullCombo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData.set_fullCombo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::*)(bool)>(&GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::set_fullCombo)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21c4934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get(),
                            "set_fullCombo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData.get_goodCutsCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::*)()>(&GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::get_goodCutsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c4940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get(),
                            "get_goodCutsCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData.set_goodCutsCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::*)(int32_t)>(&GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::set_goodCutsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c4948;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get(),
                            "set_goodCutsCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData.get_badCutsCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::*)()>(&GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::get_badCutsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c4950;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get(),
                            "get_badCutsCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData.set_badCutsCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::*)(int32_t)>(&GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::set_badCutsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c4958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get(),
                            "set_badCutsCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData.get_missedCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::*)()>(&GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::get_missedCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c4960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get(),
                            "get_missedCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData.set_missedCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::*)(int32_t)>(&GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::set_missedCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c4968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get(),
                            "set_missedCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData.get_maxCombo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::*)()>(&GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::get_maxCombo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c4970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get(),
                            "get_maxCombo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData.set_maxCombo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::*)(int32_t)>(&GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::set_maxCombo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c4978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get(),
                            "set_maxCombo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::*)(::StringW, GlobalNamespace::IDifficultyBeatmap, int32_t, int32_t, bool, int32_t, int32_t, int32_t, int32_t, GlobalNamespace::GameplayModifiers)>(&GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x21c4980;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IDifficultyBeatmap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifiers>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::__set__playerId_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::__get__playerId_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::__set__beatmap_k__BackingField(GlobalNamespace::IDifficultyBeatmap value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IDifficultyBeatmap, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IDifficultyBeatmap>(value));
}
constexpr GlobalNamespace::IDifficultyBeatmap GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::__get__beatmap_k__BackingField() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IDifficultyBeatmap, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::__set__gameplayModifiers_k__BackingField(GlobalNamespace::GameplayModifiers value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameplayModifiers, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameplayModifiers>(value));
}
constexpr GlobalNamespace::GameplayModifiers GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::__get__gameplayModifiers_k__BackingField() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameplayModifiers, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::__set__multipliedScore_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::__get__multipliedScore_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::__set__modifiedScore_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::__get__modifiedScore_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::__set__fullCombo_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::__get__fullCombo_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::__set__goodCutsCount_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::__get__goodCutsCount_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::__set__badCutsCount_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::__get__badCutsCount_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::__set__missedCount_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::__get__missedCount_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::__set__maxCombo_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::__get__maxCombo_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::__set_uploadAttemptCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::__get_uploadAttemptCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::__set_currentUploadAttemptCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::__get_currentUploadAttemptCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::get_playerId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get(),
                            "get_playerId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::set_playerId(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get(),
                            "set_playerId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 GlobalNamespace::IDifficultyBeatmap GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::get_beatmap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get(),
                            "get_beatmap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::IDifficultyBeatmap, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::set_beatmap(GlobalNamespace::IDifficultyBeatmap value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get(),
                            "set_beatmap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IDifficultyBeatmap>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 GlobalNamespace::GameplayModifiers GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::get_gameplayModifiers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get(),
                            "get_gameplayModifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GameplayModifiers, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::set_gameplayModifiers(GlobalNamespace::GameplayModifiers value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get(),
                            "set_gameplayModifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifiers>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::get_multipliedScore()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get(),
                            "get_multipliedScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::set_multipliedScore(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get(),
                            "set_multipliedScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::get_modifiedScore()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get(),
                            "get_modifiedScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::set_modifiedScore(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get(),
                            "set_modifiedScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::get_fullCombo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get(),
                            "get_fullCombo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::set_fullCombo(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get(),
                            "set_fullCombo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::get_goodCutsCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get(),
                            "get_goodCutsCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::set_goodCutsCount(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get(),
                            "set_goodCutsCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::get_badCutsCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get(),
                            "get_badCutsCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::set_badCutsCount(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get(),
                            "set_badCutsCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::get_missedCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get(),
                            "get_missedCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::set_missedCount(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get(),
                            "set_missedCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::get_maxCombo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get(),
                            "get_maxCombo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::set_maxCombo(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get(),
                            "set_maxCombo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "playerId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "beatmap", ty: "GlobalNamespace::IDifficultyBeatmap", modifiers: "", def_value: None }, CppParam { name: "multipliedScore", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "modifiedScore", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "fullCombo", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "goodCutsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "badCutsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "missedCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maxCombo", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "gameplayModifiers", ty: "GlobalNamespace::GameplayModifiers", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::GlobalNamespace__LeaderboardScoreUploader__ScoreData(::StringW playerId, GlobalNamespace::IDifficultyBeatmap beatmap, int32_t multipliedScore, int32_t modifiedScore, bool fullCombo, int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCount, int32_t maxCombo, GlobalNamespace::GameplayModifiers gameplayModifiers)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__LeaderboardScoreUploader__ScoreData>(playerId, beatmap, multipliedScore, modifiedScore, fullCombo, goodCutsCount, badCutsCount, missedCount, maxCombo, gameplayModifiers))) {}
 void GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData::_ctor(::StringW playerId, GlobalNamespace::IDifficultyBeatmap beatmap, int32_t multipliedScore, int32_t modifiedScore, bool fullCombo, int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCount, int32_t maxCombo, GlobalNamespace::GameplayModifiers gameplayModifiers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IDifficultyBeatmap>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifiers>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, playerId, beatmap, multipliedScore, modifiedScore, fullCombo, goodCutsCount, badCutsCount, missedCount, maxCombo, gameplayModifiers);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoresToUploadData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoresToUploadData::*)()>(&GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoresToUploadData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c4760;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoresToUploadData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoresToUploadData::__set_scores(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>>(value));
}
constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData> GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoresToUploadData::__get_scores() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoresToUploadData::GlobalNamespace__LeaderboardScoreUploader__ScoresToUploadData()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__LeaderboardScoreUploader__ScoresToUploadData>())) {}
 void GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoresToUploadData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoresToUploadData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x21c4a08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::HMAsyncRequest (GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback::*)(GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData, GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler)>(&GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x21c4b38;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback::*)(GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData, GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21c4b4c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::HMAsyncRequest (GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback::*)(System::IAsyncResult)>(&GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21c4b74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback::GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback>(object, method))) {}
 void GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 GlobalNamespace::HMAsyncRequest GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback::Invoke(GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData scoreData, GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler completionHandler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::HMAsyncRequest, false>(const_cast<void*>(instance), ___internal_method, scoreData, completionHandler);
}
 System::IAsyncResult GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback::BeginInvoke(GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData scoreData, GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler completionHandler, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__UploadScoreCompletionHandler>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, scoreData, completionHandler, callback, object);
}
 GlobalNamespace::HMAsyncRequest GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::HMAsyncRequest, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader____c__DisplayClass16_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader____c__DisplayClass16_0::*)()>(&GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader____c__DisplayClass16_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c4b80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader____c__DisplayClass16_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader____c__DisplayClass16_0._UploadScoresCoroutine_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader____c__DisplayClass16_0::*)(GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__UploadScoreResult)>(&GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader____c__DisplayClass16_0::_UploadScoresCoroutine_b__0)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x21c4b88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader____c__DisplayClass16_0>::get(),
                            "<UploadScoresCoroutine>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__UploadScoreResult>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader____c__DisplayClass16_0::__set_scoreData(GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>(value));
}
constexpr GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader____c__DisplayClass16_0::__get_scoreData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader____c__DisplayClass16_0::__set___4__this(GlobalNamespace::LeaderboardScoreUploader value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LeaderboardScoreUploader, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::LeaderboardScoreUploader>(value));
}
constexpr GlobalNamespace::LeaderboardScoreUploader GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader____c__DisplayClass16_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LeaderboardScoreUploader, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader____c__DisplayClass16_0::GlobalNamespace__LeaderboardScoreUploader____c__DisplayClass16_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__LeaderboardScoreUploader____c__DisplayClass16_0>())) {}
 void GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader____c__DisplayClass16_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader____c__DisplayClass16_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader____c__DisplayClass16_0::_UploadScoresCoroutine_b__0(GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__UploadScoreResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader____c__DisplayClass16_0>::get(),
                            "<UploadScoresCoroutine>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__PlatformLeaderboardsModel__UploadScoreResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::*)(int32_t)>(&GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21c41d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::*)()>(&GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21c4dc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::*)()>(&GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x21c4dc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::*)()>(&GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c5070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::*)()>(&GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x21c5078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::*)()>(&GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c50b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr  GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::operator System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept {
return System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::__set___2__current(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::__get___2__current() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::__set___4__this(GlobalNamespace::LeaderboardScoreUploader value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LeaderboardScoreUploader, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::LeaderboardScoreUploader>(value));
}
constexpr GlobalNamespace::LeaderboardScoreUploader GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LeaderboardScoreUploader, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16>(__1__state))) {}
 void GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader___UploadScoresCoroutine_d__16>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::LeaderboardScoreUploader.add_allScoresDidUploadEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardScoreUploader::*)(System::Action)>(&GlobalNamespace::LeaderboardScoreUploader::add_allScoresDidUploadEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x21c3f28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LeaderboardScoreUploader>::get(),
                            "add_allScoresDidUploadEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LeaderboardScoreUploader.remove_allScoresDidUploadEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardScoreUploader::*)(System::Action)>(&GlobalNamespace::LeaderboardScoreUploader::remove_allScoresDidUploadEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x21c3fc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LeaderboardScoreUploader>::get(),
                            "remove_allScoresDidUploadEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LeaderboardScoreUploader.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardScoreUploader::*)(GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback, ::StringW)>(&GlobalNamespace::LeaderboardScoreUploader::Init)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21c4060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LeaderboardScoreUploader>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LeaderboardScoreUploader.Uninitialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardScoreUploader::*)()>(&GlobalNamespace::LeaderboardScoreUploader::Uninitialize)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21c4120;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LeaderboardScoreUploader>::get(),
                            "Uninitialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LeaderboardScoreUploader.OnApplicationQuit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardScoreUploader::*)()>(&GlobalNamespace::LeaderboardScoreUploader::OnApplicationQuit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21c41d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LeaderboardScoreUploader>::get(),
                            "OnApplicationQuit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LeaderboardScoreUploader.UploadScoresCoroutine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (GlobalNamespace::LeaderboardScoreUploader::*)()>(&GlobalNamespace::LeaderboardScoreUploader::UploadScoresCoroutine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x21c40b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LeaderboardScoreUploader>::get(),
                            "UploadScoresCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LeaderboardScoreUploader.LoadScoresToUploadFromFile
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardScoreUploader::*)()>(&GlobalNamespace::LeaderboardScoreUploader::LoadScoresToUploadFromFile)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x21c41fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LeaderboardScoreUploader>::get(),
                            "LoadScoresToUploadFromFile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LeaderboardScoreUploader.SaveScoresToUploadToFile
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardScoreUploader::*)()>(&GlobalNamespace::LeaderboardScoreUploader::SaveScoresToUploadToFile)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x21c4574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LeaderboardScoreUploader>::get(),
                            "SaveScoresToUploadToFile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LeaderboardScoreUploader.AddScore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardScoreUploader::*)(GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData)>(&GlobalNamespace::LeaderboardScoreUploader::AddScore)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x21c4768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LeaderboardScoreUploader>::get(),
                            "AddScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LeaderboardScoreUploader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardScoreUploader::*)()>(&GlobalNamespace::LeaderboardScoreUploader::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x21c482c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LeaderboardScoreUploader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LeaderboardScoreUploader._UploadScoresCoroutine_b__16_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LeaderboardScoreUploader::*)()>(&GlobalNamespace::LeaderboardScoreUploader::_UploadScoresCoroutine_b__16_1)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x21c48cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LeaderboardScoreUploader>::get(),
                            "<UploadScoresCoroutine>b__16_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::LeaderboardScoreUploader::__set_allScoresDidUploadEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::LeaderboardScoreUploader::__get_allScoresDidUploadEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LeaderboardScoreUploader::__set__scoresToUpload(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>>(value));
}
constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData> GlobalNamespace::LeaderboardScoreUploader::__get__scoresToUpload() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LeaderboardScoreUploader::__set__scoresToUploadForCurrentPlayer(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>>(value));
}
constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData> GlobalNamespace::LeaderboardScoreUploader::__get__scoresToUploadForCurrentPlayer() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LeaderboardScoreUploader::__set__uploadScoreCallback(GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback>(value));
}
constexpr GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback GlobalNamespace::LeaderboardScoreUploader::__get__uploadScoreCallback() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LeaderboardScoreUploader::__set__playerId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::LeaderboardScoreUploader::__get__playerId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LeaderboardScoreUploader::__set__uploading(bool value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::LeaderboardScoreUploader::__get__uploading() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LeaderboardScoreUploader::__set__saveData(GlobalNamespace::ISaveData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ISaveData, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ISaveData>(value));
}
constexpr GlobalNamespace::ISaveData GlobalNamespace::LeaderboardScoreUploader::__get__saveData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ISaveData, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::LeaderboardScoreUploader::add_allScoresDidUploadEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LeaderboardScoreUploader>::get(),
                            "add_allScoresDidUploadEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LeaderboardScoreUploader::remove_allScoresDidUploadEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LeaderboardScoreUploader>::get(),
                            "remove_allScoresDidUploadEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::LeaderboardScoreUploader::Init(GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback uploadScoreCallback, ::StringW playerId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LeaderboardScoreUploader>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__UploadScoreCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, uploadScoreCallback, playerId);
}
 void GlobalNamespace::LeaderboardScoreUploader::Uninitialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LeaderboardScoreUploader>::get(),
                            "Uninitialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LeaderboardScoreUploader::OnApplicationQuit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LeaderboardScoreUploader>::get(),
                            "OnApplicationQuit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator GlobalNamespace::LeaderboardScoreUploader::UploadScoresCoroutine()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LeaderboardScoreUploader>::get(),
                            "UploadScoresCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LeaderboardScoreUploader::LoadScoresToUploadFromFile()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LeaderboardScoreUploader>::get(),
                            "LoadScoresToUploadFromFile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LeaderboardScoreUploader::SaveScoresToUploadToFile()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LeaderboardScoreUploader>::get(),
                            "SaveScoresToUploadToFile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LeaderboardScoreUploader::AddScore(GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData scoreData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LeaderboardScoreUploader>::get(),
                            "AddScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LeaderboardScoreUploader__ScoreData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, scoreData);
}
// Ctor Parameters []
 GlobalNamespace::LeaderboardScoreUploader::LeaderboardScoreUploader()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<LeaderboardScoreUploader>())) {}
 void GlobalNamespace::LeaderboardScoreUploader::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LeaderboardScoreUploader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::LeaderboardScoreUploader::_UploadScoresCoroutine_b__16_1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LeaderboardScoreUploader>::get(),
                            "<UploadScoresCoroutine>b__16_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
