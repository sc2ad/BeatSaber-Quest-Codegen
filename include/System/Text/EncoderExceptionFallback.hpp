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
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: EncoderFallbackBuffer
  class EncoderFallbackBuffer;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Forward declaring type: EncoderExceptionFallback
  class EncoderExceptionFallback;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Text::EncoderExceptionFallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::EncoderExceptionFallback*, "System.Text", "EncoderExceptionFallback");
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.EncoderExceptionFallback
  // [TokenAttribute] Offset: FFFFFFFF
  class EncoderExceptionFallback : public ::System::Text::EncoderFallback {
    public:
    // public override System.Int32 get_MaxCharCount()
    // Offset: 0x1F5730C
    // Implemented from: System.Text.EncoderFallback
    // Base method: System.Int32 EncoderFallback::get_MaxCharCount()
    int get_MaxCharCount();
    // public System.Void .ctor()
    // Offset: 0x1F57298
    // Implemented from: System.Text.EncoderFallback
    // Base method: System.Void EncoderFallback::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EncoderExceptionFallback* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::EncoderExceptionFallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EncoderExceptionFallback*, creationType>()));
    }
    // public override System.Text.EncoderFallbackBuffer CreateFallbackBuffer()
    // Offset: 0x1F572A8
    // Implemented from: System.Text.EncoderFallback
    // Base method: System.Text.EncoderFallbackBuffer EncoderFallback::CreateFallbackBuffer()
    ::System::Text::EncoderFallbackBuffer* CreateFallbackBuffer();
    // public override System.Boolean Equals(System.Object value)
    // Offset: 0x1F57314
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object value)
    bool Equals(::Il2CppObject* value);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1F57378
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Text.EncoderExceptionFallback
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::EncoderExceptionFallback::get_MaxCharCount
// Il2CppName: get_MaxCharCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::EncoderExceptionFallback::*)()>(&System::Text::EncoderExceptionFallback::get_MaxCharCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncoderExceptionFallback*), "get_MaxCharCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::EncoderExceptionFallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::EncoderExceptionFallback::CreateFallbackBuffer
// Il2CppName: CreateFallbackBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::EncoderFallbackBuffer* (System::Text::EncoderExceptionFallback::*)()>(&System::Text::EncoderExceptionFallback::CreateFallbackBuffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncoderExceptionFallback*), "CreateFallbackBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::EncoderExceptionFallback::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::EncoderExceptionFallback::*)(::Il2CppObject*)>(&System::Text::EncoderExceptionFallback::Equals)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncoderExceptionFallback*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Text::EncoderExceptionFallback::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::EncoderExceptionFallback::*)()>(&System::Text::EncoderExceptionFallback::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncoderExceptionFallback*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
