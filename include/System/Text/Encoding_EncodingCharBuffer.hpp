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
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: DecoderNLS
  class DecoderNLS;
  // Forward declaring type: DecoderFallbackBuffer
  class DecoderFallbackBuffer;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Text::Encoding::EncodingCharBuffer);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::Encoding::EncodingCharBuffer*, "System.Text", "Encoding/EncodingCharBuffer");
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.Encoding/System.Text.EncodingCharBuffer
  // [TokenAttribute] Offset: FFFFFFFF
  class Encoding::EncodingCharBuffer : public ::Il2CppObject {
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
    // private System.Char* chars
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppChar* chars;
    // Field size check
    static_assert(sizeof(::Il2CppChar*) == 0x8);
    // private System.Char* charStart
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppChar* charStart;
    // Field size check
    static_assert(sizeof(::Il2CppChar*) == 0x8);
    // private System.Char* charEnd
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppChar* charEnd;
    // Field size check
    static_assert(sizeof(::Il2CppChar*) == 0x8);
    // private System.Int32 charCountResult
    // Size: 0x4
    // Offset: 0x28
    int charCountResult;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: charCountResult and: enc
    char __padding3[0x4] = {};
    // private System.Text.Encoding enc
    // Size: 0x8
    // Offset: 0x30
    ::System::Text::Encoding* enc;
    // Field size check
    static_assert(sizeof(::System::Text::Encoding*) == 0x8);
    // private System.Text.DecoderNLS decoder
    // Size: 0x8
    // Offset: 0x38
    ::System::Text::DecoderNLS* decoder;
    // Field size check
    static_assert(sizeof(::System::Text::DecoderNLS*) == 0x8);
    // private System.Byte* byteStart
    // Size: 0x8
    // Offset: 0x40
    uint8_t* byteStart;
    // Field size check
    static_assert(sizeof(uint8_t*) == 0x8);
    // private System.Byte* byteEnd
    // Size: 0x8
    // Offset: 0x48
    uint8_t* byteEnd;
    // Field size check
    static_assert(sizeof(uint8_t*) == 0x8);
    // private System.Byte* bytes
    // Size: 0x8
    // Offset: 0x50
    uint8_t* bytes;
    // Field size check
    static_assert(sizeof(uint8_t*) == 0x8);
    // private System.Text.DecoderFallbackBuffer fallbackBuffer
    // Size: 0x8
    // Offset: 0x58
    ::System::Text::DecoderFallbackBuffer* fallbackBuffer;
    // Field size check
    static_assert(sizeof(::System::Text::DecoderFallbackBuffer*) == 0x8);
    public:
    // Get instance field reference: private System.Char* chars
    ::Il2CppChar*& dyn_chars();
    // Get instance field reference: private System.Char* charStart
    ::Il2CppChar*& dyn_charStart();
    // Get instance field reference: private System.Char* charEnd
    ::Il2CppChar*& dyn_charEnd();
    // Get instance field reference: private System.Int32 charCountResult
    int& dyn_charCountResult();
    // Get instance field reference: private System.Text.Encoding enc
    ::System::Text::Encoding*& dyn_enc();
    // Get instance field reference: private System.Text.DecoderNLS decoder
    ::System::Text::DecoderNLS*& dyn_decoder();
    // Get instance field reference: private System.Byte* byteStart
    uint8_t*& dyn_byteStart();
    // Get instance field reference: private System.Byte* byteEnd
    uint8_t*& dyn_byteEnd();
    // Get instance field reference: private System.Byte* bytes
    uint8_t*& dyn_bytes();
    // Get instance field reference: private System.Text.DecoderFallbackBuffer fallbackBuffer
    ::System::Text::DecoderFallbackBuffer*& dyn_fallbackBuffer();
    // System.Boolean get_MoreData()
    // Offset: 0x1FA6BE8
    bool get_MoreData();
    // System.Int32 get_BytesUsed()
    // Offset: 0x1FA6C1C
    int get_BytesUsed();
    // System.Int32 get_Count()
    // Offset: 0x1FA6D9C
    int get_Count();
    // System.Void .ctor(System.Text.Encoding enc, System.Text.DecoderNLS decoder, System.Char* charStart, System.Int32 charCount, System.Byte* byteStart, System.Int32 byteCount)
    // Offset: 0x1FA6AA8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Encoding::EncodingCharBuffer* New_ctor(::System::Text::Encoding* enc, ::System::Text::DecoderNLS* decoder, ::Il2CppChar* charStart, int charCount, uint8_t* byteStart, int byteCount) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::Encoding::EncodingCharBuffer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Encoding::EncodingCharBuffer*, creationType>(enc, decoder, charStart, charCount, byteStart, byteCount)));
    }
    // System.Boolean AddChar(System.Char ch, System.Int32 numBytes)
    // Offset: 0x1FA6B5C
    bool AddChar(::Il2CppChar ch, int numBytes);
    // System.Boolean AddChar(System.Char ch)
    // Offset: 0x1FA6BD0
    bool AddChar(::Il2CppChar ch);
    // System.Void AdjustBytes(System.Int32 count)
    // Offset: 0x1FA6BD8
    void AdjustBytes(int count);
    // System.Byte GetNextByte()
    // Offset: 0x1FA6BF8
    uint8_t GetNextByte();
    // System.Boolean Fallback(System.Byte fallbackByte)
    // Offset: 0x1FA6C2C
    bool Fallback(uint8_t fallbackByte);
    // System.Boolean Fallback(System.Byte[] byteBuffer)
    // Offset: 0x1FA6CB4
    bool Fallback(::ArrayW<uint8_t> byteBuffer);
  }; // System.Text.Encoding/System.Text.EncodingCharBuffer
  #pragma pack(pop)
  static check_size<sizeof(Encoding::EncodingCharBuffer), 88 + sizeof(::System::Text::DecoderFallbackBuffer*)> __System_Text_Encoding_EncodingCharBufferSizeCheck;
  static_assert(sizeof(Encoding::EncodingCharBuffer) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::Encoding::EncodingCharBuffer::get_MoreData
// Il2CppName: get_MoreData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::Encoding::EncodingCharBuffer::*)()>(&System::Text::Encoding::EncodingCharBuffer::get_MoreData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::Encoding::EncodingCharBuffer*), "get_MoreData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::Encoding::EncodingCharBuffer::get_BytesUsed
// Il2CppName: get_BytesUsed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::Encoding::EncodingCharBuffer::*)()>(&System::Text::Encoding::EncodingCharBuffer::get_BytesUsed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::Encoding::EncodingCharBuffer*), "get_BytesUsed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::Encoding::EncodingCharBuffer::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::Encoding::EncodingCharBuffer::*)()>(&System::Text::Encoding::EncodingCharBuffer::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::Encoding::EncodingCharBuffer*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::Encoding::EncodingCharBuffer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::Encoding::EncodingCharBuffer::AddChar
// Il2CppName: AddChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::Encoding::EncodingCharBuffer::*)(::Il2CppChar, int)>(&System::Text::Encoding::EncodingCharBuffer::AddChar)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* numBytes = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Encoding::EncodingCharBuffer*), "AddChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch, numBytes});
  }
};
// Writing MetadataGetter for method: System::Text::Encoding::EncodingCharBuffer::AddChar
// Il2CppName: AddChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::Encoding::EncodingCharBuffer::*)(::Il2CppChar)>(&System::Text::Encoding::EncodingCharBuffer::AddChar)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Encoding::EncodingCharBuffer*), "AddChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch});
  }
};
// Writing MetadataGetter for method: System::Text::Encoding::EncodingCharBuffer::AdjustBytes
// Il2CppName: AdjustBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::Encoding::EncodingCharBuffer::*)(int)>(&System::Text::Encoding::EncodingCharBuffer::AdjustBytes)> {
  static const MethodInfo* get() {
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Encoding::EncodingCharBuffer*), "AdjustBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{count});
  }
};
// Writing MetadataGetter for method: System::Text::Encoding::EncodingCharBuffer::GetNextByte
// Il2CppName: GetNextByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (System::Text::Encoding::EncodingCharBuffer::*)()>(&System::Text::Encoding::EncodingCharBuffer::GetNextByte)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::Encoding::EncodingCharBuffer*), "GetNextByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::Encoding::EncodingCharBuffer::Fallback
// Il2CppName: Fallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::Encoding::EncodingCharBuffer::*)(uint8_t)>(&System::Text::Encoding::EncodingCharBuffer::Fallback)> {
  static const MethodInfo* get() {
    static auto* fallbackByte = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Encoding::EncodingCharBuffer*), "Fallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fallbackByte});
  }
};
// Writing MetadataGetter for method: System::Text::Encoding::EncodingCharBuffer::Fallback
// Il2CppName: Fallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::Encoding::EncodingCharBuffer::*)(::ArrayW<uint8_t>)>(&System::Text::Encoding::EncodingCharBuffer::Fallback)> {
  static const MethodInfo* get() {
    static auto* byteBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Encoding::EncodingCharBuffer*), "Fallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{byteBuffer});
  }
};
