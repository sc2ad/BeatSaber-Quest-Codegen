// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: NetworkingPeer
  class NetworkingPeer;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: MessageWithNetworkingPeer
  class MessageWithNetworkingPeer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::MessageWithNetworkingPeer);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithNetworkingPeer*, "Oculus.Platform", "MessageWithNetworkingPeer");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.MessageWithNetworkingPeer
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageWithNetworkingPeer : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::NetworkingPeer*> {
    public:
    // protected Oculus.Platform.Models.NetworkingPeer GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x1A12F3C
    ::Oculus::Platform::Models::NetworkingPeer* GetDataFromMessage(::System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x1A0B874
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageWithNetworkingPeer* New_ctor(::System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::MessageWithNetworkingPeer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageWithNetworkingPeer*, creationType>(c_message)));
    }
    // public override Oculus.Platform.Models.NetworkingPeer GetNetworkingPeer()
    // Offset: 0x1A12EF8
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.NetworkingPeer Message::GetNetworkingPeer()
    ::Oculus::Platform::Models::NetworkingPeer* GetNetworkingPeer();
  }; // Oculus.Platform.MessageWithNetworkingPeer
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MessageWithNetworkingPeer::GetDataFromMessage
// Il2CppName: GetDataFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::NetworkingPeer* (Oculus::Platform::MessageWithNetworkingPeer::*)(::System::IntPtr)>(&Oculus::Platform::MessageWithNetworkingPeer::GetDataFromMessage)> {
  static const MethodInfo* get() {
    static auto* c_message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithNetworkingPeer*), "GetDataFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c_message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MessageWithNetworkingPeer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MessageWithNetworkingPeer::GetNetworkingPeer
// Il2CppName: GetNetworkingPeer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::NetworkingPeer* (Oculus::Platform::MessageWithNetworkingPeer::*)()>(&Oculus::Platform::MessageWithNetworkingPeer::GetNetworkingPeer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MessageWithNetworkingPeer*), "GetNetworkingPeer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
