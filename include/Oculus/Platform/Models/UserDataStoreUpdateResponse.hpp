// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: UserDataStoreUpdateResponse
  class UserDataStoreUpdateResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::UserDataStoreUpdateResponse);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::UserDataStoreUpdateResponse*, "Oculus.Platform.Models", "UserDataStoreUpdateResponse");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.UserDataStoreUpdateResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class UserDataStoreUpdateResponse : public ::Il2CppObject {
    public:
    public:
    // public readonly System.Boolean Success
    // Size: 0x1
    // Offset: 0x10
    bool Success;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return Success;
    }
    // Get instance field reference: public readonly System.Boolean Success
    [[deprecated("Use field access instead!")]] bool& dyn_Success();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x2B02BE4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserDataStoreUpdateResponse* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::UserDataStoreUpdateResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserDataStoreUpdateResponse*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.UserDataStoreUpdateResponse
  #pragma pack(pop)
  static check_size<sizeof(UserDataStoreUpdateResponse), 16 + sizeof(bool)> __Oculus_Platform_Models_UserDataStoreUpdateResponseSizeCheck;
  static_assert(sizeof(UserDataStoreUpdateResponse) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::UserDataStoreUpdateResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
