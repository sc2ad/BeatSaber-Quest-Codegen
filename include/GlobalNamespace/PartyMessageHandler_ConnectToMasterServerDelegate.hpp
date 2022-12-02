// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PartyMessageHandler
#include "GlobalNamespace/PartyMessageHandler.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate*, "", "PartyMessageHandler/ConnectToMasterServerDelegate");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: PartyMessageHandler/ConnectToMasterServerDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class PartyMessageHandler::ConnectToMasterServerDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x26C8034
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PartyMessageHandler::ConnectToMasterServerDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PartyMessageHandler::ConnectToMasterServerDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.String secret)
    // Offset: 0x26C7C44
    void Invoke(::StringW secret);
    // public System.IAsyncResult BeginInvoke(System.String secret, System.AsyncCallback callback, System.Object object)
    // Offset: 0x26C8044
    ::System::IAsyncResult* BeginInvoke(::StringW secret, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x26C8068
    void EndInvoke(::System::IAsyncResult* result);
  }; // PartyMessageHandler/ConnectToMasterServerDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate::*)(::StringW)>(&GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* secret = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{secret});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate::*)(::StringW, ::System::AsyncCallback*, ::Il2CppObject*)>(&GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* secret = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{secret, callback, object});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate::*)(::System::IAsyncResult*)>(&GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
