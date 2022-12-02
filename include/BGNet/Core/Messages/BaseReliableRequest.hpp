// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.IUnconnectedReliableRequest
#include "BGNet/Core/Messages/IUnconnectedReliableRequest.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
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
  // Forward declaring type: BaseReliableRequest
  class BaseReliableRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BGNet::Core::Messages::BaseReliableRequest);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BaseReliableRequest*, "BGNet.Core.Messages", "BaseReliableRequest");
// Type namespace: BGNet.Core.Messages
namespace BGNet::Core::Messages {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: BGNet.Core.Messages.BaseReliableRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class BaseReliableRequest : public ::Il2CppObject/*, public ::BGNet::Core::Messages::IUnconnectedReliableRequest*/ {
    public:
    public:
    // private System.UInt32 <requestId>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    uint requestId;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating interface conversion operator: operator ::BGNet::Core::Messages::IUnconnectedReliableRequest
    operator ::BGNet::Core::Messages::IUnconnectedReliableRequest() noexcept {
      return *reinterpret_cast<::BGNet::Core::Messages::IUnconnectedReliableRequest*>(this);
    }
    // Creating interface conversion operator: i_IUnconnectedReliableRequest
    inline ::BGNet::Core::Messages::IUnconnectedReliableRequest* i_IUnconnectedReliableRequest() noexcept {
      return reinterpret_cast<::BGNet::Core::Messages::IUnconnectedReliableRequest*>(this);
    }
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return requestId;
    }
    // Get instance field reference: private System.UInt32 <requestId>k__BackingField
    [[deprecated("Use field access instead!")]] uint& dyn_$requestId$k__BackingField();
    // public System.UInt32 get_requestId()
    // Offset: 0x15C9200
    uint get_requestId();
    // private System.Void set_requestId(System.UInt32 value)
    // Offset: 0x15C9208
    void set_requestId(uint value);
    // protected System.Void .ctor()
    // Offset: 0x15C91F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseReliableRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BGNet::Core::Messages::BaseReliableRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseReliableRequest*, creationType>()));
    }
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x15C8FD8
    void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x15C9164
    void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void Release()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Release();
    // private BGNet.Core.Messages.IUnconnectedReliableRequest BGNet.Core.Messages.IUnconnectedReliableRequest.WithRequestId(System.UInt32 requestId)
    // Offset: 0x15C9210
    ::BGNet::Core::Messages::IUnconnectedReliableRequest* BGNet_Core_Messages_IUnconnectedReliableRequest_WithRequestId(uint requestId);
  }; // BGNet.Core.Messages.BaseReliableRequest
  #pragma pack(pop)
  static check_size<sizeof(BaseReliableRequest), 16 + sizeof(uint)> __BGNet_Core_Messages_BaseReliableRequestSizeCheck;
  static_assert(sizeof(BaseReliableRequest) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseReliableRequest::get_requestId
// Il2CppName: get_requestId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (BGNet::Core::Messages::BaseReliableRequest::*)()>(&BGNet::Core::Messages::BaseReliableRequest::get_requestId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseReliableRequest*), "get_requestId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseReliableRequest::set_requestId
// Il2CppName: set_requestId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseReliableRequest::*)(uint)>(&BGNet::Core::Messages::BaseReliableRequest::set_requestId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseReliableRequest*), "set_requestId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseReliableRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseReliableRequest::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseReliableRequest::*)(::LiteNetLib::Utils::NetDataWriter*)>(&BGNet::Core::Messages::BaseReliableRequest::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseReliableRequest*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseReliableRequest::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseReliableRequest::*)(::LiteNetLib::Utils::NetDataReader*)>(&BGNet::Core::Messages::BaseReliableRequest::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseReliableRequest*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseReliableRequest::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseReliableRequest::*)()>(&BGNet::Core::Messages::BaseReliableRequest::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseReliableRequest*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseReliableRequest::BGNet_Core_Messages_IUnconnectedReliableRequest_WithRequestId
// Il2CppName: BGNet.Core.Messages.IUnconnectedReliableRequest.WithRequestId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGNet::Core::Messages::IUnconnectedReliableRequest* (BGNet::Core::Messages::BaseReliableRequest::*)(uint)>(&BGNet::Core::Messages::BaseReliableRequest::BGNet_Core_Messages_IUnconnectedReliableRequest_WithRequestId)> {
  static const MethodInfo* get() {
    static auto* requestId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseReliableRequest*), "BGNet.Core.Messages.IUnconnectedReliableRequest.WithRequestId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{requestId});
  }
};
