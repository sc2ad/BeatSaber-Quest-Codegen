// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionToggle
  class MissionToggle;
  // Forward declaring type: MissionNode
  class MissionNode;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: MissionNodeVisualController
  class MissionNodeVisualController : public UnityEngine::MonoBehaviour {
    public:
    // private MissionToggle _missionToggle
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MissionToggle* missionToggle;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionToggle*) == 0x8);
    // private MissionNode _missionNode
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MissionNode* missionNode;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionNode*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE23870
    // private System.Action`1<MissionNodeVisualController> nodeWasSelectEvent
    // Size: 0x8
    // Offset: 0x28
    System::Action_1<GlobalNamespace::MissionNodeVisualController*>* nodeWasSelectEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::MissionNodeVisualController*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE23880
    // private System.Action`1<MissionNodeVisualController> nodeWasDisplayedEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action_1<GlobalNamespace::MissionNodeVisualController*>* nodeWasDisplayedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::MissionNodeVisualController*>*) == 0x8);
    // private System.Boolean _selected
    // Size: 0x1
    // Offset: 0x38
    bool selected;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isInitialized
    // Size: 0x1
    // Offset: 0x39
    bool isInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _cleared
    // Size: 0x1
    // Offset: 0x3A
    bool cleared;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _interactable
    // Size: 0x1
    // Offset: 0x3B
    bool interactable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: MissionNodeVisualController
    MissionNodeVisualController(GlobalNamespace::MissionToggle* missionToggle_ = {}, GlobalNamespace::MissionNode* missionNode_ = {}, System::Action_1<GlobalNamespace::MissionNodeVisualController*>* nodeWasSelectEvent_ = {}, System::Action_1<GlobalNamespace::MissionNodeVisualController*>* nodeWasDisplayedEvent_ = {}, bool selected_ = {}, bool isInitialized_ = {}, bool cleared_ = {}, bool interactable_ = {}) noexcept : missionToggle{missionToggle_}, missionNode{missionNode_}, nodeWasSelectEvent{nodeWasSelectEvent_}, nodeWasDisplayedEvent{nodeWasDisplayedEvent_}, selected{selected_}, isInitialized{isInitialized_}, cleared{cleared_}, interactable{interactable_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_nodeWasSelectEvent(System.Action`1<MissionNodeVisualController> value)
    // Offset: 0x1098634
    void add_nodeWasSelectEvent(System::Action_1<GlobalNamespace::MissionNodeVisualController*>* value);
    // public System.Void remove_nodeWasSelectEvent(System.Action`1<MissionNodeVisualController> value)
    // Offset: 0x10988E0
    void remove_nodeWasSelectEvent(System::Action_1<GlobalNamespace::MissionNodeVisualController*>* value);
    // public System.Void add_nodeWasDisplayedEvent(System.Action`1<MissionNodeVisualController> value)
    // Offset: 0x10986D8
    void add_nodeWasDisplayedEvent(System::Action_1<GlobalNamespace::MissionNodeVisualController*>* value);
    // public System.Void remove_nodeWasDisplayedEvent(System.Action`1<MissionNodeVisualController> value)
    // Offset: 0x1098984
    void remove_nodeWasDisplayedEvent(System::Action_1<GlobalNamespace::MissionNodeVisualController*>* value);
    // public MissionNode get_missionNode()
    // Offset: 0x1098B8C
    GlobalNamespace::MissionNode* get_missionNode();
    // public System.Boolean get_selected()
    // Offset: 0x1098B94
    bool get_selected();
    // public System.Boolean get_isInitialized()
    // Offset: 0x1098B9C
    bool get_isInitialized();
    // public System.Boolean get_cleared()
    // Offset: 0x1098BA4
    bool get_cleared();
    // public System.Boolean get_interactable()
    // Offset: 0x1098BAC
    bool get_interactable();
    // public System.Void SetSelected(System.Boolean value)
    // Offset: 0x10984D0
    void SetSelected(bool value);
    // protected System.Void OnEnable()
    // Offset: 0x1098BC4
    void OnEnable();
    // protected System.Void Awake()
    // Offset: 0x1098C28
    void Awake();
    // protected System.Void Start()
    // Offset: 0x1098D7C
    void Start();
    // public System.Void Reset()
    // Offset: 0x1098DD8
    void Reset();
    // protected System.Void OnDestroy()
    // Offset: 0x1098DE0
    void OnDestroy();
    // public System.Void Init()
    // Offset: 0x1098D80
    void Init();
    // public System.Void Setup(System.Boolean cleared, System.Boolean interactable)
    // Offset: 0x1098FD0
    void Setup(bool cleared, bool interactable);
    // private System.Void SetupToggle()
    // Offset: 0x1098F74
    void SetupToggle();
    // public System.Void SetMissionCleared()
    // Offset: 0x109733C
    void SetMissionCleared();
    // public System.Void SetInteractable()
    // Offset: 0x1097B3C
    void SetInteractable();
    // public System.Void ChangeNodeSelection(System.Boolean selected)
    // Offset: 0x1098FAC
    void ChangeNodeSelection(bool selected);
    // private System.Void HandleMissionToggleSelectionDidChange(MissionToggle toggle)
    // Offset: 0x10990A8
    void HandleMissionToggleSelectionDidChange(GlobalNamespace::MissionToggle* toggle);
    // public System.Void .ctor()
    // Offset: 0x109912C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionNodeVisualController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionNodeVisualController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionNodeVisualController*, creationType>()));
    }
  }; // MissionNodeVisualController
  #pragma pack(pop)
  static check_size<sizeof(MissionNodeVisualController), 59 + sizeof(bool)> __GlobalNamespace_MissionNodeVisualControllerSizeCheck;
  static_assert(sizeof(MissionNodeVisualController) == 0x3C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionNodeVisualController*, "", "MissionNodeVisualController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionNodeVisualController::add_nodeWasSelectEvent
// Il2CppName: add_nodeWasSelectEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionNodeVisualController::*)(System::Action_1<GlobalNamespace::MissionNodeVisualController*>*)>(&GlobalNamespace::MissionNodeVisualController::add_nodeWasSelectEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MissionNodeVisualController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodeVisualController*), "add_nodeWasSelectEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodeVisualController::remove_nodeWasSelectEvent
// Il2CppName: remove_nodeWasSelectEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionNodeVisualController::*)(System::Action_1<GlobalNamespace::MissionNodeVisualController*>*)>(&GlobalNamespace::MissionNodeVisualController::remove_nodeWasSelectEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MissionNodeVisualController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodeVisualController*), "remove_nodeWasSelectEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodeVisualController::add_nodeWasDisplayedEvent
// Il2CppName: add_nodeWasDisplayedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionNodeVisualController::*)(System::Action_1<GlobalNamespace::MissionNodeVisualController*>*)>(&GlobalNamespace::MissionNodeVisualController::add_nodeWasDisplayedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MissionNodeVisualController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodeVisualController*), "add_nodeWasDisplayedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodeVisualController::remove_nodeWasDisplayedEvent
// Il2CppName: remove_nodeWasDisplayedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionNodeVisualController::*)(System::Action_1<GlobalNamespace::MissionNodeVisualController*>*)>(&GlobalNamespace::MissionNodeVisualController::remove_nodeWasDisplayedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MissionNodeVisualController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodeVisualController*), "remove_nodeWasDisplayedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodeVisualController::get_missionNode
// Il2CppName: get_missionNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MissionNode* (GlobalNamespace::MissionNodeVisualController::*)()>(&GlobalNamespace::MissionNodeVisualController::get_missionNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodeVisualController*), "get_missionNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodeVisualController::get_selected
// Il2CppName: get_selected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MissionNodeVisualController::*)()>(&GlobalNamespace::MissionNodeVisualController::get_selected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodeVisualController*), "get_selected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodeVisualController::get_isInitialized
// Il2CppName: get_isInitialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MissionNodeVisualController::*)()>(&GlobalNamespace::MissionNodeVisualController::get_isInitialized)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodeVisualController*), "get_isInitialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodeVisualController::get_cleared
// Il2CppName: get_cleared
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MissionNodeVisualController::*)()>(&GlobalNamespace::MissionNodeVisualController::get_cleared)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodeVisualController*), "get_cleared", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodeVisualController::get_interactable
// Il2CppName: get_interactable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MissionNodeVisualController::*)()>(&GlobalNamespace::MissionNodeVisualController::get_interactable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodeVisualController*), "get_interactable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodeVisualController::SetSelected
// Il2CppName: SetSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionNodeVisualController::*)(bool)>(&GlobalNamespace::MissionNodeVisualController::SetSelected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodeVisualController*), "SetSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodeVisualController::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionNodeVisualController::*)()>(&GlobalNamespace::MissionNodeVisualController::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodeVisualController*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodeVisualController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionNodeVisualController::*)()>(&GlobalNamespace::MissionNodeVisualController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodeVisualController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodeVisualController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionNodeVisualController::*)()>(&GlobalNamespace::MissionNodeVisualController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodeVisualController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodeVisualController::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionNodeVisualController::*)()>(&GlobalNamespace::MissionNodeVisualController::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodeVisualController*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodeVisualController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionNodeVisualController::*)()>(&GlobalNamespace::MissionNodeVisualController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodeVisualController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodeVisualController::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionNodeVisualController::*)()>(&GlobalNamespace::MissionNodeVisualController::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodeVisualController*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodeVisualController::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionNodeVisualController::*)(bool, bool)>(&GlobalNamespace::MissionNodeVisualController::Setup)> {
  static const MethodInfo* get() {
    static auto* cleared = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* interactable = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodeVisualController*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cleared, interactable});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodeVisualController::SetupToggle
// Il2CppName: SetupToggle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionNodeVisualController::*)()>(&GlobalNamespace::MissionNodeVisualController::SetupToggle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodeVisualController*), "SetupToggle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodeVisualController::SetMissionCleared
// Il2CppName: SetMissionCleared
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionNodeVisualController::*)()>(&GlobalNamespace::MissionNodeVisualController::SetMissionCleared)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodeVisualController*), "SetMissionCleared", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodeVisualController::SetInteractable
// Il2CppName: SetInteractable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionNodeVisualController::*)()>(&GlobalNamespace::MissionNodeVisualController::SetInteractable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodeVisualController*), "SetInteractable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodeVisualController::ChangeNodeSelection
// Il2CppName: ChangeNodeSelection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionNodeVisualController::*)(bool)>(&GlobalNamespace::MissionNodeVisualController::ChangeNodeSelection)> {
  static const MethodInfo* get() {
    static auto* selected = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodeVisualController*), "ChangeNodeSelection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{selected});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodeVisualController::HandleMissionToggleSelectionDidChange
// Il2CppName: HandleMissionToggleSelectionDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionNodeVisualController::*)(GlobalNamespace::MissionToggle*)>(&GlobalNamespace::MissionNodeVisualController::HandleMissionToggleSelectionDidChange)> {
  static const MethodInfo* get() {
    static auto* toggle = &::il2cpp_utils::GetClassFromName("", "MissionToggle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionNodeVisualController*), "HandleMissionToggleSelectionDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toggle});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionNodeVisualController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
