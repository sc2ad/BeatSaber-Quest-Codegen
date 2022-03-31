// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SelectableStateController`1
#include "GlobalNamespace/SelectableStateController_1.hpp"
// Including type: HMUI.SelectableCell
#include "HMUI/SelectableCell.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: Interactable because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SelectableCellSelectableStateController
  class SelectableCellSelectableStateController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SelectableCellSelectableStateController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelectableCellSelectableStateController*, "", "SelectableCellSelectableStateController");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: SelectableCellSelectableStateController
  // [TokenAttribute] Offset: FFFFFFFF
  class SelectableCellSelectableStateController : public ::GlobalNamespace::SelectableStateController_1<::HMUI::SelectableCell*> {
    public:
    // protected System.Void OnEnable()
    // Offset: 0x1427B94
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x1427CC0
    void OnDisable();
    // private System.Void HandleSelectableCellInteractableDidChange(HMUI.Interactable interactableCell, System.Boolean interactable)
    // Offset: 0x1427DEC
    void HandleSelectableCellInteractableDidChange(::HMUI::Interactable* interactableCell, bool interactable);
    // private System.Void HandleSelectableCellHighlightDidChange(HMUI.SelectableCell selectableCell, HMUI.SelectableCell/HMUI.TransitionType transitionType)
    // Offset: 0x1427ED0
    void HandleSelectableCellHighlightDidChange(::HMUI::SelectableCell* selectableCell, ::HMUI::SelectableCell::TransitionType transitionType);
    // private System.Void HandleSelectableCellSelectionStateDidChange(HMUI.SelectableCell selectableCell, HMUI.SelectableCell/HMUI.TransitionType transitionType, System.Object owner)
    // Offset: 0x1427ED4
    void HandleSelectableCellSelectionStateDidChange(::HMUI::SelectableCell* selectableCell, ::HMUI::SelectableCell::TransitionType transitionType, ::Il2CppObject* owner);
    // private System.Void ResolveState(HMUI.SelectableCell selectableCell, HMUI.SelectableCell/HMUI.TransitionType transitionType)
    // Offset: 0x1427E84
    void ResolveState(::HMUI::SelectableCell* selectableCell, ::HMUI::SelectableCell::TransitionType transitionType);
    // public System.Void .ctor()
    // Offset: 0x1427F58
    // Implemented from: SelectableStateController`1
    // Base method: System.Void SelectableStateController_1::.ctor()
    // Base method: System.Void SelectableStateController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SelectableCellSelectableStateController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SelectableCellSelectableStateController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SelectableCellSelectableStateController*, creationType>()));
    }
  }; // SelectableCellSelectableStateController
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SelectableCellSelectableStateController::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SelectableCellSelectableStateController::*)()>(&GlobalNamespace::SelectableCellSelectableStateController::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SelectableCellSelectableStateController*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SelectableCellSelectableStateController::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SelectableCellSelectableStateController::*)()>(&GlobalNamespace::SelectableCellSelectableStateController::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SelectableCellSelectableStateController*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SelectableCellSelectableStateController::HandleSelectableCellInteractableDidChange
// Il2CppName: HandleSelectableCellInteractableDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SelectableCellSelectableStateController::*)(::HMUI::Interactable*, bool)>(&GlobalNamespace::SelectableCellSelectableStateController::HandleSelectableCellInteractableDidChange)> {
  static const MethodInfo* get() {
    static auto* interactableCell = &::il2cpp_utils::GetClassFromName("HMUI", "Interactable")->byval_arg;
    static auto* interactable = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SelectableCellSelectableStateController*), "HandleSelectableCellInteractableDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactableCell, interactable});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SelectableCellSelectableStateController::HandleSelectableCellHighlightDidChange
// Il2CppName: HandleSelectableCellHighlightDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SelectableCellSelectableStateController::*)(::HMUI::SelectableCell*, ::HMUI::SelectableCell::TransitionType)>(&GlobalNamespace::SelectableCellSelectableStateController::HandleSelectableCellHighlightDidChange)> {
  static const MethodInfo* get() {
    static auto* selectableCell = &::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell")->byval_arg;
    static auto* transitionType = &::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell/TransitionType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SelectableCellSelectableStateController*), "HandleSelectableCellHighlightDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{selectableCell, transitionType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SelectableCellSelectableStateController::HandleSelectableCellSelectionStateDidChange
// Il2CppName: HandleSelectableCellSelectionStateDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SelectableCellSelectableStateController::*)(::HMUI::SelectableCell*, ::HMUI::SelectableCell::TransitionType, ::Il2CppObject*)>(&GlobalNamespace::SelectableCellSelectableStateController::HandleSelectableCellSelectionStateDidChange)> {
  static const MethodInfo* get() {
    static auto* selectableCell = &::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell")->byval_arg;
    static auto* transitionType = &::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell/TransitionType")->byval_arg;
    static auto* owner = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SelectableCellSelectableStateController*), "HandleSelectableCellSelectionStateDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{selectableCell, transitionType, owner});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SelectableCellSelectableStateController::ResolveState
// Il2CppName: ResolveState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SelectableCellSelectableStateController::*)(::HMUI::SelectableCell*, ::HMUI::SelectableCell::TransitionType)>(&GlobalNamespace::SelectableCellSelectableStateController::ResolveState)> {
  static const MethodInfo* get() {
    static auto* selectableCell = &::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell")->byval_arg;
    static auto* transitionType = &::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell/TransitionType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SelectableCellSelectableStateController*), "ResolveState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{selectableCell, transitionType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SelectableCellSelectableStateController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
