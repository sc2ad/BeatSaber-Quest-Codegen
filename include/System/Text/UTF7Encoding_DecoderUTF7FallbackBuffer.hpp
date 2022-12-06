// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Text.UTF7Encoding
#include "System/Text/UTF7Encoding.hpp"
// Including type: System.Text.DecoderFallbackBuffer
#include "System/Text/DecoderFallbackBuffer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Text::UTF7Encoding::DecoderUTF7FallbackBuffer);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::UTF7Encoding::DecoderUTF7FallbackBuffer*, "System.Text", "UTF7Encoding/DecoderUTF7FallbackBuffer");
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.UTF7Encoding/System.Text.DecoderUTF7FallbackBuffer
  // [TokenAttribute] Offset: FFFFFFFF
  class UTF7Encoding::DecoderUTF7FallbackBuffer : public ::System::Text::DecoderFallbackBuffer {
    public:
    public:
    // private System.Char cFallback
    // Size: 0x2
    // Offset: 0x20
    ::Il2CppChar cFallback;
    // Field size check
    static_assert(sizeof(::Il2CppChar) == 0x2);
    // Padding between fields: cFallback and: iCount
    char __padding0[0x2] = {};
    // private System.Int32 iCount
    // Size: 0x4
    // Offset: 0x24
    int iCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 iSize
    // Size: 0x4
    // Offset: 0x28
    int iSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Char cFallback
    [[deprecated("Use field access instead!")]] ::Il2CppChar& dyn_cFallback();
    // Get instance field reference: private System.Int32 iCount
    [[deprecated("Use field access instead!")]] int& dyn_iCount();
    // Get instance field reference: private System.Int32 iSize
    [[deprecated("Use field access instead!")]] int& dyn_iSize();
    // public System.Void .ctor(System.Text.UTF7Encoding/System.Text.DecoderUTF7Fallback fallback)
    // Offset: 0x2290670
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UTF7Encoding::DecoderUTF7FallbackBuffer* New_ctor(::System::Text::UTF7Encoding::DecoderUTF7Fallback* fallback) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::UTF7Encoding::DecoderUTF7FallbackBuffer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UTF7Encoding::DecoderUTF7FallbackBuffer*, creationType>(fallback)));
    }
    // public override System.Int32 get_Remaining()
    // Offset: 0x2290760
    // Implemented from: System.Text.DecoderFallbackBuffer
    // Base method: System.Int32 DecoderFallbackBuffer::get_Remaining()
    int get_Remaining();
    // public override System.Boolean Fallback(System.Byte[] bytesUnknown, System.Int32 index)
    // Offset: 0x22906F4
    // Implemented from: System.Text.DecoderFallbackBuffer
    // Base method: System.Boolean DecoderFallbackBuffer::Fallback(System.Byte[] bytesUnknown, System.Int32 index)
    bool Fallback(::ArrayW<uint8_t> bytesUnknown, int index);
    // public override System.Char GetNextChar()
    // Offset: 0x2290740
    // Implemented from: System.Text.DecoderFallbackBuffer
    // Base method: System.Char DecoderFallbackBuffer::GetNextChar()
    ::Il2CppChar GetNextChar();
    // public override System.Void Reset()
    // Offset: 0x229076C
    // Implemented from: System.Text.DecoderFallbackBuffer
    // Base method: System.Void DecoderFallbackBuffer::Reset()
    void Reset();
    // override System.Int32 InternalFallback(System.Byte[] bytes, System.Byte* pBytes)
    // Offset: 0x229077C
    // Implemented from: System.Text.DecoderFallbackBuffer
    // Base method: System.Int32 DecoderFallbackBuffer::InternalFallback(System.Byte[] bytes, System.Byte* pBytes)
    int InternalFallback(::ArrayW<uint8_t> bytes, uint8_t* pBytes);
  }; // System.Text.UTF7Encoding/System.Text.DecoderUTF7FallbackBuffer
  #pragma pack(pop)
  static check_size<sizeof(UTF7Encoding::DecoderUTF7FallbackBuffer), 40 + sizeof(int)> __System_Text_UTF7Encoding_DecoderUTF7FallbackBufferSizeCheck;
  static_assert(sizeof(UTF7Encoding::DecoderUTF7FallbackBuffer) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::UTF7Encoding::DecoderUTF7FallbackBuffer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::UTF7Encoding::DecoderUTF7FallbackBuffer::get_Remaining
// Il2CppName: get_Remaining
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UTF7Encoding::DecoderUTF7FallbackBuffer::*)()>(&System::Text::UTF7Encoding::DecoderUTF7FallbackBuffer::get_Remaining)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF7Encoding::DecoderUTF7FallbackBuffer*), "get_Remaining", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::UTF7Encoding::DecoderUTF7FallbackBuffer::Fallback
// Il2CppName: Fallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::UTF7Encoding::DecoderUTF7FallbackBuffer::*)(::ArrayW<uint8_t>, int)>(&System::Text::UTF7Encoding::DecoderUTF7FallbackBuffer::Fallback)> {
  static const MethodInfo* get() {
    static auto* bytesUnknown = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF7Encoding::DecoderUTF7FallbackBuffer*), "Fallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytesUnknown, index});
  }
};
// Writing MetadataGetter for method: System::Text::UTF7Encoding::DecoderUTF7FallbackBuffer::GetNextChar
// Il2CppName: GetNextChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (System::Text::UTF7Encoding::DecoderUTF7FallbackBuffer::*)()>(&System::Text::UTF7Encoding::DecoderUTF7FallbackBuffer::GetNextChar)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF7Encoding::DecoderUTF7FallbackBuffer*), "GetNextChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::UTF7Encoding::DecoderUTF7FallbackBuffer::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::UTF7Encoding::DecoderUTF7FallbackBuffer::*)()>(&System::Text::UTF7Encoding::DecoderUTF7FallbackBuffer::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF7Encoding::DecoderUTF7FallbackBuffer*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::UTF7Encoding::DecoderUTF7FallbackBuffer::InternalFallback
// Il2CppName: InternalFallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::UTF7Encoding::DecoderUTF7FallbackBuffer::*)(::ArrayW<uint8_t>, uint8_t*)>(&System::Text::UTF7Encoding::DecoderUTF7FallbackBuffer::InternalFallback)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* pBytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UTF7Encoding::DecoderUTF7FallbackBuffer*), "InternalFallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, pBytes});
  }
};
