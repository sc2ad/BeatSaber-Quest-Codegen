// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OculusPlatformLeaderboardsHandler
#include "GlobalNamespace/OculusPlatformLeaderboardsHandler.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request
  class Request;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: HMAsyncRequest
  class HMAsyncRequest;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OculusPlatformLeaderboardsHandler::$$c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformLeaderboardsHandler::$$c__DisplayClass3_0*, "", "OculusPlatformLeaderboardsHandler/<>c__DisplayClass3_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: OculusPlatformLeaderboardsHandler/<>c__DisplayClass3_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class OculusPlatformLeaderboardsHandler::$$c__DisplayClass3_0 : public ::Il2CppObject {
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
    // public OculusPlatformLeaderboardsHandler <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::OculusPlatformLeaderboardsHandler* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OculusPlatformLeaderboardsHandler*) == 0x8);
    // public Oculus.Platform.Request oculusRequest
    // Size: 0x8
    // Offset: 0x18
    ::Oculus::Platform::Request* oculusRequest;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Request*) == 0x8);
    public:
    // Get instance field reference: public OculusPlatformLeaderboardsHandler <>4__this
    ::GlobalNamespace::OculusPlatformLeaderboardsHandler*& dyn_$$4__this();
    // Get instance field reference: public Oculus.Platform.Request oculusRequest
    ::Oculus::Platform::Request*& dyn_oculusRequest();
    // System.Void <AddOculusRequest>b__0(HMAsyncRequest request)
    // Offset: 0x2BB8A14
    void $AddOculusRequest$b__0(::GlobalNamespace::HMAsyncRequest* request);
    // public System.Void .ctor()
    // Offset: 0x2BB8640
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusPlatformLeaderboardsHandler::$$c__DisplayClass3_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OculusPlatformLeaderboardsHandler::$$c__DisplayClass3_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusPlatformLeaderboardsHandler::$$c__DisplayClass3_0*, creationType>()));
    }
  }; // OculusPlatformLeaderboardsHandler/<>c__DisplayClass3_0
  #pragma pack(pop)
  static check_size<sizeof(OculusPlatformLeaderboardsHandler::$$c__DisplayClass3_0), 24 + sizeof(::Oculus::Platform::Request*)> __GlobalNamespace_OculusPlatformLeaderboardsHandler_$$c__DisplayClass3_0SizeCheck;
  static_assert(sizeof(OculusPlatformLeaderboardsHandler::$$c__DisplayClass3_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformLeaderboardsHandler::$$c__DisplayClass3_0::$AddOculusRequest$b__0
// Il2CppName: <AddOculusRequest>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusPlatformLeaderboardsHandler::$$c__DisplayClass3_0::*)(::GlobalNamespace::HMAsyncRequest*)>(&GlobalNamespace::OculusPlatformLeaderboardsHandler::$$c__DisplayClass3_0::$AddOculusRequest$b__0)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("", "HMAsyncRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusPlatformLeaderboardsHandler::$$c__DisplayClass3_0*), "<AddOculusRequest>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformLeaderboardsHandler::$$c__DisplayClass3_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
