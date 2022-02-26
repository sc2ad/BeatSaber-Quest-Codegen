// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNetDebug/ILogger
#include "GlobalNamespace/BGNetDebug_ILogger.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Microsoft::Extensions::Logging
namespace Microsoft::Extensions::Logging {
  // Forward declaring type: ILogger
  class ILogger;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BGNetLogger
  class BGNetLogger;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BGNetLogger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BGNetLogger*, "", "BGNetLogger");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: BGNetLogger
  // [TokenAttribute] Offset: FFFFFFFF
  class BGNetLogger : public ::Il2CppObject/*, public ::GlobalNamespace::BGNetDebug::ILogger*/ {
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
    // private readonly Microsoft.Extensions.Logging.ILogger[] _loggers
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::Microsoft::Extensions::Logging::ILogger*> loggers;
    // Field size check
    static_assert(sizeof(::ArrayW<::Microsoft::Extensions::Logging::ILogger*>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::BGNetDebug::ILogger
    operator ::GlobalNamespace::BGNetDebug::ILogger() noexcept {
      return *reinterpret_cast<::GlobalNamespace::BGNetDebug::ILogger*>(this);
    }
    // Creating conversion operator: operator ::ArrayW<::Microsoft::Extensions::Logging::ILogger*>
    constexpr operator ::ArrayW<::Microsoft::Extensions::Logging::ILogger*>() const noexcept {
      return loggers;
    }
    // Get instance field reference: private readonly Microsoft.Extensions.Logging.ILogger[] _loggers
    ::ArrayW<::Microsoft::Extensions::Logging::ILogger*>& dyn__loggers();
    // public System.Void .ctor(params Microsoft.Extensions.Logging.ILogger[] loggers)
    // Offset: 0x2B8D484
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BGNetLogger* New_ctor(::ArrayW<::Microsoft::Extensions::Logging::ILogger*> loggers) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BGNetLogger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BGNetLogger*, creationType>(loggers)));
    }
    // public System.Void LogError(System.String message)
    // Offset: 0x2B8D4B0
    void LogError(::StringW message);
    // public System.Void LogException(System.Exception exception, System.String message)
    // Offset: 0x2B8D5B4
    void LogException(::System::Exception* exception, ::StringW message);
    // public System.Void LogInfo(System.String message)
    // Offset: 0x2B8D6E8
    void LogInfo(::StringW message);
    // public System.Void LogWarning(System.String message)
    // Offset: 0x2B8D7F0
    void LogWarning(::StringW message);
  }; // BGNetLogger
  #pragma pack(pop)
  static check_size<sizeof(BGNetLogger), 16 + sizeof(::ArrayW<::Microsoft::Extensions::Logging::ILogger*>)> __GlobalNamespace_BGNetLoggerSizeCheck;
  static_assert(sizeof(BGNetLogger) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BGNetLogger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BGNetLogger::LogError
// Il2CppName: LogError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BGNetLogger::*)(::StringW)>(&GlobalNamespace::BGNetLogger::LogError)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BGNetLogger*), "LogError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BGNetLogger::LogException
// Il2CppName: LogException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BGNetLogger::*)(::System::Exception*, ::StringW)>(&GlobalNamespace::BGNetLogger::LogException)> {
  static const MethodInfo* get() {
    static auto* exception = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BGNetLogger*), "LogException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exception, message});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BGNetLogger::LogInfo
// Il2CppName: LogInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BGNetLogger::*)(::StringW)>(&GlobalNamespace::BGNetLogger::LogInfo)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BGNetLogger*), "LogInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BGNetLogger::LogWarning
// Il2CppName: LogWarning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BGNetLogger::*)(::StringW)>(&GlobalNamespace::BGNetLogger::LogWarning)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BGNetLogger*), "LogWarning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
