// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SelectableStateController`1
#include "GlobalNamespace/SelectableStateController_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: NoTransitionsToggle
  class NoTransitionsToggle;
  // Forward declaring type: UISelectionState
  struct UISelectionState;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: NoTransitionToggleSelectableStateController
  class NoTransitionToggleSelectableStateController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::NoTransitionToggleSelectableStateController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoTransitionToggleSelectableStateController*, "", "NoTransitionToggleSelectableStateController");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: NoTransitionToggleSelectableStateController
  // [TokenAttribute] Offset: FFFFFFFF
  class NoTransitionToggleSelectableStateController : public ::GlobalNamespace::SelectableStateController_1<::HMUI::NoTransitionsToggle*> {
    public:
    // protected System.Void OnEnable()
    // Offset: 0x1472768
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x14727FC
    void OnDisable();
    // private System.Void HandleNoTransitionToggleSelectionStateDidChange(HMUI.UISelectionState state)
    // Offset: 0x1472890
    void HandleNoTransitionToggleSelectionStateDidChange(::HMUI::UISelectionState state);
    // public System.Void .ctor()
    // Offset: 0x14728E4
    // Implemented from: SelectableStateController`1
    // Base method: System.Void SelectableStateController_1::.ctor()
    // Base method: System.Void SelectableStateController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoTransitionToggleSelectableStateController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NoTransitionToggleSelectableStateController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoTransitionToggleSelectableStateController*, creationType>()));
    }
  }; // NoTransitionToggleSelectableStateController
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NoTransitionToggleSelectableStateController::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoTransitionToggleSelectableStateController::*)()>(&GlobalNamespace::NoTransitionToggleSelectableStateController::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoTransitionToggleSelectableStateController*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoTransitionToggleSelectableStateController::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoTransitionToggleSelectableStateController::*)()>(&GlobalNamespace::NoTransitionToggleSelectableStateController::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoTransitionToggleSelectableStateController*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoTransitionToggleSelectableStateController::HandleNoTransitionToggleSelectionStateDidChange
// Il2CppName: HandleNoTransitionToggleSelectionStateDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoTransitionToggleSelectableStateController::*)(::HMUI::UISelectionState)>(&GlobalNamespace::NoTransitionToggleSelectableStateController::HandleNoTransitionToggleSelectionStateDidChange)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("HMUI", "UISelectionState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoTransitionToggleSelectableStateController*), "HandleNoTransitionToggleSelectionStateDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoTransitionToggleSelectableStateController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!