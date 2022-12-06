// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Security.Principal
namespace System::Security::Principal {
  // Forward declaring type: IIdentity
  class IIdentity;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Principal::IIdentity);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Principal::IIdentity*, "System.Security.Principal", "IIdentity");
// Type namespace: System.Security.Principal
namespace System::Security::Principal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Principal.IIdentity
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 106FC6C
  class IIdentity {
    public:
    // public System.String get_AuthenticationType()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_AuthenticationType();
    // public System.String get_Name()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_Name();
  }; // System.Security.Principal.IIdentity
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Principal::IIdentity::get_AuthenticationType
// Il2CppName: get_AuthenticationType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Principal::IIdentity::*)()>(&System::Security::Principal::IIdentity::get_AuthenticationType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::IIdentity*), "get_AuthenticationType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Principal::IIdentity::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Principal::IIdentity::*)()>(&System::Security::Principal::IIdentity::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::IIdentity*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
