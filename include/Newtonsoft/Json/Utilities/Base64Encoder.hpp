// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: TextWriter
  class TextWriter;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Forward declaring type: Base64Encoder
  class Base64Encoder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Utilities::Base64Encoder);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::Base64Encoder*, "Newtonsoft.Json.Utilities", "Base64Encoder");
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Utilities.Base64Encoder
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: 10D8C30
  class Base64Encoder : public ::Il2CppObject {
    public:
    public:
    // private readonly System.Char[] _charsLine
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::Il2CppChar> charsLine;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppChar>) == 0x8);
    // private readonly System.IO.TextWriter _writer
    // Size: 0x8
    // Offset: 0x18
    ::System::IO::TextWriter* writer;
    // Field size check
    static_assert(sizeof(::System::IO::TextWriter*) == 0x8);
    // private System.Byte[] _leftOverBytes
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<uint8_t> leftOverBytes;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Int32 _leftOverBytesCount
    // Size: 0x4
    // Offset: 0x28
    int leftOverBytesCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private readonly System.Char[] _charsLine
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppChar>& dyn__charsLine();
    // Get instance field reference: private readonly System.IO.TextWriter _writer
    [[deprecated("Use field access instead!")]] ::System::IO::TextWriter*& dyn__writer();
    // Get instance field reference: private System.Byte[] _leftOverBytes
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__leftOverBytes();
    // Get instance field reference: private System.Int32 _leftOverBytesCount
    [[deprecated("Use field access instead!")]] int& dyn__leftOverBytesCount();
    // public System.Void .ctor(System.IO.TextWriter writer)
    // Offset: 0x211C2B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Base64Encoder* New_ctor(::System::IO::TextWriter* writer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::Base64Encoder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Base64Encoder*, creationType>(writer)));
    }
    // public System.Void Encode(System.Byte[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x211C338
    void Encode(::ArrayW<uint8_t> buffer, int index, int count);
    // public System.Void Flush()
    // Offset: 0x211C6A8
    void Flush();
    // private System.Void WriteChars(System.Char[] chars, System.Int32 index, System.Int32 count)
    // Offset: 0x211C684
    void WriteChars(::ArrayW<::Il2CppChar> chars, int index, int count);
  }; // Newtonsoft.Json.Utilities.Base64Encoder
  #pragma pack(pop)
  static check_size<sizeof(Base64Encoder), 40 + sizeof(int)> __Newtonsoft_Json_Utilities_Base64EncoderSizeCheck;
  static_assert(sizeof(Base64Encoder) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::Base64Encoder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::Base64Encoder::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Utilities::Base64Encoder::*)(::ArrayW<uint8_t>, int, int)>(&Newtonsoft::Json::Utilities::Base64Encoder::Encode)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::Base64Encoder*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::Base64Encoder::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Utilities::Base64Encoder::*)()>(&Newtonsoft::Json::Utilities::Base64Encoder::Flush)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::Base64Encoder*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::Base64Encoder::WriteChars
// Il2CppName: WriteChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Utilities::Base64Encoder::*)(::ArrayW<::Il2CppChar>, int, int)>(&Newtonsoft::Json::Utilities::Base64Encoder::WriteChars)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::Base64Encoder*), "WriteChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, index, count});
  }
};
