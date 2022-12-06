// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionObjectiveGameUIView
  class MissionObjectiveGameUIView;
  // Forward declaring type: MissionObjectiveCheckersManager
  class MissionObjectiveCheckersManager;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MissionObjectivesGameUIController
  class MissionObjectivesGameUIController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MissionObjectivesGameUIController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionObjectivesGameUIController*, "", "MissionObjectivesGameUIController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: MissionObjectivesGameUIController
  // [TokenAttribute] Offset: FFFFFFFF
  class MissionObjectivesGameUIController : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private MissionObjectiveGameUIView _missionObjectiveGameUIViewPrefab
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::MissionObjectiveGameUIView* missionObjectiveGameUIViewPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MissionObjectiveGameUIView*) == 0x8);
    // private System.Single _separator
    // Size: 0x4
    // Offset: 0x20
    float separator;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _elementWidth
    // Size: 0x4
    // Offset: 0x24
    float elementWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [InjectAttribute] Offset: 0x11182E0
    // private MissionObjectiveCheckersManager _missionObjectiveCheckersManager
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::MissionObjectiveCheckersManager* missionObjectiveCheckersManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MissionObjectiveCheckersManager*) == 0x8);
    // private System.Collections.Generic.List`1<MissionObjectiveGameUIView> _missionObjectiveGameUIViews
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::List_1<::GlobalNamespace::MissionObjectiveGameUIView*>* missionObjectiveGameUIViews;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::MissionObjectiveGameUIView*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private MissionObjectiveGameUIView _missionObjectiveGameUIViewPrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MissionObjectiveGameUIView*& dyn__missionObjectiveGameUIViewPrefab();
    // Get instance field reference: private System.Single _separator
    [[deprecated("Use field access instead!")]] float& dyn__separator();
    // Get instance field reference: private System.Single _elementWidth
    [[deprecated("Use field access instead!")]] float& dyn__elementWidth();
    // Get instance field reference: private MissionObjectiveCheckersManager _missionObjectiveCheckersManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MissionObjectiveCheckersManager*& dyn__missionObjectiveCheckersManager();
    // Get instance field reference: private System.Collections.Generic.List`1<MissionObjectiveGameUIView> _missionObjectiveGameUIViews
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::MissionObjectiveGameUIView*>*& dyn__missionObjectiveGameUIViews();
    // public System.Void .ctor()
    // Offset: 0x1489D38
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionObjectivesGameUIController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MissionObjectivesGameUIController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionObjectivesGameUIController*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x1489898
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1489C64
    void OnDestroy();
    // private System.Void HandleMissionObjectiveCheckersManagerObjectivesListDidChange()
    // Offset: 0x1489D34
    void HandleMissionObjectiveCheckersManagerObjectivesListDidChange();
    // private System.Void CreateUIElements()
    // Offset: 0x1489928
    void CreateUIElements();
  }; // MissionObjectivesGameUIController
  #pragma pack(pop)
  static check_size<sizeof(MissionObjectivesGameUIController), 48 + sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::MissionObjectiveGameUIView*>*)> __GlobalNamespace_MissionObjectivesGameUIControllerSizeCheck;
  static_assert(sizeof(MissionObjectivesGameUIController) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectivesGameUIController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectivesGameUIController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectivesGameUIController::*)()>(&GlobalNamespace::MissionObjectivesGameUIController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectivesGameUIController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectivesGameUIController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectivesGameUIController::*)()>(&GlobalNamespace::MissionObjectivesGameUIController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectivesGameUIController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectivesGameUIController::HandleMissionObjectiveCheckersManagerObjectivesListDidChange
// Il2CppName: HandleMissionObjectiveCheckersManagerObjectivesListDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectivesGameUIController::*)()>(&GlobalNamespace::MissionObjectivesGameUIController::HandleMissionObjectiveCheckersManagerObjectivesListDidChange)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectivesGameUIController*), "HandleMissionObjectiveCheckersManagerObjectivesListDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjectivesGameUIController::CreateUIElements
// Il2CppName: CreateUIElements
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionObjectivesGameUIController::*)()>(&GlobalNamespace::MissionObjectivesGameUIController::CreateUIElements)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjectivesGameUIController*), "CreateUIElements", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
