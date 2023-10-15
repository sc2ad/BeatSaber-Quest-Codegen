// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.BaseServerUnconnectedMessageHandler
#include "BGNet/Core/Messages/BaseServerUnconnectedMessageHandler.hpp"
// Including type: AsyncComputeOperation`1
#include "GlobalNamespace/AsyncComputeOperation_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDiffieHellmanKeyPair
  class IDiffieHellmanKeyPair;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::GetPreMasterSecretComputeOperation);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::GetPreMasterSecretComputeOperation*, "BGNet.Core.Messages", "BaseServerUnconnectedMessageHandler/GetPreMasterSecretComputeOperation");
// Type namespace: BGNet.Core.Messages
namespace BGNet::Core::Messages {
  // WARNING Size may be invalid!
  // Autogenerated type: BGNet.Core.Messages.BaseServerUnconnectedMessageHandler/BGNet.Core.Messages.GetPreMasterSecretComputeOperation
  // [TokenAttribute] Offset: FFFFFFFF
  class BaseServerUnconnectedMessageHandler::GetPreMasterSecretComputeOperation : public ::GlobalNamespace::AsyncComputeOperation_1<::ArrayW<uint8_t>> {
    public:
    public:
    // private readonly IDiffieHellmanKeyPair _serverKey
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::IDiffieHellmanKeyPair* serverKey;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IDiffieHellmanKeyPair*) == 0x8);
    // private readonly System.Byte[] _clientKey
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<uint8_t> clientKey;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::Threading::Tasks::TaskCompletionSource_1<T>*
    // Cannot delete conversion operator because it seems to have a generic type in the definition! This may not be defined!
    // Get instance field reference: private readonly IDiffieHellmanKeyPair _serverKey
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IDiffieHellmanKeyPair*& dyn__serverKey();
    // Get instance field reference: private readonly System.Byte[] _clientKey
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__clientKey();
    // public System.Void .ctor(IDiffieHellmanKeyPair serverKey, System.Byte[] clientKey)
    // Offset: 0x160EE40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseServerUnconnectedMessageHandler::GetPreMasterSecretComputeOperation* New_ctor(::GlobalNamespace::IDiffieHellmanKeyPair* serverKey, ::ArrayW<uint8_t> clientKey) {
      static auto ___internal__logger = ::Logger::get().WithContext("::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::GetPreMasterSecretComputeOperation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseServerUnconnectedMessageHandler::GetPreMasterSecretComputeOperation*, creationType>(serverKey, clientKey)));
    }
    // protected System.Byte[] Compute()
    // Offset: 0x1610834
    ::ArrayW<uint8_t> Compute();
  }; // BGNet.Core.Messages.BaseServerUnconnectedMessageHandler/BGNet.Core.Messages.GetPreMasterSecretComputeOperation
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::GetPreMasterSecretComputeOperation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::GetPreMasterSecretComputeOperation::Compute
// Il2CppName: Compute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::GetPreMasterSecretComputeOperation::*)()>(&BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::GetPreMasterSecretComputeOperation::Compute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::GetPreMasterSecretComputeOperation*), "Compute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};