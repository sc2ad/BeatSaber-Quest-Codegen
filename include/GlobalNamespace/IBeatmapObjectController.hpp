// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapObjectController
  class IBeatmapObjectController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::IBeatmapObjectController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IBeatmapObjectController*, "", "IBeatmapObjectController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: IBeatmapObjectController
  // [TokenAttribute] Offset: FFFFFFFF
  class IBeatmapObjectController {
    public:
    // public System.Void Dissolve(System.Single duration)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Dissolve(float duration);
    // public System.Void Pause(System.Boolean pause)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Pause(bool pause);
    // public System.Void Hide(System.Boolean hide)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Hide(bool hide);
  }; // IBeatmapObjectController
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IBeatmapObjectController::Dissolve
// Il2CppName: Dissolve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IBeatmapObjectController::*)(float)>(&GlobalNamespace::IBeatmapObjectController::Dissolve)> {
  static const MethodInfo* get() {
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IBeatmapObjectController*), "Dissolve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{duration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IBeatmapObjectController::Pause
// Il2CppName: Pause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IBeatmapObjectController::*)(bool)>(&GlobalNamespace::IBeatmapObjectController::Pause)> {
  static const MethodInfo* get() {
    static auto* pause = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IBeatmapObjectController*), "Pause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pause});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IBeatmapObjectController::Hide
// Il2CppName: Hide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IBeatmapObjectController::*)(bool)>(&GlobalNamespace::IBeatmapObjectController::Hide)> {
  static const MethodInfo* get() {
    static auto* hide = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IBeatmapObjectController*), "Hide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hide});
  }
};
