// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
// Including type: System.IO.Compression.CompressionMode
#include "System/IO/Compression/CompressionMode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO::Compression
namespace System::IO::Compression {
  // Forward declaring type: DeflateStreamNative
  class DeflateStreamNative;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: SeekOrigin
  struct SeekOrigin;
}
// Completed forward declares
// Type namespace: System.IO.Compression
namespace System::IO::Compression {
  // Forward declaring type: DeflateStream
  class DeflateStream;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::Compression::DeflateStream);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::DeflateStream*, "System.IO.Compression", "DeflateStream");
// Type namespace: System.IO.Compression
namespace System::IO::Compression {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.Compression.DeflateStream
  // [TokenAttribute] Offset: FFFFFFFF
  class DeflateStream : public ::System::IO::Stream {
    public:
    // Nested type: ::System::IO::Compression::DeflateStream::ReadMethod
    class ReadMethod;
    // Nested type: ::System::IO::Compression::DeflateStream::WriteMethod
    class WriteMethod;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.IO.Stream base_stream
    // Size: 0x8
    // Offset: 0x28
    ::System::IO::Stream* base_stream;
    // Field size check
    static_assert(sizeof(::System::IO::Stream*) == 0x8);
    // private System.IO.Compression.CompressionMode mode
    // Size: 0x4
    // Offset: 0x30
    ::System::IO::Compression::CompressionMode mode;
    // Field size check
    static_assert(sizeof(::System::IO::Compression::CompressionMode) == 0x4);
    // private System.Boolean leaveOpen
    // Size: 0x1
    // Offset: 0x34
    bool leaveOpen;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean disposed
    // Size: 0x1
    // Offset: 0x35
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disposed and: native
    char __padding3[0x2] = {};
    // private System.IO.Compression.DeflateStreamNative native
    // Size: 0x8
    // Offset: 0x38
    ::System::IO::Compression::DeflateStreamNative* native;
    // Field size check
    static_assert(sizeof(::System::IO::Compression::DeflateStreamNative*) == 0x8);
    public:
    // Get instance field reference: private System.IO.Stream base_stream
    ::System::IO::Stream*& dyn_base_stream();
    // Get instance field reference: private System.IO.Compression.CompressionMode mode
    ::System::IO::Compression::CompressionMode& dyn_mode();
    // Get instance field reference: private System.Boolean leaveOpen
    bool& dyn_leaveOpen();
    // Get instance field reference: private System.Boolean disposed
    bool& dyn_disposed();
    // Get instance field reference: private System.IO.Compression.DeflateStreamNative native
    ::System::IO::Compression::DeflateStreamNative*& dyn_native();
    // public System.Void .ctor(System.IO.Stream stream, System.IO.Compression.CompressionMode mode)
    // Offset: 0x1CB040C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DeflateStream* New_ctor(::System::IO::Stream* stream, ::System::IO::Compression::CompressionMode mode) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::Compression::DeflateStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DeflateStream*, creationType>(stream, mode)));
    }
    // System.Void .ctor(System.IO.Stream stream, System.IO.Compression.CompressionMode mode, System.Boolean leaveOpen, System.Int32 windowsBits)
    // Offset: 0x1CB056C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DeflateStream* New_ctor(::System::IO::Stream* stream, ::System::IO::Compression::CompressionMode mode, bool leaveOpen, int windowsBits) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::Compression::DeflateStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DeflateStream*, creationType>(stream, mode, leaveOpen, windowsBits)));
    }
    // System.Void .ctor(System.IO.Stream compressedStream, System.IO.Compression.CompressionMode mode, System.Boolean leaveOpen, System.Boolean gzip)
    // Offset: 0x1CB0418
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DeflateStream* New_ctor(::System::IO::Stream* compressedStream, ::System::IO::Compression::CompressionMode mode, bool leaveOpen, bool gzip) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::Compression::DeflateStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DeflateStream*, creationType>(compressedStream, mode, leaveOpen, gzip)));
    }
    // private System.Int32 ReadInternal(System.Byte[] array, System.Int32 offset, System.Int32 count)
    // Offset: 0x1CB07EC
    int ReadInternal(::ArrayW<uint8_t> array, int offset, int count);
    // private System.Void WriteInternal(System.Byte[] array, System.Int32 offset, System.Int32 count)
    // Offset: 0x1CB0A84
    void WriteInternal(::ArrayW<uint8_t> array, int offset, int count);
    // public override System.Boolean get_CanRead()
    // Offset: 0x1CB1764
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanRead()
    bool get_CanRead();
    // public override System.Boolean get_CanSeek()
    // Offset: 0x1CB179C
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanSeek()
    bool get_CanSeek();
    // public override System.Boolean get_CanWrite()
    // Offset: 0x1CB17A4
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanWrite()
    bool get_CanWrite();
    // public override System.Int64 get_Length()
    // Offset: 0x1CB17E0
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Length()
    int64_t get_Length();
    // public override System.Int64 get_Position()
    // Offset: 0x1CB1840
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Position()
    int64_t get_Position();
    // public override System.Void set_Position(System.Int64 value)
    // Offset: 0x1CB18A0
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::set_Position(System.Int64 value)
    void set_Position(int64_t value);
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1CB0698
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.Int32 Read(System.Byte[] array, System.Int32 offset, System.Int32 count)
    // Offset: 0x1CB08A8
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::Read(System.Byte[] array, System.Int32 offset, System.Int32 count)
    int Read(::ArrayW<uint8_t> array, int offset, int count);
    // public override System.Void Write(System.Byte[] array, System.Int32 offset, System.Int32 count)
    // Offset: 0x1CB0B30
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Write(System.Byte[] array, System.Int32 offset, System.Int32 count)
    void Write(::ArrayW<uint8_t> array, int offset, int count);
    // public override System.Void Flush()
    // Offset: 0x1CB0D14
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Flush()
    void Flush();
    // public override System.IAsyncResult BeginRead(System.Byte[] array, System.Int32 offset, System.Int32 count, System.AsyncCallback asyncCallback, System.Object asyncState)
    // Offset: 0x1CB0E40
    // Implemented from: System.IO.Stream
    // Base method: System.IAsyncResult Stream::BeginRead(System.Byte[] array, System.Int32 offset, System.Int32 count, System.AsyncCallback asyncCallback, System.Object asyncState)
    ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t> array, int offset, int count, ::System::AsyncCallback* asyncCallback, ::Il2CppObject* asyncState);
    // public override System.IAsyncResult BeginWrite(System.Byte[] array, System.Int32 offset, System.Int32 count, System.AsyncCallback asyncCallback, System.Object asyncState)
    // Offset: 0x1CB1138
    // Implemented from: System.IO.Stream
    // Base method: System.IAsyncResult Stream::BeginWrite(System.Byte[] array, System.Int32 offset, System.Int32 count, System.AsyncCallback asyncCallback, System.Object asyncState)
    ::System::IAsyncResult* BeginWrite(::ArrayW<uint8_t> array, int offset, int count, ::System::AsyncCallback* asyncCallback, ::Il2CppObject* asyncState);
    // public override System.Int32 EndRead(System.IAsyncResult asyncResult)
    // Offset: 0x1CB1430
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::EndRead(System.IAsyncResult asyncResult)
    int EndRead(::System::IAsyncResult* asyncResult);
    // public override System.Void EndWrite(System.IAsyncResult asyncResult)
    // Offset: 0x1CB1578
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::EndWrite(System.IAsyncResult asyncResult)
    void EndWrite(::System::IAsyncResult* asyncResult);
    // public override System.Int64 Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    // Offset: 0x1CB16A4
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);
    // public override System.Void SetLength(System.Int64 value)
    // Offset: 0x1CB1704
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::SetLength(System.Int64 value)
    void SetLength(int64_t value);
  }; // System.IO.Compression.DeflateStream
  #pragma pack(pop)
  static check_size<sizeof(DeflateStream), 56 + sizeof(::System::IO::Compression::DeflateStreamNative*)> __System_IO_Compression_DeflateStreamSizeCheck;
  static_assert(sizeof(DeflateStream) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::Compression::DeflateStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::Compression::DeflateStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::Compression::DeflateStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::Compression::DeflateStream::ReadInternal
// Il2CppName: ReadInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::Compression::DeflateStream::*)(::ArrayW<uint8_t>, int, int)>(&System::IO::Compression::DeflateStream::ReadInternal)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStream*), "ReadInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, offset, count});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStream::WriteInternal
// Il2CppName: WriteInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::DeflateStream::*)(::ArrayW<uint8_t>, int, int)>(&System::IO::Compression::DeflateStream::WriteInternal)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStream*), "WriteInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, offset, count});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStream::get_CanRead
// Il2CppName: get_CanRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::Compression::DeflateStream::*)()>(&System::IO::Compression::DeflateStream::get_CanRead)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStream*), "get_CanRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStream::get_CanSeek
// Il2CppName: get_CanSeek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::Compression::DeflateStream::*)()>(&System::IO::Compression::DeflateStream::get_CanSeek)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStream*), "get_CanSeek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStream::get_CanWrite
// Il2CppName: get_CanWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::Compression::DeflateStream::*)()>(&System::IO::Compression::DeflateStream::get_CanWrite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStream*), "get_CanWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStream::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::IO::Compression::DeflateStream::*)()>(&System::IO::Compression::DeflateStream::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStream*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStream::get_Position
// Il2CppName: get_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::IO::Compression::DeflateStream::*)()>(&System::IO::Compression::DeflateStream::get_Position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStream*), "get_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStream::set_Position
// Il2CppName: set_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::DeflateStream::*)(int64_t)>(&System::IO::Compression::DeflateStream::set_Position)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStream*), "set_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStream::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::DeflateStream::*)(bool)>(&System::IO::Compression::DeflateStream::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStream*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStream::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::Compression::DeflateStream::*)(::ArrayW<uint8_t>, int, int)>(&System::IO::Compression::DeflateStream::Read)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStream*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, offset, count});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStream::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::DeflateStream::*)(::ArrayW<uint8_t>, int, int)>(&System::IO::Compression::DeflateStream::Write)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStream*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, offset, count});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStream::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::DeflateStream::*)()>(&System::IO::Compression::DeflateStream::Flush)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStream*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStream::BeginRead
// Il2CppName: BeginRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::IO::Compression::DeflateStream::*)(::ArrayW<uint8_t>, int, int, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::IO::Compression::DeflateStream::BeginRead)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* asyncCallback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* asyncState = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStream*), "BeginRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, offset, count, asyncCallback, asyncState});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStream::BeginWrite
// Il2CppName: BeginWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::IO::Compression::DeflateStream::*)(::ArrayW<uint8_t>, int, int, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::IO::Compression::DeflateStream::BeginWrite)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* asyncCallback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* asyncState = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStream*), "BeginWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, offset, count, asyncCallback, asyncState});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStream::EndRead
// Il2CppName: EndRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::Compression::DeflateStream::*)(::System::IAsyncResult*)>(&System::IO::Compression::DeflateStream::EndRead)> {
  static const MethodInfo* get() {
    static auto* asyncResult = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStream*), "EndRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncResult});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStream::EndWrite
// Il2CppName: EndWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::DeflateStream::*)(::System::IAsyncResult*)>(&System::IO::Compression::DeflateStream::EndWrite)> {
  static const MethodInfo* get() {
    static auto* asyncResult = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStream*), "EndWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncResult});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStream::Seek
// Il2CppName: Seek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::IO::Compression::DeflateStream::*)(int64_t, ::System::IO::SeekOrigin)>(&System::IO::Compression::DeflateStream::Seek)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* origin = &::il2cpp_utils::GetClassFromName("System.IO", "SeekOrigin")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStream*), "Seek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset, origin});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStream::SetLength
// Il2CppName: SetLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::DeflateStream::*)(int64_t)>(&System::IO::Compression::DeflateStream::SetLength)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStream*), "SetLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
