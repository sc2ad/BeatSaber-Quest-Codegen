// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ScoreModel
#include "GlobalNamespace/ScoreModel.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteCutInfo
  struct NoteCutInfo;
  // Forward declaring type: ICutScoreBufferDidChangeReceiver
  class ICutScoreBufferDidChangeReceiver;
  // Forward declaring type: ICutScoreBufferDidFinishReceiver
  class ICutScoreBufferDidFinishReceiver;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: IReadonlyCutScoreBuffer
  class IReadonlyCutScoreBuffer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::IReadonlyCutScoreBuffer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IReadonlyCutScoreBuffer*, "", "IReadonlyCutScoreBuffer");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: IReadonlyCutScoreBuffer
  // [TokenAttribute] Offset: FFFFFFFF
  class IReadonlyCutScoreBuffer {
    public:
    // public System.Int32 get_maxPossibleCutScore()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_maxPossibleCutScore();
    // public System.Int32 get_cutScore()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_cutScore();
    // public System.Int32 get_beforeCutScore()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_beforeCutScore();
    // public System.Int32 get_centerDistanceCutScore()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_centerDistanceCutScore();
    // public System.Int32 get_afterCutScore()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_afterCutScore();
    // public System.Boolean get_isFinished()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_isFinished();
    // public ScoreModel/NoteScoreDefinition get_noteScoreDefinition()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::GlobalNamespace::ScoreModel::NoteScoreDefinition* get_noteScoreDefinition();
    // public NoteCutInfo get_noteCutInfo()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::GlobalNamespace::NoteCutInfo get_noteCutInfo();
    // public System.Single get_beforeCutSwingRating()
    // Offset: 0xFFFFFFFFFFFFFFFF
    float get_beforeCutSwingRating();
    // public System.Single get_afterCutSwingRating()
    // Offset: 0xFFFFFFFFFFFFFFFF
    float get_afterCutSwingRating();
    // public System.Void RegisterDidChangeReceiver(ICutScoreBufferDidChangeReceiver receiver)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void RegisterDidChangeReceiver(::GlobalNamespace::ICutScoreBufferDidChangeReceiver* receiver);
    // public System.Void RegisterDidFinishReceiver(ICutScoreBufferDidFinishReceiver receiver)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void RegisterDidFinishReceiver(::GlobalNamespace::ICutScoreBufferDidFinishReceiver* receiver);
    // public System.Void UnregisterDidChangeReceiver(ICutScoreBufferDidChangeReceiver receiver)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void UnregisterDidChangeReceiver(::GlobalNamespace::ICutScoreBufferDidChangeReceiver* receiver);
    // public System.Void UnregisterDidFinishReceiver(ICutScoreBufferDidFinishReceiver receiver)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void UnregisterDidFinishReceiver(::GlobalNamespace::ICutScoreBufferDidFinishReceiver* receiver);
  }; // IReadonlyCutScoreBuffer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IReadonlyCutScoreBuffer::get_maxPossibleCutScore
// Il2CppName: get_maxPossibleCutScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::IReadonlyCutScoreBuffer::*)()>(&GlobalNamespace::IReadonlyCutScoreBuffer::get_maxPossibleCutScore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IReadonlyCutScoreBuffer*), "get_maxPossibleCutScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IReadonlyCutScoreBuffer::get_cutScore
// Il2CppName: get_cutScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::IReadonlyCutScoreBuffer::*)()>(&GlobalNamespace::IReadonlyCutScoreBuffer::get_cutScore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IReadonlyCutScoreBuffer*), "get_cutScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IReadonlyCutScoreBuffer::get_beforeCutScore
// Il2CppName: get_beforeCutScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::IReadonlyCutScoreBuffer::*)()>(&GlobalNamespace::IReadonlyCutScoreBuffer::get_beforeCutScore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IReadonlyCutScoreBuffer*), "get_beforeCutScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IReadonlyCutScoreBuffer::get_centerDistanceCutScore
// Il2CppName: get_centerDistanceCutScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::IReadonlyCutScoreBuffer::*)()>(&GlobalNamespace::IReadonlyCutScoreBuffer::get_centerDistanceCutScore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IReadonlyCutScoreBuffer*), "get_centerDistanceCutScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IReadonlyCutScoreBuffer::get_afterCutScore
// Il2CppName: get_afterCutScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::IReadonlyCutScoreBuffer::*)()>(&GlobalNamespace::IReadonlyCutScoreBuffer::get_afterCutScore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IReadonlyCutScoreBuffer*), "get_afterCutScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IReadonlyCutScoreBuffer::get_isFinished
// Il2CppName: get_isFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::IReadonlyCutScoreBuffer::*)()>(&GlobalNamespace::IReadonlyCutScoreBuffer::get_isFinished)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IReadonlyCutScoreBuffer*), "get_isFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IReadonlyCutScoreBuffer::get_noteScoreDefinition
// Il2CppName: get_noteScoreDefinition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ScoreModel::NoteScoreDefinition* (GlobalNamespace::IReadonlyCutScoreBuffer::*)()>(&GlobalNamespace::IReadonlyCutScoreBuffer::get_noteScoreDefinition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IReadonlyCutScoreBuffer*), "get_noteScoreDefinition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IReadonlyCutScoreBuffer::get_noteCutInfo
// Il2CppName: get_noteCutInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteCutInfo (GlobalNamespace::IReadonlyCutScoreBuffer::*)()>(&GlobalNamespace::IReadonlyCutScoreBuffer::get_noteCutInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IReadonlyCutScoreBuffer*), "get_noteCutInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IReadonlyCutScoreBuffer::get_beforeCutSwingRating
// Il2CppName: get_beforeCutSwingRating
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::IReadonlyCutScoreBuffer::*)()>(&GlobalNamespace::IReadonlyCutScoreBuffer::get_beforeCutSwingRating)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IReadonlyCutScoreBuffer*), "get_beforeCutSwingRating", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IReadonlyCutScoreBuffer::get_afterCutSwingRating
// Il2CppName: get_afterCutSwingRating
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::IReadonlyCutScoreBuffer::*)()>(&GlobalNamespace::IReadonlyCutScoreBuffer::get_afterCutSwingRating)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IReadonlyCutScoreBuffer*), "get_afterCutSwingRating", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IReadonlyCutScoreBuffer::RegisterDidChangeReceiver
// Il2CppName: RegisterDidChangeReceiver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IReadonlyCutScoreBuffer::*)(::GlobalNamespace::ICutScoreBufferDidChangeReceiver*)>(&GlobalNamespace::IReadonlyCutScoreBuffer::RegisterDidChangeReceiver)> {
  static const MethodInfo* get() {
    static auto* receiver = &::il2cpp_utils::GetClassFromName("", "ICutScoreBufferDidChangeReceiver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IReadonlyCutScoreBuffer*), "RegisterDidChangeReceiver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{receiver});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IReadonlyCutScoreBuffer::RegisterDidFinishReceiver
// Il2CppName: RegisterDidFinishReceiver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IReadonlyCutScoreBuffer::*)(::GlobalNamespace::ICutScoreBufferDidFinishReceiver*)>(&GlobalNamespace::IReadonlyCutScoreBuffer::RegisterDidFinishReceiver)> {
  static const MethodInfo* get() {
    static auto* receiver = &::il2cpp_utils::GetClassFromName("", "ICutScoreBufferDidFinishReceiver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IReadonlyCutScoreBuffer*), "RegisterDidFinishReceiver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{receiver});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IReadonlyCutScoreBuffer::UnregisterDidChangeReceiver
// Il2CppName: UnregisterDidChangeReceiver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IReadonlyCutScoreBuffer::*)(::GlobalNamespace::ICutScoreBufferDidChangeReceiver*)>(&GlobalNamespace::IReadonlyCutScoreBuffer::UnregisterDidChangeReceiver)> {
  static const MethodInfo* get() {
    static auto* receiver = &::il2cpp_utils::GetClassFromName("", "ICutScoreBufferDidChangeReceiver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IReadonlyCutScoreBuffer*), "UnregisterDidChangeReceiver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{receiver});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IReadonlyCutScoreBuffer::UnregisterDidFinishReceiver
// Il2CppName: UnregisterDidFinishReceiver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IReadonlyCutScoreBuffer::*)(::GlobalNamespace::ICutScoreBufferDidFinishReceiver*)>(&GlobalNamespace::IReadonlyCutScoreBuffer::UnregisterDidFinishReceiver)> {
  static const MethodInfo* get() {
    static auto* receiver = &::il2cpp_utils::GetClassFromName("", "ICutScoreBufferDidFinishReceiver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IReadonlyCutScoreBuffer*), "UnregisterDidFinishReceiver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{receiver});
  }
};
