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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ConsoleCancelEventHandler
  class ConsoleCancelEventHandler;
  // Forward declaring type: IntPtr
  struct IntPtr;
  // Forward declaring type: ConsoleKeyInfo
  struct ConsoleKeyInfo;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: TextWriter
  class TextWriter;
  // Forward declaring type: TextReader
  class TextReader;
  // Forward declaring type: Stream
  class Stream;
  // Forward declaring type: FileAccess
  struct FileAccess;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: Console
  class Console;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Console);
DEFINE_IL2CPP_ARG_TYPE(::System::Console*, "System", "Console");
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Console
  // [TokenAttribute] Offset: FFFFFFFF
  class Console : public ::Il2CppObject {
    public:
    // Nested type: ::System::Console::WindowsConsole
    class WindowsConsole;
    // Nested type: ::System::Console::InternalCancelHandler
    class InternalCancelHandler;
    // Get static field: static System.IO.TextWriter stdout
    static ::System::IO::TextWriter* _get_stdout();
    // Set static field: static System.IO.TextWriter stdout
    static void _set_stdout(::System::IO::TextWriter* value);
    // Get static field: static private System.IO.TextWriter stderr
    static ::System::IO::TextWriter* _get_stderr();
    // Set static field: static private System.IO.TextWriter stderr
    static void _set_stderr(::System::IO::TextWriter* value);
    // Get static field: static private System.IO.TextReader stdin
    static ::System::IO::TextReader* _get_stdin();
    // Set static field: static private System.IO.TextReader stdin
    static void _set_stdin(::System::IO::TextReader* value);
    // Get static field: static private System.Text.Encoding inputEncoding
    static ::System::Text::Encoding* _get_inputEncoding();
    // Set static field: static private System.Text.Encoding inputEncoding
    static void _set_inputEncoding(::System::Text::Encoding* value);
    // Get static field: static private System.Text.Encoding outputEncoding
    static ::System::Text::Encoding* _get_outputEncoding();
    // Set static field: static private System.Text.Encoding outputEncoding
    static void _set_outputEncoding(::System::Text::Encoding* value);
    // Get static field: static private System.ConsoleCancelEventHandler cancel_event
    static ::System::ConsoleCancelEventHandler* _get_cancel_event();
    // Set static field: static private System.ConsoleCancelEventHandler cancel_event
    static void _set_cancel_event(::System::ConsoleCancelEventHandler* value);
    // Get static field: static private readonly System.Console/System.InternalCancelHandler cancel_handler
    static ::System::Console::InternalCancelHandler* _get_cancel_handler();
    // Set static field: static private readonly System.Console/System.InternalCancelHandler cancel_handler
    static void _set_cancel_handler(::System::Console::InternalCancelHandler* value);
    // static public System.IO.TextWriter get_Error()
    // Offset: 0x1D9EF1C
    static ::System::IO::TextWriter* get_Error();
    // static public System.IO.TextWriter get_Out()
    // Offset: 0x1D9EF84
    static ::System::IO::TextWriter* get_Out();
    // static public System.Text.Encoding get_InputEncoding()
    // Offset: 0x1D9F240
    static ::System::Text::Encoding* get_InputEncoding();
    // static public System.Text.Encoding get_OutputEncoding()
    // Offset: 0x1D9F2A8
    static ::System::Text::Encoding* get_OutputEncoding();
    // static private System.Void .cctor()
    // Offset: 0x1D9E550
    static void _cctor();
    // static private System.Void SetupStreams(System.Text.Encoding inputEncoding, System.Text.Encoding outputEncoding)
    // Offset: 0x1D9E828
    static void SetupStreams(::System::Text::Encoding* inputEncoding, ::System::Text::Encoding* outputEncoding);
    // static private System.IO.Stream Open(System.IntPtr handle, System.IO.FileAccess access, System.Int32 bufferSize)
    // Offset: 0x1D9EFEC
    static ::System::IO::Stream* Open(::System::IntPtr handle, ::System::IO::FileAccess access, int bufferSize);
    // static public System.IO.Stream OpenStandardError(System.Int32 bufferSize)
    // Offset: 0x1D9EE80
    static ::System::IO::Stream* OpenStandardError(int bufferSize);
    // static public System.IO.Stream OpenStandardInput(System.Int32 bufferSize)
    // Offset: 0x1D9ED48
    static ::System::IO::Stream* OpenStandardInput(int bufferSize);
    // static public System.IO.Stream OpenStandardOutput(System.Int32 bufferSize)
    // Offset: 0x1D9EDE4
    static ::System::IO::Stream* OpenStandardOutput(int bufferSize);
    // static public System.Void SetOut(System.IO.TextWriter newOut)
    // Offset: 0x1D9F110
    static void SetOut(::System::IO::TextWriter* newOut);
    // static public System.Void WriteLine(System.String value)
    // Offset: 0x1D9F1BC
    static void WriteLine(::StringW value);
    // static public System.ConsoleKeyInfo ReadKey()
    // Offset: 0x1D9F310
    static ::System::ConsoleKeyInfo ReadKey();
    // static public System.ConsoleKeyInfo ReadKey(System.Boolean intercept)
    // Offset: 0x1D9F378
    static ::System::ConsoleKeyInfo ReadKey(bool intercept);
    // static System.Void DoConsoleCancelEvent()
    // Offset: 0x1D9F4C8
    static void DoConsoleCancelEvent();
  }; // System.Console
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Console::get_Error
// Il2CppName: get_Error
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::TextWriter* (*)()>(&System::Console::get_Error)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Console*), "get_Error", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Console::get_Out
// Il2CppName: get_Out
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::TextWriter* (*)()>(&System::Console::get_Out)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Console*), "get_Out", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Console::get_InputEncoding
// Il2CppName: get_InputEncoding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (*)()>(&System::Console::get_InputEncoding)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Console*), "get_InputEncoding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Console::get_OutputEncoding
// Il2CppName: get_OutputEncoding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (*)()>(&System::Console::get_OutputEncoding)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Console*), "get_OutputEncoding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Console::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Console::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Console*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Console::SetupStreams
// Il2CppName: SetupStreams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Text::Encoding*, ::System::Text::Encoding*)>(&System::Console::SetupStreams)> {
  static const MethodInfo* get() {
    static auto* inputEncoding = &::il2cpp_utils::GetClassFromName("System.Text", "Encoding")->byval_arg;
    static auto* outputEncoding = &::il2cpp_utils::GetClassFromName("System.Text", "Encoding")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Console*), "SetupStreams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputEncoding, outputEncoding});
  }
};
// Writing MetadataGetter for method: System::Console::Open
// Il2CppName: Open
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (*)(::System::IntPtr, ::System::IO::FileAccess, int)>(&System::Console::Open)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* access = &::il2cpp_utils::GetClassFromName("System.IO", "FileAccess")->byval_arg;
    static auto* bufferSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Console*), "Open", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle, access, bufferSize});
  }
};
// Writing MetadataGetter for method: System::Console::OpenStandardError
// Il2CppName: OpenStandardError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (*)(int)>(&System::Console::OpenStandardError)> {
  static const MethodInfo* get() {
    static auto* bufferSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Console*), "OpenStandardError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bufferSize});
  }
};
// Writing MetadataGetter for method: System::Console::OpenStandardInput
// Il2CppName: OpenStandardInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (*)(int)>(&System::Console::OpenStandardInput)> {
  static const MethodInfo* get() {
    static auto* bufferSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Console*), "OpenStandardInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bufferSize});
  }
};
// Writing MetadataGetter for method: System::Console::OpenStandardOutput
// Il2CppName: OpenStandardOutput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (*)(int)>(&System::Console::OpenStandardOutput)> {
  static const MethodInfo* get() {
    static auto* bufferSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Console*), "OpenStandardOutput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bufferSize});
  }
};
// Writing MetadataGetter for method: System::Console::SetOut
// Il2CppName: SetOut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IO::TextWriter*)>(&System::Console::SetOut)> {
  static const MethodInfo* get() {
    static auto* newOut = &::il2cpp_utils::GetClassFromName("System.IO", "TextWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Console*), "SetOut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newOut});
  }
};
// Writing MetadataGetter for method: System::Console::WriteLine
// Il2CppName: WriteLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&System::Console::WriteLine)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Console*), "WriteLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Console::ReadKey
// Il2CppName: ReadKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ConsoleKeyInfo (*)()>(&System::Console::ReadKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Console*), "ReadKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Console::ReadKey
// Il2CppName: ReadKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ConsoleKeyInfo (*)(bool)>(&System::Console::ReadKey)> {
  static const MethodInfo* get() {
    static auto* intercept = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Console*), "ReadKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{intercept});
  }
};
// Writing MetadataGetter for method: System::Console::DoConsoleCancelEvent
// Il2CppName: DoConsoleCancelEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Console::DoConsoleCancelEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Console*), "DoConsoleCancelEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
