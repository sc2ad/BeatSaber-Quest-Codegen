// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PacketEncryptionLayer
#include "GlobalNamespace/PacketEncryptionLayer.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Including type: EncryptionUtility
#include "GlobalNamespace/EncryptionUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PacketEncryptionLayer::$AddPendingEncryptedEndpointAsync$d__26, "", "PacketEncryptionLayer/<AddPendingEncryptedEndpointAsync>d__26");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: PacketEncryptionLayer/<AddPendingEncryptedEndpointAsync>d__26
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct PacketEncryptionLayer::$AddPendingEncryptedEndpointAsync$d__26/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder;
    // public System.Byte[] preMasterSecret
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<uint8_t> preMasterSecret;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Byte[] serverRandom
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint8_t> serverRandom;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Byte[] clientRandom
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<uint8_t> clientRandom;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Boolean isClient
    // Size: 0x1
    // Offset: 0x38
    bool isClient;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public PacketEncryptionLayer <>4__this
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::PacketEncryptionLayer* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PacketEncryptionLayer*) == 0x8);
    // public System.Net.IPEndPoint endPoint
    // Size: 0x8
    // Offset: 0x48
    ::System::Net::IPEndPoint* endPoint;
    // Field size check
    static_assert(sizeof(::System::Net::IPEndPoint*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<EncryptionUtility/IEncryptionState> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x50
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EncryptionUtility::IEncryptionState*> $$u__1;
    public:
    // Creating value type constructor for type: $AddPendingEncryptedEndpointAsync$d__26
    constexpr $AddPendingEncryptedEndpointAsync$d__26(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder_ = {}, ::ArrayW<uint8_t> preMasterSecret_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), ::ArrayW<uint8_t> serverRandom_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), ::ArrayW<uint8_t> clientRandom_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), bool isClient_ = {}, ::GlobalNamespace::PacketEncryptionLayer* $$4__this_ = {}, ::System::Net::IPEndPoint* endPoint_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EncryptionUtility::IEncryptionState*> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, preMasterSecret{preMasterSecret_}, serverRandom{serverRandom_}, clientRandom{clientRandom_}, isClient{isClient_}, $$4__this{$$4__this_}, endPoint{endPoint_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::CompilerServices::IAsyncStateMachine
    operator ::System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Get instance field reference: public System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& dyn_$$t__builder();
    // Get instance field reference: public System.Byte[] preMasterSecret
    ::ArrayW<uint8_t>& dyn_preMasterSecret();
    // Get instance field reference: public System.Byte[] serverRandom
    ::ArrayW<uint8_t>& dyn_serverRandom();
    // Get instance field reference: public System.Byte[] clientRandom
    ::ArrayW<uint8_t>& dyn_clientRandom();
    // Get instance field reference: public System.Boolean isClient
    bool& dyn_isClient();
    // Get instance field reference: public PacketEncryptionLayer <>4__this
    ::GlobalNamespace::PacketEncryptionLayer*& dyn_$$4__this();
    // Get instance field reference: public System.Net.IPEndPoint endPoint
    ::System::Net::IPEndPoint*& dyn_endPoint();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<EncryptionUtility/IEncryptionState> <>u__1
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EncryptionUtility::IEncryptionState*>& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x25E6A40
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x25E6E94
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // PacketEncryptionLayer/<AddPendingEncryptedEndpointAsync>d__26
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::$AddPendingEncryptedEndpointAsync$d__26::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PacketEncryptionLayer::$AddPendingEncryptedEndpointAsync$d__26::*)()>(&GlobalNamespace::PacketEncryptionLayer::$AddPendingEncryptedEndpointAsync$d__26::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer::$AddPendingEncryptedEndpointAsync$d__26), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::$AddPendingEncryptedEndpointAsync$d__26::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PacketEncryptionLayer::$AddPendingEncryptedEndpointAsync$d__26::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::PacketEncryptionLayer::$AddPendingEncryptedEndpointAsync$d__26::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer::$AddPendingEncryptedEndpointAsync$d__26), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
