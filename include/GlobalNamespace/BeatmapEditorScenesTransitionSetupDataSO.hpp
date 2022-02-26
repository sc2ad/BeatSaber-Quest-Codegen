// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SingleFixedSceneScenesTransitionSetupDataSO
#include "GlobalNamespace/SingleFixedSceneScenesTransitionSetupDataSO.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BeatmapEditorScenesTransitionSetupDataSO
  class BeatmapEditorScenesTransitionSetupDataSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO*, "", "BeatmapEditorScenesTransitionSetupDataSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapEditorScenesTransitionSetupDataSO
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapEditorScenesTransitionSetupDataSO : public ::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Action`1<BeatmapEditorScenesTransitionSetupDataSO> didFinishEvent
    // Size: 0x8
    // Offset: 0x30
    ::System::Action_1<::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO*>* didFinishEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO*>*) == 0x8);
    public:
    // Get instance field reference: private System.Action`1<BeatmapEditorScenesTransitionSetupDataSO> didFinishEvent
    ::System::Action_1<::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO*>*& dyn_didFinishEvent();
    // public System.Void add_didFinishEvent(System.Action`1<BeatmapEditorScenesTransitionSetupDataSO> value)
    // Offset: 0x14BDA18
    void add_didFinishEvent(::System::Action_1<::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO*>* value);
    // public System.Void remove_didFinishEvent(System.Action`1<BeatmapEditorScenesTransitionSetupDataSO> value)
    // Offset: 0x14BDABC
    void remove_didFinishEvent(::System::Action_1<::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO*>* value);
    // public System.Void Init()
    // Offset: 0x14BDB60
    void Init();
    // public System.Void Finish()
    // Offset: 0x14BDBCC
    void Finish();
    // public System.Void .ctor()
    // Offset: 0x14BDC30
    // Implemented from: SingleFixedSceneScenesTransitionSetupDataSO
    // Base method: System.Void SingleFixedSceneScenesTransitionSetupDataSO::.ctor()
    // Base method: System.Void ScenesTransitionSetupDataSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapEditorScenesTransitionSetupDataSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapEditorScenesTransitionSetupDataSO*, creationType>()));
    }
  }; // BeatmapEditorScenesTransitionSetupDataSO
  #pragma pack(pop)
  static check_size<sizeof(BeatmapEditorScenesTransitionSetupDataSO), 48 + sizeof(::System::Action_1<::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO*>*)> __GlobalNamespace_BeatmapEditorScenesTransitionSetupDataSOSizeCheck;
  static_assert(sizeof(BeatmapEditorScenesTransitionSetupDataSO) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO::add_didFinishEvent
// Il2CppName: add_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO::*)(::System::Action_1<::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO*>*)>(&GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO::add_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapEditorScenesTransitionSetupDataSO")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO::*)(::System::Action_1<::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO*>*)>(&GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO::remove_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapEditorScenesTransitionSetupDataSO")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO::Finish
// Il2CppName: Finish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO::Finish)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO*), "Finish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
