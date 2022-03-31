// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Serialization.ITraceWriter
#include "Newtonsoft/Json/Serialization/ITraceWriter.hpp"
// Including type: System.Diagnostics.TraceLevel
#include "System/Diagnostics/TraceLevel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Forward declaring type: MemoryTraceWriter
  class MemoryTraceWriter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Serialization::MemoryTraceWriter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::MemoryTraceWriter*, "Newtonsoft.Json.Serialization", "MemoryTraceWriter");
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Serialization.MemoryTraceWriter
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class MemoryTraceWriter : public ::Il2CppObject/*, public ::Newtonsoft::Json::Serialization::ITraceWriter*/ {
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
    // private readonly System.Collections.Generic.Queue`1<System.String> _traceMessages
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::Queue_1<::StringW>* traceMessages;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Queue_1<::StringW>*) == 0x8);
    // private System.Diagnostics.TraceLevel <LevelFilter>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    ::System::Diagnostics::TraceLevel LevelFilter;
    // Field size check
    static_assert(sizeof(::System::Diagnostics::TraceLevel) == 0x4);
    public:
    // Creating interface conversion operator: operator ::Newtonsoft::Json::Serialization::ITraceWriter
    operator ::Newtonsoft::Json::Serialization::ITraceWriter() noexcept {
      return *reinterpret_cast<::Newtonsoft::Json::Serialization::ITraceWriter*>(this);
    }
    // Get instance field reference: private readonly System.Collections.Generic.Queue`1<System.String> _traceMessages
    ::System::Collections::Generic::Queue_1<::StringW>*& dyn__traceMessages();
    // Get instance field reference: private System.Diagnostics.TraceLevel <LevelFilter>k__BackingField
    ::System::Diagnostics::TraceLevel& dyn_$LevelFilter$k__BackingField();
    // public System.Diagnostics.TraceLevel get_LevelFilter()
    // Offset: 0x203B68C
    ::System::Diagnostics::TraceLevel get_LevelFilter();
    // public System.Void set_LevelFilter(System.Diagnostics.TraceLevel value)
    // Offset: 0x203B694
    void set_LevelFilter(::System::Diagnostics::TraceLevel value);
    // public System.Void Trace(System.Diagnostics.TraceLevel level, System.String message, System.Exception ex)
    // Offset: 0x203B718
    void Trace(::System::Diagnostics::TraceLevel level, ::StringW message, ::System::Exception* ex);
    // public System.Void .ctor()
    // Offset: 0x203B69C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MemoryTraceWriter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Serialization::MemoryTraceWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MemoryTraceWriter*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0x203B8F0
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // Newtonsoft.Json.Serialization.MemoryTraceWriter
  #pragma pack(pop)
  static check_size<sizeof(MemoryTraceWriter), 24 + sizeof(::System::Diagnostics::TraceLevel)> __Newtonsoft_Json_Serialization_MemoryTraceWriterSizeCheck;
  static_assert(sizeof(MemoryTraceWriter) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::MemoryTraceWriter::get_LevelFilter
// Il2CppName: get_LevelFilter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::TraceLevel (Newtonsoft::Json::Serialization::MemoryTraceWriter::*)()>(&Newtonsoft::Json::Serialization::MemoryTraceWriter::get_LevelFilter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::MemoryTraceWriter*), "get_LevelFilter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::MemoryTraceWriter::set_LevelFilter
// Il2CppName: set_LevelFilter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::MemoryTraceWriter::*)(::System::Diagnostics::TraceLevel)>(&Newtonsoft::Json::Serialization::MemoryTraceWriter::set_LevelFilter)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Diagnostics", "TraceLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::MemoryTraceWriter*), "set_LevelFilter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::MemoryTraceWriter::Trace
// Il2CppName: Trace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::MemoryTraceWriter::*)(::System::Diagnostics::TraceLevel, ::StringW, ::System::Exception*)>(&Newtonsoft::Json::Serialization::MemoryTraceWriter::Trace)> {
  static const MethodInfo* get() {
    static auto* level = &::il2cpp_utils::GetClassFromName("System.Diagnostics", "TraceLevel")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ex = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::MemoryTraceWriter*), "Trace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{level, message, ex});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::MemoryTraceWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::MemoryTraceWriter::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Serialization::MemoryTraceWriter::*)()>(&Newtonsoft::Json::Serialization::MemoryTraceWriter::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::MemoryTraceWriter*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
