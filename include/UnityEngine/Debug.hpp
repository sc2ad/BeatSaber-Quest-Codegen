// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ILogger
  class ILogger;
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Color
  struct Color;
  // Forward declaring type: Object
  class Object;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Debug
  class Debug;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Debug);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Debug*, "UnityEngine", "Debug");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Debug
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 11BE654
  class Debug : public ::Il2CppObject {
    public:
    // Get static field: static readonly UnityEngine.ILogger s_DefaultLogger
    static ::UnityEngine::ILogger* _get_s_DefaultLogger();
    // Set static field: static readonly UnityEngine.ILogger s_DefaultLogger
    static void _set_s_DefaultLogger(::UnityEngine::ILogger* value);
    // Get static field: static UnityEngine.ILogger s_Logger
    static ::UnityEngine::ILogger* _get_s_Logger();
    // Set static field: static UnityEngine.ILogger s_Logger
    static void _set_s_Logger(::UnityEngine::ILogger* value);
    // static public UnityEngine.ILogger get_unityLogger()
    // Offset: 0x1F2E970
    static ::UnityEngine::ILogger* get_unityLogger();
    // static public System.Boolean get_isDebugBuild()
    // Offset: 0x1F2FA80
    static bool get_isDebugBuild();
    // static private System.Void .cctor()
    // Offset: 0x1F3011C
    static void _cctor();
    // static public System.Void DrawLine(UnityEngine.Vector3 start, UnityEngine.Vector3 end, UnityEngine.Color color)
    // Offset: 0x1F2E9D8
    static void DrawLine(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::UnityEngine::Color color);
    // static public System.Void DrawLine(UnityEngine.Vector3 start, UnityEngine.Vector3 end, UnityEngine.Color color, System.Single duration, System.Boolean depthTest)
    // Offset: 0x1F2EAB0
    static void DrawLine(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::UnityEngine::Color color, float duration, bool depthTest);
    // static public System.Int32 ExtractStackTraceNoAlloc(System.Byte* buffer, System.Int32 bufferMax, System.String projectFolder)
    // Offset: 0x1F2EBEC
    static int ExtractStackTraceNoAlloc(uint8_t* buffer, int bufferMax, ::StringW projectFolder);
    // static public System.Void Log(System.Object message)
    // Offset: 0x1F2EC44
    static void Log(::Il2CppObject* message);
    // static public System.Void Log(System.Object message, UnityEngine.Object context)
    // Offset: 0x1F2ED6C
    static void Log(::Il2CppObject* message, ::UnityEngine::Object* context);
    // static public System.Void LogFormat(System.String format, params System.Object[] args)
    // Offset: 0x1F2EE9C
    static void LogFormat(::StringW format, ::ArrayW<::Il2CppObject*> args);
    // static public System.Void LogError(System.Object message)
    // Offset: 0x1F2EFCC
    static void LogError(::Il2CppObject* message);
    // static public System.Void LogError(System.Object message, UnityEngine.Object context)
    // Offset: 0x1F2F0F4
    static void LogError(::Il2CppObject* message, ::UnityEngine::Object* context);
    // static public System.Void LogErrorFormat(System.String format, params System.Object[] args)
    // Offset: 0x1F2F224
    static void LogErrorFormat(::StringW format, ::ArrayW<::Il2CppObject*> args);
    // static public System.Void LogErrorFormat(UnityEngine.Object context, System.String format, params System.Object[] args)
    // Offset: 0x1F2F354
    static void LogErrorFormat(::UnityEngine::Object* context, ::StringW format, ::ArrayW<::Il2CppObject*> args);
    // static public System.Void LogException(System.Exception exception)
    // Offset: 0x1F2430C
    static void LogException(::System::Exception* exception);
    // static public System.Void LogException(System.Exception exception, UnityEngine.Object context)
    // Offset: 0x1F2F490
    static void LogException(::System::Exception* exception, ::UnityEngine::Object* context);
    // static public System.Void LogWarning(System.Object message)
    // Offset: 0x1F2F5BC
    static void LogWarning(::Il2CppObject* message);
    // static public System.Void LogWarning(System.Object message, UnityEngine.Object context)
    // Offset: 0x1F2F6E4
    static void LogWarning(::Il2CppObject* message, ::UnityEngine::Object* context);
    // static public System.Void LogWarningFormat(System.String format, params System.Object[] args)
    // Offset: 0x1F2F814
    static void LogWarningFormat(::StringW format, ::ArrayW<::Il2CppObject*> args);
    // static public System.Void LogWarningFormat(UnityEngine.Object context, System.String format, params System.Object[] args)
    // Offset: 0x1F2F944
    static void LogWarningFormat(::UnityEngine::Object* context, ::StringW format, ::ArrayW<::Il2CppObject*> args);
    // static public System.Void LogAssertion(System.Object message)
    // Offset: 0x1F2497C
    static void LogAssertion(::Il2CppObject* message);
    // static System.Boolean CallOverridenDebugHandler(System.Exception exception, UnityEngine.Object obj)
    // Offset: 0x1F2FAB4
    static bool CallOverridenDebugHandler(::System::Exception* exception, ::UnityEngine::Object* obj);
    // static System.Boolean IsLoggingEnabled()
    // Offset: 0x1F2FEC0
    static bool IsLoggingEnabled();
    // static private System.Void DrawLine_Injected(ref UnityEngine.Vector3 start, ref UnityEngine.Vector3 end, ref UnityEngine.Color color, System.Single duration, System.Boolean depthTest)
    // Offset: 0x1F2EB74
    static void DrawLine_Injected(ByRef<::UnityEngine::Vector3> start, ByRef<::UnityEngine::Vector3> end, ByRef<::UnityEngine::Color> color, float duration, bool depthTest);
  }; // UnityEngine.Debug
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Debug::get_unityLogger
// Il2CppName: get_unityLogger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ILogger* (*)()>(&UnityEngine::Debug::get_unityLogger)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Debug*), "get_unityLogger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Debug::get_isDebugBuild
// Il2CppName: get_isDebugBuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::Debug::get_isDebugBuild)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Debug*), "get_isDebugBuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Debug::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Debug::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Debug*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Debug::DrawLine
// Il2CppName: DrawLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color)>(&UnityEngine::Debug::DrawLine)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Debug*), "DrawLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, end, color});
  }
};
// Writing MetadataGetter for method: UnityEngine::Debug::DrawLine
// Il2CppName: DrawLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, float, bool)>(&UnityEngine::Debug::DrawLine)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* depthTest = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Debug*), "DrawLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, end, color, duration, depthTest});
  }
};
// Writing MetadataGetter for method: UnityEngine::Debug::ExtractStackTraceNoAlloc
// Il2CppName: ExtractStackTraceNoAlloc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(uint8_t*, int, ::StringW)>(&UnityEngine::Debug::ExtractStackTraceNoAlloc)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* bufferMax = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* projectFolder = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Debug*), "ExtractStackTraceNoAlloc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, bufferMax, projectFolder});
  }
};
// Writing MetadataGetter for method: UnityEngine::Debug::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&UnityEngine::Debug::Log)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Debug*), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: UnityEngine::Debug::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::UnityEngine::Object*)>(&UnityEngine::Debug::Log)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Debug*), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, context});
  }
};
// Writing MetadataGetter for method: UnityEngine::Debug::LogFormat
// Il2CppName: LogFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::ArrayW<::Il2CppObject*>)>(&UnityEngine::Debug::LogFormat)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Debug*), "LogFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, args});
  }
};
// Writing MetadataGetter for method: UnityEngine::Debug::LogError
// Il2CppName: LogError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&UnityEngine::Debug::LogError)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Debug*), "LogError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: UnityEngine::Debug::LogError
// Il2CppName: LogError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::UnityEngine::Object*)>(&UnityEngine::Debug::LogError)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Debug*), "LogError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, context});
  }
};
// Writing MetadataGetter for method: UnityEngine::Debug::LogErrorFormat
// Il2CppName: LogErrorFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::ArrayW<::Il2CppObject*>)>(&UnityEngine::Debug::LogErrorFormat)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Debug*), "LogErrorFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, args});
  }
};
// Writing MetadataGetter for method: UnityEngine::Debug::LogErrorFormat
// Il2CppName: LogErrorFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Object*, ::StringW, ::ArrayW<::Il2CppObject*>)>(&UnityEngine::Debug::LogErrorFormat)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Debug*), "LogErrorFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, format, args});
  }
};
// Writing MetadataGetter for method: UnityEngine::Debug::LogException
// Il2CppName: LogException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Exception*)>(&UnityEngine::Debug::LogException)> {
  static const MethodInfo* get() {
    static auto* exception = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Debug*), "LogException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exception});
  }
};
// Writing MetadataGetter for method: UnityEngine::Debug::LogException
// Il2CppName: LogException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Exception*, ::UnityEngine::Object*)>(&UnityEngine::Debug::LogException)> {
  static const MethodInfo* get() {
    static auto* exception = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Debug*), "LogException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exception, context});
  }
};
// Writing MetadataGetter for method: UnityEngine::Debug::LogWarning
// Il2CppName: LogWarning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&UnityEngine::Debug::LogWarning)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Debug*), "LogWarning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: UnityEngine::Debug::LogWarning
// Il2CppName: LogWarning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::UnityEngine::Object*)>(&UnityEngine::Debug::LogWarning)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Debug*), "LogWarning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, context});
  }
};
// Writing MetadataGetter for method: UnityEngine::Debug::LogWarningFormat
// Il2CppName: LogWarningFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::ArrayW<::Il2CppObject*>)>(&UnityEngine::Debug::LogWarningFormat)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Debug*), "LogWarningFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, args});
  }
};
// Writing MetadataGetter for method: UnityEngine::Debug::LogWarningFormat
// Il2CppName: LogWarningFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Object*, ::StringW, ::ArrayW<::Il2CppObject*>)>(&UnityEngine::Debug::LogWarningFormat)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Debug*), "LogWarningFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, format, args});
  }
};
// Writing MetadataGetter for method: UnityEngine::Debug::LogAssertion
// Il2CppName: LogAssertion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&UnityEngine::Debug::LogAssertion)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Debug*), "LogAssertion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: UnityEngine::Debug::CallOverridenDebugHandler
// Il2CppName: CallOverridenDebugHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Exception*, ::UnityEngine::Object*)>(&UnityEngine::Debug::CallOverridenDebugHandler)> {
  static const MethodInfo* get() {
    static auto* exception = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Debug*), "CallOverridenDebugHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exception, obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::Debug::IsLoggingEnabled
// Il2CppName: IsLoggingEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::Debug::IsLoggingEnabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Debug*), "IsLoggingEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Debug::DrawLine_Injected
// Il2CppName: DrawLine_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Color>, float, bool)>(&UnityEngine::Debug::DrawLine_Injected)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->this_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* depthTest = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Debug*), "DrawLine_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, end, color, duration, depthTest});
  }
};
