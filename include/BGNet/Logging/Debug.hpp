// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: BGNet::Logging
namespace BGNet::Logging {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: BGNet.Logging
namespace BGNet::Logging {
  // Forward declaring type: Debug
  class Debug;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BGNet::Logging::Debug);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Logging::Debug*, "BGNet.Logging", "Debug");
// Type namespace: BGNet.Logging
namespace BGNet::Logging {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BGNet.Logging.Debug
  // [TokenAttribute] Offset: FFFFFFFF
  class Debug : public ::Il2CppObject {
    public:
    // Nested type: ::BGNet::Logging::Debug::LoggerLinkedList
    class LoggerLinkedList;
    // Nested type: ::BGNet::Logging::Debug::ILogger
    class ILogger;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x10F354C
    // Get static field: static private readonly System.Object _loggersMutex
    static ::Il2CppObject* _get__loggersMutex();
    // Set static field: static private readonly System.Object _loggersMutex
    static void _set__loggersMutex(::Il2CppObject* value);
    // Get static field: static private BGNet.Logging.Debug/BGNet.Logging.LoggerLinkedList _loggers
    static ::BGNet::Logging::Debug::LoggerLinkedList* _get__loggers();
    // Set static field: static private BGNet.Logging.Debug/BGNet.Logging.LoggerLinkedList _loggers
    static void _set__loggers(::BGNet::Logging::Debug::LoggerLinkedList* value);
    // static private System.Void .cctor()
    // Offset: 0x2B77CD4
    static void _cctor();
    // static private System.Void NoDomainReloadInit()
    // Offset: 0x2B77AF8
    static void NoDomainReloadInit();
    // static public System.Void AddLogger(BGNet.Logging.Debug/BGNet.Logging.ILogger logger)
    // Offset: 0x2B77B8C
    static void AddLogger(::BGNet::Logging::Debug::ILogger* logger);
    // static public System.Void RemoveLogger(BGNet.Logging.Debug/BGNet.Logging.ILogger logger)
    // Offset: 0x2B77D6C
    static void RemoveLogger(::BGNet::Logging::Debug::ILogger* logger);
    // static public System.Void Log(System.String message)
    // Offset: 0x2B77FB8
    static void Log(::StringW message);
    // static public System.Void LogError(System.String message)
    // Offset: 0x2B780B8
    static void LogError(::StringW message);
    // static public System.Void LogException(System.Exception exception, System.String message)
    // Offset: 0x2B781BC
    static void LogException(::System::Exception* exception, ::StringW message);
    // static public System.Void LogWarning(System.String message)
    // Offset: 0x2B782D0
    static void LogWarning(::StringW message);
  }; // BGNet.Logging.Debug
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BGNet::Logging::Debug::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&BGNet::Logging::Debug::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Logging::Debug*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Logging::Debug::NoDomainReloadInit
// Il2CppName: NoDomainReloadInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&BGNet::Logging::Debug::NoDomainReloadInit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Logging::Debug*), "NoDomainReloadInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Logging::Debug::AddLogger
// Il2CppName: AddLogger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::BGNet::Logging::Debug::ILogger*)>(&BGNet::Logging::Debug::AddLogger)> {
  static const MethodInfo* get() {
    static auto* logger = &::il2cpp_utils::GetClassFromName("BGNet.Logging", "Debug/ILogger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Logging::Debug*), "AddLogger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{logger});
  }
};
// Writing MetadataGetter for method: BGNet::Logging::Debug::RemoveLogger
// Il2CppName: RemoveLogger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::BGNet::Logging::Debug::ILogger*)>(&BGNet::Logging::Debug::RemoveLogger)> {
  static const MethodInfo* get() {
    static auto* logger = &::il2cpp_utils::GetClassFromName("BGNet.Logging", "Debug/ILogger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Logging::Debug*), "RemoveLogger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{logger});
  }
};
// Writing MetadataGetter for method: BGNet::Logging::Debug::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&BGNet::Logging::Debug::Log)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Logging::Debug*), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: BGNet::Logging::Debug::LogError
// Il2CppName: LogError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&BGNet::Logging::Debug::LogError)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Logging::Debug*), "LogError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: BGNet::Logging::Debug::LogException
// Il2CppName: LogException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Exception*, ::StringW)>(&BGNet::Logging::Debug::LogException)> {
  static const MethodInfo* get() {
    static auto* exception = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Logging::Debug*), "LogException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exception, message});
  }
};
// Writing MetadataGetter for method: BGNet::Logging::Debug::LogWarning
// Il2CppName: LogWarning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&BGNet::Logging::Debug::LogWarning)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Logging::Debug*), "LogWarning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
