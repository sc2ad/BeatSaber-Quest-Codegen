// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: NetworkCredential
  class NetworkCredential;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: ICredentials
  class ICredentials;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::ICredentials);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ICredentials*, "System.Net", "ICredentials");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.ICredentials
  // [TokenAttribute] Offset: FFFFFFFF
  class ICredentials {
    public:
    // public System.Net.NetworkCredential GetCredential(System.Uri uri, System.String authType)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Net::NetworkCredential* GetCredential(::System::Uri* uri, ::StringW authType);
  }; // System.Net.ICredentials
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::ICredentials::GetCredential
// Il2CppName: GetCredential
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkCredential* (System::Net::ICredentials::*)(::System::Uri*, ::StringW)>(&System::Net::ICredentials::GetCredential)> {
  static const MethodInfo* get() {
    static auto* uri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    static auto* authType = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ICredentials*), "GetCredential", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uri, authType});
  }
};
