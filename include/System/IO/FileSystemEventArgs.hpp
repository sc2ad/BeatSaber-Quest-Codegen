// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.EventArgs
#include "System/EventArgs.hpp"
// Including type: System.IO.WatcherChangeTypes
#include "System/IO/WatcherChangeTypes.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.IO
namespace System::IO {
  // Forward declaring type: FileSystemEventArgs
  class FileSystemEventArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::FileSystemEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::FileSystemEventArgs*, "System.IO", "FileSystemEventArgs");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.FileSystemEventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  class FileSystemEventArgs : public ::System::EventArgs {
    public:
    public:
    // private System.IO.WatcherChangeTypes changeType
    // Size: 0x4
    // Offset: 0x10
    ::System::IO::WatcherChangeTypes changeType;
    // Field size check
    static_assert(sizeof(::System::IO::WatcherChangeTypes) == 0x4);
    // Padding between fields: changeType and: directory
    char __padding0[0x4] = {};
    // private System.String directory
    // Size: 0x8
    // Offset: 0x18
    ::StringW directory;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String name
    // Size: 0x8
    // Offset: 0x20
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.IO.WatcherChangeTypes changeType
    [[deprecated("Use field access instead!")]] ::System::IO::WatcherChangeTypes& dyn_changeType();
    // Get instance field reference: private System.String directory
    [[deprecated("Use field access instead!")]] ::StringW& dyn_directory();
    // Get instance field reference: private System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // public System.Void .ctor(System.IO.WatcherChangeTypes changeType, System.String directory, System.String name)
    // Offset: 0x1D35868
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileSystemEventArgs* New_ctor(::System::IO::WatcherChangeTypes changeType, ::StringW directory, ::StringW name) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::FileSystemEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileSystemEventArgs*, creationType>(changeType, directory, name)));
    }
  }; // System.IO.FileSystemEventArgs
  #pragma pack(pop)
  static check_size<sizeof(FileSystemEventArgs), 32 + sizeof(::StringW)> __System_IO_FileSystemEventArgsSizeCheck;
  static_assert(sizeof(FileSystemEventArgs) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::FileSystemEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
