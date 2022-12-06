// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: FileSystemWatcher
  class FileSystemWatcher;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Forward declaring type: DefaultWatcherData
  class DefaultWatcherData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::DefaultWatcherData);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::DefaultWatcherData*, "System.IO", "DefaultWatcherData");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.DefaultWatcherData
  // [TokenAttribute] Offset: FFFFFFFF
  class DefaultWatcherData : public ::Il2CppObject {
    public:
    public:
    // public System.IO.FileSystemWatcher FSW
    // Size: 0x8
    // Offset: 0x10
    ::System::IO::FileSystemWatcher* FSW;
    // Field size check
    static_assert(sizeof(::System::IO::FileSystemWatcher*) == 0x8);
    // public System.String Directory
    // Size: 0x8
    // Offset: 0x18
    ::StringW Directory;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String FileMask
    // Size: 0x8
    // Offset: 0x20
    ::StringW FileMask;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean IncludeSubdirs
    // Size: 0x1
    // Offset: 0x28
    bool IncludeSubdirs;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean Enabled
    // Size: 0x1
    // Offset: 0x29
    bool Enabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean NoWildcards
    // Size: 0x1
    // Offset: 0x2A
    bool NoWildcards;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: NoWildcards and: DisabledTime
    char __padding5[0x5] = {};
    // public System.DateTime DisabledTime
    // Size: 0x8
    // Offset: 0x30
    ::System::DateTime DisabledTime;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // public System.Object FilesLock
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppObject* FilesLock;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.Collections.Hashtable Files
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Hashtable* Files;
    // Field size check
    static_assert(sizeof(::System::Collections::Hashtable*) == 0x8);
    public:
    // Get instance field reference: public System.IO.FileSystemWatcher FSW
    [[deprecated("Use field access instead!")]] ::System::IO::FileSystemWatcher*& dyn_FSW();
    // Get instance field reference: public System.String Directory
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Directory();
    // Get instance field reference: public System.String FileMask
    [[deprecated("Use field access instead!")]] ::StringW& dyn_FileMask();
    // Get instance field reference: public System.Boolean IncludeSubdirs
    [[deprecated("Use field access instead!")]] bool& dyn_IncludeSubdirs();
    // Get instance field reference: public System.Boolean Enabled
    [[deprecated("Use field access instead!")]] bool& dyn_Enabled();
    // Get instance field reference: public System.Boolean NoWildcards
    [[deprecated("Use field access instead!")]] bool& dyn_NoWildcards();
    // Get instance field reference: public System.DateTime DisabledTime
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn_DisabledTime();
    // Get instance field reference: public System.Object FilesLock
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_FilesLock();
    // Get instance field reference: public System.Collections.Hashtable Files
    [[deprecated("Use field access instead!")]] ::System::Collections::Hashtable*& dyn_Files();
    // public System.Void .ctor()
    // Offset: 0x1D885A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultWatcherData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::DefaultWatcherData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultWatcherData*, creationType>()));
    }
  }; // System.IO.DefaultWatcherData
  #pragma pack(pop)
  static check_size<sizeof(DefaultWatcherData), 64 + sizeof(::System::Collections::Hashtable*)> __System_IO_DefaultWatcherDataSizeCheck;
  static_assert(sizeof(DefaultWatcherData) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::DefaultWatcherData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
