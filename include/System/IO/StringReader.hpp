// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.TextReader
#include "System/IO/TextReader.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.StringReader
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: E5E308
  class StringReader : public System::IO::TextReader {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.String _s
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* s;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Int32 _pos
    // Size: 0x4
    // Offset: 0x20
    int pos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _length
    // Size: 0x4
    // Offset: 0x24
    int length;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept = delete;
    // Get instance field reference: private System.String _s
    ::Il2CppString*& dyn__s();
    // Get instance field reference: private System.Int32 _pos
    int& dyn__pos();
    // Get instance field reference: private System.Int32 _length
    int& dyn__length();
    // public System.Void .ctor(System.String s)
    // Offset: 0x1A04CBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StringReader* New_ctor(::Il2CppString* s) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::StringReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StringReader*, creationType>(s)));
    }
    // public override System.Void Close()
    // Offset: 0x1A04D90
    // Implemented from: System.IO.TextReader
    // Base method: System.Void TextReader::Close()
    void Close();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1A04DA0
    // Implemented from: System.IO.TextReader
    // Base method: System.Void TextReader::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.Int32 Peek()
    // Offset: 0x1A04DAC
    // Implemented from: System.IO.TextReader
    // Base method: System.Int32 TextReader::Peek()
    int Peek();
    // public override System.Int32 Read()
    // Offset: 0x1A04E70
    // Implemented from: System.IO.TextReader
    // Base method: System.Int32 TextReader::Read()
    int Read();
    // public override System.Int32 Read(in System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x1A04EB8
    // Implemented from: System.IO.TextReader
    // Base method: System.Int32 TextReader::Read(in System.Char[] buffer, System.Int32 index, System.Int32 count)
    int Read(ByRef<::ArrayW<::Il2CppChar>> buffer, int index, int count);
    // public override System.String ReadToEnd()
    // Offset: 0x1A05098
    // Implemented from: System.IO.TextReader
    // Base method: System.String TextReader::ReadToEnd()
    ::Il2CppString* ReadToEnd();
    // public override System.String ReadLine()
    // Offset: 0x1A050E0
    // Implemented from: System.IO.TextReader
    // Base method: System.String TextReader::ReadLine()
    ::Il2CppString* ReadLine();
  }; // System.IO.StringReader
  #pragma pack(pop)
  static check_size<sizeof(StringReader), 36 + sizeof(int)> __System_IO_StringReaderSizeCheck;
  static_assert(sizeof(StringReader) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::StringReader*, "System.IO", "StringReader");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::StringReader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::StringReader::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StringReader::*)()>(&System::IO::StringReader::Close)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StringReader*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::StringReader::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::StringReader::*)(bool)>(&System::IO::StringReader::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StringReader*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::IO::StringReader::Peek
// Il2CppName: Peek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::StringReader::*)()>(&System::IO::StringReader::Peek)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StringReader*), "Peek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::StringReader::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::StringReader::*)()>(&System::IO::StringReader::Read)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StringReader*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::StringReader::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::StringReader::*)(ByRef<::ArrayW<::Il2CppChar>>, int, int)>(&System::IO::StringReader::Read)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->this_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StringReader*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::IO::StringReader::ReadToEnd
// Il2CppName: ReadToEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::IO::StringReader::*)()>(&System::IO::StringReader::ReadToEnd)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StringReader*), "ReadToEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::StringReader::ReadLine
// Il2CppName: ReadLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::IO::StringReader::*)()>(&System::IO::StringReader::ReadLine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::StringReader*), "ReadLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
