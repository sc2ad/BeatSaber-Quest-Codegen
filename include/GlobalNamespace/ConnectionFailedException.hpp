// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
// Including type: ConnectionFailedReason
#include "GlobalNamespace/ConnectionFailedReason.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ConnectionFailedException
  class ConnectionFailedException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ConnectionFailedException);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConnectionFailedException*, "", "ConnectionFailedException");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x8C
  #pragma pack(push, 1)
  // Autogenerated type: ConnectionFailedException
  // [TokenAttribute] Offset: FFFFFFFF
  class ConnectionFailedException : public ::System::Exception {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public readonly ConnectionFailedReason reason
    // Size: 0x4
    // Offset: 0x88
    ::GlobalNamespace::ConnectionFailedReason reason;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ConnectionFailedReason) == 0x4);
    public:
    // Creating conversion operator: operator ::GlobalNamespace::ConnectionFailedReason
    constexpr operator ::GlobalNamespace::ConnectionFailedReason() const noexcept {
      return reason;
    }
    // Get instance field reference: public readonly ConnectionFailedReason reason
    ::GlobalNamespace::ConnectionFailedReason& dyn_reason();
    // public System.Void .ctor(ConnectionFailedReason reason)
    // Offset: 0x2C3E460
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConnectionFailedException* New_ctor(::GlobalNamespace::ConnectionFailedReason reason) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ConnectionFailedException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConnectionFailedException*, creationType>(reason)));
    }
    // public System.Void .ctor(ConnectionFailedReason reason, System.String message)
    // Offset: 0x2C3E4DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConnectionFailedException* New_ctor(::GlobalNamespace::ConnectionFailedReason reason, ::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ConnectionFailedException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConnectionFailedException*, creationType>(reason, message)));
    }
  }; // ConnectionFailedException
  #pragma pack(pop)
  static check_size<sizeof(ConnectionFailedException), 136 + sizeof(::GlobalNamespace::ConnectionFailedReason)> __GlobalNamespace_ConnectionFailedExceptionSizeCheck;
  static_assert(sizeof(ConnectionFailedException) == 0x8C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ConnectionFailedException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ConnectionFailedException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
