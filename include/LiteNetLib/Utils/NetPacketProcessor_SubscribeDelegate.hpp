// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLib.Utils.NetPacketProcessor
#include "LiteNetLib/Utils/NetPacketProcessor.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::LiteNetLib::Utils::NetPacketProcessor::SubscribeDelegate);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::Utils::NetPacketProcessor::SubscribeDelegate*, "LiteNetLib.Utils", "NetPacketProcessor/SubscribeDelegate");
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.Utils.NetPacketProcessor/LiteNetLib.Utils.SubscribeDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class NetPacketProcessor::SubscribeDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2A88B6C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetPacketProcessor::SubscribeDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::Utils::NetPacketProcessor::SubscribeDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetPacketProcessor::SubscribeDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(LiteNetLib.Utils.NetDataReader reader, System.Object userData)
    // Offset: 0x2A88784
    void Invoke(::LiteNetLib::Utils::NetDataReader* reader, ::Il2CppObject* userData);
    // public System.IAsyncResult BeginInvoke(LiteNetLib.Utils.NetDataReader reader, System.Object userData, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2A88B7C
    ::System::IAsyncResult* BeginInvoke(::LiteNetLib::Utils::NetDataReader* reader, ::Il2CppObject* userData, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x2A88BAC
    void EndInvoke(::System::IAsyncResult* result);
  }; // LiteNetLib.Utils.NetPacketProcessor/LiteNetLib.Utils.SubscribeDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LiteNetLib::Utils::NetPacketProcessor::SubscribeDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: LiteNetLib::Utils::NetPacketProcessor::SubscribeDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetPacketProcessor::SubscribeDelegate::*)(::LiteNetLib::Utils::NetDataReader*, ::Il2CppObject*)>(&LiteNetLib::Utils::NetPacketProcessor::SubscribeDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    static auto* userData = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetPacketProcessor::SubscribeDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader, userData});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetPacketProcessor::SubscribeDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (LiteNetLib::Utils::NetPacketProcessor::SubscribeDelegate::*)(::LiteNetLib::Utils::NetDataReader*, ::Il2CppObject*, ::System::AsyncCallback*, ::Il2CppObject*)>(&LiteNetLib::Utils::NetPacketProcessor::SubscribeDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    static auto* userData = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetPacketProcessor::SubscribeDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader, userData, callback, object});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NetPacketProcessor::SubscribeDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetPacketProcessor::SubscribeDelegate::*)(::System::IAsyncResult*)>(&LiteNetLib::Utils::NetPacketProcessor::SubscribeDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NetPacketProcessor::SubscribeDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
