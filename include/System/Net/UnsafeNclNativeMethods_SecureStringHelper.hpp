// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.UnsafeNclNativeMethods
#include "System/Net/UnsafeNclNativeMethods.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security
namespace System::Security {
  // Forward declaring type: SecureString
  class SecureString;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::UnsafeNclNativeMethods::SecureStringHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::UnsafeNclNativeMethods::SecureStringHelper*, "System.Net", "UnsafeNclNativeMethods/SecureStringHelper");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.UnsafeNclNativeMethods/System.Net.SecureStringHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class UnsafeNclNativeMethods::SecureStringHelper : public ::Il2CppObject {
    public:
    // static System.String CreateString(System.Security.SecureString secureString)
    // Offset: 0x1B4AE9C
    static ::StringW CreateString(::System::Security::SecureString* secureString);
    // static System.Security.SecureString CreateSecureString(System.String plainString)
    // Offset: 0x1B4AFC8
    static ::System::Security::SecureString* CreateSecureString(::StringW plainString);
  }; // System.Net.UnsafeNclNativeMethods/System.Net.SecureStringHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::UnsafeNclNativeMethods::SecureStringHelper::CreateString
// Il2CppName: CreateString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Security::SecureString*)>(&System::Net::UnsafeNclNativeMethods::SecureStringHelper::CreateString)> {
  static const MethodInfo* get() {
    static auto* secureString = &::il2cpp_utils::GetClassFromName("System.Security", "SecureString")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::UnsafeNclNativeMethods::SecureStringHelper*), "CreateString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{secureString});
  }
};
// Writing MetadataGetter for method: System::Net::UnsafeNclNativeMethods::SecureStringHelper::CreateSecureString
// Il2CppName: CreateSecureString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::SecureString* (*)(::StringW)>(&System::Net::UnsafeNclNativeMethods::SecureStringHelper::CreateSecureString)> {
  static const MethodInfo* get() {
    static auto* plainString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::UnsafeNclNativeMethods::SecureStringHelper*), "CreateSecureString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{plainString});
  }
};
