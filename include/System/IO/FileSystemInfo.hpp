// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MarshalByRefObject
#include "System/MarshalByRefObject.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.IO.MonoIOStat
#include "System/IO/MonoIOStat.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DateTime
  struct DateTime;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Skipping declaration: FileAttributes because it is already included!
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Forward declaring type: FileSystemInfo
  class FileSystemInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::FileSystemInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::FileSystemInfo*, "System.IO", "FileSystemInfo");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.FileSystemInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 106EB20
  class FileSystemInfo : public ::System::MarshalByRefObject/*, public ::System::Runtime::Serialization::ISerializable*/ {
    public:
    public:
    // System.IO.MonoIOStat _data
    // Size: 0x28
    // Offset: 0x18
    ::System::IO::MonoIOStat data;
    // Field size check
    static_assert(sizeof(::System::IO::MonoIOStat) == 0x28);
    // System.Int32 _dataInitialised
    // Size: 0x4
    // Offset: 0x40
    int dataInitialised;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: dataInitialised and: FullPath
    char __padding1[0x4] = {};
    // protected System.String FullPath
    // Size: 0x8
    // Offset: 0x48
    ::StringW FullPath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // protected System.String OriginalPath
    // Size: 0x8
    // Offset: 0x50
    ::StringW OriginalPath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _displayPath
    // Size: 0x8
    // Offset: 0x58
    ::StringW displayPath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Runtime::Serialization::ISerializable
    operator ::System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<::System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating interface conversion operator: i_ISerializable
    inline ::System::Runtime::Serialization::ISerializable* i_ISerializable() noexcept {
      return reinterpret_cast<::System::Runtime::Serialization::ISerializable*>(this);
    }
    // Deleting conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept = delete;
    // Get instance field reference: System.IO.MonoIOStat _data
    [[deprecated("Use field access instead!")]] ::System::IO::MonoIOStat& dyn__data();
    // Get instance field reference: System.Int32 _dataInitialised
    [[deprecated("Use field access instead!")]] int& dyn__dataInitialised();
    // Get instance field reference: protected System.String FullPath
    [[deprecated("Use field access instead!")]] ::StringW& dyn_FullPath();
    // Get instance field reference: protected System.String OriginalPath
    [[deprecated("Use field access instead!")]] ::StringW& dyn_OriginalPath();
    // Get instance field reference: private System.String _displayPath
    [[deprecated("Use field access instead!")]] ::StringW& dyn__displayPath();
    // public System.String get_FullName()
    // Offset: 0x2062318
    ::StringW get_FullName();
    // public System.String get_Name()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_Name();
    // public System.Boolean get_Exists()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_Exists();
    // public System.DateTime get_CreationTime()
    // Offset: 0x2062320
    ::System::DateTime get_CreationTime();
    // public System.DateTime get_CreationTimeUtc()
    // Offset: 0x206234C
    ::System::DateTime get_CreationTimeUtc();
    // public System.DateTime get_LastAccessTime()
    // Offset: 0x20623F4
    ::System::DateTime get_LastAccessTime();
    // public System.DateTime get_LastAccessTimeUtc()
    // Offset: 0x2062420
    ::System::DateTime get_LastAccessTimeUtc();
    // public System.IO.FileAttributes get_Attributes()
    // Offset: 0x20624C8
    ::System::IO::FileAttributes get_Attributes();
    // System.String get_DisplayPath()
    // Offset: 0x2062608
    ::StringW get_DisplayPath();
    // System.Void set_DisplayPath(System.String value)
    // Offset: 0x2062610
    void set_DisplayPath(::StringW value);
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x2059BD8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileSystemInfo* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::FileSystemInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileSystemInfo*, creationType>(info, context)));
    }
    // public System.Void Delete()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Delete();
    // public System.Void Refresh()
    // Offset: 0x2059D50
    void Refresh();
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x2062524
    void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
    // protected System.Void .ctor()
    // Offset: 0x205966C
    // Implemented from: System.MarshalByRefObject
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileSystemInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::FileSystemInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileSystemInfo*, creationType>()));
    }
  }; // System.IO.FileSystemInfo
  #pragma pack(pop)
  static check_size<sizeof(FileSystemInfo), 88 + sizeof(::StringW)> __System_IO_FileSystemInfoSizeCheck;
  static_assert(sizeof(FileSystemInfo) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::FileSystemInfo::get_FullName
// Il2CppName: get_FullName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::IO::FileSystemInfo::*)()>(&System::IO::FileSystemInfo::get_FullName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemInfo*), "get_FullName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemInfo::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::IO::FileSystemInfo::*)()>(&System::IO::FileSystemInfo::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemInfo*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemInfo::get_Exists
// Il2CppName: get_Exists
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::FileSystemInfo::*)()>(&System::IO::FileSystemInfo::get_Exists)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemInfo*), "get_Exists", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemInfo::get_CreationTime
// Il2CppName: get_CreationTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (System::IO::FileSystemInfo::*)()>(&System::IO::FileSystemInfo::get_CreationTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemInfo*), "get_CreationTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemInfo::get_CreationTimeUtc
// Il2CppName: get_CreationTimeUtc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (System::IO::FileSystemInfo::*)()>(&System::IO::FileSystemInfo::get_CreationTimeUtc)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemInfo*), "get_CreationTimeUtc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemInfo::get_LastAccessTime
// Il2CppName: get_LastAccessTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (System::IO::FileSystemInfo::*)()>(&System::IO::FileSystemInfo::get_LastAccessTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemInfo*), "get_LastAccessTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemInfo::get_LastAccessTimeUtc
// Il2CppName: get_LastAccessTimeUtc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (System::IO::FileSystemInfo::*)()>(&System::IO::FileSystemInfo::get_LastAccessTimeUtc)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemInfo*), "get_LastAccessTimeUtc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemInfo::get_Attributes
// Il2CppName: get_Attributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::FileAttributes (System::IO::FileSystemInfo::*)()>(&System::IO::FileSystemInfo::get_Attributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemInfo*), "get_Attributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemInfo::get_DisplayPath
// Il2CppName: get_DisplayPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::IO::FileSystemInfo::*)()>(&System::IO::FileSystemInfo::get_DisplayPath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemInfo*), "get_DisplayPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemInfo::set_DisplayPath
// Il2CppName: set_DisplayPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileSystemInfo::*)(::StringW)>(&System::IO::FileSystemInfo::set_DisplayPath)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemInfo*), "set_DisplayPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::FileSystemInfo::Delete
// Il2CppName: Delete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileSystemInfo::*)()>(&System::IO::FileSystemInfo::Delete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemInfo*), "Delete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemInfo::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileSystemInfo::*)()>(&System::IO::FileSystemInfo::Refresh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemInfo*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemInfo::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileSystemInfo::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::IO::FileSystemInfo::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemInfo*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
