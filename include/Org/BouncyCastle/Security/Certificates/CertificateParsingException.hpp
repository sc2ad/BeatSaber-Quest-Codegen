// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Security.Certificates.CertificateException
#include "Org/BouncyCastle/Security/Certificates/CertificateException.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Security.Certificates
namespace Org::BouncyCastle::Security::Certificates {
  // Forward declaring type: CertificateParsingException
  class CertificateParsingException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Security::Certificates::CertificateParsingException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::Certificates::CertificateParsingException*, "Org.BouncyCastle.Security.Certificates", "CertificateParsingException");
// Type namespace: Org.BouncyCastle.Security.Certificates
namespace Org::BouncyCastle::Security::Certificates {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Security.Certificates.CertificateParsingException
  // [TokenAttribute] Offset: FFFFFFFF
  class CertificateParsingException : public ::Org::BouncyCastle::Security::Certificates::CertificateException {
    public:
    // public System.Void .ctor()
    // Offset: 0x17C90F8
    // Implemented from: Org.BouncyCastle.Security.Certificates.CertificateException
    // Base method: System.Void CertificateException::.ctor()
    // Base method: System.Void GeneralSecurityException::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CertificateParsingException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Security::Certificates::CertificateParsingException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CertificateParsingException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x17C9100
    // Implemented from: Org.BouncyCastle.Security.Certificates.CertificateException
    // Base method: System.Void CertificateException::.ctor(System.String message)
    // Base method: System.Void GeneralSecurityException::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CertificateParsingException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Security::Certificates::CertificateParsingException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CertificateParsingException*, creationType>(message)));
    }
  }; // Org.BouncyCastle.Security.Certificates.CertificateParsingException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Security::Certificates::CertificateParsingException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Security::Certificates::CertificateParsingException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
