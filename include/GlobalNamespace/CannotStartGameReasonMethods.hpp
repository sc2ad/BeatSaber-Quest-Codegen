// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: CannotStartGameReason
  struct CannotStartGameReason;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CannotStartGameReasonMethods
  class CannotStartGameReasonMethods;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CannotStartGameReasonMethods);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CannotStartGameReasonMethods*, "", "CannotStartGameReasonMethods");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: CannotStartGameReasonMethods
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class CannotStartGameReasonMethods : public ::Il2CppObject {
    public:
    // [LocalizationKeyAttribute] Offset: 0x10FB394
    // static field const value: static private System.String kAllPlayersSpectating
    static constexpr const char* kAllPlayersSpectating = "LABEL_CANT_START_GAME_ALL_PLAYERS_SPECTATING";
    // Get static field: static private System.String kAllPlayersSpectating
    static ::StringW _get_kAllPlayersSpectating();
    // Set static field: static private System.String kAllPlayersSpectating
    static void _set_kAllPlayersSpectating(::StringW value);
    // [LocalizationKeyAttribute] Offset: 0x10FB3A4
    // static field const value: static private System.String kNoSongSelected
    static constexpr const char* kNoSongSelected = "LABEL_CANT_START_GAME_NO_SONG_SELECTED";
    // Get static field: static private System.String kNoSongSelected
    static ::StringW _get_kNoSongSelected();
    // Set static field: static private System.String kNoSongSelected
    static void _set_kNoSongSelected(::StringW value);
    // [LocalizationKeyAttribute] Offset: 0x10FB3B4
    // static field const value: static private System.String kAllPlayersNotInLobby
    static constexpr const char* kAllPlayersNotInLobby = "LABEL_CANT_START_GAME_ALL_PLAYERS_NOT_IN_LOBBY";
    // Get static field: static private System.String kAllPlayersNotInLobby
    static ::StringW _get_kAllPlayersNotInLobby();
    // Set static field: static private System.String kAllPlayersNotInLobby
    static void _set_kAllPlayersNotInLobby(::StringW value);
    // [LocalizationKeyAttribute] Offset: 0x10FB3C4
    // static field const value: static private System.String kDoNotOwnSong
    static constexpr const char* kDoNotOwnSong = "LABEL_CANT_START_GAME_DO_NOT_OWN_SONG";
    // Get static field: static private System.String kDoNotOwnSong
    static ::StringW _get_kDoNotOwnSong();
    // Set static field: static private System.String kDoNotOwnSong
    static void _set_kDoNotOwnSong(::StringW value);
    // static public System.String LocalizedKey(CannotStartGameReason cannotStartGameReason)
    // Offset: 0x138C178
    static ::StringW LocalizedKey(::GlobalNamespace::CannotStartGameReason cannotStartGameReason);
  }; // CannotStartGameReasonMethods
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CannotStartGameReasonMethods::LocalizedKey
// Il2CppName: LocalizedKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::GlobalNamespace::CannotStartGameReason)>(&GlobalNamespace::CannotStartGameReasonMethods::LocalizedKey)> {
  static const MethodInfo* get() {
    static auto* cannotStartGameReason = &::il2cpp_utils::GetClassFromName("", "CannotStartGameReason")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CannotStartGameReasonMethods*), "LocalizedKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cannotStartGameReason});
  }
};
