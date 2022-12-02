// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Text.Encoding
#include "System/Text/Encoding.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: EncoderNLS
  class EncoderNLS;
  // Forward declaring type: DecoderNLS
  class DecoderNLS;
  // Forward declaring type: Decoder
  class Decoder;
  // Forward declaring type: Encoder
  class Encoder;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Forward declaring type: ASCIIEncoding
  class ASCIIEncoding;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Text::ASCIIEncoding);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::ASCIIEncoding*, "System.Text", "ASCIIEncoding");
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.ASCIIEncoding
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 106D840
  class ASCIIEncoding : public ::System::Text::Encoding {
    public:
    // public System.Void .ctor()
    // Offset: 0x1F53AC4
    // Implemented from: System.Text.Encoding
    // Base method: System.Void Encoding::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ASCIIEncoding* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::ASCIIEncoding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ASCIIEncoding*, creationType>()));
    }
    // override System.Void SetDefaultFallbacks()
    // Offset: 0x1F53B7C
    // Implemented from: System.Text.Encoding
    // Base method: System.Void Encoding::SetDefaultFallbacks()
    void SetDefaultFallbacks();
    // public override System.Int32 GetByteCount(System.Char[] chars, System.Int32 index, System.Int32 count)
    // Offset: 0x1F53DF8
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetByteCount(System.Char[] chars, System.Int32 index, System.Int32 count)
    int GetByteCount(::ArrayW<::Il2CppChar> chars, int index, int count);
    // public override System.Int32 GetByteCount(System.String chars)
    // Offset: 0x1F53FCC
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetByteCount(System.String chars)
    int GetByteCount(::StringW chars);
    // public override System.Int32 GetByteCount(System.Char* chars, System.Int32 count)
    // Offset: 0x1F5407C
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetByteCount(System.Char* chars, System.Int32 count)
    int GetByteCount(::Il2CppChar* chars, int count);
    // public override System.Int32 GetBytes(System.String chars, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex)
    // Offset: 0x1F54198
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetBytes(System.String chars, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex)
    int GetBytes(::StringW chars, int charIndex, int charCount, ::ArrayW<uint8_t> bytes, int byteIndex);
    // public override System.Int32 GetBytes(System.Char[] chars, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex)
    // Offset: 0x1F54408
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetBytes(System.Char[] chars, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex)
    int GetBytes(::ArrayW<::Il2CppChar> chars, int charIndex, int charCount, ::ArrayW<uint8_t> bytes, int byteIndex);
    // public override System.Int32 GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount)
    // Offset: 0x1F546A8
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount)
    int GetBytes(::Il2CppChar* chars, int charCount, uint8_t* bytes, int byteCount);
    // public override System.Int32 GetCharCount(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    // Offset: 0x1F5480C
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetCharCount(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    int GetCharCount(::ArrayW<uint8_t> bytes, int index, int count);
    // public override System.Int32 GetCharCount(System.Byte* bytes, System.Int32 count)
    // Offset: 0x1F549E0
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetCharCount(System.Byte* bytes, System.Int32 count)
    int GetCharCount(uint8_t* bytes, int count);
    // public override System.Int32 GetChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex)
    // Offset: 0x1F54AFC
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex)
    int GetChars(::ArrayW<uint8_t> bytes, int byteIndex, int byteCount, ::ArrayW<::Il2CppChar> chars, int charIndex);
    // public override System.Int32 GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount)
    // Offset: 0x1F54D9C
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount)
    int GetChars(uint8_t* bytes, int byteCount, ::Il2CppChar* chars, int charCount);
    // public override System.String GetString(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount)
    // Offset: 0x1F54F00
    // Implemented from: System.Text.Encoding
    // Base method: System.String Encoding::GetString(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount)
    ::StringW GetString(::ArrayW<uint8_t> bytes, int byteIndex, int byteCount);
    // override System.Int32 GetByteCount(System.Char* chars, System.Int32 charCount, System.Text.EncoderNLS encoder)
    // Offset: 0x1F550D8
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetByteCount(System.Char* chars, System.Int32 charCount, System.Text.EncoderNLS encoder)
    int GetByteCount(::Il2CppChar* chars, int charCount, ::System::Text::EncoderNLS* encoder);
    // override System.Int32 GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount, System.Text.EncoderNLS encoder)
    // Offset: 0x1F554D4
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount, System.Text.EncoderNLS encoder)
    int GetBytes(::Il2CppChar* chars, int charCount, uint8_t* bytes, int byteCount, ::System::Text::EncoderNLS* encoder);
    // override System.Int32 GetCharCount(System.Byte* bytes, System.Int32 count, System.Text.DecoderNLS decoder)
    // Offset: 0x1F559CC
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetCharCount(System.Byte* bytes, System.Int32 count, System.Text.DecoderNLS decoder)
    int GetCharCount(uint8_t* bytes, int count, ::System::Text::DecoderNLS* decoder);
    // override System.Int32 GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount, System.Text.DecoderNLS decoder)
    // Offset: 0x1F55B78
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount, System.Text.DecoderNLS decoder)
    int GetChars(uint8_t* bytes, int byteCount, ::Il2CppChar* chars, int charCount, ::System::Text::DecoderNLS* decoder);
    // public override System.Int32 GetMaxByteCount(System.Int32 charCount)
    // Offset: 0x1F55EB0
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetMaxByteCount(System.Int32 charCount)
    int GetMaxByteCount(int charCount);
    // public override System.Int32 GetMaxCharCount(System.Int32 byteCount)
    // Offset: 0x1F55FBC
    // Implemented from: System.Text.Encoding
    // Base method: System.Int32 Encoding::GetMaxCharCount(System.Int32 byteCount)
    int GetMaxCharCount(int byteCount);
    // public override System.Text.Decoder GetDecoder()
    // Offset: 0x1F560C4
    // Implemented from: System.Text.Encoding
    // Base method: System.Text.Decoder Encoding::GetDecoder()
    ::System::Text::Decoder* GetDecoder();
    // public override System.Text.Encoder GetEncoder()
    // Offset: 0x1F5616C
    // Implemented from: System.Text.Encoding
    // Base method: System.Text.Encoder Encoding::GetEncoder()
    ::System::Text::Encoder* GetEncoder();
  }; // System.Text.ASCIIEncoding
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::ASCIIEncoding::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::ASCIIEncoding::SetDefaultFallbacks
// Il2CppName: SetDefaultFallbacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::ASCIIEncoding::*)()>(&System::Text::ASCIIEncoding::SetDefaultFallbacks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::ASCIIEncoding*), "SetDefaultFallbacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::ASCIIEncoding::GetByteCount
// Il2CppName: GetByteCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::ASCIIEncoding::*)(::ArrayW<::Il2CppChar>, int, int)>(&System::Text::ASCIIEncoding::GetByteCount)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::ASCIIEncoding*), "GetByteCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, index, count});
  }
};
// Writing MetadataGetter for method: System::Text::ASCIIEncoding::GetByteCount
// Il2CppName: GetByteCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::ASCIIEncoding::*)(::StringW)>(&System::Text::ASCIIEncoding::GetByteCount)> {
  static const MethodInfo* get() {
    static auto* chars = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::ASCIIEncoding*), "GetByteCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars});
  }
};
// Writing MetadataGetter for method: System::Text::ASCIIEncoding::GetByteCount
// Il2CppName: GetByteCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::ASCIIEncoding::*)(::Il2CppChar*, int)>(&System::Text::ASCIIEncoding::GetByteCount)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::ASCIIEncoding*), "GetByteCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, count});
  }
};
// Writing MetadataGetter for method: System::Text::ASCIIEncoding::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::ASCIIEncoding::*)(::StringW, int, int, ::ArrayW<uint8_t>, int)>(&System::Text::ASCIIEncoding::GetBytes)> {
  static const MethodInfo* get() {
    static auto* chars = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* charIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* byteIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::ASCIIEncoding*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, charIndex, charCount, bytes, byteIndex});
  }
};
// Writing MetadataGetter for method: System::Text::ASCIIEncoding::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::ASCIIEncoding::*)(::ArrayW<::Il2CppChar>, int, int, ::ArrayW<uint8_t>, int)>(&System::Text::ASCIIEncoding::GetBytes)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* charIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* byteIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::ASCIIEncoding*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, charIndex, charCount, bytes, byteIndex});
  }
};
// Writing MetadataGetter for method: System::Text::ASCIIEncoding::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::ASCIIEncoding::*)(::Il2CppChar*, int, uint8_t*, int)>(&System::Text::ASCIIEncoding::GetBytes)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::ASCIIEncoding*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, charCount, bytes, byteCount});
  }
};
// Writing MetadataGetter for method: System::Text::ASCIIEncoding::GetCharCount
// Il2CppName: GetCharCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::ASCIIEncoding::*)(::ArrayW<uint8_t>, int, int)>(&System::Text::ASCIIEncoding::GetCharCount)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::ASCIIEncoding*), "GetCharCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, index, count});
  }
};
// Writing MetadataGetter for method: System::Text::ASCIIEncoding::GetCharCount
// Il2CppName: GetCharCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::ASCIIEncoding::*)(uint8_t*, int)>(&System::Text::ASCIIEncoding::GetCharCount)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::ASCIIEncoding*), "GetCharCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, count});
  }
};
// Writing MetadataGetter for method: System::Text::ASCIIEncoding::GetChars
// Il2CppName: GetChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::ASCIIEncoding::*)(::ArrayW<uint8_t>, int, int, ::ArrayW<::Il2CppChar>, int)>(&System::Text::ASCIIEncoding::GetChars)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* byteIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* chars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* charIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::ASCIIEncoding*), "GetChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, byteIndex, byteCount, chars, charIndex});
  }
};
// Writing MetadataGetter for method: System::Text::ASCIIEncoding::GetChars
// Il2CppName: GetChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::ASCIIEncoding::*)(uint8_t*, int, ::Il2CppChar*, int)>(&System::Text::ASCIIEncoding::GetChars)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* chars = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::ASCIIEncoding*), "GetChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, byteCount, chars, charCount});
  }
};
// Writing MetadataGetter for method: System::Text::ASCIIEncoding::GetString
// Il2CppName: GetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Text::ASCIIEncoding::*)(::ArrayW<uint8_t>, int, int)>(&System::Text::ASCIIEncoding::GetString)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* byteIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::ASCIIEncoding*), "GetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, byteIndex, byteCount});
  }
};
// Writing MetadataGetter for method: System::Text::ASCIIEncoding::GetByteCount
// Il2CppName: GetByteCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::ASCIIEncoding::*)(::Il2CppChar*, int, ::System::Text::EncoderNLS*)>(&System::Text::ASCIIEncoding::GetByteCount)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* encoder = &::il2cpp_utils::GetClassFromName("System.Text", "EncoderNLS")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::ASCIIEncoding*), "GetByteCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, charCount, encoder});
  }
};
// Writing MetadataGetter for method: System::Text::ASCIIEncoding::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::ASCIIEncoding::*)(::Il2CppChar*, int, uint8_t*, int, ::System::Text::EncoderNLS*)>(&System::Text::ASCIIEncoding::GetBytes)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* encoder = &::il2cpp_utils::GetClassFromName("System.Text", "EncoderNLS")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::ASCIIEncoding*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, charCount, bytes, byteCount, encoder});
  }
};
// Writing MetadataGetter for method: System::Text::ASCIIEncoding::GetCharCount
// Il2CppName: GetCharCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::ASCIIEncoding::*)(uint8_t*, int, ::System::Text::DecoderNLS*)>(&System::Text::ASCIIEncoding::GetCharCount)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* decoder = &::il2cpp_utils::GetClassFromName("System.Text", "DecoderNLS")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::ASCIIEncoding*), "GetCharCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, count, decoder});
  }
};
// Writing MetadataGetter for method: System::Text::ASCIIEncoding::GetChars
// Il2CppName: GetChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::ASCIIEncoding::*)(uint8_t*, int, ::Il2CppChar*, int, ::System::Text::DecoderNLS*)>(&System::Text::ASCIIEncoding::GetChars)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* chars = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* decoder = &::il2cpp_utils::GetClassFromName("System.Text", "DecoderNLS")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::ASCIIEncoding*), "GetChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, byteCount, chars, charCount, decoder});
  }
};
// Writing MetadataGetter for method: System::Text::ASCIIEncoding::GetMaxByteCount
// Il2CppName: GetMaxByteCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::ASCIIEncoding::*)(int)>(&System::Text::ASCIIEncoding::GetMaxByteCount)> {
  static const MethodInfo* get() {
    static auto* charCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::ASCIIEncoding*), "GetMaxByteCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{charCount});
  }
};
// Writing MetadataGetter for method: System::Text::ASCIIEncoding::GetMaxCharCount
// Il2CppName: GetMaxCharCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::ASCIIEncoding::*)(int)>(&System::Text::ASCIIEncoding::GetMaxCharCount)> {
  static const MethodInfo* get() {
    static auto* byteCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::ASCIIEncoding*), "GetMaxCharCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{byteCount});
  }
};
// Writing MetadataGetter for method: System::Text::ASCIIEncoding::GetDecoder
// Il2CppName: GetDecoder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Decoder* (System::Text::ASCIIEncoding::*)()>(&System::Text::ASCIIEncoding::GetDecoder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::ASCIIEncoding*), "GetDecoder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::ASCIIEncoding::GetEncoder
// Il2CppName: GetEncoder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoder* (System::Text::ASCIIEncoding::*)()>(&System::Text::ASCIIEncoding::GetEncoder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::ASCIIEncoding*), "GetEncoder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
