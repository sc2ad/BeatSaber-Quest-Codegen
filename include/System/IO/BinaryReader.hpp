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
  // Forward declaring type: Decoder
  class Decoder;
  // Forward declaring type: Encoding
  class Encoding;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Decimal
  struct Decimal;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Forward declaring type: BinaryReader
  class BinaryReader;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::BinaryReader);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::BinaryReader*, "System.IO", "BinaryReader");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x47
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.BinaryReader
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 1188E8C
  class BinaryReader : public ::Il2CppObject/*, public ::System::IDisposable*/ {
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
    // private System.IO.Stream m_stream
    // Size: 0x8
    // Offset: 0x10
    ::System::IO::Stream* m_stream;
    // Field size check
    static_assert(sizeof(::System::IO::Stream*) == 0x8);
    // private System.Byte[] m_buffer
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> m_buffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Text.Decoder m_decoder
    // Size: 0x8
    // Offset: 0x20
    ::System::Text::Decoder* m_decoder;
    // Field size check
    static_assert(sizeof(::System::Text::Decoder*) == 0x8);
    // private System.Byte[] m_charBytes
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint8_t> m_charBytes;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Char[] m_singleChar
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::Il2CppChar> m_singleChar;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppChar>) == 0x8);
    // private System.Char[] m_charBuffer
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::Il2CppChar> m_charBuffer;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppChar>) == 0x8);
    // private System.Int32 m_maxCharsSize
    // Size: 0x4
    // Offset: 0x40
    int m_maxCharsSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean m_2BytesPerChar
    // Size: 0x1
    // Offset: 0x44
    bool m_2BytesPerChar;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_isMemoryStream
    // Size: 0x1
    // Offset: 0x45
    bool m_isMemoryStream;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_leaveOpen
    // Size: 0x1
    // Offset: 0x46
    bool m_leaveOpen;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private System.IO.Stream m_stream
    ::System::IO::Stream*& dyn_m_stream();
    // Get instance field reference: private System.Byte[] m_buffer
    ::ArrayW<uint8_t>& dyn_m_buffer();
    // Get instance field reference: private System.Text.Decoder m_decoder
    ::System::Text::Decoder*& dyn_m_decoder();
    // Get instance field reference: private System.Byte[] m_charBytes
    ::ArrayW<uint8_t>& dyn_m_charBytes();
    // Get instance field reference: private System.Char[] m_singleChar
    ::ArrayW<::Il2CppChar>& dyn_m_singleChar();
    // Get instance field reference: private System.Char[] m_charBuffer
    ::ArrayW<::Il2CppChar>& dyn_m_charBuffer();
    // Get instance field reference: private System.Int32 m_maxCharsSize
    int& dyn_m_maxCharsSize();
    // Get instance field reference: private System.Boolean m_2BytesPerChar
    bool& dyn_m_2BytesPerChar();
    // Get instance field reference: private System.Boolean m_isMemoryStream
    bool& dyn_m_isMemoryStream();
    // Get instance field reference: private System.Boolean m_leaveOpen
    bool& dyn_m_leaveOpen();
    // public System.IO.Stream get_BaseStream()
    // Offset: 0x1F72278
    ::System::IO::Stream* get_BaseStream();
    // public System.Void .ctor(System.IO.Stream input)
    // Offset: 0x1F71FA4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryReader* New_ctor(::System::IO::Stream* input) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::BinaryReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryReader*, creationType>(input)));
    }
    // public System.Void .ctor(System.IO.Stream input, System.Text.Encoding encoding)
    // Offset: 0x1F72270
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryReader* New_ctor(::System::IO::Stream* input, ::System::Text::Encoding* encoding) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::BinaryReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryReader*, creationType>(input, encoding)));
    }
    // public System.Void .ctor(System.IO.Stream input, System.Text.Encoding encoding, System.Boolean leaveOpen)
    // Offset: 0x1F7201C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryReader* New_ctor(::System::IO::Stream* input, ::System::Text::Encoding* encoding, bool leaveOpen) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::BinaryReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryReader*, creationType>(input, encoding, leaveOpen)));
    }
    // public System.Void Close()
    // Offset: 0x1F72280
    void Close();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1F72290
    void Dispose(bool disposing);
    // public System.Void Dispose()
    // Offset: 0x1F722E0
    void Dispose();
    // public System.Int32 Read()
    // Offset: 0x1F722F0
    int Read();
    // public System.Boolean ReadBoolean()
    // Offset: 0x1F7259C
    bool ReadBoolean();
    // public System.Byte ReadByte()
    // Offset: 0x1F725F8
    uint8_t ReadByte();
    // public System.SByte ReadSByte()
    // Offset: 0x1F72654
    int8_t ReadSByte();
    // public System.Char ReadChar()
    // Offset: 0x1F726A8
    ::Il2CppChar ReadChar();
    // public System.Int16 ReadInt16()
    // Offset: 0x1F726E4
    int16_t ReadInt16();
    // public System.UInt16 ReadUInt16()
    // Offset: 0x1F72740
    uint16_t ReadUInt16();
    // public System.Int32 ReadInt32()
    // Offset: 0x1F7279C
    int ReadInt32();
    // public System.UInt32 ReadUInt32()
    // Offset: 0x1F72964
    uint ReadUInt32();
    // public System.Int64 ReadInt64()
    // Offset: 0x1F729E8
    int64_t ReadInt64();
    // public System.UInt64 ReadUInt64()
    // Offset: 0x1F72AAC
    uint64_t ReadUInt64();
    // public System.Single ReadSingle()
    // Offset: 0x1F72B70
    float ReadSingle();
    // public System.Double ReadDouble()
    // Offset: 0x1F72BAC
    double ReadDouble();
    // public System.Decimal ReadDecimal()
    // Offset: 0x1F72BE8
    ::System::Decimal ReadDecimal();
    // public System.String ReadString()
    // Offset: 0x1F72D6C
    ::StringW ReadString();
    // private System.Int32 InternalReadChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x1F730F4
    int InternalReadChars(::ArrayW<::Il2CppChar> buffer, int index, int count);
    // private System.Int32 InternalReadOneChar()
    // Offset: 0x1F72320
    int InternalReadOneChar();
    // public System.Char[] ReadChars(System.Int32 count)
    // Offset: 0x1F73450
    ::ArrayW<::Il2CppChar> ReadChars(int count);
    // public System.Int32 Read(System.Byte[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x1F735B0
    int Read(::ArrayW<uint8_t> buffer, int index, int count);
    // public System.Byte[] ReadBytes(System.Int32 count)
    // Offset: 0x1F73778
    ::ArrayW<uint8_t> ReadBytes(int count);
    // protected System.Void FillBuffer(System.Int32 numBytes)
    // Offset: 0x1F73910
    void FillBuffer(int numBytes);
    // protected internal System.Int32 Read7BitEncodedInt()
    // Offset: 0x1F72FF0
    int Read7BitEncodedInt();
  }; // System.IO.BinaryReader
  #pragma pack(pop)
  static check_size<sizeof(BinaryReader), 70 + sizeof(bool)> __System_IO_BinaryReaderSizeCheck;
  static_assert(sizeof(BinaryReader) == 0x47);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::BinaryReader::get_BaseStream
// Il2CppName: get_BaseStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (System::IO::BinaryReader::*)()>(&System::IO::BinaryReader::get_BaseStream)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::BinaryReader*), "get_BaseStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::BinaryReader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::BinaryReader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::BinaryReader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::BinaryReader::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::BinaryReader::*)()>(&System::IO::BinaryReader::Close)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::BinaryReader*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::BinaryReader::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::BinaryReader::*)(bool)>(&System::IO::BinaryReader::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::BinaryReader*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::IO::BinaryReader::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::BinaryReader::*)()>(&System::IO::BinaryReader::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::BinaryReader*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::BinaryReader::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::BinaryReader::*)()>(&System::IO::BinaryReader::Read)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::BinaryReader*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::BinaryReader::ReadBoolean
// Il2CppName: ReadBoolean
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::BinaryReader::*)()>(&System::IO::BinaryReader::ReadBoolean)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::BinaryReader*), "ReadBoolean", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::BinaryReader::ReadByte
// Il2CppName: ReadByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (System::IO::BinaryReader::*)()>(&System::IO::BinaryReader::ReadByte)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::BinaryReader*), "ReadByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::BinaryReader::ReadSByte
// Il2CppName: ReadSByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (System::IO::BinaryReader::*)()>(&System::IO::BinaryReader::ReadSByte)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::BinaryReader*), "ReadSByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::BinaryReader::ReadChar
// Il2CppName: ReadChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (System::IO::BinaryReader::*)()>(&System::IO::BinaryReader::ReadChar)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::BinaryReader*), "ReadChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::BinaryReader::ReadInt16
// Il2CppName: ReadInt16
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (System::IO::BinaryReader::*)()>(&System::IO::BinaryReader::ReadInt16)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::BinaryReader*), "ReadInt16", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::BinaryReader::ReadUInt16
// Il2CppName: ReadUInt16
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (System::IO::BinaryReader::*)()>(&System::IO::BinaryReader::ReadUInt16)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::BinaryReader*), "ReadUInt16", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::BinaryReader::ReadInt32
// Il2CppName: ReadInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::BinaryReader::*)()>(&System::IO::BinaryReader::ReadInt32)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::BinaryReader*), "ReadInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::BinaryReader::ReadUInt32
// Il2CppName: ReadUInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (System::IO::BinaryReader::*)()>(&System::IO::BinaryReader::ReadUInt32)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::BinaryReader*), "ReadUInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::BinaryReader::ReadInt64
// Il2CppName: ReadInt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::IO::BinaryReader::*)()>(&System::IO::BinaryReader::ReadInt64)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::BinaryReader*), "ReadInt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::BinaryReader::ReadUInt64
// Il2CppName: ReadUInt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (System::IO::BinaryReader::*)()>(&System::IO::BinaryReader::ReadUInt64)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::BinaryReader*), "ReadUInt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::BinaryReader::ReadSingle
// Il2CppName: ReadSingle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (System::IO::BinaryReader::*)()>(&System::IO::BinaryReader::ReadSingle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::BinaryReader*), "ReadSingle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::BinaryReader::ReadDouble
// Il2CppName: ReadDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (System::IO::BinaryReader::*)()>(&System::IO::BinaryReader::ReadDouble)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::BinaryReader*), "ReadDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::BinaryReader::ReadDecimal
// Il2CppName: ReadDecimal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (System::IO::BinaryReader::*)()>(&System::IO::BinaryReader::ReadDecimal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::BinaryReader*), "ReadDecimal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::BinaryReader::ReadString
// Il2CppName: ReadString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::IO::BinaryReader::*)()>(&System::IO::BinaryReader::ReadString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::BinaryReader*), "ReadString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::BinaryReader::InternalReadChars
// Il2CppName: InternalReadChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::BinaryReader::*)(::ArrayW<::Il2CppChar>, int, int)>(&System::IO::BinaryReader::InternalReadChars)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::BinaryReader*), "InternalReadChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::IO::BinaryReader::InternalReadOneChar
// Il2CppName: InternalReadOneChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::BinaryReader::*)()>(&System::IO::BinaryReader::InternalReadOneChar)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::BinaryReader*), "InternalReadOneChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::BinaryReader::ReadChars
// Il2CppName: ReadChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppChar> (System::IO::BinaryReader::*)(int)>(&System::IO::BinaryReader::ReadChars)> {
  static const MethodInfo* get() {
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::BinaryReader*), "ReadChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{count});
  }
};
// Writing MetadataGetter for method: System::IO::BinaryReader::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::BinaryReader::*)(::ArrayW<uint8_t>, int, int)>(&System::IO::BinaryReader::Read)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::BinaryReader*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::IO::BinaryReader::ReadBytes
// Il2CppName: ReadBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::IO::BinaryReader::*)(int)>(&System::IO::BinaryReader::ReadBytes)> {
  static const MethodInfo* get() {
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::BinaryReader*), "ReadBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{count});
  }
};
// Writing MetadataGetter for method: System::IO::BinaryReader::FillBuffer
// Il2CppName: FillBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::BinaryReader::*)(int)>(&System::IO::BinaryReader::FillBuffer)> {
  static const MethodInfo* get() {
    static auto* numBytes = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::BinaryReader*), "FillBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{numBytes});
  }
};
// Writing MetadataGetter for method: System::IO::BinaryReader::Read7BitEncodedInt
// Il2CppName: Read7BitEncodedInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::BinaryReader::*)()>(&System::IO::BinaryReader::Read7BitEncodedInt)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::BinaryReader*), "Read7BitEncodedInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
