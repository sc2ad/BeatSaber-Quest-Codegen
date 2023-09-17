#pragma once
namespace {
#include "GlobalNamespace/zzzz__IServerBeatmapProvider_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapIdentifierNetSerializable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IServerBeatmapProvider.VerifyBeatmapForSelectionMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::IServerBeatmapProvider::*)(::GlobalNamespace::BeatmapIdentifierNetSerializable, ::GlobalNamespace::BeatmapLevelSelectionMask)>(&::GlobalNamespace::IServerBeatmapProvider::VerifyBeatmapForSelectionMask)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::IServerBeatmapProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IServerBeatmapProvider>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IServerBeatmapProvider.SelectBeatmapFromSuggestionsWithSelectionMaskAndOwnedSongPacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapIdentifierNetSerializable (::GlobalNamespace::IServerBeatmapProvider::*)(int32_t, ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::BeatmapIdentifierNetSerializable>, ::GlobalNamespace::BeatmapLevelSelectionMask, ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::SongPackMask>)>(&::GlobalNamespace::IServerBeatmapProvider::SelectBeatmapFromSuggestionsWithSelectionMaskAndOwnedSongPacks)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::IServerBeatmapProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IServerBeatmapProvider>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 bool ::GlobalNamespace::IServerBeatmapProvider::VerifyBeatmapForSelectionMask(::GlobalNamespace::BeatmapIdentifierNetSerializable beatmapId, ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IServerBeatmapProvider>::get(),
                            "VerifyBeatmapForSelectionMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapIdentifierNetSerializable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, beatmapId, selectionMask);
}
 ::GlobalNamespace::BeatmapIdentifierNetSerializable ::GlobalNamespace::IServerBeatmapProvider::SelectBeatmapFromSuggestionsWithSelectionMaskAndOwnedSongPacks(int32_t playerCount, ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::BeatmapIdentifierNetSerializable> beatmapsSuggestedByPlayers, ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::SongPackMask> playerOwnedSongPacks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IServerBeatmapProvider>::get(),
                            "SelectBeatmapFromSuggestionsWithSelectionMaskAndOwnedSongPacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::BeatmapIdentifierNetSerializable>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::SongPackMask>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapIdentifierNetSerializable, false>(const_cast<void*>(instance), ___internal_method, playerCount, beatmapsSuggestedByPlayers, selectionMask, playerOwnedSongPacks);
}
} // end anonymous namespace
