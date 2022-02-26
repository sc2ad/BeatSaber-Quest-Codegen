// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteWasCutDelegate
  class NoteWasCutDelegate;
  // Forward declaring type: NoteData
  class NoteData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action
  class Action;
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
    // public System.Int32 get_prevFrameRawScore()
    // Offset: 0xFFFFFFFF
    int get_prevFrameRawScore();
    // public System.Int32 get_prevFrameModifiedScore()
    // Offset: 0xFFFFFFFF
    int get_prevFrameModifiedScore();
    // public System.Int32 get_maxCombo()
    // Offset: 0xFFFFFFFF
    int get_maxCombo();
    // public System.Int32 get_multiplierWithFever()
    // Offset: 0xFFFFFFFF
    int get_multiplierWithFever();
    // public System.Boolean get_feverModeActive()
    // Offset: 0xFFFFFFFF
    bool get_feverModeActive();
    // public System.Single get_feverModeDrainProgress()
    // Offset: 0xFFFFFFFF
    float get_feverModeDrainProgress();
    // public System.Single get_feverModeChargeProgress()
    // Offset: 0xFFFFFFFF
    float get_feverModeChargeProgress();
    // public System.Int32 get_immediateMaxPossibleRawScore()
    // Offset: 0xFFFFFFFF
    int get_immediateMaxPossibleRawScore();
    // public System.Single get_gameplayModifiersScoreMultiplier()
    // Offset: 0xFFFFFFFF
    float get_gameplayModifiersScoreMultiplier();
    // public System.Void add_noteWasCutEvent(NoteWasCutDelegate value)
    // Offset: 0xFFFFFFFF
    void add_noteWasCutEvent(::GlobalNamespace::NoteWasCutDelegate* value);
    // public System.Void remove_noteWasCutEvent(NoteWasCutDelegate value)
    // Offset: 0xFFFFFFFF
    void remove_noteWasCutEvent(::GlobalNamespace::NoteWasCutDelegate* value);
    // public System.Void add_noteWasMissedEvent(System.Action`2<NoteData,System.Int32> value)
    // Offset: 0xFFFFFFFF
    void add_noteWasMissedEvent(::System::Action_2<::GlobalNamespace::NoteData*, int>* value);
    // public System.Void remove_noteWasMissedEvent(System.Action`2<NoteData,System.Int32> value)
    // Offset: 0xFFFFFFFF
    void remove_noteWasMissedEvent(::System::Action_2<::GlobalNamespace::NoteData*, int>* value);
    // public System.Void add_scoreDidChangeEvent(System.Action`2<System.Int32,System.Int32> value)
    // Offset: 0xFFFFFFFF
    void add_scoreDidChangeEvent(::System::Action_2<int, int>* value);
    // public System.Void remove_scoreDidChangeEvent(System.Action`2<System.Int32,System.Int32> value)
    // Offset: 0xFFFFFFFF
    void remove_scoreDidChangeEvent(::System::Action_2<int, int>* value);
    // public System.Void add_immediateMaxPossibleScoreDidChangeEvent(System.Action`2<System.Int32,System.Int32> value)
    // Offset: 0xFFFFFFFF
    void add_immediateMaxPossibleScoreDidChangeEvent(::System::Action_2<int, int>* value);
    // public System.Void remove_immediateMaxPossibleScoreDidChangeEvent(System.Action`2<System.Int32,System.Int32> value)
    // Offset: 0xFFFFFFFF
    void remove_immediateMaxPossibleScoreDidChangeEvent(::System::Action_2<int, int>* value);
    // public System.Void add_multiplierDidChangeEvent(System.Action`2<System.Int32,System.Single> value)
    // Offset: 0xFFFFFFFF
    void add_multiplierDidChangeEvent(::System::Action_2<int, float>* value);
    // public System.Void remove_multiplierDidChangeEvent(System.Action`2<System.Int32,System.Single> value)
    // Offset: 0xFFFFFFFF
    void remove_multiplierDidChangeEvent(::System::Action_2<int, float>* value);
    // public System.Void add_comboDidChangeEvent(System.Action`1<System.Int32> value)
    // Offset: 0xFFFFFFFF
    void add_comboDidChangeEvent(::System::Action_1<int>* value);
    // public System.Void remove_comboDidChangeEvent(System.Action`1<System.Int32> value)
    // Offset: 0xFFFFFFFF
    void remove_comboDidChangeEvent(::System::Action_1<int>* value);
    // public System.Void add_feverModeChargeProgressDidChangeEvent(System.Action`1<System.Single> value)
    // Offset: 0xFFFFFFFF
    void add_feverModeChargeProgressDidChangeEvent(::System::Action_1<float>* value);
    // public System.Void remove_feverModeChargeProgressDidChangeEvent(System.Action`1<System.Single> value)
    // Offset: 0xFFFFFFFF
    void remove_feverModeChargeProgressDidChangeEvent(::System::Action_1<float>* value);
    // public System.Void add_feverDidStartEvent(System.Action value)
    // Offset: 0xFFFFFFFF
    void add_feverDidStartEvent(::System::Action* value);
    // public System.Void remove_feverDidStartEvent(System.Action value)
    // Offset: 0xFFFFFFFF
    void remove_feverDidStartEvent(::System::Action* value);
    // public System.Void add_feverDidFinishEvent(System.Action value)
    // Offset: 0xFFFFFFFF
    void add_feverDidFinishEvent(::System::Action* value);
    // public System.Void remove_feverDidFinishEvent(System.Action value)
    // Offset: 0xFFFFFFFF
    void remove_feverDidFinishEvent(::System::Action* value);
    // public System.Void add_comboBreakingEventHappenedEvent(System.Action value)
    // Offset: 0xFFFFFFFF
    void add_comboBreakingEventHappenedEvent(::System::Action* value);
    // public System.Void remove_comboBreakingEventHappenedEvent(System.Action value)
    // Offset: 0xFFFFFFFF
    void remove_comboBreakingEventHappenedEvent(::System::Action* value);
    // public System.Void SetEnabled(System.Boolean enabled)
    // Offset: 0xFFFFFFFF
    void SetEnabled(bool enabled);
  }; // IScoreController
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IScoreController::get_prevFrameRawScore
// Il2CppName: get_prevFrameRawScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::IScoreController::*)()>(&GlobalNamespace::IScoreController::get_prevFrameRawScore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IScoreController*), "get_prevFrameRawScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IScoreController::get_prevFrameModifiedScore
// Il2CppName: get_prevFrameModifiedScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::IScoreController::*)()>(&GlobalNamespace::IScoreController::get_prevFrameModifiedScore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IScoreController*), "get_prevFrameModifiedScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IScoreController::get_maxCombo
// Il2CppName: get_maxCombo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::IScoreController::*)()>(&GlobalNamespace::IScoreController::get_maxCombo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IScoreController*), "get_maxCombo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IScoreController::get_multiplierWithFever
// Il2CppName: get_multiplierWithFever
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::IScoreController::*)()>(&GlobalNamespace::IScoreController::get_multiplierWithFever)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IScoreController*), "get_multiplierWithFever", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IScoreController::get_feverModeActive
// Il2CppName: get_feverModeActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::IScoreController::*)()>(&GlobalNamespace::IScoreController::get_feverModeActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IScoreController*), "get_feverModeActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IScoreController::get_feverModeDrainProgress
// Il2CppName: get_feverModeDrainProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::IScoreController::*)()>(&GlobalNamespace::IScoreController::get_feverModeDrainProgress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IScoreController*), "get_feverModeDrainProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IScoreController::get_feverModeChargeProgress
// Il2CppName: get_feverModeChargeProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::IScoreController::*)()>(&GlobalNamespace::IScoreController::get_feverModeChargeProgress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IScoreController*), "get_feverModeChargeProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IScoreController::get_immediateMaxPossibleRawScore
// Il2CppName: get_immediateMaxPossibleRawScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::IScoreController::*)()>(&GlobalNamespace::IScoreController::get_immediateMaxPossibleRawScore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IScoreController*), "get_immediateMaxPossibleRawScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IScoreController::get_gameplayModifiersScoreMultiplier
// Il2CppName: get_gameplayModifiersScoreMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::IScoreController::*)()>(&GlobalNamespace::IScoreController::get_gameplayModifiersScoreMultiplier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IScoreController*), "get_gameplayModifiersScoreMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IScoreController::add_noteWasCutEvent
// Il2CppName: add_noteWasCutEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IScoreController::*)(::GlobalNamespace::NoteWasCutDelegate*)>(&GlobalNamespace::IScoreController::add_noteWasCutEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "NoteWasCutDelegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IScoreController*), "add_noteWasCutEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IScoreController::remove_noteWasCutEvent
// Il2CppName: remove_noteWasCutEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IScoreController::*)(::GlobalNamespace::NoteWasCutDelegate*)>(&GlobalNamespace::IScoreController::remove_noteWasCutEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "NoteWasCutDelegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IScoreController*), "remove_noteWasCutEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IScoreController::add_noteWasMissedEvent
// Il2CppName: add_noteWasMissedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IScoreController::*)(::System::Action_2<::GlobalNamespace::NoteData*, int>*)>(&GlobalNamespace::IScoreController::add_noteWasMissedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "NoteData"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IScoreController*), "add_noteWasMissedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IScoreController::remove_noteWasMissedEvent
// Il2CppName: remove_noteWasMissedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IScoreController::*)(::System::Action_2<::GlobalNamespace::NoteData*, int>*)>(&GlobalNamespace::IScoreController::remove_noteWasMissedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "NoteData"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IScoreController*), "remove_noteWasMissedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
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
// Writing MetadataGetter for method: GlobalNamespace::IScoreController::add_immediateMaxPossibleScoreDidChangeEvent
// Il2CppName: add_immediateMaxPossibleScoreDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IScoreController::*)(::System::Action_2<int, int>*)>(&GlobalNamespace::IScoreController::add_immediateMaxPossibleScoreDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IScoreController*), "add_immediateMaxPossibleScoreDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IScoreController::remove_immediateMaxPossibleScoreDidChangeEvent
// Il2CppName: remove_immediateMaxPossibleScoreDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IScoreController::*)(::System::Action_2<int, int>*)>(&GlobalNamespace::IScoreController::remove_immediateMaxPossibleScoreDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IScoreController*), "remove_immediateMaxPossibleScoreDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
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
// Writing MetadataGetter for method: GlobalNamespace::IScoreController::add_comboDidChangeEvent
// Il2CppName: add_comboDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IScoreController::*)(::System::Action_1<int>*)>(&GlobalNamespace::IScoreController::add_comboDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IScoreController*), "add_comboDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IScoreController::remove_comboDidChangeEvent
// Il2CppName: remove_comboDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IScoreController::*)(::System::Action_1<int>*)>(&GlobalNamespace::IScoreController::remove_comboDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IScoreController*), "remove_comboDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IScoreController::add_feverModeChargeProgressDidChangeEvent
// Il2CppName: add_feverModeChargeProgressDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IScoreController::*)(::System::Action_1<float>*)>(&GlobalNamespace::IScoreController::add_feverModeChargeProgressDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IScoreController*), "add_feverModeChargeProgressDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IScoreController::remove_feverModeChargeProgressDidChangeEvent
// Il2CppName: remove_feverModeChargeProgressDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IScoreController::*)(::System::Action_1<float>*)>(&GlobalNamespace::IScoreController::remove_feverModeChargeProgressDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IScoreController*), "remove_feverModeChargeProgressDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IScoreController::add_feverDidStartEvent
// Il2CppName: add_feverDidStartEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IScoreController::*)(::System::Action*)>(&GlobalNamespace::IScoreController::add_feverDidStartEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IScoreController*), "add_feverDidStartEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IScoreController::remove_feverDidStartEvent
// Il2CppName: remove_feverDidStartEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IScoreController::*)(::System::Action*)>(&GlobalNamespace::IScoreController::remove_feverDidStartEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IScoreController*), "remove_feverDidStartEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IScoreController::add_feverDidFinishEvent
// Il2CppName: add_feverDidFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IScoreController::*)(::System::Action*)>(&GlobalNamespace::IScoreController::add_feverDidFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IScoreController*), "add_feverDidFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IScoreController::remove_feverDidFinishEvent
// Il2CppName: remove_feverDidFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IScoreController::*)(::System::Action*)>(&GlobalNamespace::IScoreController::remove_feverDidFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IScoreController*), "remove_feverDidFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IScoreController::add_comboBreakingEventHappenedEvent
// Il2CppName: add_comboBreakingEventHappenedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IScoreController::*)(::System::Action*)>(&GlobalNamespace::IScoreController::add_comboBreakingEventHappenedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IScoreController*), "add_comboBreakingEventHappenedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IScoreController::remove_comboBreakingEventHappenedEvent
// Il2CppName: remove_comboBreakingEventHappenedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IScoreController::*)(::System::Action*)>(&GlobalNamespace::IScoreController::remove_comboBreakingEventHappenedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IScoreController*), "remove_comboBreakingEventHappenedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
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
