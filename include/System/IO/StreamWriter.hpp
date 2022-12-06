// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.TextWriter
#include "System/IO/TextWriter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
  // Forward declaring type: Encoder
  class Encoder;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Forward declaring type: StreamWriter
  class StreamWriter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::StreamWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::StreamWriter*, "System.IO", "StreamWriter");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.StreamWriter
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 106EBC8
  class StreamWriter : public ::System::IO::TextWriter {
    public:
    public:
    // private System.IO.Stream stream
    // Size: 0x8
    // Offset: 0x28
    ::System::IO::Stream* stream;
    // Field size check
    static_assert(sizeof(::System::IO::Stream*) == 0x8);
    // private System.Text.Encoding encoding
    // Size: 0x8
    // Offset: 0x30
    ::System::Text::Encoding* encoding;
    // Field size check
    static_assert(sizeof(::System::Text::Encoding*) == 0x8);
    // private System.Text.Encoder encoder
    // Size: 0x8
    // Offset: 0x38
    ::System::Text::Encoder* encoder;
    // Field size check
    static_assert(sizeof(::System::Text::Encoder*) == 0x8);
    // private System.Byte[] byteBuffer
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<uint8_t> byteBuffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Char[] charBuffer
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<::Il2CppChar> charBuffer;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppChar>) == 0x8);
    // private System.Int32 charPos
    // Size: 0x4
    // Offset: 0x50
    int charPos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 charLen
    // Size: 0x4
    // Offset: 0x54
    int charLen;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean autoFlush
    // Size: 0x1
    // Offset: 0x58
    bool autoFlush;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean haveWrittenPreamble
    // Size: 0x1
    // Offset: 0x59
    bool haveWrittenPreamble;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean closable
    // Size: 0x1
    // Offset: 0x5A
    bool closable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: closable and: asyncWriteTask
    char __padding9[0x5] = {};
    // private System.Threading.Tasks.Task _asyncWriteTask
    // Size: 0x8
    // Offset: 0x60
    ::System::Threading::Tasks::Task* asyncWriteTask;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::Task*) == 0x8);
    public:
    // Get static field: static public readonly System.IO.StreamWriter Null
    static ::System::IO::StreamWriter* _get_Null();
    // Set static field: static public readonly System.IO.StreamWriter Null
    static void _set_Null(::System::IO::StreamWriter* value);
    // Get static field: static private System.Text.Encoding _UTF8NoBOM
    static ::System::Text::Encoding* _get__UTF8NoBOM();
    // Set static field: static private System.Text.Encoding _UTF8NoBOM
    static void _set__UTF8NoBOM(::System::Text::Encoding* value);
    // Get instance field reference: private System.IO.Stream stream
    [[deprecated("Use field access instead!")]] ::System::IO::Stream*& dyn_stream();
    // Get instance field reference: private System.Text.Encoding encoding
    [[deprecated("Use field access instead!")]] ::System::Text::Encoding*& dyn_encoding();
    // Get instance field reference: private System.Text.Encoder encoder
    [[deprecated("Use field access instead!")]] ::System::Text::Encoder*& dyn_encoder();
    // Get instance field reference: private System.Byte[] byteBuffer
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_byteBuffer();
    // Get instance field reference: private System.Char[] charBuffer
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppChar>& dyn_charBuffer();
    // Get instance field reference: private System.Int32 charPos
    [[deprecated("Use field access instead!")]] int& dyn_charPos();
    // Get instance field reference: private System.Int32 charLen
    [[deprecated("Use field access instead!")]] int& dyn_charLen();
    // Get instance field reference: private System.Boolean autoFlush
    [[deprecated("Use field access instead!")]] bool& dyn_autoFlush();
    // Get instance field reference: private System.Boolean haveWrittenPreamble
    [[deprecated("Use field access instead!")]] bool& dyn_haveWrittenPreamble();
    // Get instance field reference: private System.Boolean closable
    [[deprecated("Use field access instead!")]] bool& dyn_closable();
    // Get instance field reference: private System.Threading.Tasks.Task _asyncWriteTask
    [[deprecated("Use field access instead!")]] ::System::Threading::Tasks::Task*& dyn__asyncWriteTask();
    // static System.Text.Encoding get_UTF8NoBOM()
    // Offset: 0x1C14438
    static ::System::Text::Encoding* get_UTF8NoBOM();
    // public System.Void set_AutoFlush(System.Boolean value)
    // Offset: 0x1C15114
    void set_AutoFlush(bool value);
    // System.Boolean get_LeaveOpen()
    // Offset: 0x1C14EF8
    bool get_LeaveOpen();
    // public System.Void .ctor(System.IO.Stream stream)
    // Offset: 0x1C1462C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamWriter* New_ctor(::System::IO::Stream* stream) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::StreamWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamWriter*, creationType>(stream)));
    }
    // public System.Void .ctor(System.IO.Stream stream, System.Text.Encoding encoding)
    // Offset: 0x1C14858
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamWriter* New_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::StreamWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamWriter*, creationType>(stream, encoding)));
    }
    // public System.Void .ctor(System.IO.Stream stream, System.Text.Encoding encoding, System.Int32 bufferSize)
    // Offset: 0x1C14864
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamWriter* New_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, int bufferSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::StreamWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamWriter*, creationType>(stream, encoding, bufferSize)));
    }
    // public System.Void .ctor(System.IO.Stream stream, System.Text.Encoding encoding, System.Int32 bufferSize, System.Boolean leaveOpen)
    // Offset: 0x1C146B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamWriter* New_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, int bufferSize, bool leaveOpen) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::StreamWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamWriter*, creationType>(stream, encoding, bufferSize, leaveOpen)));
    }
    // public System.Void .ctor(System.String path)
    // Offset: 0x1C149A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamWriter* New_ctor(::StringW path) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::StreamWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamWriter*, creationType>(path)));
    }
    // public System.Void .ctor(System.String path, System.Boolean append)
    // Offset: 0x1C14A34
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamWriter* New_ctor(::StringW path, bool append) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::StreamWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamWriter*, creationType>(path, append)));
    }
    // public System.Void .ctor(System.String path, System.Boolean append, System.Text.Encoding encoding)
    // Offset: 0x1C14AC0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamWriter* New_ctor(::StringW path, bool append, ::System::Text::Encoding* encoding) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::StreamWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamWriter*, creationType>(path, append, encoding)));
    }
    // public System.Void .ctor(System.String path, System.Boolean append, System.Text.Encoding encoding, System.Int32 bufferSize)
    // Offset: 0x1C14A28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamWriter* New_ctor(::StringW path, bool append, ::System::Text::Encoding* encoding, int bufferSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::StreamWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamWriter*, creationType>(path, append, encoding, bufferSize)));
    }
    // System.Void .ctor(System.String path, System.Boolean append, System.Text.Encoding encoding, System.Int32 bufferSize, System.Boolean checkHost)
    // Offset: 0x1C14AD0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamWriter* New_ctor(::StringW path, bool append, ::System::Text::Encoding* encoding, int bufferSize, bool checkHost) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::StreamWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamWriter*, creationType>(path, append, encoding, bufferSize, checkHost)));
    }
    // private System.Void CheckAsyncTaskInProgress()
    // Offset: 0x1C14390
    void CheckAsyncTaskInProgress();
    // private System.Void Init(System.IO.Stream streamArg, System.Text.Encoding encodingArg, System.Int32 bufferSize, System.Boolean shouldLeaveOpen)
    // Offset: 0x1C1486C
    void Init(::System::IO::Stream* streamArg, ::System::Text::Encoding* encodingArg, int bufferSize, bool shouldLeaveOpen);
    // static private System.IO.Stream CreateFile(System.String path, System.Boolean append, System.Boolean checkHost)
    // Offset: 0x1C14CB8
    static ::System::IO::Stream* CreateFile(::StringW path, bool append, bool checkHost);
    // private System.Void Flush(System.Boolean flushStream, System.Boolean flushEncoder)
    // Offset: 0x1C14F08
    void Flush(bool flushStream, bool flushEncoder);
    // public override System.Text.Encoding get_Encoding()
    // Offset: 0x1C15168
    // Implemented from: System.IO.TextWriter
    // Base method: System.Text.Encoding TextWriter::get_Encoding()
    ::System::Text::Encoding* get_Encoding();
    // System.Void .ctor()
    // Offset: 0x1C1452C
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::.ctor()
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamWriter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::StreamWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamWriter*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1C155F0
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::.cctor()
    static void _cctor();
    // public override System.Void Close()
    // Offset: 0x1C14DA8
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Close()
    void Close();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1C14E24
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.Void Flush()
    // Offset: 0x1C15064
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Flush()
    void Flush();
    // public override System.Void Write(System.Char value)
    // Offset: 0x1C15170
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.Char value)
    void Write(::Il2CppChar value);
    // public override System.Void Write(System.Char[] buffer)
    // Offset: 0x1C1520C
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.Char[] buffer)
    void Write(::ArrayW<::Il2CppChar> buffer);
    // public override System.Void Write(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x1C152E4
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void Write(::ArrayW<::Il2CppChar> buffer, int index, int count);
    // public override System.Void Write(System.String value)
    // Offset: 0x1C1551C
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.String value)
    void Write(::StringW value);
  }; // System.IO.StreamWriter
  #pragma pack(pop)
  static check_size<sizeof(StreamWriter), 96 + sizeof(::System::Threading::Tasks::Task*)> __System_IO_StreamWriterSizeCheck;
  static_assert(sizeof(StreamWriter) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::StreamWriter::get_UTF8NoBOM
// Il2CppName: get_UTF8NoBOM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (*)()>(&System::IO::StreamWriter::get_UTF8NoBOM)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamWriter*), "get_UTF8NoBOM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::StreamWriter::set_AutoFlush
// Il2CppName: set_AutoFlush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StreamWriter::*)(bool)>(&System::IO::StreamWriter::set_AutoFlush)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamWriter*), "set_AutoFlush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::StreamWriter::get_LeaveOpen
// Il2CppName: get_LeaveOpen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::StreamWriter::*)()>(&System::IO::StreamWriter::get_LeaveOpen)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamWriter*), "get_LeaveOpen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::StreamWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::StreamWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::StreamWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::StreamWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::StreamWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::StreamWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::StreamWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::StreamWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::StreamWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::StreamWriter::CheckAsyncTaskInProgress
// Il2CppName: CheckAsyncTaskInProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StreamWriter::*)()>(&System::IO::StreamWriter::CheckAsyncTaskInProgress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamWriter*), "CheckAsyncTaskInProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::StreamWriter::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StreamWriter::*)(::System::IO::Stream*, ::System::Text::Encoding*, int, bool)>(&System::IO::StreamWriter::Init)> {
  static const MethodInfo* get() {
    static auto* streamArg = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* encodingArg = &::il2cpp_utils::GetClassFromName("System.Text", "Encoding")->byval_arg;
    static auto* bufferSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* shouldLeaveOpen = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamWriter*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{streamArg, encodingArg, bufferSize, shouldLeaveOpen});
  }
};
// Writing MetadataGetter for method: System::IO::StreamWriter::CreateFile
// Il2CppName: CreateFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (*)(::StringW, bool, bool)>(&System::IO::StreamWriter::CreateFile)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* append = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* checkHost = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamWriter*), "CreateFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, append, checkHost});
  }
};
// Writing MetadataGetter for method: System::IO::StreamWriter::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StreamWriter::*)(bool, bool)>(&System::IO::StreamWriter::Flush)> {
  static const MethodInfo* get() {
    static auto* flushStream = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* flushEncoder = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamWriter*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{flushStream, flushEncoder});
  }
};
// Writing MetadataGetter for method: System::IO::StreamWriter::get_Encoding
// Il2CppName: get_Encoding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (System::IO::StreamWriter::*)()>(&System::IO::StreamWriter::get_Encoding)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamWriter*), "get_Encoding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::StreamWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::StreamWriter::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::IO::StreamWriter::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamWriter*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::StreamWriter::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StreamWriter::*)()>(&System::IO::StreamWriter::Close)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamWriter*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::StreamWriter::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StreamWriter::*)(bool)>(&System::IO::StreamWriter::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamWriter*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::IO::StreamWriter::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StreamWriter::*)()>(&System::IO::StreamWriter::Flush)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamWriter*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::StreamWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StreamWriter::*)(::Il2CppChar)>(&System::IO::StreamWriter::Write)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::StreamWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StreamWriter::*)(::ArrayW<::Il2CppChar>)>(&System::IO::StreamWriter::Write)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer});
  }
};
// Writing MetadataGetter for method: System::IO::StreamWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StreamWriter::*)(::ArrayW<::Il2CppChar>, int, int)>(&System::IO::StreamWriter::Write)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::IO::StreamWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StreamWriter::*)(::StringW)>(&System::IO::StreamWriter::Write)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
