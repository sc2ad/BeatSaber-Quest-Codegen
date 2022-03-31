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
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapLevelSelectionMask
  struct BeatmapLevelSelectionMask;
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
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PartyMessageHandler::ServerStatusUpdatedDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PartyMessageHandler::ServerStatusUpdatedDelegate*, "", "PartyMessageHandler/ServerStatusUpdatedDelegate");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: PartyMessageHandler/ServerStatusUpdatedDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class PartyMessageHandler::ServerStatusUpdatedDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x25E80EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PartyMessageHandler::ServerStatusUpdatedDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PartyMessageHandler::ServerStatusUpdatedDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PartyMessageHandler::ServerStatusUpdatedDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(BeatmapLevelSelectionMask selectionMask, GameplayServerConfiguration configuration)
    // Offset: 0x25E80FC
    void Invoke(::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration);
    // public System.IAsyncResult BeginInvoke(BeatmapLevelSelectionMask selectionMask, GameplayServerConfiguration configuration, System.AsyncCallback callback, System.Object object)
    // Offset: 0x25E8504
    ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x25E85B8
    void EndInvoke(::System::IAsyncResult* result);
  }; // PartyMessageHandler/ServerStatusUpdatedDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PartyMessageHandler::ServerStatusUpdatedDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PartyMessageHandler::ServerStatusUpdatedDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PartyMessageHandler::ServerStatusUpdatedDelegate::*)(::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration)>(&GlobalNamespace::PartyMessageHandler::ServerStatusUpdatedDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* selectionMask = &::il2cpp_utils::GetClassFromName("", "BeatmapLevelSelectionMask")->byval_arg;
    static auto* configuration = &::il2cpp_utils::GetClassFromName("", "GameplayServerConfiguration")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyMessageHandler::ServerStatusUpdatedDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{selectionMask, configuration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PartyMessageHandler::ServerStatusUpdatedDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (GlobalNamespace::PartyMessageHandler::ServerStatusUpdatedDelegate::*)(::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration, ::System::AsyncCallback*, ::Il2CppObject*)>(&GlobalNamespace::PartyMessageHandler::ServerStatusUpdatedDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* selectionMask = &::il2cpp_utils::GetClassFromName("", "BeatmapLevelSelectionMask")->byval_arg;
    static auto* configuration = &::il2cpp_utils::GetClassFromName("", "GameplayServerConfiguration")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyMessageHandler::ServerStatusUpdatedDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{selectionMask, configuration, callback, object});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PartyMessageHandler::ServerStatusUpdatedDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PartyMessageHandler::ServerStatusUpdatedDelegate::*)(::System::IAsyncResult*)>(&GlobalNamespace::PartyMessageHandler::ServerStatusUpdatedDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PartyMessageHandler::ServerStatusUpdatedDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
