// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
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
  // Forward declaring type: SeekOrigin
  struct SeekOrigin;
}
// Completed forward declares
// Type namespace: System.Data.SqlTypes
namespace System::Data::SqlTypes {
  // Forward declaring type: SqlXmlStreamWrapper
  class SqlXmlStreamWrapper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::SqlTypes::SqlXmlStreamWrapper);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::SqlTypes::SqlXmlStreamWrapper*, "System.Data.SqlTypes", "SqlXmlStreamWrapper");
// Type namespace: System.Data.SqlTypes
namespace System::Data::SqlTypes {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.SqlTypes.SqlXmlStreamWrapper
  // [TokenAttribute] Offset: FFFFFFFF
  class SqlXmlStreamWrapper : public ::System::IO::Stream {
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
    // private System.IO.Stream _stream
    // Size: 0x8
    // Offset: 0x28
    ::System::IO::Stream* stream;
    // Field size check
    static_assert(sizeof(::System::IO::Stream*) == 0x8);
    // private System.Int64 _lPosition
    // Size: 0x8
    // Offset: 0x30
    int64_t lPosition;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Boolean _isClosed
    // Size: 0x1
    // Offset: 0x38
    bool isClosed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.IO.Stream _stream
    ::System::IO::Stream*& dyn__stream();
    // Get instance field reference: private System.Int64 _lPosition
    int64_t& dyn__lPosition();
    // Get instance field reference: private System.Boolean _isClosed
    bool& dyn__isClosed();
    // System.Void .ctor(System.IO.Stream stream)
    // Offset: 0x1504DB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SqlXmlStreamWrapper* New_ctor(::System::IO::Stream* stream) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::SqlTypes::SqlXmlStreamWrapper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SqlXmlStreamWrapper*, creationType>(stream)));
    }
    // private System.Void ThrowIfStreamCannotSeek(System.String method)
    // Offset: 0x15058C0
    void ThrowIfStreamCannotSeek(::StringW method);
    // private System.Void ThrowIfStreamCannotRead(System.String method)
    // Offset: 0x1505DC8
    void ThrowIfStreamCannotRead(::StringW method);
    // private System.Void ThrowIfStreamCannotWrite(System.String method)
    // Offset: 0x1506020
    void ThrowIfStreamCannotWrite(::StringW method);
    // private System.Void ThrowIfStreamClosed(System.String method)
    // Offset: 0x1505820
    void ThrowIfStreamClosed(::StringW method);
    // private System.Boolean IsStreamClosed()
    // Offset: 0x15056A0
    bool IsStreamClosed();
    // public override System.Boolean get_CanRead()
    // Offset: 0x1505658
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanRead()
    bool get_CanRead();
    // public override System.Boolean get_CanSeek()
    // Offset: 0x150571C
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanSeek()
    bool get_CanSeek();
    // public override System.Boolean get_CanWrite()
    // Offset: 0x1505764
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanWrite()
    bool get_CanWrite();
    // public override System.Int64 get_Length()
    // Offset: 0x15057AC
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Length()
    int64_t get_Length();
    // public override System.Int64 get_Position()
    // Offset: 0x1505970
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Position()
    int64_t get_Position();
    // public override System.Void set_Position(System.Int64 value)
    // Offset: 0x15059D4
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::set_Position(System.Int64 value)
    void set_Position(int64_t value);
    // public override System.Int64 Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    // Offset: 0x1505AA4
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);
    // public override System.Int32 Read(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x1505C20
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::Read(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    int Read(::ArrayW<uint8_t> buffer, int offset, int count);
    // public override System.Void Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x1505E78
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    void Write(::ArrayW<uint8_t> buffer, int offset, int count);
    // public override System.Int32 ReadByte()
    // Offset: 0x15060D0
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::ReadByte()
    int ReadByte();
    // public override System.Void WriteByte(System.Byte value)
    // Offset: 0x15061EC
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::WriteByte(System.Byte value)
    void WriteByte(uint8_t value);
    // public override System.Void SetLength(System.Int64 value)
    // Offset: 0x15062D8
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::SetLength(System.Int64 value)
    void SetLength(int64_t value);
    // public override System.Void Flush()
    // Offset: 0x1506374
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Flush()
    void Flush();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1506390
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
  }; // System.Data.SqlTypes.SqlXmlStreamWrapper
  #pragma pack(pop)
  static check_size<sizeof(SqlXmlStreamWrapper), 56 + sizeof(bool)> __System_Data_SqlTypes_SqlXmlStreamWrapperSizeCheck;
  static_assert(sizeof(SqlXmlStreamWrapper) == 0x39);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlXmlStreamWrapper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlXmlStreamWrapper::ThrowIfStreamCannotSeek
// Il2CppName: ThrowIfStreamCannotSeek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::SqlTypes::SqlXmlStreamWrapper::*)(::StringW)>(&System::Data::SqlTypes::SqlXmlStreamWrapper::ThrowIfStreamCannotSeek)> {
  static const MethodInfo* get() {
    static auto* method = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlXmlStreamWrapper*), "ThrowIfStreamCannotSeek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{method});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlXmlStreamWrapper::ThrowIfStreamCannotRead
// Il2CppName: ThrowIfStreamCannotRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::SqlTypes::SqlXmlStreamWrapper::*)(::StringW)>(&System::Data::SqlTypes::SqlXmlStreamWrapper::ThrowIfStreamCannotRead)> {
  static const MethodInfo* get() {
    static auto* method = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlXmlStreamWrapper*), "ThrowIfStreamCannotRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{method});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlXmlStreamWrapper::ThrowIfStreamCannotWrite
// Il2CppName: ThrowIfStreamCannotWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::SqlTypes::SqlXmlStreamWrapper::*)(::StringW)>(&System::Data::SqlTypes::SqlXmlStreamWrapper::ThrowIfStreamCannotWrite)> {
  static const MethodInfo* get() {
    static auto* method = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlXmlStreamWrapper*), "ThrowIfStreamCannotWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{method});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlXmlStreamWrapper::ThrowIfStreamClosed
// Il2CppName: ThrowIfStreamClosed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::SqlTypes::SqlXmlStreamWrapper::*)(::StringW)>(&System::Data::SqlTypes::SqlXmlStreamWrapper::ThrowIfStreamClosed)> {
  static const MethodInfo* get() {
    static auto* method = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlXmlStreamWrapper*), "ThrowIfStreamClosed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{method});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlXmlStreamWrapper::IsStreamClosed
// Il2CppName: IsStreamClosed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::SqlTypes::SqlXmlStreamWrapper::*)()>(&System::Data::SqlTypes::SqlXmlStreamWrapper::IsStreamClosed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlXmlStreamWrapper*), "IsStreamClosed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlXmlStreamWrapper::get_CanRead
// Il2CppName: get_CanRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::SqlTypes::SqlXmlStreamWrapper::*)()>(&System::Data::SqlTypes::SqlXmlStreamWrapper::get_CanRead)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlXmlStreamWrapper*), "get_CanRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlXmlStreamWrapper::get_CanSeek
// Il2CppName: get_CanSeek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::SqlTypes::SqlXmlStreamWrapper::*)()>(&System::Data::SqlTypes::SqlXmlStreamWrapper::get_CanSeek)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlXmlStreamWrapper*), "get_CanSeek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlXmlStreamWrapper::get_CanWrite
// Il2CppName: get_CanWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::SqlTypes::SqlXmlStreamWrapper::*)()>(&System::Data::SqlTypes::SqlXmlStreamWrapper::get_CanWrite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlXmlStreamWrapper*), "get_CanWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlXmlStreamWrapper::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Data::SqlTypes::SqlXmlStreamWrapper::*)()>(&System::Data::SqlTypes::SqlXmlStreamWrapper::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlXmlStreamWrapper*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlXmlStreamWrapper::get_Position
// Il2CppName: get_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Data::SqlTypes::SqlXmlStreamWrapper::*)()>(&System::Data::SqlTypes::SqlXmlStreamWrapper::get_Position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlXmlStreamWrapper*), "get_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlXmlStreamWrapper::set_Position
// Il2CppName: set_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::SqlTypes::SqlXmlStreamWrapper::*)(int64_t)>(&System::Data::SqlTypes::SqlXmlStreamWrapper::set_Position)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlXmlStreamWrapper*), "set_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlXmlStreamWrapper::Seek
// Il2CppName: Seek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Data::SqlTypes::SqlXmlStreamWrapper::*)(int64_t, ::System::IO::SeekOrigin)>(&System::Data::SqlTypes::SqlXmlStreamWrapper::Seek)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* origin = &::il2cpp_utils::GetClassFromName("System.IO", "SeekOrigin")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlXmlStreamWrapper*), "Seek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset, origin});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlXmlStreamWrapper::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Data::SqlTypes::SqlXmlStreamWrapper::*)(::ArrayW<uint8_t>, int, int)>(&System::Data::SqlTypes::SqlXmlStreamWrapper::Read)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlXmlStreamWrapper*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlXmlStreamWrapper::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::SqlTypes::SqlXmlStreamWrapper::*)(::ArrayW<uint8_t>, int, int)>(&System::Data::SqlTypes::SqlXmlStreamWrapper::Write)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlXmlStreamWrapper*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlXmlStreamWrapper::ReadByte
// Il2CppName: ReadByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Data::SqlTypes::SqlXmlStreamWrapper::*)()>(&System::Data::SqlTypes::SqlXmlStreamWrapper::ReadByte)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlXmlStreamWrapper*), "ReadByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlXmlStreamWrapper::WriteByte
// Il2CppName: WriteByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::SqlTypes::SqlXmlStreamWrapper::*)(uint8_t)>(&System::Data::SqlTypes::SqlXmlStreamWrapper::WriteByte)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlXmlStreamWrapper*), "WriteByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlXmlStreamWrapper::SetLength
// Il2CppName: SetLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::SqlTypes::SqlXmlStreamWrapper::*)(int64_t)>(&System::Data::SqlTypes::SqlXmlStreamWrapper::SetLength)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlXmlStreamWrapper*), "SetLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlXmlStreamWrapper::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::SqlTypes::SqlXmlStreamWrapper::*)()>(&System::Data::SqlTypes::SqlXmlStreamWrapper::Flush)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlXmlStreamWrapper*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlXmlStreamWrapper::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::SqlTypes::SqlXmlStreamWrapper::*)(bool)>(&System::Data::SqlTypes::SqlXmlStreamWrapper::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlXmlStreamWrapper*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
