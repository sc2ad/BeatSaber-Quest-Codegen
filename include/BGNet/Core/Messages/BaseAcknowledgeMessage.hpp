// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.BaseResponse
#include "BGNet/Core/Messages/BaseResponse.hpp"
// Including type: BGNet.Core.Messages.IUnconnectedAcknowledgeMessage
#include "BGNet/Core/Messages/IUnconnectedAcknowledgeMessage.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: BGNet.Core.Messages
namespace BGNet::Core::Messages {
  // Forward declaring type: BaseAcknowledgeMessage
  class BaseAcknowledgeMessage;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BGNet::Core::Messages::BaseAcknowledgeMessage);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BaseAcknowledgeMessage*, "BGNet.Core.Messages", "BaseAcknowledgeMessage");
// Type namespace: BGNet.Core.Messages
namespace BGNet::Core::Messages {
  // Size: 0x15
  #pragma pack(push, 1)
  // Autogenerated type: BGNet.Core.Messages.BaseAcknowledgeMessage
  // [TokenAttribute] Offset: FFFFFFFF
  class BaseAcknowledgeMessage : public ::BGNet::Core::Messages::BaseResponse/*, public ::BGNet::Core::Messages::IUnconnectedAcknowledgeMessage*/ {
    public:
    public:
    // private System.Boolean <messageHandled>k__BackingField
    // Size: 0x1
    // Offset: 0x14
    bool messageHandled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::BGNet::Core::Messages::IUnconnectedAcknowledgeMessage
    operator ::BGNet::Core::Messages::IUnconnectedAcknowledgeMessage() noexcept {
      return *reinterpret_cast<::BGNet::Core::Messages::IUnconnectedAcknowledgeMessage*>(this);
    }
    // Creating interface conversion operator: i_IUnconnectedAcknowledgeMessage
    inline ::BGNet::Core::Messages::IUnconnectedAcknowledgeMessage* i_IUnconnectedAcknowledgeMessage() noexcept {
      return reinterpret_cast<::BGNet::Core::Messages::IUnconnectedAcknowledgeMessage*>(this);
    }
    // Deleting conversion operator: operator uint
    constexpr operator uint() const noexcept = delete;
    // Get instance field reference: private System.Boolean <messageHandled>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$messageHandled$k__BackingField();
    // public System.Boolean get_messageHandled()
    // Offset: 0x15ADA34
    bool get_messageHandled();
    // private System.Void set_messageHandled(System.Boolean value)
    // Offset: 0x15ADA3C
    void set_messageHandled(bool value);
    // public BGNet.Core.Messages.BaseAcknowledgeMessage Init(System.Boolean messageHandled)
    // Offset: 0x15ADA48
    ::BGNet::Core::Messages::BaseAcknowledgeMessage* Init(bool messageHandled);
    // public override System.Byte get_resultCode()
    // Offset: 0x15AD9CC
    // Implemented from: BGNet.Core.Messages.BaseResponse
    // Base method: System.Byte BaseResponse::get_resultCode()
    uint8_t get_resultCode();
    // public override System.String get_resultCodeString()
    // Offset: 0x15AD9D4
    // Implemented from: BGNet.Core.Messages.BaseResponse
    // Base method: System.String BaseResponse::get_resultCodeString()
    ::StringW get_resultCodeString();
    // protected System.Void .ctor()
    // Offset: 0x15ADB3C
    // Implemented from: BGNet.Core.Messages.BaseResponse
    // Base method: System.Void BaseResponse::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseAcknowledgeMessage* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BGNet::Core::Messages::BaseAcknowledgeMessage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseAcknowledgeMessage*, creationType>()));
    }
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x15ADA54
    // Implemented from: BGNet.Core.Messages.BaseResponse
    // Base method: System.Void BaseResponse::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x15ADABC
    // Implemented from: BGNet.Core.Messages.BaseResponse
    // Base method: System.Void BaseResponse::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);
  }; // BGNet.Core.Messages.BaseAcknowledgeMessage
  #pragma pack(pop)
  static check_size<sizeof(BaseAcknowledgeMessage), 20 + sizeof(bool)> __BGNet_Core_Messages_BaseAcknowledgeMessageSizeCheck;
  static_assert(sizeof(BaseAcknowledgeMessage) == 0x15);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseAcknowledgeMessage::get_messageHandled
// Il2CppName: get_messageHandled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BGNet::Core::Messages::BaseAcknowledgeMessage::*)()>(&BGNet::Core::Messages::BaseAcknowledgeMessage::get_messageHandled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseAcknowledgeMessage*), "get_messageHandled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseAcknowledgeMessage::set_messageHandled
// Il2CppName: set_messageHandled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseAcknowledgeMessage::*)(bool)>(&BGNet::Core::Messages::BaseAcknowledgeMessage::set_messageHandled)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseAcknowledgeMessage*), "set_messageHandled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseAcknowledgeMessage::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGNet::Core::Messages::BaseAcknowledgeMessage* (BGNet::Core::Messages::BaseAcknowledgeMessage::*)(bool)>(&BGNet::Core::Messages::BaseAcknowledgeMessage::Init)> {
  static const MethodInfo* get() {
    static auto* messageHandled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseAcknowledgeMessage*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{messageHandled});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseAcknowledgeMessage::get_resultCode
// Il2CppName: get_resultCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (BGNet::Core::Messages::BaseAcknowledgeMessage::*)()>(&BGNet::Core::Messages::BaseAcknowledgeMessage::get_resultCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseAcknowledgeMessage*), "get_resultCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseAcknowledgeMessage::get_resultCodeString
// Il2CppName: get_resultCodeString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (BGNet::Core::Messages::BaseAcknowledgeMessage::*)()>(&BGNet::Core::Messages::BaseAcknowledgeMessage::get_resultCodeString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseAcknowledgeMessage*), "get_resultCodeString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseAcknowledgeMessage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseAcknowledgeMessage::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseAcknowledgeMessage::*)(::LiteNetLib::Utils::NetDataWriter*)>(&BGNet::Core::Messages::BaseAcknowledgeMessage::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseAcknowledgeMessage*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseAcknowledgeMessage::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseAcknowledgeMessage::*)(::LiteNetLib::Utils::NetDataReader*)>(&BGNet::Core::Messages::BaseAcknowledgeMessage::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseAcknowledgeMessage*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
