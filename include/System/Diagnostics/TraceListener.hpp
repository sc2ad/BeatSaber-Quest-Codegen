// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MarshalByRefObject
#include "System/MarshalByRefObject.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Diagnostics.TraceOptions
#include "System/Diagnostics/TraceOptions.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: TraceFilter
  class TraceFilter;
  // Forward declaring type: TraceEventCache
  class TraceEventCache;
  // Forward declaring type: TraceEventType
  struct TraceEventType;
}
// Completed forward declares
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: TraceListener
  class TraceListener;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Diagnostics::TraceListener);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::TraceListener*, "System.Diagnostics", "TraceListener");
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.TraceListener
  // [TokenAttribute] Offset: FFFFFFFF
  class TraceListener : public ::System::MarshalByRefObject/*, public ::System::IDisposable*/ {
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
    // private System.Int32 indentLevel
    // Size: 0x4
    // Offset: 0x18
    int indentLevel;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 indentSize
    // Size: 0x4
    // Offset: 0x1C
    int indentSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Diagnostics.TraceOptions traceOptions
    // Size: 0x4
    // Offset: 0x20
    ::System::Diagnostics::TraceOptions traceOptions;
    // Field size check
    static_assert(sizeof(::System::Diagnostics::TraceOptions) == 0x4);
    // private System.Boolean needIndent
    // Size: 0x1
    // Offset: 0x24
    bool needIndent;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: needIndent and: listenerName
    char __padding3[0x3] = {};
    // private System.String listenerName
    // Size: 0x8
    // Offset: 0x28
    ::StringW listenerName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Diagnostics.TraceFilter filter
    // Size: 0x8
    // Offset: 0x30
    ::System::Diagnostics::TraceFilter* filter;
    // Field size check
    static_assert(sizeof(::System::Diagnostics::TraceFilter*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Deleting conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept = delete;
    // Get instance field reference: private System.Int32 indentLevel
    int& dyn_indentLevel();
    // Get instance field reference: private System.Int32 indentSize
    int& dyn_indentSize();
    // Get instance field reference: private System.Diagnostics.TraceOptions traceOptions
    ::System::Diagnostics::TraceOptions& dyn_traceOptions();
    // Get instance field reference: private System.Boolean needIndent
    bool& dyn_needIndent();
    // Get instance field reference: private System.String listenerName
    ::StringW& dyn_listenerName();
    // Get instance field reference: private System.Diagnostics.TraceFilter filter
    ::System::Diagnostics::TraceFilter*& dyn_filter();
    // public System.Boolean get_IsThreadSafe()
    // Offset: 0x1CAE1F0
    bool get_IsThreadSafe();
    // public System.Void set_IndentLevel(System.Int32 value)
    // Offset: 0x1CAD694
    void set_IndentLevel(int value);
    // public System.Void set_IndentSize(System.Int32 value)
    // Offset: 0x1CAD6B0
    void set_IndentSize(int value);
    // public System.Diagnostics.TraceFilter get_Filter()
    // Offset: 0x1CAE27C
    ::System::Diagnostics::TraceFilter* get_Filter();
    // protected System.Boolean get_NeedIndent()
    // Offset: 0x1CAE284
    bool get_NeedIndent();
    // protected System.Void set_NeedIndent(System.Boolean value)
    // Offset: 0x1CAE28C
    void set_NeedIndent(bool value);
    // public System.Diagnostics.TraceOptions get_TraceOutputOptions()
    // Offset: 0x1CAE298
    ::System::Diagnostics::TraceOptions get_TraceOutputOptions();
    // protected System.Void .ctor(System.String name)
    // Offset: 0x1CA76C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TraceListener* New_ctor(::StringW name) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::TraceListener::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TraceListener*, creationType>(name)));
    }
    // public System.Void Dispose()
    // Offset: 0x1CAE1F8
    void Dispose();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1CAE274
    void Dispose(bool disposing);
    // public System.Void Flush()
    // Offset: 0x1CAE278
    void Flush();
    // public System.Void Fail(System.String message)
    // Offset: 0x1CA7714
    void Fail(::StringW message);
    // public System.Void Fail(System.String message, System.String detailMessage)
    // Offset: 0x1CA77CC
    void Fail(::StringW message, ::StringW detailMessage);
    // public System.Void Write(System.String message)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Write(::StringW message);
    // protected System.Void WriteIndent()
    // Offset: 0x1CAE2A0
    void WriteIndent();
    // public System.Void WriteLine(System.String message)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void WriteLine(::StringW message);
    // public System.Void TraceEvent(System.Diagnostics.TraceEventCache eventCache, System.String source, System.Diagnostics.TraceEventType eventType, System.Int32 id, System.String message)
    // Offset: 0x1CAE378
    void TraceEvent(::System::Diagnostics::TraceEventCache* eventCache, ::StringW source, ::System::Diagnostics::TraceEventType eventType, int id, ::StringW message);
    // private System.Void WriteHeader(System.String source, System.Diagnostics.TraceEventType eventType, System.Int32 id)
    // Offset: 0x1CAE444
    void WriteHeader(::StringW source, ::System::Diagnostics::TraceEventType eventType, int id);
    // private System.Void WriteFooter(System.Diagnostics.TraceEventCache eventCache)
    // Offset: 0x1CAE55C
    void WriteFooter(::System::Diagnostics::TraceEventCache* eventCache);
    // System.Boolean IsEnabled(System.Diagnostics.TraceOptions opts)
    // Offset: 0x1CAEA28
    bool IsEnabled(::System::Diagnostics::TraceOptions opts);
  }; // System.Diagnostics.TraceListener
  #pragma pack(pop)
  static check_size<sizeof(TraceListener), 48 + sizeof(::System::Diagnostics::TraceFilter*)> __System_Diagnostics_TraceListenerSizeCheck;
  static_assert(sizeof(TraceListener) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::TraceListener::get_IsThreadSafe
// Il2CppName: get_IsThreadSafe
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Diagnostics::TraceListener::*)()>(&System::Diagnostics::TraceListener::get_IsThreadSafe)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListener*), "get_IsThreadSafe", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceListener::set_IndentLevel
// Il2CppName: set_IndentLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::TraceListener::*)(int)>(&System::Diagnostics::TraceListener::set_IndentLevel)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListener*), "set_IndentLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceListener::set_IndentSize
// Il2CppName: set_IndentSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::TraceListener::*)(int)>(&System::Diagnostics::TraceListener::set_IndentSize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListener*), "set_IndentSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceListener::get_Filter
// Il2CppName: get_Filter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::TraceFilter* (System::Diagnostics::TraceListener::*)()>(&System::Diagnostics::TraceListener::get_Filter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListener*), "get_Filter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceListener::get_NeedIndent
// Il2CppName: get_NeedIndent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Diagnostics::TraceListener::*)()>(&System::Diagnostics::TraceListener::get_NeedIndent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListener*), "get_NeedIndent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceListener::set_NeedIndent
// Il2CppName: set_NeedIndent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::TraceListener::*)(bool)>(&System::Diagnostics::TraceListener::set_NeedIndent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListener*), "set_NeedIndent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceListener::get_TraceOutputOptions
// Il2CppName: get_TraceOutputOptions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::TraceOptions (System::Diagnostics::TraceListener::*)()>(&System::Diagnostics::TraceListener::get_TraceOutputOptions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListener*), "get_TraceOutputOptions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceListener::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Diagnostics::TraceListener::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::TraceListener::*)()>(&System::Diagnostics::TraceListener::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListener*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceListener::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::TraceListener::*)(bool)>(&System::Diagnostics::TraceListener::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListener*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceListener::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::TraceListener::*)()>(&System::Diagnostics::TraceListener::Flush)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListener*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceListener::Fail
// Il2CppName: Fail
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::TraceListener::*)(::StringW)>(&System::Diagnostics::TraceListener::Fail)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListener*), "Fail", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceListener::Fail
// Il2CppName: Fail
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::TraceListener::*)(::StringW, ::StringW)>(&System::Diagnostics::TraceListener::Fail)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* detailMessage = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListener*), "Fail", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, detailMessage});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceListener::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::TraceListener::*)(::StringW)>(&System::Diagnostics::TraceListener::Write)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListener*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceListener::WriteIndent
// Il2CppName: WriteIndent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::TraceListener::*)()>(&System::Diagnostics::TraceListener::WriteIndent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListener*), "WriteIndent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceListener::WriteLine
// Il2CppName: WriteLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::TraceListener::*)(::StringW)>(&System::Diagnostics::TraceListener::WriteLine)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListener*), "WriteLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceListener::TraceEvent
// Il2CppName: TraceEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::TraceListener::*)(::System::Diagnostics::TraceEventCache*, ::StringW, ::System::Diagnostics::TraceEventType, int, ::StringW)>(&System::Diagnostics::TraceListener::TraceEvent)> {
  static const MethodInfo* get() {
    static auto* eventCache = &::il2cpp_utils::GetClassFromName("System.Diagnostics", "TraceEventCache")->byval_arg;
    static auto* source = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* eventType = &::il2cpp_utils::GetClassFromName("System.Diagnostics", "TraceEventType")->byval_arg;
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListener*), "TraceEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventCache, source, eventType, id, message});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceListener::WriteHeader
// Il2CppName: WriteHeader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::TraceListener::*)(::StringW, ::System::Diagnostics::TraceEventType, int)>(&System::Diagnostics::TraceListener::WriteHeader)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* eventType = &::il2cpp_utils::GetClassFromName("System.Diagnostics", "TraceEventType")->byval_arg;
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListener*), "WriteHeader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source, eventType, id});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceListener::WriteFooter
// Il2CppName: WriteFooter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::TraceListener::*)(::System::Diagnostics::TraceEventCache*)>(&System::Diagnostics::TraceListener::WriteFooter)> {
  static const MethodInfo* get() {
    static auto* eventCache = &::il2cpp_utils::GetClassFromName("System.Diagnostics", "TraceEventCache")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListener*), "WriteFooter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventCache});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceListener::IsEnabled
// Il2CppName: IsEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Diagnostics::TraceListener::*)(::System::Diagnostics::TraceOptions)>(&System::Diagnostics::TraceListener::IsEnabled)> {
  static const MethodInfo* get() {
    static auto* opts = &::il2cpp_utils::GetClassFromName("System.Diagnostics", "TraceOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListener*), "IsEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{opts});
  }
};
