// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: Microsoft::Win32
namespace Microsoft::Win32 {
  // Forward declaring type: RegistryKey
  class RegistryKey;
  // Forward declaring type: RegistryValueOptions
  struct RegistryValueOptions;
}
// Forward declaring namespace: System::Security
namespace System::Security {
  // Forward declaring type: SecurityElement
  class SecurityElement;
}
// Completed forward declares
// Type namespace: Microsoft.Win32
namespace Microsoft::Win32 {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: Microsoft.Win32.KeyHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class KeyHandler : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public System.String Dir
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Dir;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String ActualDir
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* ActualDir;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Boolean IsVolatile
    // Size: 0x1
    // Offset: 0x20
    bool IsVolatile;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsVolatile and: values
    char __padding2[0x7] = {};
    // private System.Collections.Hashtable values
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Hashtable* values;
    // Field size check
    static_assert(sizeof(System::Collections::Hashtable*) == 0x8);
    // private System.String file
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* file;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean dirty
    // Size: 0x1
    // Offset: 0x38
    bool dirty;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get static field: static private System.Collections.Hashtable key_to_handler
    static System::Collections::Hashtable* _get_key_to_handler();
    // Set static field: static private System.Collections.Hashtable key_to_handler
    static void _set_key_to_handler(System::Collections::Hashtable* value);
    // Get static field: static private System.Collections.Hashtable dir_to_handler
    static System::Collections::Hashtable* _get_dir_to_handler();
    // Set static field: static private System.Collections.Hashtable dir_to_handler
    static void _set_dir_to_handler(System::Collections::Hashtable* value);
    // Get static field: static private System.String user_store
    static ::Il2CppString* _get_user_store();
    // Set static field: static private System.String user_store
    static void _set_user_store(::Il2CppString* value);
    // Get static field: static private System.String machine_store
    static ::Il2CppString* _get_machine_store();
    // Set static field: static private System.String machine_store
    static void _set_machine_store(::Il2CppString* value);
    // Get instance field reference: public System.String Dir
    ::Il2CppString*& dyn_Dir();
    // Get instance field reference: private System.String ActualDir
    ::Il2CppString*& dyn_ActualDir();
    // Get instance field reference: public System.Boolean IsVolatile
    bool& dyn_IsVolatile();
    // Get instance field reference: private System.Collections.Hashtable values
    System::Collections::Hashtable*& dyn_values();
    // Get instance field reference: private System.String file
    ::Il2CppString*& dyn_file();
    // Get instance field reference: private System.Boolean dirty
    bool& dyn_dirty();
    // public System.Boolean get_IsMarkedForDeletion()
    // Offset: 0x1C2DCBC
    bool get_IsMarkedForDeletion();
    // static private System.String get_UserStore()
    // Offset: 0x1C2CDD0
    static ::Il2CppString* get_UserStore();
    // static private System.String get_MachineStore()
    // Offset: 0x1C2CEDC
    static ::Il2CppString* get_MachineStore();
    // static private System.Void .cctor()
    // Offset: 0x1C2AADC
    static void _cctor();
    // private System.Void .ctor(Microsoft.Win32.RegistryKey rkey, System.String basedir)
    // Offset: 0x1C2ADF8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KeyHandler* New_ctor(Microsoft::Win32::RegistryKey* rkey, ::Il2CppString* basedir) {
      static auto ___internal__logger = ::Logger::get().WithContext("Microsoft::Win32::KeyHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KeyHandler*, creationType>(rkey, basedir)));
    }
    // private System.Void .ctor(Microsoft.Win32.RegistryKey rkey, System.String basedir, System.Boolean is_volatile)
    // Offset: 0x1C2AE00
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KeyHandler* New_ctor(Microsoft::Win32::RegistryKey* rkey, ::Il2CppString* basedir, bool is_volatile) {
      static auto ___internal__logger = ::Logger::get().WithContext("Microsoft::Win32::KeyHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KeyHandler*, creationType>(rkey, basedir, is_volatile)));
    }
    // public System.Void Load()
    // Offset: 0x1C2B090
    void Load();
    // private System.Void LoadKey(System.Security.SecurityElement se)
    // Offset: 0x1C2B6C8
    void LoadKey(System::Security::SecurityElement* se);
    // public Microsoft.Win32.RegistryKey Ensure(Microsoft.Win32.RegistryKey rkey, System.String extra, System.Boolean writable, System.Boolean is_volatile)
    // Offset: 0x1C2BD40
    Microsoft::Win32::RegistryKey* Ensure(Microsoft::Win32::RegistryKey* rkey, ::Il2CppString* extra, bool writable, bool is_volatile);
    // public Microsoft.Win32.RegistryKey Probe(Microsoft.Win32.RegistryKey rkey, System.String extra, System.Boolean writable)
    // Offset: 0x1C2C0E0
    Microsoft::Win32::RegistryKey* Probe(Microsoft::Win32::RegistryKey* rkey, ::Il2CppString* extra, bool writable);
    // static private System.String CombineName(Microsoft.Win32.RegistryKey rkey, System.String extra)
    // Offset: 0x1C2BFF8
    static ::Il2CppString* CombineName(Microsoft::Win32::RegistryKey* rkey, ::Il2CppString* extra);
    // static private System.Int64 GetSystemBootTime()
    // Offset: 0x1C2C678
    static int64_t GetSystemBootTime();
    // static private System.Int64 GetRegisteredBootTime(System.String path)
    // Offset: 0x1C2C964
    static int64_t GetRegisteredBootTime(::Il2CppString* path);
    // static private System.Void SaveRegisteredBootTime(System.String path, System.Int64 btime)
    // Offset: 0x1C2CC04
    static void SaveRegisteredBootTime(::Il2CppString* path, int64_t btime);
    // static private System.Void CleanVolatileKeys()
    // Offset: 0x1C2ABD8
    static void CleanVolatileKeys();
    // static public System.Boolean VolatileKeyExists(System.String dir)
    // Offset: 0x1C2C464
    static bool VolatileKeyExists(::Il2CppString* dir);
    // static public System.String GetVolatileDir(System.String dir)
    // Offset: 0x1C2AFD0
    static ::Il2CppString* GetVolatileDir(::Il2CppString* dir);
    // static public Microsoft.Win32.KeyHandler Lookup(Microsoft.Win32.RegistryKey rkey, System.Boolean createNonExisting)
    // Offset: 0x1C2D1B8
    static Microsoft::Win32::KeyHandler* Lookup(Microsoft::Win32::RegistryKey* rkey, bool createNonExisting);
    // static private System.String GetRootFromDir(System.String dir)
    // Offset: 0x1C2D078
    static ::Il2CppString* GetRootFromDir(::Il2CppString* dir);
    // static public System.Void Drop(Microsoft.Win32.RegistryKey rkey)
    // Offset: 0x1C2D6B8
    static void Drop(Microsoft::Win32::RegistryKey* rkey);
    // public System.Object GetValue(System.String name, Microsoft.Win32.RegistryValueOptions options)
    // Offset: 0x1C2DB44
    ::Il2CppObject* GetValue(::Il2CppString* name, Microsoft::Win32::RegistryValueOptions options);
    // public System.String[] GetSubKeyNames()
    // Offset: 0x1C2DD4C
    ::ArrayW<::Il2CppString*> GetSubKeyNames();
    // public System.Void Flush()
    // Offset: 0x1C2E178
    void Flush();
    // public System.Boolean ValueExists(System.String name)
    // Offset: 0x1C2EC58
    bool ValueExists(::Il2CppString* name);
    // private System.Void Save()
    // Offset: 0x1C2E274
    void Save();
    // protected override System.Void Finalize()
    // Offset: 0x1C2ED50
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Microsoft.Win32.KeyHandler
  #pragma pack(pop)
  static check_size<sizeof(KeyHandler), 56 + sizeof(bool)> __Microsoft_Win32_KeyHandlerSizeCheck;
  static_assert(sizeof(KeyHandler) == 0x39);
}
DEFINE_IL2CPP_ARG_TYPE(Microsoft::Win32::KeyHandler*, "Microsoft.Win32", "KeyHandler");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Microsoft::Win32::KeyHandler::get_IsMarkedForDeletion
// Il2CppName: get_IsMarkedForDeletion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Microsoft::Win32::KeyHandler::*)()>(&Microsoft::Win32::KeyHandler::get_IsMarkedForDeletion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::KeyHandler*), "get_IsMarkedForDeletion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::KeyHandler::get_UserStore
// Il2CppName: get_UserStore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)()>(&Microsoft::Win32::KeyHandler::get_UserStore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::KeyHandler*), "get_UserStore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::KeyHandler::get_MachineStore
// Il2CppName: get_MachineStore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)()>(&Microsoft::Win32::KeyHandler::get_MachineStore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::KeyHandler*), "get_MachineStore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::KeyHandler::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Microsoft::Win32::KeyHandler::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::KeyHandler*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::KeyHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Microsoft::Win32::KeyHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Microsoft::Win32::KeyHandler::Load
// Il2CppName: Load
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Microsoft::Win32::KeyHandler::*)()>(&Microsoft::Win32::KeyHandler::Load)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::KeyHandler*), "Load", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::KeyHandler::LoadKey
// Il2CppName: LoadKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Microsoft::Win32::KeyHandler::*)(System::Security::SecurityElement*)>(&Microsoft::Win32::KeyHandler::LoadKey)> {
  static const MethodInfo* get() {
    static auto* se = &::il2cpp_utils::GetClassFromName("System.Security", "SecurityElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::KeyHandler*), "LoadKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{se});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::KeyHandler::Ensure
// Il2CppName: Ensure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Microsoft::Win32::RegistryKey* (Microsoft::Win32::KeyHandler::*)(Microsoft::Win32::RegistryKey*, ::Il2CppString*, bool, bool)>(&Microsoft::Win32::KeyHandler::Ensure)> {
  static const MethodInfo* get() {
    static auto* rkey = &::il2cpp_utils::GetClassFromName("Microsoft.Win32", "RegistryKey")->byval_arg;
    static auto* extra = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* writable = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* is_volatile = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::KeyHandler*), "Ensure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rkey, extra, writable, is_volatile});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::KeyHandler::Probe
// Il2CppName: Probe
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Microsoft::Win32::RegistryKey* (Microsoft::Win32::KeyHandler::*)(Microsoft::Win32::RegistryKey*, ::Il2CppString*, bool)>(&Microsoft::Win32::KeyHandler::Probe)> {
  static const MethodInfo* get() {
    static auto* rkey = &::il2cpp_utils::GetClassFromName("Microsoft.Win32", "RegistryKey")->byval_arg;
    static auto* extra = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* writable = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::KeyHandler*), "Probe", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rkey, extra, writable});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::KeyHandler::CombineName
// Il2CppName: CombineName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(Microsoft::Win32::RegistryKey*, ::Il2CppString*)>(&Microsoft::Win32::KeyHandler::CombineName)> {
  static const MethodInfo* get() {
    static auto* rkey = &::il2cpp_utils::GetClassFromName("Microsoft.Win32", "RegistryKey")->byval_arg;
    static auto* extra = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::KeyHandler*), "CombineName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rkey, extra});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::KeyHandler::GetSystemBootTime
// Il2CppName: GetSystemBootTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)()>(&Microsoft::Win32::KeyHandler::GetSystemBootTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::KeyHandler*), "GetSystemBootTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::KeyHandler::GetRegisteredBootTime
// Il2CppName: GetRegisteredBootTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::Il2CppString*)>(&Microsoft::Win32::KeyHandler::GetRegisteredBootTime)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::KeyHandler*), "GetRegisteredBootTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::KeyHandler::SaveRegisteredBootTime
// Il2CppName: SaveRegisteredBootTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, int64_t)>(&Microsoft::Win32::KeyHandler::SaveRegisteredBootTime)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* btime = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::KeyHandler*), "SaveRegisteredBootTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, btime});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::KeyHandler::CleanVolatileKeys
// Il2CppName: CleanVolatileKeys
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Microsoft::Win32::KeyHandler::CleanVolatileKeys)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::KeyHandler*), "CleanVolatileKeys", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::KeyHandler::VolatileKeyExists
// Il2CppName: VolatileKeyExists
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&Microsoft::Win32::KeyHandler::VolatileKeyExists)> {
  static const MethodInfo* get() {
    static auto* dir = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::KeyHandler*), "VolatileKeyExists", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dir});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::KeyHandler::GetVolatileDir
// Il2CppName: GetVolatileDir
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&Microsoft::Win32::KeyHandler::GetVolatileDir)> {
  static const MethodInfo* get() {
    static auto* dir = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::KeyHandler*), "GetVolatileDir", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dir});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::KeyHandler::Lookup
// Il2CppName: Lookup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Microsoft::Win32::KeyHandler* (*)(Microsoft::Win32::RegistryKey*, bool)>(&Microsoft::Win32::KeyHandler::Lookup)> {
  static const MethodInfo* get() {
    static auto* rkey = &::il2cpp_utils::GetClassFromName("Microsoft.Win32", "RegistryKey")->byval_arg;
    static auto* createNonExisting = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::KeyHandler*), "Lookup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rkey, createNonExisting});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::KeyHandler::GetRootFromDir
// Il2CppName: GetRootFromDir
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&Microsoft::Win32::KeyHandler::GetRootFromDir)> {
  static const MethodInfo* get() {
    static auto* dir = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::KeyHandler*), "GetRootFromDir", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dir});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::KeyHandler::Drop
// Il2CppName: Drop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Microsoft::Win32::RegistryKey*)>(&Microsoft::Win32::KeyHandler::Drop)> {
  static const MethodInfo* get() {
    static auto* rkey = &::il2cpp_utils::GetClassFromName("Microsoft.Win32", "RegistryKey")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::KeyHandler*), "Drop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rkey});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::KeyHandler::GetValue
// Il2CppName: GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Microsoft::Win32::KeyHandler::*)(::Il2CppString*, Microsoft::Win32::RegistryValueOptions)>(&Microsoft::Win32::KeyHandler::GetValue)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* options = &::il2cpp_utils::GetClassFromName("Microsoft.Win32", "RegistryValueOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::KeyHandler*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, options});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::KeyHandler::GetSubKeyNames
// Il2CppName: GetSubKeyNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppString*> (Microsoft::Win32::KeyHandler::*)()>(&Microsoft::Win32::KeyHandler::GetSubKeyNames)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::KeyHandler*), "GetSubKeyNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::KeyHandler::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Microsoft::Win32::KeyHandler::*)()>(&Microsoft::Win32::KeyHandler::Flush)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::KeyHandler*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::KeyHandler::ValueExists
// Il2CppName: ValueExists
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Microsoft::Win32::KeyHandler::*)(::Il2CppString*)>(&Microsoft::Win32::KeyHandler::ValueExists)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::KeyHandler*), "ValueExists", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::KeyHandler::Save
// Il2CppName: Save
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Microsoft::Win32::KeyHandler::*)()>(&Microsoft::Win32::KeyHandler::Save)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::KeyHandler*), "Save", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::KeyHandler::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Microsoft::Win32::KeyHandler::*)()>(&Microsoft::Win32::KeyHandler::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::KeyHandler*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
