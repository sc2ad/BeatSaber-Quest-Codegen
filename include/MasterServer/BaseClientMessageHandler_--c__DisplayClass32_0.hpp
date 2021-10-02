// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: MasterServer.BaseClientMessageHandler
#include "MasterServer/BaseClientMessageHandler.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.BaseClientMessageHandler/MasterServer.<>c__DisplayClass32_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class BaseClientMessageHandler::$$c__DisplayClass32_0 : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public System.Byte[] clientRandom
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint8_t> clientRandom;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Byte[] serverRandom
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> serverRandom;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Byte[] serverKey
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<uint8_t> serverKey;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Byte[][] certData
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::ArrayW<uint8_t>> certData;
    // Field size check
    static_assert(sizeof(::ArrayW<::ArrayW<uint8_t>>) == 0x8);
    // public MasterServer.BaseClientMessageHandler <>4__this
    // Size: 0x8
    // Offset: 0x30
    MasterServer::BaseClientMessageHandler* $$4__this;
    // Field size check
    static_assert(sizeof(MasterServer::BaseClientMessageHandler*) == 0x8);
    // public System.Byte[] signature
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<uint8_t> signature;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Get instance field reference: public System.Byte[] clientRandom
    ::ArrayW<uint8_t>& dyn_clientRandom();
    // Get instance field reference: public System.Byte[] serverRandom
    ::ArrayW<uint8_t>& dyn_serverRandom();
    // Get instance field reference: public System.Byte[] serverKey
    ::ArrayW<uint8_t>& dyn_serverKey();
    // Get instance field reference: public System.Byte[][] certData
    ::ArrayW<::ArrayW<uint8_t>>& dyn_certData();
    // Get instance field reference: public MasterServer.BaseClientMessageHandler <>4__this
    MasterServer::BaseClientMessageHandler*& dyn_$$4__this();
    // Get instance field reference: public System.Byte[] signature
    ::ArrayW<uint8_t>& dyn_signature();
    // System.Boolean <VerifySignature>b__0()
    // Offset: 0x12D6888
    bool $VerifySignature$b__0();
    // public System.Void .ctor()
    // Offset: 0x12D6880
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseClientMessageHandler::$$c__DisplayClass32_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::BaseClientMessageHandler::$$c__DisplayClass32_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseClientMessageHandler::$$c__DisplayClass32_0*, creationType>()));
    }
  }; // MasterServer.BaseClientMessageHandler/MasterServer.<>c__DisplayClass32_0
  #pragma pack(pop)
  static check_size<sizeof(BaseClientMessageHandler::$$c__DisplayClass32_0), 56 + sizeof(::ArrayW<uint8_t>)> __MasterServer_BaseClientMessageHandler_$$c__DisplayClass32_0SizeCheck;
  static_assert(sizeof(BaseClientMessageHandler::$$c__DisplayClass32_0) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::BaseClientMessageHandler::$$c__DisplayClass32_0*, "MasterServer", "BaseClientMessageHandler/<>c__DisplayClass32_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::BaseClientMessageHandler::$$c__DisplayClass32_0::$VerifySignature$b__0
// Il2CppName: <VerifySignature>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (MasterServer::BaseClientMessageHandler::$$c__DisplayClass32_0::*)()>(&MasterServer::BaseClientMessageHandler::$$c__DisplayClass32_0::$VerifySignature$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::BaseClientMessageHandler::$$c__DisplayClass32_0*), "<VerifySignature>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::BaseClientMessageHandler::$$c__DisplayClass32_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
