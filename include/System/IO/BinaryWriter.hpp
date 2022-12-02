// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
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
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Forward declaring type: BinaryWriter
  class BinaryWriter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::BinaryWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::BinaryWriter*, "System.IO", "BinaryWriter");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.BinaryWriter
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 106EB80
  class BinaryWriter : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // protected System.IO.Stream OutStream
    // Size: 0x8
    // Offset: 0x10
    ::System::IO::Stream* OutStream;
    // Field size check
    static_assert(sizeof(::System::IO::Stream*) == 0x8);
    // private System.Byte[] _buffer
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> buffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Text.Encoding _encoding
    // Size: 0x8
    // Offset: 0x20
    ::System::Text::Encoding* encoding;
    // Field size check
    static_assert(sizeof(::System::Text::Encoding*) == 0x8);
    // private System.Text.Encoder _encoder
    // Size: 0x8
    // Offset: 0x28
    ::System::Text::Encoder* encoder;
    // Field size check
    static_assert(sizeof(::System::Text::Encoder*) == 0x8);
    // [OptionalFieldAttribute] Offset: 0x1073D0C
    // private System.Boolean _leaveOpen
    // Size: 0x1
    // Offset: 0x30
    bool leaveOpen;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: leaveOpen and: largeByteBuffer
    char __padding4[0x7] = {};
    // private System.Byte[] _largeByteBuffer
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<uint8_t> largeByteBuffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Int32 _maxChars
    // Size: 0x4
    // Offset: 0x40
    int maxChars;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating interface conversion operator: i_IDisposable
    inline ::System::IDisposable* i_IDisposable() noexcept {
      return reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get static field: static public readonly System.IO.BinaryWriter Null
    static ::System::IO::BinaryWriter* _get_Null();
    // Set static field: static public readonly System.IO.BinaryWriter Null
    static void _set_Null(::System::IO::BinaryWriter* value);
    // Get instance field reference: protected System.IO.Stream OutStream
    [[deprecated("Use field access instead!")]] ::System::IO::Stream*& dyn_OutStream();
    // Get instance field reference: private System.Byte[] _buffer
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__buffer();
    // Get instance field reference: private System.Text.Encoding _encoding
    [[deprecated("Use field access instead!")]] ::System::Text::Encoding*& dyn__encoding();
    // Get instance field reference: private System.Text.Encoder _encoder
    [[deprecated("Use field access instead!")]] ::System::Text::Encoder*& dyn__encoder();
    // Get instance field reference: private System.Boolean _leaveOpen
    [[deprecated("Use field access instead!")]] bool& dyn__leaveOpen();
    // Get instance field reference: private System.Byte[] _largeByteBuffer
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__largeByteBuffer();
    // Get instance field reference: private System.Int32 _maxChars
    [[deprecated("Use field access instead!")]] int& dyn__maxChars();
    // public System.Void .ctor(System.IO.Stream output)
    // Offset: 0x205742C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryWriter* New_ctor(::System::IO::Stream* output) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::BinaryWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryWriter*, creationType>(output)));
    }
    // public System.Void .ctor(System.IO.Stream output, System.Text.Encoding encoding)
    // Offset: 0x2057614
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryWriter* New_ctor(::System::IO::Stream* output, ::System::Text::Encoding* encoding) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::BinaryWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryWriter*, creationType>(output, encoding)));
    }
    // public System.Void .ctor(System.IO.Stream output, System.Text.Encoding encoding, System.Boolean leaveOpen)
    // Offset: 0x20574AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryWriter* New_ctor(::System::IO::Stream* output, ::System::Text::Encoding* encoding, bool leaveOpen) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::BinaryWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryWriter*, creationType>(output, encoding, leaveOpen)));
    }
    // static private System.Void .cctor()
    // Offset: 0x20581F4
    static void _cctor();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x205761C
    void Dispose(bool disposing);
    // public System.Void Dispose()
    // Offset: 0x2057660
    void Dispose();
    // public System.Void Flush()
    // Offset: 0x2057670
    void Flush();
    // public System.Void Write(System.Boolean value)
    // Offset: 0x2057694
    void Write(bool value);
    // public System.Void Write(System.Byte value)
    // Offset: 0x20576F0
    void Write(uint8_t value);
    // public System.Void Write(System.Byte[] buffer)
    // Offset: 0x2057714
    void Write(::ArrayW<uint8_t> buffer);
    // public System.Void Write(System.Byte[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x20577C4
    void Write(::ArrayW<uint8_t> buffer, int index, int count);
    // public System.Void Write(System.Char ch)
    // Offset: 0x20577E8
    void Write(::Il2CppChar ch);
    // public System.Void Write(System.Char[] chars)
    // Offset: 0x205791C
    void Write(::ArrayW<::Il2CppChar> chars);
    // public System.Void Write(System.Double value)
    // Offset: 0x20579F4
    void Write(double value);
    // public System.Void Write(System.Int16 value)
    // Offset: 0x2057A3C
    void Write(int16_t value);
    // public System.Void Write(System.UInt16 value)
    // Offset: 0x2057AB0
    void Write(uint16_t value);
    // public System.Void Write(System.Int32 value)
    // Offset: 0x2057B24
    void Write(int value);
    // public System.Void Write(System.UInt32 value)
    // Offset: 0x2057BD0
    void Write(uint value);
    // public System.Void Write(System.Int64 value)
    // Offset: 0x2057C7C
    void Write(int64_t value);
    // public System.Void Write(System.UInt64 value)
    // Offset: 0x2057D98
    void Write(uint64_t value);
    // public System.Void Write(System.Single value)
    // Offset: 0x2057EB4
    void Write(float value);
    // public System.Void Write(System.String value)
    // Offset: 0x2057EFC
    void Write(::StringW value);
    // protected System.Void Write7BitEncodedInt(System.Int32 value)
    // Offset: 0x2058190
    void Write7BitEncodedInt(int value);
    // protected System.Void .ctor()
    // Offset: 0x2057350
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryWriter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::BinaryWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryWriter*, creationType>()));
    }
  }; // System.IO.BinaryWriter
  #pragma pack(pop)
  static check_size<sizeof(BinaryWriter), 64 + sizeof(int)> __System_IO_BinaryWriterSizeCheck;
  static_assert(sizeof(BinaryWriter) == 0x44);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::BinaryWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::BinaryWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::BinaryWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::BinaryWriter::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::IO::BinaryWriter::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::BinaryWriter*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::BinaryWriter::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::BinaryWriter::*)(bool)>(&System::IO::BinaryWriter::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::BinaryWriter*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::IO::BinaryWriter::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::BinaryWriter::*)()>(&System::IO::BinaryWriter::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::BinaryWriter*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::BinaryWriter::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::BinaryWriter::*)()>(&System::IO::BinaryWriter::Flush)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::BinaryWriter*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::BinaryWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::BinaryWriter::*)(bool)>(&System::IO::BinaryWriter::Write)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::BinaryWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::BinaryWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::BinaryWriter::*)(uint8_t)>(&System::IO::BinaryWriter::Write)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::BinaryWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::BinaryWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::BinaryWriter::*)(::ArrayW<uint8_t>)>(&System::IO::BinaryWriter::Write)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::BinaryWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer});
  }
};
// Writing MetadataGetter for method: System::IO::BinaryWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::BinaryWriter::*)(::ArrayW<uint8_t>, int, int)>(&System::IO::BinaryWriter::Write)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::BinaryWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::IO::BinaryWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::BinaryWriter::*)(::Il2CppChar)>(&System::IO::BinaryWriter::Write)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::BinaryWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch});
  }
};
// Writing MetadataGetter for method: System::IO::BinaryWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::BinaryWriter::*)(::ArrayW<::Il2CppChar>)>(&System::IO::BinaryWriter::Write)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::BinaryWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars});
  }
};
// Writing MetadataGetter for method: System::IO::BinaryWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::BinaryWriter::*)(double)>(&System::IO::BinaryWriter::Write)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::BinaryWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::BinaryWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::BinaryWriter::*)(int16_t)>(&System::IO::BinaryWriter::Write)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::BinaryWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::BinaryWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::BinaryWriter::*)(uint16_t)>(&System::IO::BinaryWriter::Write)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::BinaryWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::BinaryWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::BinaryWriter::*)(int)>(&System::IO::BinaryWriter::Write)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::BinaryWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::BinaryWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::BinaryWriter::*)(uint)>(&System::IO::BinaryWriter::Write)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::BinaryWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::BinaryWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::BinaryWriter::*)(int64_t)>(&System::IO::BinaryWriter::Write)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::BinaryWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::BinaryWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::BinaryWriter::*)(uint64_t)>(&System::IO::BinaryWriter::Write)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::BinaryWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::BinaryWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::BinaryWriter::*)(float)>(&System::IO::BinaryWriter::Write)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::BinaryWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::BinaryWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::BinaryWriter::*)(::StringW)>(&System::IO::BinaryWriter::Write)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::BinaryWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::BinaryWriter::Write7BitEncodedInt
// Il2CppName: Write7BitEncodedInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::BinaryWriter::*)(int)>(&System::IO::BinaryWriter::Write7BitEncodedInt)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::BinaryWriter*), "Write7BitEncodedInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::IO::BinaryWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
