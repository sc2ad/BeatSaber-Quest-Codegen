// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
// Including type: System.IO.Compression.CompressionMode
#include "System/IO/Compression/CompressionMode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO::Compression
namespace System::IO::Compression {
  // Forward declaring type: DeflateStream
  class DeflateStream;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: SeekOrigin
  struct SeekOrigin;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: System.IO.Compression
namespace System::IO::Compression {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.Compression.GZipStream
  // [TokenAttribute] Offset: FFFFFFFF
  class GZipStream : public System::IO::Stream {
    public:
    // private System.IO.Compression.DeflateStream _deflateStream
    // Size: 0x8
    // Offset: 0x28
    System::IO::Compression::DeflateStream* deflateStream;
    // Field size check
    static_assert(sizeof(System::IO::Compression::DeflateStream*) == 0x8);
    // Creating value type constructor for type: GZipStream
    GZipStream(System::IO::Compression::DeflateStream* deflateStream_ = {}) noexcept : deflateStream{deflateStream_} {}
    // Get instance field reference: private System.IO.Compression.DeflateStream _deflateStream
    System::IO::Compression::DeflateStream*& dyn__deflateStream();
    // public System.Void .ctor(System.IO.Stream stream, System.IO.Compression.CompressionMode mode)
    // Offset: 0x1A2F1F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GZipStream* New_ctor(System::IO::Stream* stream, System::IO::Compression::CompressionMode mode) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::Compression::GZipStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GZipStream*, creationType>(stream, mode)));
    }
    // public System.Void .ctor(System.IO.Stream stream, System.IO.Compression.CompressionMode mode, System.Boolean leaveOpen)
    // Offset: 0x1A2F1FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GZipStream* New_ctor(System::IO::Stream* stream, System::IO::Compression::CompressionMode mode, bool leaveOpen) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::Compression::GZipStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GZipStream*, creationType>(stream, mode, leaveOpen)));
    }
    // private System.Void CheckDeflateStream()
    // Offset: 0x1A2F460
    void CheckDeflateStream();
    // static private System.Void ThrowStreamClosedException()
    // Offset: 0x1A2F894
    static void ThrowStreamClosedException();
    // public override System.Boolean get_CanRead()
    // Offset: 0x1A2F2B0
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanRead()
    bool get_CanRead();
    // public override System.Boolean get_CanWrite()
    // Offset: 0x1A2F2C8
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanWrite()
    bool get_CanWrite();
    // public override System.Boolean get_CanSeek()
    // Offset: 0x1A2F2E0
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanSeek()
    bool get_CanSeek();
    // public override System.Int64 get_Length()
    // Offset: 0x1A2F2F8
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Length()
    int64_t get_Length();
    // public override System.Int64 get_Position()
    // Offset: 0x1A2F364
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Position()
    int64_t get_Position();
    // public override System.Void set_Position(System.Int64 value)
    // Offset: 0x1A2F3D0
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::set_Position(System.Int64 value)
    void set_Position(int64_t value);
    // public override System.Void Flush()
    // Offset: 0x1A2F43C
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Flush()
    void Flush();
    // public override System.Int64 Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    // Offset: 0x1A2F478
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    int64_t Seek(int64_t offset, System::IO::SeekOrigin origin);
    // public override System.Void SetLength(System.Int64 value)
    // Offset: 0x1A2F4E4
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::SetLength(System.Int64 value)
    void SetLength(int64_t value);
    // public override System.Int32 ReadByte()
    // Offset: 0x1A2F550
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::ReadByte()
    int ReadByte();
    // public override System.IAsyncResult BeginRead(System.Byte[] array, System.Int32 offset, System.Int32 count, System.AsyncCallback asyncCallback, System.Object asyncState)
    // Offset: 0x1A2F574
    // Implemented from: System.IO.Stream
    // Base method: System.IAsyncResult Stream::BeginRead(System.Byte[] array, System.Int32 offset, System.Int32 count, System.AsyncCallback asyncCallback, System.Object asyncState)
    System::IAsyncResult* BeginRead(::ArrayWrapper<uint8_t> array, int offset, int count, System::AsyncCallback* asyncCallback, ::Il2CppObject* asyncState);
    // public override System.Int32 EndRead(System.IAsyncResult asyncResult)
    // Offset: 0x1A2F638
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::EndRead(System.IAsyncResult asyncResult)
    int EndRead(System::IAsyncResult* asyncResult);
    // public override System.Int32 Read(System.Byte[] array, System.Int32 offset, System.Int32 count)
    // Offset: 0x1A2F688
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::Read(System.Byte[] array, System.Int32 offset, System.Int32 count)
    int Read(::ArrayWrapper<uint8_t> array, int offset, int count);
    // public override System.IAsyncResult BeginWrite(System.Byte[] array, System.Int32 offset, System.Int32 count, System.AsyncCallback asyncCallback, System.Object asyncState)
    // Offset: 0x1A2F6AC
    // Implemented from: System.IO.Stream
    // Base method: System.IAsyncResult Stream::BeginWrite(System.Byte[] array, System.Int32 offset, System.Int32 count, System.AsyncCallback asyncCallback, System.Object asyncState)
    System::IAsyncResult* BeginWrite(::ArrayWrapper<uint8_t> array, int offset, int count, System::AsyncCallback* asyncCallback, ::Il2CppObject* asyncState);
    // public override System.Void EndWrite(System.IAsyncResult asyncResult)
    // Offset: 0x1A2F770
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::EndWrite(System.IAsyncResult asyncResult)
    void EndWrite(System::IAsyncResult* asyncResult);
    // public override System.Void Write(System.Byte[] array, System.Int32 offset, System.Int32 count)
    // Offset: 0x1A2F77C
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Write(System.Byte[] array, System.Int32 offset, System.Int32 count)
    void Write(::ArrayWrapper<uint8_t> array, int offset, int count);
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1A2F7A0
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.Threading.Tasks.Task`1<System.Int32> ReadAsync(System.Byte[] array, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1A2F828
    // Implemented from: System.IO.Stream
    // Base method: System.Threading.Tasks.Task`1<System.Int32> Stream::ReadAsync(System.Byte[] array, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<int>* ReadAsync(::ArrayWrapper<uint8_t> array, int offset, int count, System::Threading::CancellationToken cancellationToken);
    // public override System.Threading.Tasks.Task WriteAsync(System.Byte[] array, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1A2F84C
    // Implemented from: System.IO.Stream
    // Base method: System.Threading.Tasks.Task Stream::WriteAsync(System.Byte[] array, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task* WriteAsync(::ArrayWrapper<uint8_t> array, int offset, int count, System::Threading::CancellationToken cancellationToken);
    // public override System.Threading.Tasks.Task CopyToAsync(System.IO.Stream destination, System.Int32 bufferSize, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1A2F870
    // Implemented from: System.IO.Stream
    // Base method: System.Threading.Tasks.Task Stream::CopyToAsync(System.IO.Stream destination, System.Int32 bufferSize, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task* CopyToAsync(System::IO::Stream* destination, int bufferSize, System::Threading::CancellationToken cancellationToken);
  }; // System.IO.Compression.GZipStream
  #pragma pack(pop)
  static check_size<sizeof(GZipStream), 40 + sizeof(System::IO::Compression::DeflateStream*)> __System_IO_Compression_GZipStreamSizeCheck;
  static_assert(sizeof(GZipStream) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::Compression::GZipStream*, "System.IO.Compression", "GZipStream");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::Compression::GZipStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::Compression::GZipStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::Compression::GZipStream::CheckDeflateStream
// Il2CppName: CheckDeflateStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::GZipStream::*)()>(&System::IO::Compression::GZipStream::CheckDeflateStream)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::GZipStream*), "CheckDeflateStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::GZipStream::ThrowStreamClosedException
// Il2CppName: ThrowStreamClosedException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::IO::Compression::GZipStream::ThrowStreamClosedException)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::GZipStream*), "ThrowStreamClosedException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::GZipStream::get_CanRead
// Il2CppName: get_CanRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::Compression::GZipStream::*)()>(&System::IO::Compression::GZipStream::get_CanRead)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::GZipStream*), "get_CanRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::GZipStream::get_CanWrite
// Il2CppName: get_CanWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::Compression::GZipStream::*)()>(&System::IO::Compression::GZipStream::get_CanWrite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::GZipStream*), "get_CanWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::GZipStream::get_CanSeek
// Il2CppName: get_CanSeek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::Compression::GZipStream::*)()>(&System::IO::Compression::GZipStream::get_CanSeek)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::GZipStream*), "get_CanSeek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::GZipStream::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::IO::Compression::GZipStream::*)()>(&System::IO::Compression::GZipStream::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::GZipStream*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::GZipStream::get_Position
// Il2CppName: get_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::IO::Compression::GZipStream::*)()>(&System::IO::Compression::GZipStream::get_Position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::GZipStream*), "get_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::GZipStream::set_Position
// Il2CppName: set_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::GZipStream::*)(int64_t)>(&System::IO::Compression::GZipStream::set_Position)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::GZipStream*), "set_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::GZipStream::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::GZipStream::*)()>(&System::IO::Compression::GZipStream::Flush)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::GZipStream*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::GZipStream::Seek
// Il2CppName: Seek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::IO::Compression::GZipStream::*)(int64_t, System::IO::SeekOrigin)>(&System::IO::Compression::GZipStream::Seek)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* origin = &::il2cpp_utils::GetClassFromName("System.IO", "SeekOrigin")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::GZipStream*), "Seek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset, origin});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::GZipStream::SetLength
// Il2CppName: SetLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::GZipStream::*)(int64_t)>(&System::IO::Compression::GZipStream::SetLength)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::GZipStream*), "SetLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::GZipStream::ReadByte
// Il2CppName: ReadByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::Compression::GZipStream::*)()>(&System::IO::Compression::GZipStream::ReadByte)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::GZipStream*), "ReadByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::GZipStream::BeginRead
// Il2CppName: BeginRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (System::IO::Compression::GZipStream::*)(::ArrayWrapper<uint8_t>, int, int, System::AsyncCallback*, ::Il2CppObject*)>(&System::IO::Compression::GZipStream::BeginRead)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* asyncCallback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* asyncState = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::GZipStream*), "BeginRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, offset, count, asyncCallback, asyncState});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::GZipStream::EndRead
// Il2CppName: EndRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::Compression::GZipStream::*)(System::IAsyncResult*)>(&System::IO::Compression::GZipStream::EndRead)> {
  static const MethodInfo* get() {
    static auto* asyncResult = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::GZipStream*), "EndRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncResult});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::GZipStream::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::Compression::GZipStream::*)(::ArrayWrapper<uint8_t>, int, int)>(&System::IO::Compression::GZipStream::Read)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::GZipStream*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, offset, count});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::GZipStream::BeginWrite
// Il2CppName: BeginWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (System::IO::Compression::GZipStream::*)(::ArrayWrapper<uint8_t>, int, int, System::AsyncCallback*, ::Il2CppObject*)>(&System::IO::Compression::GZipStream::BeginWrite)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* asyncCallback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* asyncState = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::GZipStream*), "BeginWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, offset, count, asyncCallback, asyncState});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::GZipStream::EndWrite
// Il2CppName: EndWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::GZipStream::*)(System::IAsyncResult*)>(&System::IO::Compression::GZipStream::EndWrite)> {
  static const MethodInfo* get() {
    static auto* asyncResult = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::GZipStream*), "EndWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncResult});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::GZipStream::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::GZipStream::*)(::ArrayWrapper<uint8_t>, int, int)>(&System::IO::Compression::GZipStream::Write)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::GZipStream*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, offset, count});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::GZipStream::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::Compression::GZipStream::*)(bool)>(&System::IO::Compression::GZipStream::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::GZipStream*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::GZipStream::ReadAsync
// Il2CppName: ReadAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<int>* (System::IO::Compression::GZipStream::*)(::ArrayWrapper<uint8_t>, int, int, System::Threading::CancellationToken)>(&System::IO::Compression::GZipStream::ReadAsync)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::GZipStream*), "ReadAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, offset, count, cancellationToken});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::GZipStream::WriteAsync
// Il2CppName: WriteAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task* (System::IO::Compression::GZipStream::*)(::ArrayWrapper<uint8_t>, int, int, System::Threading::CancellationToken)>(&System::IO::Compression::GZipStream::WriteAsync)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::GZipStream*), "WriteAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, offset, count, cancellationToken});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::GZipStream::CopyToAsync
// Il2CppName: CopyToAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task* (System::IO::Compression::GZipStream::*)(System::IO::Stream*, int, System::Threading::CancellationToken)>(&System::IO::Compression::GZipStream::CopyToAsync)> {
  static const MethodInfo* get() {
    static auto* destination = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* bufferSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::GZipStream*), "CopyToAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{destination, bufferSize, cancellationToken});
  }
};
