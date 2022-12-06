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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: Error
  class Error;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::Error);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::Error*, "Oculus.Platform.Models", "Error");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.Error
  // [TokenAttribute] Offset: FFFFFFFF
  class Error : public ::Il2CppObject {
    public:
    public:
    // public readonly System.Int32 Code
    // Size: 0x4
    // Offset: 0x10
    int Code;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 HttpCode
    // Size: 0x4
    // Offset: 0x14
    int HttpCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.String Message
    // Size: 0x8
    // Offset: 0x18
    ::StringW Message;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public readonly System.Int32 Code
    [[deprecated("Use field access instead!")]] int& dyn_Code();
    // Get instance field reference: public readonly System.Int32 HttpCode
    [[deprecated("Use field access instead!")]] int& dyn_HttpCode();
    // Get instance field reference: public readonly System.String Message
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Message();
    // public System.Void .ctor(System.Int32 code, System.String message, System.Int32 httpCode)
    // Offset: 0x1A07034
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Error* New_ctor(int code, ::StringW message, int httpCode) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::Error::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Error*, creationType>(code, message, httpCode)));
    }
  }; // Oculus.Platform.Models.Error
  #pragma pack(pop)
  static check_size<sizeof(Error), 24 + sizeof(::StringW)> __Oculus_Platform_Models_ErrorSizeCheck;
  static_assert(sizeof(Error) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::Error::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
