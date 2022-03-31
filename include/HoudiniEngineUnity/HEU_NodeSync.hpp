// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.HEU_BaseSync
#include "HoudiniEngineUnity/HEU_BaseSync.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_SessionBase
  class HEU_SessionBase;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_NodeSync
  class HEU_NodeSync;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_NodeSync);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_NodeSync*, "HoudiniEngineUnity", "HEU_NodeSync");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_NodeSync
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_NodeSync : public ::HoudiniEngineUnity::HEU_BaseSync {
    public:
    // Writing base type padding for base size: 0x7D to desired offset: 0x80
    char ___base_padding[0x3] = {};
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.String _nodeSaveFilePath
    // Size: 0x8
    // Offset: 0x80
    ::StringW nodeSaveFilePath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.String _nodeSaveFilePath
    ::StringW& dyn__nodeSaveFilePath();
    // private System.Void OnEnable()
    // Offset: 0x185F358
    void OnEnable();
    // public System.Void InitializeFromHoudini(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 nodeID, System.String nodeName, System.String filePath)
    // Offset: 0x185F368
    void InitializeFromHoudini(::HoudiniEngineUnity::HEU_SessionBase* session, int nodeID, ::StringW nodeName, ::StringW filePath);
    // public System.Boolean SaveNodeToFile(System.String filePath)
    // Offset: 0x185F4D4
    bool SaveNodeToFile(::StringW filePath);
    // static public System.Void CreateNodeSync(HoudiniEngineUnity.HEU_SessionBase session, System.String opName, System.String nodeNabel)
    // Offset: 0x185F584
    static void CreateNodeSync(::HoudiniEngineUnity::HEU_SessionBase* session, ::StringW opName, ::StringW nodeNabel);
    // public System.Void .ctor()
    // Offset: 0x185F9BC
    // Implemented from: HoudiniEngineUnity.HEU_BaseSync
    // Base method: System.Void HEU_BaseSync::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_NodeSync* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_NodeSync::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_NodeSync*, creationType>()));
    }
    // private System.Void OnDestroy()
    // Offset: 0x185F35C
    // Implemented from: HoudiniEngineUnity.HEU_BaseSync
    // Base method: System.Void HEU_BaseSync::OnDestroy()
    void OnDestroy();
    // protected override System.Void SetupLoadTask(HoudiniEngineUnity.HEU_SessionBase session)
    // Offset: 0x185F42C
    // Implemented from: HoudiniEngineUnity.HEU_BaseSync
    // Base method: System.Void HEU_BaseSync::SetupLoadTask(HoudiniEngineUnity.HEU_SessionBase session)
    void SetupLoadTask(::HoudiniEngineUnity::HEU_SessionBase* session);
    // public override System.Void Resync()
    // Offset: 0x185F86C
    // Implemented from: HoudiniEngineUnity.HEU_BaseSync
    // Base method: System.Void HEU_BaseSync::Resync()
    void Resync();
    // public override System.Void SyncUpdate()
    // Offset: 0x185F8AC
    // Implemented from: HoudiniEngineUnity.HEU_BaseSync
    // Base method: System.Void HEU_BaseSync::SyncUpdate()
    void SyncUpdate();
  }; // HoudiniEngineUnity.HEU_NodeSync
  #pragma pack(pop)
  static check_size<sizeof(HEU_NodeSync), 128 + sizeof(::StringW)> __HoudiniEngineUnity_HEU_NodeSyncSizeCheck;
  static_assert(sizeof(HEU_NodeSync) == 0x88);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_NodeSync::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_NodeSync::*)()>(&HoudiniEngineUnity::HEU_NodeSync::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_NodeSync*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_NodeSync::InitializeFromHoudini
// Il2CppName: InitializeFromHoudini
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_NodeSync::*)(::HoudiniEngineUnity::HEU_SessionBase*, int, ::StringW, ::StringW)>(&HoudiniEngineUnity::HEU_NodeSync::InitializeFromHoudini)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* nodeID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* nodeName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* filePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_NodeSync*), "InitializeFromHoudini", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, nodeID, nodeName, filePath});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_NodeSync::SaveNodeToFile
// Il2CppName: SaveNodeToFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_NodeSync::*)(::StringW)>(&HoudiniEngineUnity::HEU_NodeSync::SaveNodeToFile)> {
  static const MethodInfo* get() {
    static auto* filePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_NodeSync*), "SaveNodeToFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{filePath});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_NodeSync::CreateNodeSync
// Il2CppName: CreateNodeSync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_SessionBase*, ::StringW, ::StringW)>(&HoudiniEngineUnity::HEU_NodeSync::CreateNodeSync)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* opName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* nodeNabel = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_NodeSync*), "CreateNodeSync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, opName, nodeNabel});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_NodeSync::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_NodeSync::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_NodeSync::*)()>(&HoudiniEngineUnity::HEU_NodeSync::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_NodeSync*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_NodeSync::SetupLoadTask
// Il2CppName: SetupLoadTask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_NodeSync::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(&HoudiniEngineUnity::HEU_NodeSync::SetupLoadTask)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_NodeSync*), "SetupLoadTask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_NodeSync::Resync
// Il2CppName: Resync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_NodeSync::*)()>(&HoudiniEngineUnity::HEU_NodeSync::Resync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_NodeSync*), "Resync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_NodeSync::SyncUpdate
// Il2CppName: SyncUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_NodeSync::*)()>(&HoudiniEngineUnity::HEU_NodeSync::SyncUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_NodeSync*), "SyncUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
