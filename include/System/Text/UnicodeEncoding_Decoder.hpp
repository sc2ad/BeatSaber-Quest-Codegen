// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Text.UnicodeEncoding
#include "System/Text/UnicodeEncoding.hpp"
// Including type: System.Text.DecoderNLS
#include "System/Text/DecoderNLS.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Text::UnicodeEncoding::Decoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::UnicodeEncoding::Decoder*, "System.Text", "UnicodeEncoding/Decoder");
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x36
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.UnicodeEncoding/System.Text.Decoder
  // [TokenAttribute] Offset: FFFFFFFF
  class UnicodeEncoding::Decoder : public ::System::Text::DecoderNLS {
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
    // System.Int32 lastByte
    // Size: 0x4
    // Offset: 0x30
    int lastByte;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Char lastChar
    // Size: 0x2
    // Offset: 0x34
    ::Il2CppChar lastChar;
    // Field size check
    static_assert(sizeof(::Il2CppChar) == 0x2);
    public:
    // Get instance field reference: System.Int32 lastByte
    int& dyn_lastByte();
    // Get instance field reference: System.Char lastChar
    ::Il2CppChar& dyn_lastChar();
    // public System.Void .ctor(System.Text.UnicodeEncoding encoding)
    // Offset: 0x1C28840
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnicodeEncoding::Decoder* New_ctor(::System::Text::UnicodeEncoding* encoding) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::UnicodeEncoding::Decoder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnicodeEncoding::Decoder*, creationType>(encoding)));
    }
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1C29194
    void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
    // override System.Boolean get_HasState()
    // Offset: 0x1C29314
    // Implemented from: System.Text.DecoderNLS
    // Base method: System.Boolean DecoderNLS::get_HasState()
    bool get_HasState();
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1C28DDC
    // Implemented from: System.Text.DecoderNLS
    // Base method: System.Void DecoderNLS::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnicodeEncoding::Decoder* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::UnicodeEncoding::Decoder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnicodeEncoding::Decoder*, creationType>(info, context)));
    }
    // public override System.Void Reset()
    // Offset: 0x1C292EC
    // Implemented from: System.Text.DecoderNLS
    // Base method: System.Void DecoderNLS::Reset()
    void Reset();
  }; // System.Text.UnicodeEncoding/System.Text.Decoder
  #pragma pack(pop)
  static check_size<sizeof(UnicodeEncoding::Decoder), 52 + sizeof(::Il2CppChar)> __System_Text_UnicodeEncoding_DecoderSizeCheck;
  static_assert(sizeof(UnicodeEncoding::Decoder) == 0x36);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::Decoder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::Decoder::System_Runtime_Serialization_ISerializable_GetObjectData
// Il2CppName: System.Runtime.Serialization.ISerializable.GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::UnicodeEncoding::Decoder::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::Text::UnicodeEncoding::Decoder::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding::Decoder*), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::Decoder::get_HasState
// Il2CppName: get_HasState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::UnicodeEncoding::Decoder::*)()>(&System::Text::UnicodeEncoding::Decoder::get_HasState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding::Decoder*), "get_HasState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::Decoder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::UnicodeEncoding::Decoder::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::UnicodeEncoding::Decoder::*)()>(&System::Text::UnicodeEncoding::Decoder::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::UnicodeEncoding::Decoder*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
