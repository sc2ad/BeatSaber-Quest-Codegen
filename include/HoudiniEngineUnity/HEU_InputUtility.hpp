// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_InputInterface
  class HEU_InputInterface;
  // Forward declaring type: HEU_InputObjectInfo
  class HEU_InputObjectInfo;
  // Forward declaring type: HEU_SessionBase
  class HEU_SessionBase;
  // Forward declaring type: HEU_InputNode
  class HEU_InputNode;
  // Forward declaring type: HEU_HoudiniAsset
  class HEU_HoudiniAsset;
  // Forward declaring type: HEU_InputHDAInfo
  class HEU_InputHDAInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_InputUtility
  class HEU_InputUtility;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InputUtility);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InputUtility*, "HoudiniEngineUnity", "HEU_InputUtility");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_InputUtility
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_InputUtility : public ::Il2CppObject {
    public:
    // Get static field: static private System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_InputInterface> _inputInterfaces
    static ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputInterface*>* _get__inputInterfaces();
    // Set static field: static private System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_InputInterface> _inputInterfaces
    static void _set__inputInterfaces(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputInterface*>* value);
    // static private System.Void .cctor()
    // Offset: 0x185AC80
    static void _cctor();
    // static public System.Int32 GetHighestPriority()
    // Offset: 0x185A780
    static int GetHighestPriority();
    // static public System.Void RegisterInputInterface(HoudiniEngineUnity.HEU_InputInterface inputInterface)
    // Offset: 0x184D870
    static void RegisterInputInterface(::HoudiniEngineUnity::HEU_InputInterface* inputInterface);
    // static public System.Void UnregisterInputInterface(HoudiniEngineUnity.HEU_InputInterface inputInterface)
    // Offset: 0x185A9C4
    static void UnregisterInputInterface(::HoudiniEngineUnity::HEU_InputInterface* inputInterface);
    // static public HoudiniEngineUnity.HEU_InputInterface GetInputInterfaceByType(System.Type type)
    // Offset: 0x185A850
    static ::HoudiniEngineUnity::HEU_InputInterface* GetInputInterfaceByType(::System::Type* type);
    // static public HoudiniEngineUnity.HEU_InputInterface GetInputInterface(UnityEngine.GameObject inputObject)
    // Offset: 0x185AA48
    static ::HoudiniEngineUnity::HEU_InputInterface* GetInputInterface(::UnityEngine::GameObject* inputObject);
    // static public HoudiniEngineUnity.HEU_InputInterface GetInputInterface(HoudiniEngineUnity.HEU_InputObjectInfo inputObjectInfo)
    // Offset: 0x185AB84
    static ::HoudiniEngineUnity::HEU_InputInterface* GetInputInterface(::HoudiniEngineUnity::HEU_InputObjectInfo* inputObjectInfo);
    // static public System.Boolean CreateInputNodeWithMultiObjects(HoudiniEngineUnity.HEU_SessionBase session, System.Int32 assetID, ref System.Int32 connectMergeID, ref System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_InputObjectInfo> inputObjects, ref System.Collections.Generic.List`1<System.Int32> inputObjectsConnectedAssetIDs, HoudiniEngineUnity.HEU_InputNode inputNode)
    // Offset: 0x1857B98
    static bool CreateInputNodeWithMultiObjects(::HoudiniEngineUnity::HEU_SessionBase* session, int assetID, ByRef<int> connectMergeID, ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>*> inputObjects, ByRef<::System::Collections::Generic::List_1<int>*> inputObjectsConnectedAssetIDs, ::HoudiniEngineUnity::HEU_InputNode* inputNode);
    // static public System.Boolean CreateInputNodeWithMultiAssets(HoudiniEngineUnity.HEU_SessionBase session, HoudiniEngineUnity.HEU_HoudiniAsset parentAsset, ref System.Int32 connectMergeID, ref System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_InputHDAInfo> inputAssetInfos, System.Boolean bKeepWorldTransform, System.Int32 mergeParentID)
    // Offset: 0x1857160
    static bool CreateInputNodeWithMultiAssets(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset, ByRef<int> connectMergeID, ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputHDAInfo*>*> inputAssetInfos, bool bKeepWorldTransform, int mergeParentID);
    // static public System.Boolean UploadInputObjectTransform(HoudiniEngineUnity.HEU_SessionBase session, HoudiniEngineUnity.HEU_InputObjectInfo inputObject, System.Int32 inputNodeID, System.Boolean bKeepWorldTransform)
    // Offset: 0x18589DC
    static bool UploadInputObjectTransform(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_InputObjectInfo* inputObject, int inputNodeID, bool bKeepWorldTransform);
  }; // HoudiniEngineUnity.HEU_InputUtility
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputUtility::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&HoudiniEngineUnity::HEU_InputUtility::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputUtility*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputUtility::GetHighestPriority
// Il2CppName: GetHighestPriority
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&HoudiniEngineUnity::HEU_InputUtility::GetHighestPriority)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputUtility*), "GetHighestPriority", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputUtility::RegisterInputInterface
// Il2CppName: RegisterInputInterface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_InputInterface*)>(&HoudiniEngineUnity::HEU_InputUtility::RegisterInputInterface)> {
  static const MethodInfo* get() {
    static auto* inputInterface = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_InputInterface")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputUtility*), "RegisterInputInterface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputInterface});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputUtility::UnregisterInputInterface
// Il2CppName: UnregisterInputInterface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_InputInterface*)>(&HoudiniEngineUnity::HEU_InputUtility::UnregisterInputInterface)> {
  static const MethodInfo* get() {
    static auto* inputInterface = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_InputInterface")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputUtility*), "UnregisterInputInterface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputInterface});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputUtility::GetInputInterfaceByType
// Il2CppName: GetInputInterfaceByType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_InputInterface* (*)(::System::Type*)>(&HoudiniEngineUnity::HEU_InputUtility::GetInputInterfaceByType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputUtility*), "GetInputInterfaceByType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputUtility::GetInputInterface
// Il2CppName: GetInputInterface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_InputInterface* (*)(::UnityEngine::GameObject*)>(&HoudiniEngineUnity::HEU_InputUtility::GetInputInterface)> {
  static const MethodInfo* get() {
    static auto* inputObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputUtility*), "GetInputInterface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputObject});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputUtility::GetInputInterface
// Il2CppName: GetInputInterface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_InputInterface* (*)(::HoudiniEngineUnity::HEU_InputObjectInfo*)>(&HoudiniEngineUnity::HEU_InputUtility::GetInputInterface)> {
  static const MethodInfo* get() {
    static auto* inputObjectInfo = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_InputObjectInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputUtility*), "GetInputInterface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputObjectInfo});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputUtility::CreateInputNodeWithMultiObjects
// Il2CppName: CreateInputNodeWithMultiObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::HEU_SessionBase*, int, ByRef<int>, ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>*>, ByRef<::System::Collections::Generic::List_1<int>*>, ::HoudiniEngineUnity::HEU_InputNode*)>(&HoudiniEngineUnity::HEU_InputUtility::CreateInputNodeWithMultiObjects)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* assetID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* connectMergeID = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* inputObjects = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_InputObjectInfo")})->this_arg;
    static auto* inputObjectsConnectedAssetIDs = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->this_arg;
    static auto* inputNode = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_InputNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputUtility*), "CreateInputNodeWithMultiObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, assetID, connectMergeID, inputObjects, inputObjectsConnectedAssetIDs, inputNode});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputUtility::CreateInputNodeWithMultiAssets
// Il2CppName: CreateInputNodeWithMultiAssets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_HoudiniAsset*, ByRef<int>, ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputHDAInfo*>*>, bool, int)>(&HoudiniEngineUnity::HEU_InputUtility::CreateInputNodeWithMultiAssets)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* parentAsset = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_HoudiniAsset")->byval_arg;
    static auto* connectMergeID = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* inputAssetInfos = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_InputHDAInfo")})->this_arg;
    static auto* bKeepWorldTransform = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* mergeParentID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputUtility*), "CreateInputNodeWithMultiAssets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, parentAsset, connectMergeID, inputAssetInfos, bKeepWorldTransform, mergeParentID});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputUtility::UploadInputObjectTransform
// Il2CppName: UploadInputObjectTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_InputObjectInfo*, int, bool)>(&HoudiniEngineUnity::HEU_InputUtility::UploadInputObjectTransform)> {
  static const MethodInfo* get() {
    static auto* session = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_SessionBase")->byval_arg;
    static auto* inputObject = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_InputObjectInfo")->byval_arg;
    static auto* inputNodeID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bKeepWorldTransform = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputUtility*), "UploadInputObjectTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{session, inputObject, inputNodeID, bKeepWorldTransform});
  }
};
