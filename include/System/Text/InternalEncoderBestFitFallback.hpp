// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Text.EncoderFallback
#include "System/Text/EncoderFallback.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
  // Forward declaring type: EncoderFallbackBuffer
  class EncoderFallbackBuffer;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Forward declaring type: InternalEncoderBestFitFallback
  class InternalEncoderBestFitFallback;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Text::InternalEncoderBestFitFallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::InternalEncoderBestFitFallback*, "System.Text", "InternalEncoderBestFitFallback");
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.InternalEncoderBestFitFallback
  // [TokenAttribute] Offset: FFFFFFFF
  class InternalEncoderBestFitFallback : public ::System::Text::EncoderFallback {
    public:
    // Writing base type padding for base size: 0x11 to desired offset: 0x18
    char ___base_padding[0x7] = {};
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // System.Text.Encoding encoding
    // Size: 0x8
    // Offset: 0x18
    ::System::Text::Encoding* encoding;
    // Field size check
    static_assert(sizeof(::System::Text::Encoding*) == 0x8);
    // System.Char[] arrayBestFit
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::Il2CppChar> arrayBestFit;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppChar>) == 0x8);
    public:
    // Deleting conversion operator: operator bool
    constexpr operator bool() const noexcept = delete;
    // Get instance field reference: System.Text.Encoding encoding
    ::System::Text::Encoding*& dyn_encoding();
    // Get instance field reference: System.Char[] arrayBestFit
    ::ArrayW<::Il2CppChar>& dyn_arrayBestFit();
    // System.Void .ctor(System.Text.Encoding encoding)
    // Offset: 0x1FA24D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InternalEncoderBestFitFallback* New_ctor(::System::Text::Encoding* encoding) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::InternalEncoderBestFitFallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InternalEncoderBestFitFallback*, creationType>(encoding)));
    }
    // public override System.Int32 get_MaxCharCount()
    // Offset: 0x1FA8B7C
    // Implemented from: System.Text.EncoderFallback
    // Base method: System.Int32 EncoderFallback::get_MaxCharCount()
    int get_MaxCharCount();
    // public override System.Text.EncoderFallbackBuffer CreateFallbackBuffer()
    // Offset: 0x1FA8A28
    // Implemented from: System.Text.EncoderFallback
    // Base method: System.Text.EncoderFallbackBuffer EncoderFallback::CreateFallbackBuffer()
    ::System::Text::EncoderFallbackBuffer* CreateFallbackBuffer();
    // public override System.Boolean Equals(System.Object value)
    // Offset: 0x1FA8B84
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object value)
    bool Equals(::Il2CppObject* value);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1FA8C58
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Text.InternalEncoderBestFitFallback
  #pragma pack(pop)
  static check_size<sizeof(InternalEncoderBestFitFallback), 32 + sizeof(::ArrayW<::Il2CppChar>)> __System_Text_InternalEncoderBestFitFallbackSizeCheck;
  static_assert(sizeof(InternalEncoderBestFitFallback) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::InternalEncoderBestFitFallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::InternalEncoderBestFitFallback::get_MaxCharCount
// Il2CppName: get_MaxCharCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::InternalEncoderBestFitFallback::*)()>(&System::Text::InternalEncoderBestFitFallback::get_MaxCharCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::InternalEncoderBestFitFallback*), "get_MaxCharCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::InternalEncoderBestFitFallback::CreateFallbackBuffer
// Il2CppName: CreateFallbackBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::EncoderFallbackBuffer* (System::Text::InternalEncoderBestFitFallback::*)()>(&System::Text::InternalEncoderBestFitFallback::CreateFallbackBuffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::InternalEncoderBestFitFallback*), "CreateFallbackBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::InternalEncoderBestFitFallback::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::InternalEncoderBestFitFallback::*)(::Il2CppObject*)>(&System::Text::InternalEncoderBestFitFallback::Equals)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::InternalEncoderBestFitFallback*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Text::InternalEncoderBestFitFallback::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::InternalEncoderBestFitFallback::*)()>(&System::Text::InternalEncoderBestFitFallback::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::InternalEncoderBestFitFallback*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
