// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.StreamReader
#include "System/IO/StreamReader.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TermInfoDriver
  class TermInfoDriver;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.CStreamReader
  // [TokenAttribute] Offset: FFFFFFFF
  class CStreamReader : public System::IO::StreamReader {
    public:
    // private System.TermInfoDriver driver
    // Size: 0x8
    // Offset: 0x68
    System::TermInfoDriver* driver;
    // Field size check
    static_assert(sizeof(System::TermInfoDriver*) == 0x8);
    // Creating value type constructor for type: CStreamReader
    CStreamReader(System::TermInfoDriver* driver_ = {}) noexcept : driver{driver_} {}
    // Get instance field reference: private System.TermInfoDriver driver
    System::TermInfoDriver*& dyn_driver();
    // public System.Void .ctor(System.IO.Stream stream, System.Text.Encoding encoding)
    // Offset: 0x1AAECC0
    // Implemented from: System.IO.StreamReader
    // Base method: System.Void StreamReader::.ctor(System.IO.Stream stream, System.Text.Encoding encoding)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CStreamReader* New_ctor(System::IO::Stream* stream, System::Text::Encoding* encoding) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::CStreamReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CStreamReader*, creationType>(stream, encoding)));
    }
    // public override System.Int32 Peek()
    // Offset: 0x1AAEE34
    // Implemented from: System.IO.StreamReader
    // Base method: System.Int32 StreamReader::Peek()
    int Peek();
    // public override System.Int32 Read()
    // Offset: 0x1AAEF88
    // Implemented from: System.IO.StreamReader
    // Base method: System.Int32 StreamReader::Read()
    int Read();
    // public override System.Int32 Read(in System.Char[] dest, System.Int32 index, System.Int32 count)
    // Offset: 0x1AAF068
    // Implemented from: System.IO.StreamReader
    // Base method: System.Int32 StreamReader::Read(in System.Char[] dest, System.Int32 index, System.Int32 count)
    int Read(ByRef<::ArrayWrapper<::Il2CppChar>> dest, int index, int count);
    // public override System.String ReadLine()
    // Offset: 0x1AAF234
    // Implemented from: System.IO.StreamReader
    // Base method: System.String StreamReader::ReadLine()
    ::Il2CppString* ReadLine();
    // public override System.String ReadToEnd()
    // Offset: 0x1AAF300
    // Implemented from: System.IO.StreamReader
    // Base method: System.String StreamReader::ReadToEnd()
    ::Il2CppString* ReadToEnd();
  }; // System.IO.CStreamReader
  #pragma pack(pop)
  static check_size<sizeof(CStreamReader), 104 + sizeof(System::TermInfoDriver*)> __System_IO_CStreamReaderSizeCheck;
  static_assert(sizeof(CStreamReader) == 0x70);
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::CStreamReader*, "System.IO", "CStreamReader");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::CStreamReader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::CStreamReader::Peek
// Il2CppName: Peek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::CStreamReader::*)()>(&System::IO::CStreamReader::Peek)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::CStreamReader*), "Peek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::CStreamReader::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::CStreamReader::*)()>(&System::IO::CStreamReader::Read)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::CStreamReader*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::CStreamReader::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::CStreamReader::*)(ByRef<::ArrayWrapper<::Il2CppChar>>, int, int)>(&System::IO::CStreamReader::Read)> {
  static const MethodInfo* get() {
    static auto* dest = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->this_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::CStreamReader*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dest, index, count});
  }
};
// Writing MetadataGetter for method: System::IO::CStreamReader::ReadLine
// Il2CppName: ReadLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::IO::CStreamReader::*)()>(&System::IO::CStreamReader::ReadLine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::CStreamReader*), "ReadLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::CStreamReader::ReadToEnd
// Il2CppName: ReadToEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::IO::CStreamReader::*)()>(&System::IO::CStreamReader::ReadToEnd)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::CStreamReader*), "ReadToEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
