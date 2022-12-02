// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MultiplayerScoreProvider
#include "GlobalNamespace/MultiplayerScoreProvider.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
// Including type: StandardScoreSyncState
#include "GlobalNamespace/StandardScoreSyncState.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerSyncState`3<TStateTable, TType, TState>
  template<typename TStateTable, typename TType, typename TState>
  class MultiplayerSyncState_3;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerScoreProvider::RankedPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*, "", "MultiplayerScoreProvider/RankedPlayer");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerScoreProvider/RankedPlayer
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerScoreProvider::RankedPlayer : public ::Il2CppObject/*, public ::System::IComparable_1<::GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>*/ {
    public:
    public:
    // private readonly MultiplayerSyncState`3<StandardScoreSyncState,StandardScoreSyncState/Score,System.Int32> _multiplayerSyncState
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::StandardScoreSyncState_Score, int>* multiplayerSyncState;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::StandardScoreSyncState_Score, int>*) == 0x8);
    // private readonly MultiplayerScoreProvider _scoreSyncManager
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::MultiplayerScoreProvider* scoreSyncManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerScoreProvider*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IComparable_1<::GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>
    operator ::System::IComparable_1<::GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>() noexcept {
      return *reinterpret_cast<::System::IComparable_1<::GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>*>(this);
    }
    // Creating interface conversion operator: i_RankedPlayer
    inline ::System::IComparable_1<::GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>* i_RankedPlayer() noexcept {
      return reinterpret_cast<::System::IComparable_1<::GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*>*>(this);
    }
    // Get instance field reference: private readonly MultiplayerSyncState`3<StandardScoreSyncState,StandardScoreSyncState/Score,System.Int32> _multiplayerSyncState
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::StandardScoreSyncState_Score, int>*& dyn__multiplayerSyncState();
    // Get instance field reference: private readonly MultiplayerScoreProvider _scoreSyncManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerScoreProvider*& dyn__scoreSyncManager();
    // public System.Single get_offsetSyncTime()
    // Offset: 0x14F2FA0
    float get_offsetSyncTime();
    // public System.Single get_lastScoreTime()
    // Offset: 0x14F3400
    float get_lastScoreTime();
    // public System.Int32 get_score()
    // Offset: 0x14F26AC
    int get_score();
    // public System.Boolean get_isConnected()
    // Offset: 0x14F2E74
    bool get_isConnected();
    // public System.Boolean get_isActiveOrFinished()
    // Offset: 0x14F3458
    bool get_isActiveOrFinished();
    // public System.Boolean get_isFailed()
    // Offset: 0x14F32D8
    bool get_isFailed();
    // public System.Boolean get_wasActiveAtLevelStart()
    // Offset: 0x14F2F3C
    bool get_wasActiveAtLevelStart();
    // public System.Boolean get_isMe()
    // Offset: 0x14F3484
    bool get_isMe();
    // public System.String get_userId()
    // Offset: 0x14F3338
    ::StringW get_userId();
    // public System.String get_userName()
    // Offset: 0x14F3548
    ::StringW get_userName();
    // public System.Void .ctor(MultiplayerSyncState`3<StandardScoreSyncState,StandardScoreSyncState/Score,System.Int32> multiplayerSyncState, MultiplayerScoreProvider scoreSyncManager)
    // Offset: 0x14F2F68
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerScoreProvider::RankedPlayer* New_ctor(::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::StandardScoreSyncState_Score, int>* multiplayerSyncState, ::GlobalNamespace::MultiplayerScoreProvider* scoreSyncManager) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerScoreProvider::RankedPlayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerScoreProvider::RankedPlayer*, creationType>(multiplayerSyncState, scoreSyncManager)));
    }
    // public System.Int32 CompareTo(MultiplayerScoreProvider/RankedPlayer other)
    // Offset: 0x14F3610
    int CompareTo(::GlobalNamespace::MultiplayerScoreProvider::RankedPlayer* other);
  }; // MultiplayerScoreProvider/RankedPlayer
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerScoreProvider::RankedPlayer), 24 + sizeof(::GlobalNamespace::MultiplayerScoreProvider*)> __GlobalNamespace_MultiplayerScoreProvider_RankedPlayerSizeCheck;
  static_assert(sizeof(MultiplayerScoreProvider::RankedPlayer) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreProvider::RankedPlayer::get_offsetSyncTime
// Il2CppName: get_offsetSyncTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::MultiplayerScoreProvider::RankedPlayer::*)()>(&GlobalNamespace::MultiplayerScoreProvider::RankedPlayer::get_offsetSyncTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*), "get_offsetSyncTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreProvider::RankedPlayer::get_lastScoreTime
// Il2CppName: get_lastScoreTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::MultiplayerScoreProvider::RankedPlayer::*)()>(&GlobalNamespace::MultiplayerScoreProvider::RankedPlayer::get_lastScoreTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*), "get_lastScoreTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreProvider::RankedPlayer::get_score
// Il2CppName: get_score
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::MultiplayerScoreProvider::RankedPlayer::*)()>(&GlobalNamespace::MultiplayerScoreProvider::RankedPlayer::get_score)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*), "get_score", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreProvider::RankedPlayer::get_isConnected
// Il2CppName: get_isConnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerScoreProvider::RankedPlayer::*)()>(&GlobalNamespace::MultiplayerScoreProvider::RankedPlayer::get_isConnected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*), "get_isConnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreProvider::RankedPlayer::get_isActiveOrFinished
// Il2CppName: get_isActiveOrFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerScoreProvider::RankedPlayer::*)()>(&GlobalNamespace::MultiplayerScoreProvider::RankedPlayer::get_isActiveOrFinished)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*), "get_isActiveOrFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreProvider::RankedPlayer::get_isFailed
// Il2CppName: get_isFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerScoreProvider::RankedPlayer::*)()>(&GlobalNamespace::MultiplayerScoreProvider::RankedPlayer::get_isFailed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*), "get_isFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreProvider::RankedPlayer::get_wasActiveAtLevelStart
// Il2CppName: get_wasActiveAtLevelStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerScoreProvider::RankedPlayer::*)()>(&GlobalNamespace::MultiplayerScoreProvider::RankedPlayer::get_wasActiveAtLevelStart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*), "get_wasActiveAtLevelStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreProvider::RankedPlayer::get_isMe
// Il2CppName: get_isMe
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerScoreProvider::RankedPlayer::*)()>(&GlobalNamespace::MultiplayerScoreProvider::RankedPlayer::get_isMe)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*), "get_isMe", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreProvider::RankedPlayer::get_userId
// Il2CppName: get_userId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::MultiplayerScoreProvider::RankedPlayer::*)()>(&GlobalNamespace::MultiplayerScoreProvider::RankedPlayer::get_userId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*), "get_userId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreProvider::RankedPlayer::get_userName
// Il2CppName: get_userName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::MultiplayerScoreProvider::RankedPlayer::*)()>(&GlobalNamespace::MultiplayerScoreProvider::RankedPlayer::get_userName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*), "get_userName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreProvider::RankedPlayer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerScoreProvider::RankedPlayer::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::MultiplayerScoreProvider::RankedPlayer::*)(::GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*)>(&GlobalNamespace::MultiplayerScoreProvider::RankedPlayer::CompareTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "MultiplayerScoreProvider/RankedPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerScoreProvider::RankedPlayer*), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
