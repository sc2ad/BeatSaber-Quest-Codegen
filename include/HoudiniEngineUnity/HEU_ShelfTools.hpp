// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
  // Forward declaring type: HEU_Shelf
  class HEU_Shelf;
  // Forward declaring type: HEU_ShelfToolData
  class HEU_ShelfToolData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Quaternion
  struct Quaternion;
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_ShelfTools
  class HEU_ShelfTools;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_ShelfTools);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_ShelfTools*, "HoudiniEngineUnity", "HEU_ShelfTools");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_ShelfTools
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_ShelfTools : public ::Il2CppObject {
    public:
    // Get static field: static private System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_Shelf> _shelves
    static ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Shelf*>* _get__shelves();
    // Set static field: static private System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_Shelf> _shelves
    static void _set__shelves(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Shelf*>* value);
    // Get static field: static private System.Boolean _shelvesLoaded
    static bool _get__shelvesLoaded();
    // Set static field: static private System.Boolean _shelvesLoaded
    static void _set__shelvesLoaded(bool value);
    // Get static field: static private System.Int32 _currentSelectedShelf
    static int _get__currentSelectedShelf();
    // Set static field: static private System.Int32 _currentSelectedShelf
    static void _set__currentSelectedShelf(int value);
    // static field const value: static public System.String TARGET_ALL
    static constexpr const char* TARGET_ALL = "all";
    // Get static field: static public System.String TARGET_ALL
    static ::StringW _get_TARGET_ALL();
    // Set static field: static public System.String TARGET_ALL
    static void _set_TARGET_ALL(::StringW value);
    // static field const value: static public System.String TARGET_UNITY
    static constexpr const char* TARGET_UNITY = "unity";
    // Get static field: static public System.String TARGET_UNITY
    static ::StringW _get_TARGET_UNITY();
    // Set static field: static public System.String TARGET_UNITY
    static void _set_TARGET_UNITY(::StringW value);
    // public System.Void .ctor()
    // Offset: 0x1B04D58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_ShelfTools* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_ShelfTools::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_ShelfTools*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1B04D60
    static void _cctor();
    // static public System.Boolean AreShelvesLoaded()
    // Offset: 0x1B0183C
    static bool AreShelvesLoaded();
    // static public System.Void SetReloadShelves()
    // Offset: 0x1B018A4
    static void SetReloadShelves();
    // static public System.Void ClearShelves()
    // Offset: 0x1B0190C
    static void ClearShelves();
    // static public System.Int32 GetNumShelves()
    // Offset: 0x1B01988
    static int GetNumShelves();
    // static public System.Int32 GetCurrentShelfIndex()
    // Offset: 0x1B019FC
    static int GetCurrentShelfIndex();
    // static public System.Void SetCurrentShelf(System.Int32 index)
    // Offset: 0x1B01A64
    static void SetCurrentShelf(int index);
    // static public HoudiniEngineUnity.HEU_Shelf GetShelf(System.Int32 index)
    // Offset: 0x1B01AD0
    static ::HoudiniEngineUnity::HEU_Shelf* GetShelf(int index);
    // static public HoudiniEngineUnity.HEU_Shelf GetShelf(System.String shelfName)
    // Offset: 0x1B01BA8
    static ::HoudiniEngineUnity::HEU_Shelf* GetShelf(::StringW shelfName);
    // static public System.String GetShelfStorageEntry(System.String shelfName, System.String shelfPath)
    // Offset: 0x1B01CF8
    static ::StringW GetShelfStorageEntry(::StringW shelfName, ::StringW shelfPath);
    // static public System.Void GetSplitShelfEntry(System.String shelfEntry, out System.String shelfName, out System.String shelfPath)
    // Offset: 0x1B01D5C
    static void GetSplitShelfEntry(::StringW shelfEntry, ByRef<::StringW> shelfName, ByRef<::StringW> shelfPath);
    // static public System.Void LoadShelves()
    // Offset: 0x1B01E28
    static void LoadShelves();
    // static public System.Boolean LoadToolsFromDirectory(System.String folderPath, out System.Collections.Generic.List`1<HoudiniEngineUnity.HEU_ShelfToolData> tools)
    // Offset: 0x1B02580
    static bool LoadToolsFromDirectory(::StringW folderPath, ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ShelfToolData*>*> tools);
    // static public HoudiniEngineUnity.HEU_ShelfToolData LoadToolFromJsonFile(System.String jsonFilePath)
    // Offset: 0x1B029A0
    static ::HoudiniEngineUnity::HEU_ShelfToolData* LoadToolFromJsonFile(::StringW jsonFilePath);
    // static public HoudiniEngineUnity.HEU_ShelfToolData LoadToolFromJsonString(System.String json, System.String jsonFilePath)
    // Offset: 0x1B02B80
    static ::HoudiniEngineUnity::HEU_ShelfToolData* LoadToolFromJsonString(::StringW json, ::StringW jsonFilePath);
    // static public HoudiniEngineUnity.HEU_Shelf AddShelf(System.String shelfName, System.String shelfPath)
    // Offset: 0x1B024C8
    static ::HoudiniEngineUnity::HEU_Shelf* AddShelf(::StringW shelfName, ::StringW shelfPath);
    // static public System.Void RemoveShelf(System.Int32 shelfIndex)
    // Offset: 0x1B03788
    static void RemoveShelf(int shelfIndex);
    // static public System.Void SaveShelf()
    // Offset: 0x1B027D0
    static void SaveShelf();
    // static public System.Void ExecuteTool(System.Int32 toolSlot)
    // Offset: 0x1B03910
    static void ExecuteTool(int toolSlot);
    // static public System.Void ExecuteToolGenerator(System.String toolName, System.String toolPath, UnityEngine.Vector3 targetPosition, UnityEngine.Quaternion targetRotation, UnityEngine.Vector3 targetScale)
    // Offset: 0x1B03CCC
    static void ExecuteToolGenerator(::StringW toolName, ::StringW toolPath, ::UnityEngine::Vector3 targetPosition, ::UnityEngine::Quaternion targetRotation, ::UnityEngine::Vector3 targetScale);
    // static public System.Boolean IsValidInput(UnityEngine.GameObject gameObject)
    // Offset: 0x1B04B64
    static bool IsValidInput(::UnityEngine::GameObject* gameObject);
    // static public System.Void ExecuteToolNoInput(System.String toolName, System.String toolPath)
    // Offset: 0x1B03ED8
    static void ExecuteToolNoInput(::StringW toolName, ::StringW toolPath);
    // static public System.Void ExecuteToolOperatorSingle(System.String toolName, System.String toolPath, UnityEngine.GameObject[] inputObjects)
    // Offset: 0x1B04088
    static void ExecuteToolOperatorSingle(::StringW toolName, ::StringW toolPath, ::ArrayW<::UnityEngine::GameObject*> inputObjects);
    // static public System.Void ExecuteToolOperatorMultiple(System.String toolName, System.String toolPath, UnityEngine.GameObject[] inputObjects)
    // Offset: 0x1B045D8
    static void ExecuteToolOperatorMultiple(::StringW toolName, ::StringW toolPath, ::ArrayW<::UnityEngine::GameObject*> inputObjects);
    // static public System.Void ExecuteToolBatch(System.String toolName, System.String toolPath, UnityEngine.GameObject[] batchObjects)
    // Offset: 0x1B04AE8
    static void ExecuteToolBatch(::StringW toolName, ::StringW toolPath, ::ArrayW<::UnityEngine::GameObject*> batchObjects);
    // static public System.String GetToolResourcePath(HoudiniEngineUnity.HEU_ShelfToolData tool, System.String inPath, System.String ext)
    // Offset: 0x1B04C74
    static ::StringW GetToolResourcePath(::HoudiniEngineUnity::HEU_ShelfToolData* tool, ::StringW inPath, ::StringW ext);
    // static public System.String GetToolIconPath(HoudiniEngineUnity.HEU_ShelfToolData tool, System.String inPath)
    // Offset: 0x1B03648
    static ::StringW GetToolIconPath(::HoudiniEngineUnity::HEU_ShelfToolData* tool, ::StringW inPath);
    // static public System.String GetToolAssetPath(HoudiniEngineUnity.HEU_ShelfToolData tool, System.String inPath)
    // Offset: 0x1B03500
    static ::StringW GetToolAssetPath(::HoudiniEngineUnity::HEU_ShelfToolData* tool, ::StringW inPath);
  }; // HoudiniEngineUnity.HEU_ShelfTools
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ShelfTools::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ShelfTools::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&HoudiniEngineUnity::HEU_ShelfTools::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ShelfTools*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ShelfTools::AreShelvesLoaded
// Il2CppName: AreShelvesLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&HoudiniEngineUnity::HEU_ShelfTools::AreShelvesLoaded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ShelfTools*), "AreShelvesLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ShelfTools::SetReloadShelves
// Il2CppName: SetReloadShelves
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&HoudiniEngineUnity::HEU_ShelfTools::SetReloadShelves)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ShelfTools*), "SetReloadShelves", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ShelfTools::ClearShelves
// Il2CppName: ClearShelves
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&HoudiniEngineUnity::HEU_ShelfTools::ClearShelves)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ShelfTools*), "ClearShelves", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ShelfTools::GetNumShelves
// Il2CppName: GetNumShelves
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&HoudiniEngineUnity::HEU_ShelfTools::GetNumShelves)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ShelfTools*), "GetNumShelves", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ShelfTools::GetCurrentShelfIndex
// Il2CppName: GetCurrentShelfIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&HoudiniEngineUnity::HEU_ShelfTools::GetCurrentShelfIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ShelfTools*), "GetCurrentShelfIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ShelfTools::SetCurrentShelf
// Il2CppName: SetCurrentShelf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&HoudiniEngineUnity::HEU_ShelfTools::SetCurrentShelf)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ShelfTools*), "SetCurrentShelf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ShelfTools::GetShelf
// Il2CppName: GetShelf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_Shelf* (*)(int)>(&HoudiniEngineUnity::HEU_ShelfTools::GetShelf)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ShelfTools*), "GetShelf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ShelfTools::GetShelf
// Il2CppName: GetShelf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_Shelf* (*)(::StringW)>(&HoudiniEngineUnity::HEU_ShelfTools::GetShelf)> {
  static const MethodInfo* get() {
    static auto* shelfName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ShelfTools*), "GetShelf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{shelfName});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ShelfTools::GetShelfStorageEntry
// Il2CppName: GetShelfStorageEntry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW)>(&HoudiniEngineUnity::HEU_ShelfTools::GetShelfStorageEntry)> {
  static const MethodInfo* get() {
    static auto* shelfName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* shelfPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ShelfTools*), "GetShelfStorageEntry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{shelfName, shelfPath});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ShelfTools::GetSplitShelfEntry
// Il2CppName: GetSplitShelfEntry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ByRef<::StringW>, ByRef<::StringW>)>(&HoudiniEngineUnity::HEU_ShelfTools::GetSplitShelfEntry)> {
  static const MethodInfo* get() {
    static auto* shelfEntry = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* shelfName = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    static auto* shelfPath = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ShelfTools*), "GetSplitShelfEntry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{shelfEntry, shelfName, shelfPath});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ShelfTools::LoadShelves
// Il2CppName: LoadShelves
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&HoudiniEngineUnity::HEU_ShelfTools::LoadShelves)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ShelfTools*), "LoadShelves", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ShelfTools::LoadToolsFromDirectory
// Il2CppName: LoadToolsFromDirectory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ShelfToolData*>*>)>(&HoudiniEngineUnity::HEU_ShelfTools::LoadToolsFromDirectory)> {
  static const MethodInfo* get() {
    static auto* folderPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* tools = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_ShelfToolData")})->this_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ShelfTools*), "LoadToolsFromDirectory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{folderPath, tools});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ShelfTools::LoadToolFromJsonFile
// Il2CppName: LoadToolFromJsonFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_ShelfToolData* (*)(::StringW)>(&HoudiniEngineUnity::HEU_ShelfTools::LoadToolFromJsonFile)> {
  static const MethodInfo* get() {
    static auto* jsonFilePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ShelfTools*), "LoadToolFromJsonFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{jsonFilePath});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ShelfTools::LoadToolFromJsonString
// Il2CppName: LoadToolFromJsonString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_ShelfToolData* (*)(::StringW, ::StringW)>(&HoudiniEngineUnity::HEU_ShelfTools::LoadToolFromJsonString)> {
  static const MethodInfo* get() {
    static auto* json = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* jsonFilePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ShelfTools*), "LoadToolFromJsonString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{json, jsonFilePath});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ShelfTools::AddShelf
// Il2CppName: AddShelf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_Shelf* (*)(::StringW, ::StringW)>(&HoudiniEngineUnity::HEU_ShelfTools::AddShelf)> {
  static const MethodInfo* get() {
    static auto* shelfName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* shelfPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ShelfTools*), "AddShelf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{shelfName, shelfPath});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ShelfTools::RemoveShelf
// Il2CppName: RemoveShelf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&HoudiniEngineUnity::HEU_ShelfTools::RemoveShelf)> {
  static const MethodInfo* get() {
    static auto* shelfIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ShelfTools*), "RemoveShelf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{shelfIndex});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ShelfTools::SaveShelf
// Il2CppName: SaveShelf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&HoudiniEngineUnity::HEU_ShelfTools::SaveShelf)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ShelfTools*), "SaveShelf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ShelfTools::ExecuteTool
// Il2CppName: ExecuteTool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&HoudiniEngineUnity::HEU_ShelfTools::ExecuteTool)> {
  static const MethodInfo* get() {
    static auto* toolSlot = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ShelfTools*), "ExecuteTool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toolSlot});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ShelfTools::ExecuteToolGenerator
// Il2CppName: ExecuteToolGenerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&HoudiniEngineUnity::HEU_ShelfTools::ExecuteToolGenerator)> {
  static const MethodInfo* get() {
    static auto* toolName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* toolPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* targetPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* targetRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* targetScale = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ShelfTools*), "ExecuteToolGenerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toolName, toolPath, targetPosition, targetRotation, targetScale});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ShelfTools::IsValidInput
// Il2CppName: IsValidInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::GameObject*)>(&HoudiniEngineUnity::HEU_ShelfTools::IsValidInput)> {
  static const MethodInfo* get() {
    static auto* gameObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ShelfTools*), "IsValidInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gameObject});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ShelfTools::ExecuteToolNoInput
// Il2CppName: ExecuteToolNoInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW)>(&HoudiniEngineUnity::HEU_ShelfTools::ExecuteToolNoInput)> {
  static const MethodInfo* get() {
    static auto* toolName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* toolPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ShelfTools*), "ExecuteToolNoInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toolName, toolPath});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ShelfTools::ExecuteToolOperatorSingle
// Il2CppName: ExecuteToolOperatorSingle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, ::ArrayW<::UnityEngine::GameObject*>)>(&HoudiniEngineUnity::HEU_ShelfTools::ExecuteToolOperatorSingle)> {
  static const MethodInfo* get() {
    static auto* toolName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* toolPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* inputObjects = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ShelfTools*), "ExecuteToolOperatorSingle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toolName, toolPath, inputObjects});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ShelfTools::ExecuteToolOperatorMultiple
// Il2CppName: ExecuteToolOperatorMultiple
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, ::ArrayW<::UnityEngine::GameObject*>)>(&HoudiniEngineUnity::HEU_ShelfTools::ExecuteToolOperatorMultiple)> {
  static const MethodInfo* get() {
    static auto* toolName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* toolPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* inputObjects = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ShelfTools*), "ExecuteToolOperatorMultiple", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toolName, toolPath, inputObjects});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ShelfTools::ExecuteToolBatch
// Il2CppName: ExecuteToolBatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, ::ArrayW<::UnityEngine::GameObject*>)>(&HoudiniEngineUnity::HEU_ShelfTools::ExecuteToolBatch)> {
  static const MethodInfo* get() {
    static auto* toolName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* toolPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* batchObjects = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ShelfTools*), "ExecuteToolBatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toolName, toolPath, batchObjects});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ShelfTools::GetToolResourcePath
// Il2CppName: GetToolResourcePath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::HoudiniEngineUnity::HEU_ShelfToolData*, ::StringW, ::StringW)>(&HoudiniEngineUnity::HEU_ShelfTools::GetToolResourcePath)> {
  static const MethodInfo* get() {
    static auto* tool = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_ShelfToolData")->byval_arg;
    static auto* inPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ext = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ShelfTools*), "GetToolResourcePath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tool, inPath, ext});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ShelfTools::GetToolIconPath
// Il2CppName: GetToolIconPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::HoudiniEngineUnity::HEU_ShelfToolData*, ::StringW)>(&HoudiniEngineUnity::HEU_ShelfTools::GetToolIconPath)> {
  static const MethodInfo* get() {
    static auto* tool = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_ShelfToolData")->byval_arg;
    static auto* inPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ShelfTools*), "GetToolIconPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tool, inPath});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_ShelfTools::GetToolAssetPath
// Il2CppName: GetToolAssetPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::HoudiniEngineUnity::HEU_ShelfToolData*, ::StringW)>(&HoudiniEngineUnity::HEU_ShelfTools::GetToolAssetPath)> {
  static const MethodInfo* get() {
    static auto* tool = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_ShelfToolData")->byval_arg;
    static auto* inPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_ShelfTools*), "GetToolAssetPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tool, inPath});
  }
};
