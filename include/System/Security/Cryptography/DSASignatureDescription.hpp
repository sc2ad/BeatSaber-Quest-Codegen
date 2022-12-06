// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.SignatureDescription
#include "System/Security/Cryptography/SignatureDescription.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: DSASignatureDescription
  class DSASignatureDescription;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::DSASignatureDescription);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::DSASignatureDescription*, "System.Security.Cryptography", "DSASignatureDescription");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.DSASignatureDescription
  // [TokenAttribute] Offset: FFFFFFFF
  class DSASignatureDescription : public ::System::Security::Cryptography::SignatureDescription {
    public:
    // public System.Void .ctor()
    // Offset: 0x1BA725C
    // Implemented from: System.Security.Cryptography.SignatureDescription
    // Base method: System.Void SignatureDescription::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DSASignatureDescription* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::DSASignatureDescription::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DSASignatureDescription*, creationType>()));
    }
  }; // System.Security.Cryptography.DSASignatureDescription
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::DSASignatureDescription::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
