// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: IBeatSaberLogger
#include "GlobalNamespace/IBeatSaberLogger.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CompositeLogger
  class CompositeLogger;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CompositeLogger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CompositeLogger*, "", "CompositeLogger");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: CompositeLogger
  // [TokenAttribute] Offset: FFFFFFFF
  class CompositeLogger : public ::Il2CppObject/*, public ::GlobalNamespace::IBeatSaberLogger*/ {
    public:
    public:
    // private readonly System.Collections.Generic.List`1<IBeatSaberLogger> _loggers
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberLogger*>* loggers;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberLogger*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IBeatSaberLogger
    operator ::GlobalNamespace::IBeatSaberLogger() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IBeatSaberLogger*>(this);
    }
    // Creating interface conversion operator: i_IBeatSaberLogger
    inline ::GlobalNamespace::IBeatSaberLogger* i_IBeatSaberLogger() noexcept {
      return reinterpret_cast<::GlobalNamespace::IBeatSaberLogger*>(this);
    }
    // Creating conversion operator: operator ::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberLogger*>*
    constexpr operator ::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberLogger*>*() const noexcept {
      return loggers;
    }
    // Get instance field reference: private readonly System.Collections.Generic.List`1<IBeatSaberLogger> _loggers
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberLogger*>*& dyn__loggers();
    // public System.Void .ctor()
    // Offset: 0x14741CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CompositeLogger* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CompositeLogger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CompositeLogger*, creationType>()));
    }
    // public System.Void .ctor(System.Collections.Generic.List`1<IBeatSaberLogger> loggers)
    // Offset: 0x1474240
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CompositeLogger* New_ctor(::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberLogger*>* loggers) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CompositeLogger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CompositeLogger*, creationType>(loggers)));
    }
    // public System.Void AddLogger(IBeatSaberLogger logger)
    // Offset: 0x147426C
    void AddLogger(::GlobalNamespace::IBeatSaberLogger* logger);
    // public System.Void Log(System.String message)
    // Offset: 0x14742D4
    void Log(::StringW message);
    // public System.Void Log(System.String message, System.Object context)
    // Offset: 0x147443C
    void Log(::StringW message, ::Il2CppObject* context);
    // public System.Void LogWarning(System.String message)
    // Offset: 0x14745B8
    void LogWarning(::StringW message);
    // public System.Void LogWarning(System.String message, System.Object context)
    // Offset: 0x1474724
    void LogWarning(::StringW message, ::Il2CppObject* context);
    // public System.Void LogError(System.String message)
    // Offset: 0x14748A0
    void LogError(::StringW message);
    // public System.Void LogError(System.String message, System.Object context)
    // Offset: 0x1474A0C
    void LogError(::StringW message, ::Il2CppObject* context);
    // public System.Void LogException(System.Exception exception)
    // Offset: 0x1474B88
    void LogException(::System::Exception* exception);
    // public System.Void LogException(System.Exception exception, System.Object context)
    // Offset: 0x1474CF4
    void LogException(::System::Exception* exception, ::Il2CppObject* context);
  }; // CompositeLogger
  #pragma pack(pop)
  static check_size<sizeof(CompositeLogger), 16 + sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberLogger*>*)> __GlobalNamespace_CompositeLoggerSizeCheck;
  static_assert(sizeof(CompositeLogger) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CompositeLogger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CompositeLogger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CompositeLogger::AddLogger
// Il2CppName: AddLogger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CompositeLogger::*)(::GlobalNamespace::IBeatSaberLogger*)>(&GlobalNamespace::CompositeLogger::AddLogger)> {
  static const MethodInfo* get() {
    static auto* logger = &::il2cpp_utils::GetClassFromName("", "IBeatSaberLogger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CompositeLogger*), "AddLogger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{logger});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CompositeLogger::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CompositeLogger::*)(::StringW)>(&GlobalNamespace::CompositeLogger::Log)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CompositeLogger*), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CompositeLogger::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CompositeLogger::*)(::StringW, ::Il2CppObject*)>(&GlobalNamespace::CompositeLogger::Log)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CompositeLogger*), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, context});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CompositeLogger::LogWarning
// Il2CppName: LogWarning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CompositeLogger::*)(::StringW)>(&GlobalNamespace::CompositeLogger::LogWarning)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CompositeLogger*), "LogWarning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CompositeLogger::LogWarning
// Il2CppName: LogWarning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CompositeLogger::*)(::StringW, ::Il2CppObject*)>(&GlobalNamespace::CompositeLogger::LogWarning)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CompositeLogger*), "LogWarning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, context});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CompositeLogger::LogError
// Il2CppName: LogError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CompositeLogger::*)(::StringW)>(&GlobalNamespace::CompositeLogger::LogError)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CompositeLogger*), "LogError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CompositeLogger::LogError
// Il2CppName: LogError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CompositeLogger::*)(::StringW, ::Il2CppObject*)>(&GlobalNamespace::CompositeLogger::LogError)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CompositeLogger*), "LogError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, context});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CompositeLogger::LogException
// Il2CppName: LogException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CompositeLogger::*)(::System::Exception*)>(&GlobalNamespace::CompositeLogger::LogException)> {
  static const MethodInfo* get() {
    static auto* exception = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CompositeLogger*), "LogException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exception});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CompositeLogger::LogException
// Il2CppName: LogException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CompositeLogger::*)(::System::Exception*, ::Il2CppObject*)>(&GlobalNamespace::CompositeLogger::LogException)> {
  static const MethodInfo* get() {
    static auto* exception = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CompositeLogger*), "LogException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exception, context});
  }
};
