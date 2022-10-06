// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: TraceEventCache
  class TraceEventCache;
  // Forward declaring type: TraceEventType
  struct TraceEventType;
}
// Completed forward declares
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: TraceFilter
  class TraceFilter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Diagnostics::TraceFilter);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::TraceFilter*, "System.Diagnostics", "TraceFilter");
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.TraceFilter
  // [TokenAttribute] Offset: FFFFFFFF
  class TraceFilter : public ::Il2CppObject {
    public:
    // public System.Boolean ShouldTrace(System.Diagnostics.TraceEventCache cache, System.String source, System.Diagnostics.TraceEventType eventType, System.Int32 id, System.String formatOrMessage, System.Object[] args, System.Object data1, System.Object[] data)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool ShouldTrace(::System::Diagnostics::TraceEventCache* cache, ::StringW source, ::System::Diagnostics::TraceEventType eventType, int id, ::StringW formatOrMessage, ::ArrayW<::Il2CppObject*> args, ::Il2CppObject* data1, ::ArrayW<::Il2CppObject*> data);
    // System.Boolean ShouldTrace(System.Diagnostics.TraceEventCache cache, System.String source, System.Diagnostics.TraceEventType eventType, System.Int32 id, System.String formatOrMessage)
    // Offset: 0x1D2CCAC
    bool ShouldTrace(::System::Diagnostics::TraceEventCache* cache, ::StringW source, ::System::Diagnostics::TraceEventType eventType, int id, ::StringW formatOrMessage);
  }; // System.Diagnostics.TraceFilter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::TraceFilter::ShouldTrace
// Il2CppName: ShouldTrace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Diagnostics::TraceFilter::*)(::System::Diagnostics::TraceEventCache*, ::StringW, ::System::Diagnostics::TraceEventType, int, ::StringW, ::ArrayW<::Il2CppObject*>, ::Il2CppObject*, ::ArrayW<::Il2CppObject*>)>(&System::Diagnostics::TraceFilter::ShouldTrace)> {
  static const MethodInfo* get() {
    static auto* cache = &::il2cpp_utils::GetClassFromName("System.Diagnostics", "TraceEventCache")->byval_arg;
    static auto* source = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* eventType = &::il2cpp_utils::GetClassFromName("System.Diagnostics", "TraceEventType")->byval_arg;
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* formatOrMessage = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* data1 = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceFilter*), "ShouldTrace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cache, source, eventType, id, formatOrMessage, args, data1, data});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceFilter::ShouldTrace
// Il2CppName: ShouldTrace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Diagnostics::TraceFilter::*)(::System::Diagnostics::TraceEventCache*, ::StringW, ::System::Diagnostics::TraceEventType, int, ::StringW)>(&System::Diagnostics::TraceFilter::ShouldTrace)> {
  static const MethodInfo* get() {
    static auto* cache = &::il2cpp_utils::GetClassFromName("System.Diagnostics", "TraceEventCache")->byval_arg;
    static auto* source = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* eventType = &::il2cpp_utils::GetClassFromName("System.Diagnostics", "TraceEventType")->byval_arg;
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* formatOrMessage = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceFilter*), "ShouldTrace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cache, source, eventType, id, formatOrMessage});
  }
};
