// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.Tls.TlsException
#include "Org/BouncyCastle/Crypto/Tls/TlsException.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Exception because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Tls
namespace Org::BouncyCastle::Crypto::Tls {
  // Size: 0x91
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Tls.TlsFatalAlert
  // [TokenAttribute] Offset: FFFFFFFF
  class TlsFatalAlert : public Org::BouncyCastle::Crypto::Tls::TlsException {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private readonly System.Byte alertDescription
    // Size: 0x1
    // Offset: 0x90
    uint8_t alertDescription;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Deleting conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept = delete;
    // Get instance field reference: private readonly System.Byte alertDescription
    uint8_t& dyn_alertDescription();
    // public System.Void .ctor(System.Byte alertDescription)
    // Offset: 0x13A4B9C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TlsFatalAlert* New_ctor(uint8_t alertDescription) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Tls::TlsFatalAlert::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TlsFatalAlert*, creationType>(alertDescription)));
    }
    // public System.Void .ctor(System.Byte alertDescription, System.Exception alertCause)
    // Offset: 0x13A4D3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TlsFatalAlert* New_ctor(uint8_t alertDescription, System::Exception* alertCause) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Tls::TlsFatalAlert::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TlsFatalAlert*, creationType>(alertDescription, alertCause)));
    }
  }; // Org.BouncyCastle.Crypto.Tls.TlsFatalAlert
  #pragma pack(pop)
  static check_size<sizeof(TlsFatalAlert), 144 + sizeof(uint8_t)> __Org_BouncyCastle_Crypto_Tls_TlsFatalAlertSizeCheck;
  static_assert(sizeof(TlsFatalAlert) == 0x91);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsFatalAlert*, "Org.BouncyCastle.Crypto.Tls", "TlsFatalAlert");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsFatalAlert::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsFatalAlert::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
