#pragma once
#include "GlobalNamespace/zzzz__CustomPreviewBeatmapLevel_impl.hpp"
#include "GlobalNamespace/zzzz__CustomBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelData_def.hpp"
#include "GlobalNamespace/zzzz__IFilePathSongAudioClipProvider_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelData_def.hpp"
#include "GlobalNamespace/zzzz__ColorScheme_def.hpp"
#include "GlobalNamespace/zzzz__CustomPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
//  Writing Method size for method: GlobalNamespace::CustomBeatmapLevel.get_beatmapLevelData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IBeatmapLevelData (GlobalNamespace::CustomBeatmapLevel::*)()>(&GlobalNamespace::CustomBeatmapLevel::get_beatmapLevelData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e9fdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CustomBeatmapLevel>::get(),
                            "get_beatmapLevelData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::CustomBeatmapLevel.get_songAudioClipPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::CustomBeatmapLevel::*)()>(&GlobalNamespace::CustomBeatmapLevel::get_songAudioClipPath)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21e9fe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CustomBeatmapLevel>::get(),
                            "get_songAudioClipPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::CustomBeatmapLevel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CustomBeatmapLevel::*)(GlobalNamespace::CustomPreviewBeatmapLevel)>(&GlobalNamespace::CustomBeatmapLevel::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x21ea058;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CustomBeatmapLevel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::CustomPreviewBeatmapLevel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::CustomBeatmapLevel.SetBeatmapLevelData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CustomBeatmapLevel::*)(GlobalNamespace::BeatmapLevelData)>(&GlobalNamespace::CustomBeatmapLevel::SetBeatmapLevelData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21ea1fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CustomBeatmapLevel>::get(),
                            "SetBeatmapLevelData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapLevelData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::CustomBeatmapLevel.GetBeatmapLevelColorScheme
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ColorScheme (GlobalNamespace::CustomBeatmapLevel::*)(int32_t)>(&GlobalNamespace::CustomBeatmapLevel::GetBeatmapLevelColorScheme)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x21ea204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CustomBeatmapLevel>::get(),
                            "GetBeatmapLevelColorScheme",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IBeatmapLevel
constexpr  GlobalNamespace::CustomBeatmapLevel::operator GlobalNamespace::IBeatmapLevel() const noexcept {
return GlobalNamespace::IBeatmapLevel(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IPreviewBeatmapLevel
constexpr  GlobalNamespace::CustomBeatmapLevel::operator GlobalNamespace::IPreviewBeatmapLevel() const noexcept {
return GlobalNamespace::IPreviewBeatmapLevel(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IFilePathSongAudioClipProvider
constexpr  GlobalNamespace::CustomBeatmapLevel::operator GlobalNamespace::IFilePathSongAudioClipProvider() const noexcept {
return GlobalNamespace::IFilePathSongAudioClipProvider(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::CustomBeatmapLevel::__set__beatmapLevelData(GlobalNamespace::BeatmapLevelData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapLevelData, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapLevelData>(value));
}
constexpr GlobalNamespace::BeatmapLevelData GlobalNamespace::CustomBeatmapLevel::__get__beatmapLevelData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapLevelData, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::IBeatmapLevelData GlobalNamespace::CustomBeatmapLevel::get_beatmapLevelData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CustomBeatmapLevel>::get(),
                            "get_beatmapLevelData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::IBeatmapLevelData, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GlobalNamespace::CustomBeatmapLevel::get_songAudioClipPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CustomBeatmapLevel>::get(),
                            "get_songAudioClipPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "customPreviewBeatmapLevel", ty: "GlobalNamespace::CustomPreviewBeatmapLevel", modifiers: "", def_value: None }]
 GlobalNamespace::CustomBeatmapLevel::CustomBeatmapLevel(GlobalNamespace::CustomPreviewBeatmapLevel customPreviewBeatmapLevel)  : GlobalNamespace::CustomPreviewBeatmapLevel(THROW_UNLESS(::il2cpp_utils::New<CustomBeatmapLevel>(customPreviewBeatmapLevel))) {}
 void GlobalNamespace::CustomBeatmapLevel::_ctor(GlobalNamespace::CustomPreviewBeatmapLevel customPreviewBeatmapLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CustomBeatmapLevel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::CustomPreviewBeatmapLevel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, customPreviewBeatmapLevel);
}
 void GlobalNamespace::CustomBeatmapLevel::SetBeatmapLevelData(GlobalNamespace::BeatmapLevelData beatmapLevelData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CustomBeatmapLevel>::get(),
                            "SetBeatmapLevelData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapLevelData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapLevelData);
}
 GlobalNamespace::ColorScheme GlobalNamespace::CustomBeatmapLevel::GetBeatmapLevelColorScheme(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CustomBeatmapLevel>::get(),
                            "GetBeatmapLevelColorScheme",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::ColorScheme, false>(const_cast<void*>(instance), ___internal_method, index);
}
