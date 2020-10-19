// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Unity.UnityTls
#include "Mono/Unity/UnityTls.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::Interface
namespace Mono::Security::Interface {
  // Forward declaring type: AlertDescription
  struct AlertDescription;
}
// Completed forward declares
// Type namespace: Mono.Unity
namespace Mono::Unity {
  // Autogenerated type: Mono.Unity.Debug
  class Debug : public ::Il2CppObject {
    public:
    // static public System.Void CheckAndThrow(Mono.Unity.UnityTls/unitytls_errorstate errorState, System.String context, Mono.Security.Interface.AlertDescription defaultAlert)
    // Offset: 0x11F8128
    static void CheckAndThrow(Mono::Unity::UnityTls::unitytls_errorstate errorState, ::Il2CppString* context, Mono::Security::Interface::AlertDescription defaultAlert);
    // static public System.Void CheckAndThrow(Mono.Unity.UnityTls/unitytls_errorstate errorState, Mono.Unity.UnityTls/unitytls_x509verify_result verifyResult, System.String context, Mono.Security.Interface.AlertDescription defaultAlert)
    // Offset: 0x11F8200
    static void CheckAndThrow(Mono::Unity::UnityTls::unitytls_errorstate errorState, Mono::Unity::UnityTls::unitytls_x509verify_result verifyResult, ::Il2CppString* context, Mono::Security::Interface::AlertDescription defaultAlert);
  }; // Mono.Unity.Debug
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::Debug*, "Mono.Unity", "Debug");
#pragma pack(pop)