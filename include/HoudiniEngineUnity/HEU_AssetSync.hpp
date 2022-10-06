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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_AssetSync
  class HEU_AssetSync;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_AssetSync);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_AssetSync*, "HoudiniEngineUnity", "HEU_AssetSync");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_AssetSync
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_AssetSync : public ::HoudiniEngineUnity::HEU_BaseSync {
    public:
    // Writing base type padding for base size: 0x7D to desired offset: 0x80
    char ___base_padding[0x3] = {};
    // Nested type: ::HoudiniEngineUnity::HEU_AssetSync::AssetSyncCallback
    class AssetSyncCallback;
    public:
    // public HoudiniEngineUnity.HEU_AssetSync/HoudiniEngineUnity.AssetSyncCallback _onAssetLoaded
    // Size: 0x8
    // Offset: 0x80
    ::HoudiniEngineUnity::HEU_AssetSync::AssetSyncCallback* onAssetLoaded;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::HEU_AssetSync::AssetSyncCallback*) == 0x8);
    // public System.String _assetPath
    // Size: 0x8
    // Offset: 0x88
    ::StringW assetPath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public HoudiniEngineUnity.HEU_AssetSync/HoudiniEngineUnity.AssetSyncCallback _onAssetLoaded
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::HEU_AssetSync::AssetSyncCallback*& dyn__onAssetLoaded();
    // Get instance field reference: public System.String _assetPath
    [[deprecated("Use field access instead!")]] ::StringW& dyn__assetPath();
    // private System.Void OnEnable()
    // Offset: 0x16F4094
    void OnEnable();
    // public System.Void InitializeAsset(HoudiniEngineUnity.HEU_SessionBase session, System.String assetPath, System.String nodeName, UnityEngine.Transform parent, UnityEngine.Vector3 startPosition)
    // Offset: 0x16F40A4
    void InitializeAsset(::HoudiniEngineUnity::HEU_SessionBase* session, ::StringW assetPath, ::StringW nodeName, ::UnityEngine::Transform* parent, ::UnityEngine::Vector3 startPosition);
    // private HoudiniEngineUnity.HEU_ThreadedTaskLoadGeo CreateThreadedTask()
    // Offset: 0x16F41B4
    ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo* CreateThreadedTask();
    // public System.Void SetLoadCallback(HoudiniEngineUnity.HEU_ThreadedTaskLoadGeo/HoudiniEngineUnity.HEU_LoadCallback callback)
    // Offset: 0x16F4228
    void SetLoadCallback(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::HEU_LoadCallback* callback);
    // public System.Void .ctor()
    // Offset: 0x16F4758
    // Implemented from: HoudiniEngineUnity.HEU_BaseSync
    // Base method: System.Void HEU_BaseSync::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_AssetSync* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_AssetSync::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_AssetSync*, creationType>()));
    }
    // private System.Void OnDestroy()
    // Offset: 0x16F4098
    // Implemented from: HoudiniEngineUnity.HEU_BaseSync
    // Base method: System.Void HEU_BaseSync::OnDestroy()
    void OnDestroy();
    // protected override System.Void SetupLoadTask(HoudiniEngineUnity.HEU_SessionBase session)
    // Offset: 0x16F4264
    // Implemented from: HoudiniEngineUnity.HEU_BaseSync
    // Base method: System.Void HEU_BaseSync::SetupLoadTask(HoudiniEngineUnity.HEU_SessionBase session)
    void SetupLoadTask(::HoudiniEngineUnity::HEU_SessionBase* session);
    // public override System.Void OnLoadComplete(HoudiniEngineUnity.HEU_ThreadedTaskLoadGeo/HoudiniEngineUnity.HEU_LoadData loadData)
    // Offset: 0x16F42C4
    // Implemented from: HoudiniEngineUnity.HEU_BaseSync
    // Base method: System.Void HEU_BaseSync::OnLoadComplete(HoudiniEngineUnity.HEU_ThreadedTaskLoadGeo/HoudiniEngineUnity.HEU_LoadData loadData)
    void OnLoadComplete(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::HEU_LoadData* loadData);
    // public override System.Void Resync()
    // Offset: 0x16F4718
    // Implemented from: HoudiniEngineUnity.HEU_BaseSync
    // Base method: System.Void HEU_BaseSync::Resync()
    void Resync();
  }; // HoudiniEngineUnity.HEU_AssetSync
  #pragma pack(pop)
  static check_size<sizeof(HEU_AssetSync), 136 + sizeof(::StringW)> __HoudiniEngineUnity_HEU_AssetSyncSizeCheck;
  static_assert(sizeof(HEU_AssetSync) == 0x90);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_AssetSync::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_AssetSync::*)()>(&HoudiniEngineUnity::HEU_AssetSync::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_AssetSync*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_AssetSync::InitializeAsset
// Il2CppName: InitializeAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_AssetSync::*)(::HoudiniEngineUnity::HEU_SessionBase*, ::StringW, ::StringW, ::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&HoudiniEngineUnity::HEU_AssetSync::InitializeAsset)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* assetPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* nodeName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* parent = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* startPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_AssetSync*), "InitializeAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, assetPath, nodeName, parent, startPosition});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_AssetSync::CreateThreadedTask
// Il2CppName: CreateThreadedTask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo* (HoudiniEngineUnity::HEU_AssetSync::*)()>(&HoudiniEngineUnity::HEU_AssetSync::CreateThreadedTask)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_AssetSync*), "CreateThreadedTask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_AssetSync::SetLoadCallback
// Il2CppName: SetLoadCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_AssetSync::*)(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::HEU_LoadCallback*)>(&HoudiniEngineUnity::HEU_AssetSync::SetLoadCallback)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_ThreadedTaskLoadGeo/HEU_LoadCallback")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_AssetSync*), "SetLoadCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_AssetSync::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_AssetSync::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_AssetSync::*)()>(&HoudiniEngineUnity::HEU_AssetSync::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_AssetSync*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_AssetSync::SetupLoadTask
// Il2CppName: SetupLoadTask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_AssetSync::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(&HoudiniEngineUnity::HEU_AssetSync::SetupLoadTask)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_AssetSync*), "SetupLoadTask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_AssetSync::OnLoadComplete
// Il2CppName: OnLoadComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_AssetSync::*)(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo::HEU_LoadData*)>(&HoudiniEngineUnity::HEU_AssetSync::OnLoadComplete)> {
  static const MethodInfo* get() {
    static auto* loadData = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_ThreadedTaskLoadGeo/HEU_LoadData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_AssetSync*), "OnLoadComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{loadData});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_AssetSync::Resync
// Il2CppName: Resync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_AssetSync::*)()>(&HoudiniEngineUnity::HEU_AssetSync::Resync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_AssetSync*), "Resync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
