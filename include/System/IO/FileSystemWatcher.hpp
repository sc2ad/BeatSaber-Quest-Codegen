// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.Component
#include "System/ComponentModel/Component.hpp"
// Including type: System.IO.NotifyFilters
#include "System/IO/NotifyFilters.hpp"
// Including type: System.IO.WaitForChangedResult
#include "System/IO/WaitForChangedResult.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: SearchPattern2
  class SearchPattern2;
  // Forward declaring type: FileSystemEventHandler
  class FileSystemEventHandler;
  // Forward declaring type: ErrorEventHandler
  class ErrorEventHandler;
  // Forward declaring type: RenamedEventHandler
  class RenamedEventHandler;
  // Forward declaring type: IFileWatcher
  class IFileWatcher;
  // Forward declaring type: FileSystemEventArgs
  class FileSystemEventArgs;
  // Forward declaring type: RenamedEventArgs
  class RenamedEventArgs;
  // Forward declaring type: FileAction
  struct FileAction;
}
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ISynchronizeInvoke
  class ISynchronizeInvoke;
  // Forward declaring type: ISite
  class ISite;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Delegate
  class Delegate;
  // Forward declaring type: EventArgs
  class EventArgs;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Forward declaring type: FileSystemWatcher
  class FileSystemWatcher;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::FileSystemWatcher);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::FileSystemWatcher*, "System.IO", "FileSystemWatcher");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0xC8
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.FileSystemWatcher
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultEventAttribute] Offset: 107BF44
  // [IODescriptionAttribute] Offset: 107BF44
  class FileSystemWatcher : public ::System::ComponentModel::Component {
    public:
    // Nested type: ::System::IO::FileSystemWatcher::EventType
    struct EventType;
    public:
    // private System.Boolean enableRaisingEvents
    // Size: 0x1
    // Offset: 0x28
    bool enableRaisingEvents;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: enableRaisingEvents and: filter
    char __padding0[0x7] = {};
    // private System.String filter
    // Size: 0x8
    // Offset: 0x30
    ::StringW filter;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean includeSubdirectories
    // Size: 0x1
    // Offset: 0x38
    bool includeSubdirectories;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: includeSubdirectories and: internalBufferSize
    char __padding2[0x3] = {};
    // private System.Int32 internalBufferSize
    // Size: 0x4
    // Offset: 0x3C
    int internalBufferSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.IO.NotifyFilters notifyFilter
    // Size: 0x4
    // Offset: 0x40
    ::System::IO::NotifyFilters notifyFilter;
    // Field size check
    static_assert(sizeof(::System::IO::NotifyFilters) == 0x4);
    // Padding between fields: notifyFilter and: path
    char __padding4[0x4] = {};
    // private System.String path
    // Size: 0x8
    // Offset: 0x48
    ::StringW path;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String fullpath
    // Size: 0x8
    // Offset: 0x50
    ::StringW fullpath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.ComponentModel.ISynchronizeInvoke synchronizingObject
    // Size: 0x8
    // Offset: 0x58
    ::System::ComponentModel::ISynchronizeInvoke* synchronizingObject;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::ISynchronizeInvoke*) == 0x8);
    // private System.IO.WaitForChangedResult lastData
    // Size: 0x19
    // Offset: 0x60
    ::System::IO::WaitForChangedResult lastData;
    // Field size check
    static_assert(sizeof(::System::IO::WaitForChangedResult) == 0x19);
    // Padding between fields: lastData and: waiting
    char __padding8[0x7] = {};
    // private System.Boolean waiting
    // Size: 0x1
    // Offset: 0x80
    bool waiting;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: waiting and: pattern
    char __padding9[0x7] = {};
    // private System.IO.SearchPattern2 pattern
    // Size: 0x8
    // Offset: 0x88
    ::System::IO::SearchPattern2* pattern;
    // Field size check
    static_assert(sizeof(::System::IO::SearchPattern2*) == 0x8);
    // private System.Boolean disposed
    // Size: 0x1
    // Offset: 0x90
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disposed and: mangledFilter
    char __padding11[0x7] = {};
    // private System.String mangledFilter
    // Size: 0x8
    // Offset: 0x98
    ::StringW mangledFilter;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.IO.FileSystemEventHandler Changed
    // Size: 0x8
    // Offset: 0xA0
    ::System::IO::FileSystemEventHandler* Changed;
    // Field size check
    static_assert(sizeof(::System::IO::FileSystemEventHandler*) == 0x8);
    // private System.IO.FileSystemEventHandler Created
    // Size: 0x8
    // Offset: 0xA8
    ::System::IO::FileSystemEventHandler* Created;
    // Field size check
    static_assert(sizeof(::System::IO::FileSystemEventHandler*) == 0x8);
    // private System.IO.FileSystemEventHandler Deleted
    // Size: 0x8
    // Offset: 0xB0
    ::System::IO::FileSystemEventHandler* Deleted;
    // Field size check
    static_assert(sizeof(::System::IO::FileSystemEventHandler*) == 0x8);
    // private System.IO.ErrorEventHandler Error
    // Size: 0x8
    // Offset: 0xB8
    ::System::IO::ErrorEventHandler* Error;
    // Field size check
    static_assert(sizeof(::System::IO::ErrorEventHandler*) == 0x8);
    // private System.IO.RenamedEventHandler Renamed
    // Size: 0x8
    // Offset: 0xC0
    ::System::IO::RenamedEventHandler* Renamed;
    // Field size check
    static_assert(sizeof(::System::IO::RenamedEventHandler*) == 0x8);
    public:
    // Get static field: static private System.IO.IFileWatcher watcher
    static ::System::IO::IFileWatcher* _get_watcher();
    // Set static field: static private System.IO.IFileWatcher watcher
    static void _set_watcher(::System::IO::IFileWatcher* value);
    // Get static field: static private System.Object lockobj
    static ::Il2CppObject* _get_lockobj();
    // Set static field: static private System.Object lockobj
    static void _set_lockobj(::Il2CppObject* value);
    // Get instance field reference: private System.Boolean enableRaisingEvents
    [[deprecated("Use field access instead!")]] bool& dyn_enableRaisingEvents();
    // Get instance field reference: private System.String filter
    [[deprecated("Use field access instead!")]] ::StringW& dyn_filter();
    // Get instance field reference: private System.Boolean includeSubdirectories
    [[deprecated("Use field access instead!")]] bool& dyn_includeSubdirectories();
    // Get instance field reference: private System.Int32 internalBufferSize
    [[deprecated("Use field access instead!")]] int& dyn_internalBufferSize();
    // Get instance field reference: private System.IO.NotifyFilters notifyFilter
    [[deprecated("Use field access instead!")]] ::System::IO::NotifyFilters& dyn_notifyFilter();
    // Get instance field reference: private System.String path
    [[deprecated("Use field access instead!")]] ::StringW& dyn_path();
    // Get instance field reference: private System.String fullpath
    [[deprecated("Use field access instead!")]] ::StringW& dyn_fullpath();
    // Get instance field reference: private System.ComponentModel.ISynchronizeInvoke synchronizingObject
    [[deprecated("Use field access instead!")]] ::System::ComponentModel::ISynchronizeInvoke*& dyn_synchronizingObject();
    // Get instance field reference: private System.IO.WaitForChangedResult lastData
    [[deprecated("Use field access instead!")]] ::System::IO::WaitForChangedResult& dyn_lastData();
    // Get instance field reference: private System.Boolean waiting
    [[deprecated("Use field access instead!")]] bool& dyn_waiting();
    // Get instance field reference: private System.IO.SearchPattern2 pattern
    [[deprecated("Use field access instead!")]] ::System::IO::SearchPattern2*& dyn_pattern();
    // Get instance field reference: private System.Boolean disposed
    [[deprecated("Use field access instead!")]] bool& dyn_disposed();
    // Get instance field reference: private System.String mangledFilter
    [[deprecated("Use field access instead!")]] ::StringW& dyn_mangledFilter();
    // Get instance field reference: private System.IO.FileSystemEventHandler Changed
    [[deprecated("Use field access instead!")]] ::System::IO::FileSystemEventHandler*& dyn_Changed();
    // Get instance field reference: private System.IO.FileSystemEventHandler Created
    [[deprecated("Use field access instead!")]] ::System::IO::FileSystemEventHandler*& dyn_Created();
    // Get instance field reference: private System.IO.FileSystemEventHandler Deleted
    [[deprecated("Use field access instead!")]] ::System::IO::FileSystemEventHandler*& dyn_Deleted();
    // Get instance field reference: private System.IO.ErrorEventHandler Error
    [[deprecated("Use field access instead!")]] ::System::IO::ErrorEventHandler*& dyn_Error();
    // Get instance field reference: private System.IO.RenamedEventHandler Renamed
    [[deprecated("Use field access instead!")]] ::System::IO::RenamedEventHandler*& dyn_Renamed();
    // System.Boolean get_Waiting()
    // Offset: 0x1D8FAE0
    bool get_Waiting();
    // System.Void set_Waiting(System.Boolean value)
    // Offset: 0x1D8FAE8
    void set_Waiting(bool value);
    // System.String get_MangledFilter()
    // Offset: 0x1D8CBE0
    ::StringW get_MangledFilter();
    // System.IO.SearchPattern2 get_Pattern()
    // Offset: 0x1D8CB48
    ::System::IO::SearchPattern2* get_Pattern();
    // System.String get_FullPath()
    // Offset: 0x1D8CAA0
    ::StringW get_FullPath();
    // public System.Void set_EnableRaisingEvents(System.Boolean value)
    // Offset: 0x1D8FB2C
    void set_EnableRaisingEvents(bool value);
    // public System.Boolean get_IncludeSubdirectories()
    // Offset: 0x1D8FD14
    bool get_IncludeSubdirectories();
    // public System.Void set_NotifyFilter(System.IO.NotifyFilters value)
    // Offset: 0x1D8FD1C
    void set_NotifyFilter(::System::IO::NotifyFilters value);
    // public System.Void add_Changed(System.IO.FileSystemEventHandler value)
    // Offset: 0x1D9021C
    void add_Changed(::System::IO::FileSystemEventHandler* value);
    // public System.Void remove_Changed(System.IO.FileSystemEventHandler value)
    // Offset: 0x1D902C0
    void remove_Changed(::System::IO::FileSystemEventHandler* value);
    // public System.Void .ctor(System.String path, System.String filter)
    // Offset: 0x1D8F6B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileSystemWatcher* New_ctor(::StringW path, ::StringW filter) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::FileSystemWatcher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileSystemWatcher*, creationType>(path, filter)));
    }
    // private System.Void InitWatcher()
    // Offset: 0x1D8F838
    void InitWatcher();
    // private System.Void RaiseEvent(System.Delegate ev, System.EventArgs arg, System.IO.FileSystemWatcher/System.IO.EventType evtype)
    // Offset: 0x1D8FE24
    void RaiseEvent(::System::Delegate* ev, ::System::EventArgs* arg, ::System::IO::FileSystemWatcher::EventType evtype);
    // protected System.Void OnChanged(System.IO.FileSystemEventArgs e)
    // Offset: 0x1D90120
    void OnChanged(::System::IO::FileSystemEventArgs* e);
    // protected System.Void OnCreated(System.IO.FileSystemEventArgs e)
    // Offset: 0x1D90134
    void OnCreated(::System::IO::FileSystemEventArgs* e);
    // protected System.Void OnDeleted(System.IO.FileSystemEventArgs e)
    // Offset: 0x1D90148
    void OnDeleted(::System::IO::FileSystemEventArgs* e);
    // protected System.Void OnRenamed(System.IO.RenamedEventArgs e)
    // Offset: 0x1D9015C
    void OnRenamed(::System::IO::RenamedEventArgs* e);
    // System.Void DispatchEvents(System.IO.FileAction act, System.String filename, ref System.IO.RenamedEventArgs renamed)
    // Offset: 0x1D8DA34
    void DispatchEvents(::System::IO::FileAction act, ::StringW filename, ByRef<::System::IO::RenamedEventArgs*> renamed);
    // private System.Void Start()
    // Offset: 0x1D8FB58
    void Start();
    // private System.Void Stop()
    // Offset: 0x1D8FC34
    void Stop();
    // static private System.Int32 InternalSupportsFSW()
    // Offset: 0x1D8FA50
    static int InternalSupportsFSW();
    // public override System.ComponentModel.ISite get_Site()
    // Offset: 0x1D8FD68
    // Implemented from: System.ComponentModel.Component
    // Base method: System.ComponentModel.ISite Component::get_Site()
    ::System::ComponentModel::ISite* get_Site();
    // static private System.Void .cctor()
    // Offset: 0x1D90364
    // Implemented from: System.ComponentModel.Component
    // Base method: System.Void Component::.cctor()
    static void _cctor();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1D8FD70
    // Implemented from: System.ComponentModel.Component
    // Base method: System.Void Component::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // protected override System.Void Finalize()
    // Offset: 0x1D8FDB4
    // Implemented from: System.ComponentModel.Component
    // Base method: System.Void Component::Finalize()
    void Finalize();
  }; // System.IO.FileSystemWatcher
  #pragma pack(pop)
  static check_size<sizeof(FileSystemWatcher), 192 + sizeof(::System::IO::RenamedEventHandler*)> __System_IO_FileSystemWatcherSizeCheck;
  static_assert(sizeof(FileSystemWatcher) == 0xC8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::FileSystemWatcher::get_Waiting
// Il2CppName: get_Waiting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::FileSystemWatcher::*)()>(&System::IO::FileSystemWatcher::get_Waiting)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemWatcher*), "get_Waiting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemWatcher::set_Waiting
// Il2CppName: set_Waiting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileSystemWatcher::*)(bool)>(&System::IO::FileSystemWatcher::set_Waiting)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemWatcher*), "set_Waiting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemWatcher::get_MangledFilter
// Il2CppName: get_MangledFilter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::IO::FileSystemWatcher::*)()>(&System::IO::FileSystemWatcher::get_MangledFilter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemWatcher*), "get_MangledFilter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemWatcher::get_Pattern
// Il2CppName: get_Pattern
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::SearchPattern2* (System::IO::FileSystemWatcher::*)()>(&System::IO::FileSystemWatcher::get_Pattern)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemWatcher*), "get_Pattern", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemWatcher::get_FullPath
// Il2CppName: get_FullPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::IO::FileSystemWatcher::*)()>(&System::IO::FileSystemWatcher::get_FullPath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemWatcher*), "get_FullPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemWatcher::set_EnableRaisingEvents
// Il2CppName: set_EnableRaisingEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileSystemWatcher::*)(bool)>(&System::IO::FileSystemWatcher::set_EnableRaisingEvents)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemWatcher*), "set_EnableRaisingEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemWatcher::get_IncludeSubdirectories
// Il2CppName: get_IncludeSubdirectories
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::FileSystemWatcher::*)()>(&System::IO::FileSystemWatcher::get_IncludeSubdirectories)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemWatcher*), "get_IncludeSubdirectories", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemWatcher::set_NotifyFilter
// Il2CppName: set_NotifyFilter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileSystemWatcher::*)(::System::IO::NotifyFilters)>(&System::IO::FileSystemWatcher::set_NotifyFilter)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.IO", "NotifyFilters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemWatcher*), "set_NotifyFilter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemWatcher::add_Changed
// Il2CppName: add_Changed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileSystemWatcher::*)(::System::IO::FileSystemEventHandler*)>(&System::IO::FileSystemWatcher::add_Changed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.IO", "FileSystemEventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemWatcher*), "add_Changed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemWatcher::remove_Changed
// Il2CppName: remove_Changed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileSystemWatcher::*)(::System::IO::FileSystemEventHandler*)>(&System::IO::FileSystemWatcher::remove_Changed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.IO", "FileSystemEventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemWatcher*), "remove_Changed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemWatcher::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::FileSystemWatcher::InitWatcher
// Il2CppName: InitWatcher
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileSystemWatcher::*)()>(&System::IO::FileSystemWatcher::InitWatcher)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemWatcher*), "InitWatcher", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemWatcher::RaiseEvent
// Il2CppName: RaiseEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileSystemWatcher::*)(::System::Delegate*, ::System::EventArgs*, ::System::IO::FileSystemWatcher::EventType)>(&System::IO::FileSystemWatcher::RaiseEvent)> {
  static const MethodInfo* get() {
    static auto* ev = &::il2cpp_utils::GetClassFromName("System", "Delegate")->byval_arg;
    static auto* arg = &::il2cpp_utils::GetClassFromName("System", "EventArgs")->byval_arg;
    static auto* evtype = &::il2cpp_utils::GetClassFromName("System.IO", "FileSystemWatcher/EventType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemWatcher*), "RaiseEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ev, arg, evtype});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemWatcher::OnChanged
// Il2CppName: OnChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileSystemWatcher::*)(::System::IO::FileSystemEventArgs*)>(&System::IO::FileSystemWatcher::OnChanged)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("System.IO", "FileSystemEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemWatcher*), "OnChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemWatcher::OnCreated
// Il2CppName: OnCreated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileSystemWatcher::*)(::System::IO::FileSystemEventArgs*)>(&System::IO::FileSystemWatcher::OnCreated)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("System.IO", "FileSystemEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemWatcher*), "OnCreated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemWatcher::OnDeleted
// Il2CppName: OnDeleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileSystemWatcher::*)(::System::IO::FileSystemEventArgs*)>(&System::IO::FileSystemWatcher::OnDeleted)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("System.IO", "FileSystemEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemWatcher*), "OnDeleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemWatcher::OnRenamed
// Il2CppName: OnRenamed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileSystemWatcher::*)(::System::IO::RenamedEventArgs*)>(&System::IO::FileSystemWatcher::OnRenamed)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("System.IO", "RenamedEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemWatcher*), "OnRenamed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemWatcher::DispatchEvents
// Il2CppName: DispatchEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileSystemWatcher::*)(::System::IO::FileAction, ::StringW, ByRef<::System::IO::RenamedEventArgs*>)>(&System::IO::FileSystemWatcher::DispatchEvents)> {
  static const MethodInfo* get() {
    static auto* act = &::il2cpp_utils::GetClassFromName("System.IO", "FileAction")->byval_arg;
    static auto* filename = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* renamed = &::il2cpp_utils::GetClassFromName("System.IO", "RenamedEventArgs")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemWatcher*), "DispatchEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{act, filename, renamed});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemWatcher::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileSystemWatcher::*)()>(&System::IO::FileSystemWatcher::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemWatcher*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemWatcher::Stop
// Il2CppName: Stop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileSystemWatcher::*)()>(&System::IO::FileSystemWatcher::Stop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemWatcher*), "Stop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemWatcher::InternalSupportsFSW
// Il2CppName: InternalSupportsFSW
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&System::IO::FileSystemWatcher::InternalSupportsFSW)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemWatcher*), "InternalSupportsFSW", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemWatcher::get_Site
// Il2CppName: get_Site
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ISite* (System::IO::FileSystemWatcher::*)()>(&System::IO::FileSystemWatcher::get_Site)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemWatcher*), "get_Site", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemWatcher::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::IO::FileSystemWatcher::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemWatcher*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemWatcher::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileSystemWatcher::*)(bool)>(&System::IO::FileSystemWatcher::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemWatcher*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystemWatcher::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileSystemWatcher::*)()>(&System::IO::FileSystemWatcher::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystemWatcher*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
