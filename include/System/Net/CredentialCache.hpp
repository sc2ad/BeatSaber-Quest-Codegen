// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: ICredentials
  class ICredentials;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: CredentialCache
  class CredentialCache;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::CredentialCache);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::CredentialCache*, "System.Net", "CredentialCache");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.CredentialCache
  // [TokenAttribute] Offset: FFFFFFFF
  class CredentialCache : public ::Il2CppObject {
    public:
    // static public System.Net.ICredentials get_DefaultCredentials()
    // Offset: 0x1A3E6F0
    static ::System::Net::ICredentials* get_DefaultCredentials();
  }; // System.Net.CredentialCache
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::CredentialCache::get_DefaultCredentials
// Il2CppName: get_DefaultCredentials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::ICredentials* (*)()>(&System::Net::CredentialCache::get_DefaultCredentials)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::CredentialCache*), "get_DefaultCredentials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
