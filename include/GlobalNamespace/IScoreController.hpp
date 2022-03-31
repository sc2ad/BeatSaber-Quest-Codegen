// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ScoringElement
  class ScoringElement;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: IScoreController
  class IScoreController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::IScoreController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IScoreController*, "", "IScoreController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: IScoreController
  // [TokenAttribute] Offset: FFFFFFFF
  class IScoreController {
    public:
    // public System.Int32 get_multipliedScore()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_multipliedScore();
    // public System.Int32 get_modifiedScore()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_modifiedScore();
    // public System.Int32 get_immediateMaxPossibleMultipliedScore()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_immediateMaxPossibleMultipliedScore();
    // public System.Int32 get_immediateMaxPossibleModifiedScore()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_immediateMaxPossibleModifiedScore();
    // public System.Void add_scoreDidChangeEvent(System.Action`2<System.Int32,System.Int32> value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void add_scoreDidChangeEvent(::System::Action_2<int, int>* value);
    // public System.Void remove_scoreDidChangeEvent(System.Action`2<System.Int32,System.Int32> value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void remove_scoreDidChangeEvent(::System::Action_2<int, int>* value);
    // public System.Void add_multiplierDidChangeEvent(System.Action`2<System.Int32,System.Single> value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void add_multiplierDidChangeEvent(::System::Action_2<int, float>* value);
    // public System.Void remove_multiplierDidChangeEvent(System.Action`2<System.Int32,System.Single> value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void remove_multiplierDidChangeEvent(::System::Action_2<int, float>* value);
    // public System.Void add_scoringForNoteStartedEvent(System.Action`1<ScoringElement> value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void add_scoringForNoteStartedEvent(::System::Action_1<::GlobalNamespace::ScoringElement*>* value);
    // public System.Void remove_scoringForNoteStartedEvent(System.Action`1<ScoringElement> value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void remove_scoringForNoteStartedEvent(::System::Action_1<::GlobalNamespace::ScoringElement*>* value);
    // public System.Void add_scoringForNoteFinishedEvent(System.Action`1<ScoringElement> value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void add_scoringForNoteFinishedEvent(::System::Action_1<::GlobalNamespace::ScoringElement*>* value);
    // public System.Void remove_scoringForNoteFinishedEvent(System.Action`1<ScoringElement> value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void remove_scoringForNoteFinishedEvent(::System::Action_1<::GlobalNamespace::ScoringElement*>* value);
    // public System.Void SetEnabled(System.Boolean enabled)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetEnabled(bool enabled);
  }; // IScoreController
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IScoreController::get_multipliedScore
// Il2CppName: get_multipliedScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::IScoreController::*)()>(&GlobalNamespace::IScoreController::get_multipliedScore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IScoreController*), "get_multipliedScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IScoreController::get_modifiedScore
// Il2CppName: get_modifiedScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::IScoreController::*)()>(&GlobalNamespace::IScoreController::get_modifiedScore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IScoreController*), "get_modifiedScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IScoreController::get_immediateMaxPossibleMultipliedScore
// Il2CppName: get_immediateMaxPossibleMultipliedScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::IScoreController::*)()>(&GlobalNamespace::IScoreController::get_immediateMaxPossibleMultipliedScore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IScoreController*), "get_immediateMaxPossibleMultipliedScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IScoreController::get_immediateMaxPossibleModifiedScore
// Il2CppName: get_immediateMaxPossibleModifiedScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::IScoreController::*)()>(&GlobalNamespace::IScoreController::get_immediateMaxPossibleModifiedScore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IScoreController*), "get_immediateMaxPossibleModifiedScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IScoreController::add_scoreDidChangeEvent
// Il2CppName: add_scoreDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IScoreController::*)(::System::Action_2<int, int>*)>(&GlobalNamespace::IScoreController::add_scoreDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IScoreController*), "add_scoreDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IScoreController::remove_scoreDidChangeEvent
// Il2CppName: remove_scoreDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IScoreController::*)(::System::Action_2<int, int>*)>(&GlobalNamespace::IScoreController::remove_scoreDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IScoreController*), "remove_scoreDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IScoreController::add_multiplierDidChangeEvent
// Il2CppName: add_multiplierDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IScoreController::*)(::System::Action_2<int, float>*)>(&GlobalNamespace::IScoreController::add_multiplierDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IScoreController*), "add_multiplierDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IScoreController::remove_multiplierDidChangeEvent
// Il2CppName: remove_multiplierDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IScoreController::*)(::System::Action_2<int, float>*)>(&GlobalNamespace::IScoreController::remove_multiplierDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IScoreController*), "remove_multiplierDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IScoreController::add_scoringForNoteStartedEvent
// Il2CppName: add_scoringForNoteStartedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IScoreController::*)(::System::Action_1<::GlobalNamespace::ScoringElement*>*)>(&GlobalNamespace::IScoreController::add_scoringForNoteStartedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ScoringElement")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IScoreController*), "add_scoringForNoteStartedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IScoreController::remove_scoringForNoteStartedEvent
// Il2CppName: remove_scoringForNoteStartedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IScoreController::*)(::System::Action_1<::GlobalNamespace::ScoringElement*>*)>(&GlobalNamespace::IScoreController::remove_scoringForNoteStartedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ScoringElement")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IScoreController*), "remove_scoringForNoteStartedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IScoreController::add_scoringForNoteFinishedEvent
// Il2CppName: add_scoringForNoteFinishedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IScoreController::*)(::System::Action_1<::GlobalNamespace::ScoringElement*>*)>(&GlobalNamespace::IScoreController::add_scoringForNoteFinishedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ScoringElement")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IScoreController*), "add_scoringForNoteFinishedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IScoreController::remove_scoringForNoteFinishedEvent
// Il2CppName: remove_scoringForNoteFinishedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IScoreController::*)(::System::Action_1<::GlobalNamespace::ScoringElement*>*)>(&GlobalNamespace::IScoreController::remove_scoringForNoteFinishedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ScoringElement")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IScoreController*), "remove_scoringForNoteFinishedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IScoreController::SetEnabled
// Il2CppName: SetEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IScoreController::*)(bool)>(&GlobalNamespace::IScoreController::SetEnabled)> {
  static const MethodInfo* get() {
    static auto* enabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IScoreController*), "SetEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enabled});
  }
};
