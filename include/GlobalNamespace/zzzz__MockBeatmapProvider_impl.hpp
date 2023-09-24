#pragma once
#include "GlobalNamespace/zzzz__MockBeatmapProvider_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapIdentifierNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__IServerBeatmapProvider_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: GlobalNamespace::MockBeatmapProvider.VerifyBeatmapForSelectionMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MockBeatmapProvider::*)(GlobalNamespace::BeatmapIdentifierNetSerializable, GlobalNamespace::BeatmapLevelSelectionMask)>(&GlobalNamespace::MockBeatmapProvider::VerifyBeatmapForSelectionMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20eb420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockBeatmapProvider>::get(),
                            "VerifyBeatmapForSelectionMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapIdentifierNetSerializable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapLevelSelectionMask>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MockBeatmapProvider.SelectBeatmapFromSuggestionsWithSelectionMaskAndOwnedSongPacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapIdentifierNetSerializable (GlobalNamespace::MockBeatmapProvider::*)(int32_t, System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::BeatmapIdentifierNetSerializable>, GlobalNamespace::BeatmapLevelSelectionMask, System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::SongPackMask>)>(&GlobalNamespace::MockBeatmapProvider::SelectBeatmapFromSuggestionsWithSelectionMaskAndOwnedSongPacks)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x20eb428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockBeatmapProvider>::get(),
                            "SelectBeatmapFromSuggestionsWithSelectionMaskAndOwnedSongPacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::BeatmapIdentifierNetSerializable>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapLevelSelectionMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::SongPackMask>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MockBeatmapProvider.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockBeatmapProvider::*)()>(&GlobalNamespace::MockBeatmapProvider::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x20eb4b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockBeatmapProvider>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MockBeatmapProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockBeatmapProvider::*)()>(&GlobalNamespace::MockBeatmapProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20eb4bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockBeatmapProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IServerBeatmapProvider
constexpr  GlobalNamespace::MockBeatmapProvider::operator GlobalNamespace::IServerBeatmapProvider() const noexcept {
return GlobalNamespace::IServerBeatmapProvider(::bs_hook::Il2CppWrapperType::instance);
}
 bool GlobalNamespace::MockBeatmapProvider::VerifyBeatmapForSelectionMask(GlobalNamespace::BeatmapIdentifierNetSerializable beatmapId, GlobalNamespace::BeatmapLevelSelectionMask selectionMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockBeatmapProvider>::get(),
                            "VerifyBeatmapForSelectionMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapIdentifierNetSerializable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapLevelSelectionMask>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, beatmapId, selectionMask);
}
 GlobalNamespace::BeatmapIdentifierNetSerializable GlobalNamespace::MockBeatmapProvider::SelectBeatmapFromSuggestionsWithSelectionMaskAndOwnedSongPacks(int32_t playerCount, System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::BeatmapIdentifierNetSerializable> suggestedBeatmaps, GlobalNamespace::BeatmapLevelSelectionMask selectionMask, System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::SongPackMask> ownedSongPacks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockBeatmapProvider>::get(),
                            "SelectBeatmapFromSuggestionsWithSelectionMaskAndOwnedSongPacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::BeatmapIdentifierNetSerializable>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapLevelSelectionMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::SongPackMask>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::BeatmapIdentifierNetSerializable, false>(const_cast<void*>(instance), ___internal_method, playerCount, suggestedBeatmaps, selectionMask, ownedSongPacks);
}
 void GlobalNamespace::MockBeatmapProvider::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockBeatmapProvider>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::MockBeatmapProvider GlobalNamespace::MockBeatmapProvider::New_ctor()  {
GlobalNamespace::MockBeatmapProvider o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::MockBeatmapProvider>())};
return o;
}
 void GlobalNamespace::MockBeatmapProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MockBeatmapProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
