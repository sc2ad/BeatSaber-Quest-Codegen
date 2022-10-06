// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: Mono.Security.Interface.MonoSslPolicyErrors
#include "Mono/Security/Interface/MonoSslPolicyErrors.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Mono.Security.Interface
namespace Mono::Security::Interface {
  // Forward declaring type: ValidationResult
  class ValidationResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::Interface::ValidationResult);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Interface::ValidationResult*, "Mono.Security.Interface", "ValidationResult");
// Type namespace: Mono.Security.Interface
namespace Mono::Security::Interface {
  // WARNING Size may be invalid!
  // Autogenerated type: Mono.Security.Interface.ValidationResult
  // [TokenAttribute] Offset: FFFFFFFF
  class ValidationResult : public ::Il2CppObject {
    public:
    public:
    // private System.Boolean trusted
    // Size: 0x1
    // Offset: 0x10
    bool trusted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean user_denied
    // Size: 0x1
    // Offset: 0x11
    bool user_denied;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Int32 error_code
    // Size: 0x4
    // Offset: 0x14
    int error_code;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Nullable`1<Mono.Security.Interface.MonoSslPolicyErrors> policy_errors
    // Size: 0xFFFFFFFF
    // Offset: 0x18
    ::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors> policy_errors;
    public:
    // Get instance field reference: private System.Boolean trusted
    [[deprecated("Use field access instead!")]] bool& dyn_trusted();
    // Get instance field reference: private System.Boolean user_denied
    [[deprecated("Use field access instead!")]] bool& dyn_user_denied();
    // Get instance field reference: private System.Int32 error_code
    [[deprecated("Use field access instead!")]] int& dyn_error_code();
    // Get instance field reference: private System.Nullable`1<Mono.Security.Interface.MonoSslPolicyErrors> policy_errors
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors>& dyn_policy_errors();
    // public System.Boolean get_Trusted()
    // Offset: 0x23A5F2C
    bool get_Trusted();
    // public System.Boolean get_UserDenied()
    // Offset: 0x23A5F34
    bool get_UserDenied();
    // public System.Void .ctor(System.Boolean trusted, System.Boolean user_denied, System.Int32 error_code, System.Nullable`1<Mono.Security.Interface.MonoSslPolicyErrors> policy_errors)
    // Offset: 0x23A5ED0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ValidationResult* New_ctor(bool trusted, bool user_denied, int error_code, ::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors> policy_errors) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::Interface::ValidationResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ValidationResult*, creationType>(trusted, user_denied, error_code, policy_errors)));
    }
  }; // Mono.Security.Interface.ValidationResult
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Interface::ValidationResult::get_Trusted
// Il2CppName: get_Trusted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Interface::ValidationResult::*)()>(&Mono::Security::Interface::ValidationResult::get_Trusted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::ValidationResult*), "get_Trusted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::ValidationResult::get_UserDenied
// Il2CppName: get_UserDenied
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Interface::ValidationResult::*)()>(&Mono::Security::Interface::ValidationResult::get_UserDenied)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::ValidationResult*), "get_UserDenied", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::ValidationResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
