// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.IOException
#include "System/IO/IOException.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Exception because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Tls
namespace Org::BouncyCastle::Crypto::Tls {
  // Forward declaring type: TlsException
  class TlsException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsException*, "Org.BouncyCastle.Crypto.Tls", "TlsException");
// Type namespace: Org.BouncyCastle.Crypto.Tls
namespace Org::BouncyCastle::Crypto::Tls {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Tls.TlsException
  // [TokenAttribute] Offset: FFFFFFFF
  class TlsException : public ::System::IO::IOException {
    public:
    // public System.Void .ctor(System.String message, System.Exception cause)
    // Offset: 0x15D1ED4
    // Implemented from: System.IO.IOException
    // Base method: System.Void IOException::.ctor(System.String message, System.Exception cause)
    // Base method: System.Void SystemException::.ctor(System.String message, System.Exception cause)
    // Base method: System.Void Exception::.ctor(System.String message, System.Exception cause)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TlsException* New_ctor(::StringW message, ::System::Exception* cause) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Tls::TlsException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TlsException*, creationType>(message, cause)));
    }
  }; // Org.BouncyCastle.Crypto.Tls.TlsException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Tls::TlsException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
