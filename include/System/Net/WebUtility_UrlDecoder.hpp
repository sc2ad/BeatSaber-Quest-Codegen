// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.WebUtility
#include "System/Net/WebUtility.hpp"
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
  // Forward declaring type: Encoding
  class Encoding;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::WebUtility::UrlDecoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebUtility::UrlDecoder*, "System.Net", "WebUtility/UrlDecoder");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebUtility/System.Net.UrlDecoder
  // [TokenAttribute] Offset: FFFFFFFF
  class WebUtility::UrlDecoder : public ::Il2CppObject {
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
    // private System.Int32 _bufferSize
    // Size: 0x4
    // Offset: 0x10
    int bufferSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _numChars
    // Size: 0x4
    // Offset: 0x14
    int numChars;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Char[] _charBuffer
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::Il2CppChar> charBuffer;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppChar>) == 0x8);
    // private System.Int32 _numBytes
    // Size: 0x4
    // Offset: 0x20
    int numBytes;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: numBytes and: byteBuffer
    char __padding3[0x4] = {};
    // private System.Byte[] _byteBuffer
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint8_t> byteBuffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Text.Encoding _encoding
    // Size: 0x8
    // Offset: 0x30
    ::System::Text::Encoding* encoding;
    // Field size check
    static_assert(sizeof(::System::Text::Encoding*) == 0x8);
    public:
    // Get instance field reference: private System.Int32 _bufferSize
    int& dyn__bufferSize();
    // Get instance field reference: private System.Int32 _numChars
    int& dyn__numChars();
    // Get instance field reference: private System.Char[] _charBuffer
    ::ArrayW<::Il2CppChar>& dyn__charBuffer();
    // Get instance field reference: private System.Int32 _numBytes
    int& dyn__numBytes();
    // Get instance field reference: private System.Byte[] _byteBuffer
    ::ArrayW<uint8_t>& dyn__byteBuffer();
    // Get instance field reference: private System.Text.Encoding _encoding
    ::System::Text::Encoding*& dyn__encoding();
    // System.Void .ctor(System.Int32 bufferSize, System.Text.Encoding encoding)
    // Offset: 0x1BE59EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebUtility::UrlDecoder* New_ctor(int bufferSize, ::System::Text::Encoding* encoding) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::WebUtility::UrlDecoder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebUtility::UrlDecoder*, creationType>(bufferSize, encoding)));
    }
    // private System.Void FlushBytes()
    // Offset: 0x1BE5DA4
    void FlushBytes();
    // System.Void AddChar(System.Char ch)
    // Offset: 0x1BE5B68
    void AddChar(::Il2CppChar ch);
    // System.Void AddByte(System.Byte b)
    // Offset: 0x1BE5AB8
    void AddByte(uint8_t b);
    // System.String GetString()
    // Offset: 0x1BE5BD4
    ::StringW GetString();
  }; // System.Net.WebUtility/System.Net.UrlDecoder
  #pragma pack(pop)
  static check_size<sizeof(WebUtility::UrlDecoder), 48 + sizeof(::System::Text::Encoding*)> __System_Net_WebUtility_UrlDecoderSizeCheck;
  static_assert(sizeof(WebUtility::UrlDecoder) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::WebUtility::UrlDecoder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::WebUtility::UrlDecoder::FlushBytes
// Il2CppName: FlushBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebUtility::UrlDecoder::*)()>(&System::Net::WebUtility::UrlDecoder::FlushBytes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebUtility::UrlDecoder*), "FlushBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebUtility::UrlDecoder::AddChar
// Il2CppName: AddChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebUtility::UrlDecoder::*)(::Il2CppChar)>(&System::Net::WebUtility::UrlDecoder::AddChar)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebUtility::UrlDecoder*), "AddChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch});
  }
};
// Writing MetadataGetter for method: System::Net::WebUtility::UrlDecoder::AddByte
// Il2CppName: AddByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebUtility::UrlDecoder::*)(uint8_t)>(&System::Net::WebUtility::UrlDecoder::AddByte)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebUtility::UrlDecoder*), "AddByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: System::Net::WebUtility::UrlDecoder::GetString
// Il2CppName: GetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::WebUtility::UrlDecoder::*)()>(&System::Net::WebUtility::UrlDecoder::GetString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebUtility::UrlDecoder*), "GetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
