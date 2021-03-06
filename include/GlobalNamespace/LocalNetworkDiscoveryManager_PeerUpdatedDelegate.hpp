// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LocalNetworkDiscoveryManager
#include "GlobalNamespace/LocalNetworkDiscoveryManager.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPAddress
  class IPAddress;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayServerConfiguration
  struct GameplayServerConfiguration;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: LocalNetworkDiscoveryManager/PeerUpdatedDelegate
  class LocalNetworkDiscoveryManager::PeerUpdatedDelegate : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: PeerUpdatedDelegate
    PeerUpdatedDelegate() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x23FBBE4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalNetworkDiscoveryManager::PeerUpdatedDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalNetworkDiscoveryManager::PeerUpdatedDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalNetworkDiscoveryManager::PeerUpdatedDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.String userId, System.Net.IPAddress remoteEndPoint, System.String userName, System.Int32 currentPartySize, System.Int32 maxPartySize, System.Byte flags, GameplayServerConfiguration configuration)
    // Offset: 0x23F9B6C
    void Invoke(::Il2CppString* userId, System::Net::IPAddress* remoteEndPoint, ::Il2CppString* userName, int currentPartySize, int maxPartySize, uint8_t flags, GlobalNamespace::GameplayServerConfiguration configuration);
    // public System.IAsyncResult BeginInvoke(System.String userId, System.Net.IPAddress remoteEndPoint, System.String userName, System.Int32 currentPartySize, System.Int32 maxPartySize, System.Byte flags, GameplayServerConfiguration configuration, System.AsyncCallback callback, System.Object object)
    // Offset: 0x23FBBF4
    System::IAsyncResult* BeginInvoke(::Il2CppString* userId, System::Net::IPAddress* remoteEndPoint, ::Il2CppString* userName, int currentPartySize, int maxPartySize, uint8_t flags, GlobalNamespace::GameplayServerConfiguration configuration, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x23FBCF8
    void EndInvoke(System::IAsyncResult* result);
  }; // LocalNetworkDiscoveryManager/PeerUpdatedDelegate
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LocalNetworkDiscoveryManager::PeerUpdatedDelegate*, "", "LocalNetworkDiscoveryManager/PeerUpdatedDelegate");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LocalNetworkDiscoveryManager::PeerUpdatedDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LocalNetworkDiscoveryManager::PeerUpdatedDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::PeerUpdatedDelegate::*)(::Il2CppString*, System::Net::IPAddress*, ::Il2CppString*, int, int, uint8_t, GlobalNamespace::GameplayServerConfiguration)>(&GlobalNamespace::LocalNetworkDiscoveryManager::PeerUpdatedDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* remoteEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPAddress")->byval_arg;
    static auto* userName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* currentPartySize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* maxPartySize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* configuration = &::il2cpp_utils::GetClassFromName("", "GameplayServerConfiguration")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalNetworkDiscoveryManager::PeerUpdatedDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId, remoteEndPoint, userName, currentPartySize, maxPartySize, flags, configuration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocalNetworkDiscoveryManager::PeerUpdatedDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (GlobalNamespace::LocalNetworkDiscoveryManager::PeerUpdatedDelegate::*)(::Il2CppString*, System::Net::IPAddress*, ::Il2CppString*, int, int, uint8_t, GlobalNamespace::GameplayServerConfiguration, System::AsyncCallback*, ::Il2CppObject*)>(&GlobalNamespace::LocalNetworkDiscoveryManager::PeerUpdatedDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* remoteEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPAddress")->byval_arg;
    static auto* userName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* currentPartySize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* maxPartySize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* configuration = &::il2cpp_utils::GetClassFromName("", "GameplayServerConfiguration")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalNetworkDiscoveryManager::PeerUpdatedDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId, remoteEndPoint, userName, currentPartySize, maxPartySize, flags, configuration, callback, object});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocalNetworkDiscoveryManager::PeerUpdatedDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkDiscoveryManager::PeerUpdatedDelegate::*)(System::IAsyncResult*)>(&GlobalNamespace::LocalNetworkDiscoveryManager::PeerUpdatedDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalNetworkDiscoveryManager::PeerUpdatedDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
