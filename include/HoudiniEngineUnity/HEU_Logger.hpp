// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_Logger
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_Logger : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: HEU_Logger
    HEU_Logger() noexcept {}
    // static public System.Void Log(System.String text)
    // Offset: 0x152AFD0
    static void Log(::Il2CppString* text);
    // static public System.Void LogFormat(System.String text, params System.Object[] args)
    // Offset: 0x152B038
    static void LogFormat(::Il2CppString* text, ::ArrayWrapper<::Il2CppObject*> args);
    // Creating initializer_list -> params proxy for: System.Void LogFormat(System.String text, params System.Object[] args)
    static void LogFormat(::Il2CppString* text, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void LogFormat(System.String text, params System.Object[] args)
    template<class ...TParams>
    static void LogFormat(::Il2CppString* text, TParams&&... args) {
      LogFormat(text, {args...});
    }
    // static public System.Void LogWarning(System.String text)
    // Offset: 0x1522104
    static void LogWarning(::Il2CppString* text);
    // static public System.Void LogWarningFormat(System.String text, params System.Object[] args)
    // Offset: 0x1522174
    static void LogWarningFormat(::Il2CppString* text, ::ArrayWrapper<::Il2CppObject*> args);
    // Creating initializer_list -> params proxy for: System.Void LogWarningFormat(System.String text, params System.Object[] args)
    static void LogWarningFormat(::Il2CppString* text, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void LogWarningFormat(System.String text, params System.Object[] args)
    template<class ...TParams>
    static void LogWarningFormat(::Il2CppString* text, TParams&&... args) {
      LogWarningFormat(text, {args...});
    }
    // static public System.Void LogError(System.String text)
    // Offset: 0x151D4E8
    static void LogError(::Il2CppString* text);
    // static public System.Void LogErrorFormat(System.String text, params System.Object[] args)
    // Offset: 0x15227E8
    static void LogErrorFormat(::Il2CppString* text, ::ArrayWrapper<::Il2CppObject*> args);
    // Creating initializer_list -> params proxy for: System.Void LogErrorFormat(System.String text, params System.Object[] args)
    static void LogErrorFormat(::Il2CppString* text, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void LogErrorFormat(System.String text, params System.Object[] args)
    template<class ...TParams>
    static void LogErrorFormat(::Il2CppString* text, TParams&&... args) {
      LogErrorFormat(text, {args...});
    }
    // static public System.Void LogError(System.Exception ex)
    // Offset: 0x152B168
    static void LogError(System::Exception* ex);
    // static public System.Void LogAssertion(System.String text)
    // Offset: 0x152B204
    static void LogAssertion(::Il2CppString* text);
    // static public System.Void LogAssertionFormat(System.String text, params System.Object[] args)
    // Offset: 0x152B208
    static void LogAssertionFormat(::Il2CppString* text, ::ArrayWrapper<::Il2CppObject*> args);
    // Creating initializer_list -> params proxy for: System.Void LogAssertionFormat(System.String text, params System.Object[] args)
    static void LogAssertionFormat(::Il2CppString* text, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void LogAssertionFormat(System.String text, params System.Object[] args)
    template<class ...TParams>
    static void LogAssertionFormat(::Il2CppString* text, TParams&&... args) {
      LogAssertionFormat(text, {args...});
    }
    // static private System.Void LogToCookLogsIfOn(System.String text)
    // Offset: 0x152B0B0
    static void LogToCookLogsIfOn(::Il2CppString* text);
    // static private System.Void LogToCookLogsIfOnFormat(System.String text, params System.Object[] args)
    // Offset: 0x152B100
    static void LogToCookLogsIfOnFormat(::Il2CppString* text, ::ArrayWrapper<::Il2CppObject*> args);
    // Creating initializer_list -> params proxy for: System.Void LogToCookLogsIfOnFormat(System.String text, params System.Object[] args)
    static void LogToCookLogsIfOnFormat(::Il2CppString* text, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void LogToCookLogsIfOnFormat(System.String text, params System.Object[] args)
    template<class ...TParams>
    static void LogToCookLogsIfOnFormat(::Il2CppString* text, TParams&&... args) {
      LogToCookLogsIfOnFormat(text, {args...});
    }
    // public System.Void .ctor()
    // Offset: 0x152B20C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_Logger* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::HEU_Logger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_Logger*, creationType>()));
    }
  }; // HoudiniEngineUnity.HEU_Logger
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_Logger*, "HoudiniEngineUnity", "HEU_Logger");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Logger::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*)>(&HoudiniEngineUnity::HEU_Logger::Log)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Logger*), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Logger::LogFormat
// Il2CppName: LogFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, ::ArrayWrapper<::Il2CppObject*>)>(&HoudiniEngineUnity::HEU_Logger::LogFormat)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Logger*), "LogFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, args});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Logger::LogWarning
// Il2CppName: LogWarning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*)>(&HoudiniEngineUnity::HEU_Logger::LogWarning)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Logger*), "LogWarning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Logger::LogWarningFormat
// Il2CppName: LogWarningFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, ::ArrayWrapper<::Il2CppObject*>)>(&HoudiniEngineUnity::HEU_Logger::LogWarningFormat)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Logger*), "LogWarningFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, args});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Logger::LogError
// Il2CppName: LogError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*)>(&HoudiniEngineUnity::HEU_Logger::LogError)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Logger*), "LogError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Logger::LogErrorFormat
// Il2CppName: LogErrorFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, ::ArrayWrapper<::Il2CppObject*>)>(&HoudiniEngineUnity::HEU_Logger::LogErrorFormat)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Logger*), "LogErrorFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, args});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Logger::LogError
// Il2CppName: LogError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Exception*)>(&HoudiniEngineUnity::HEU_Logger::LogError)> {
  static const MethodInfo* get() {
    static auto* ex = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Logger*), "LogError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ex});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Logger::LogAssertion
// Il2CppName: LogAssertion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*)>(&HoudiniEngineUnity::HEU_Logger::LogAssertion)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Logger*), "LogAssertion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Logger::LogAssertionFormat
// Il2CppName: LogAssertionFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, ::ArrayWrapper<::Il2CppObject*>)>(&HoudiniEngineUnity::HEU_Logger::LogAssertionFormat)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Logger*), "LogAssertionFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, args});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Logger::LogToCookLogsIfOn
// Il2CppName: LogToCookLogsIfOn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*)>(&HoudiniEngineUnity::HEU_Logger::LogToCookLogsIfOn)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Logger*), "LogToCookLogsIfOn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Logger::LogToCookLogsIfOnFormat
// Il2CppName: LogToCookLogsIfOnFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, ::ArrayWrapper<::Il2CppObject*>)>(&HoudiniEngineUnity::HEU_Logger::LogToCookLogsIfOnFormat)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Logger*), "LogToCookLogsIfOnFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, args});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Logger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
