// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IRefreshable
#include "GlobalNamespace/IRefreshable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ServerCodeView
  class ServerCodeView;
  // Forward declaring type: ILobbyPlayerData
  class ILobbyPlayerData;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Toggle
  class Toggle;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ToggleBinder
  class ToggleBinder;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerSettingsPanelController
  class MultiplayerSettingsPanelController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerSettingsPanelController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerSettingsPanelController*, "", "MultiplayerSettingsPanelController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerSettingsPanelController
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerSettingsPanelController : public ::UnityEngine::MonoBehaviour/*, public ::GlobalNamespace::IRefreshable*/ {
    public:
    public:
    // private ServerCodeView _serverCodeView
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::ServerCodeView* serverCodeView;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ServerCodeView*) == 0x8);
    // private UnityEngine.UI.Toggle _spectateToggle
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::UI::Toggle* spectateToggle;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Toggle*) == 0x8);
    // private UnityEngine.GameObject _connectionSettingsWrapper
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::GameObject* connectionSettingsWrapper;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _spectateSettingsWrapper
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::GameObject* spectateSettingsWrapper;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private HMUI.ToggleBinder _toggleBinder
    // Size: 0x8
    // Offset: 0x38
    ::HMUI::ToggleBinder* toggleBinder;
    // Field size check
    static_assert(sizeof(::HMUI::ToggleBinder*) == 0x8);
    // private ILobbyPlayerData _lobbyPlayerData
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::ILobbyPlayerData* lobbyPlayerData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ILobbyPlayerData*) == 0x8);
    // private System.Boolean _refreshed
    // Size: 0x1
    // Offset: 0x48
    bool refreshed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: refreshed and: playerActiveStateChangedEvent
    char __padding6[0x7] = {};
    // private System.Action`1<System.Boolean> playerActiveStateChangedEvent
    // Size: 0x8
    // Offset: 0x50
    ::System::Action_1<bool>* playerActiveStateChangedEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<bool>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IRefreshable
    operator ::GlobalNamespace::IRefreshable() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IRefreshable*>(this);
    }
    // Creating interface conversion operator: i_IRefreshable
    inline ::GlobalNamespace::IRefreshable* i_IRefreshable() noexcept {
      return reinterpret_cast<::GlobalNamespace::IRefreshable*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private ServerCodeView _serverCodeView
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ServerCodeView*& dyn__serverCodeView();
    // Get instance field reference: private UnityEngine.UI.Toggle _spectateToggle
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Toggle*& dyn__spectateToggle();
    // Get instance field reference: private UnityEngine.GameObject _connectionSettingsWrapper
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__connectionSettingsWrapper();
    // Get instance field reference: private UnityEngine.GameObject _spectateSettingsWrapper
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__spectateSettingsWrapper();
    // Get instance field reference: private HMUI.ToggleBinder _toggleBinder
    [[deprecated("Use field access instead!")]] ::HMUI::ToggleBinder*& dyn__toggleBinder();
    // Get instance field reference: private ILobbyPlayerData _lobbyPlayerData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ILobbyPlayerData*& dyn__lobbyPlayerData();
    // Get instance field reference: private System.Boolean _refreshed
    [[deprecated("Use field access instead!")]] bool& dyn__refreshed();
    // Get instance field reference: private System.Action`1<System.Boolean> playerActiveStateChangedEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<bool>*& dyn_playerActiveStateChangedEvent();
    // public System.Void add_playerActiveStateChangedEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x13E5AD0
    void add_playerActiveStateChangedEvent(::System::Action_1<bool>* value);
    // public System.Void remove_playerActiveStateChangedEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x13E5B74
    void remove_playerActiveStateChangedEvent(::System::Action_1<bool>* value);
    // public System.Void .ctor()
    // Offset: 0x13E5EF8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerSettingsPanelController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerSettingsPanelController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerSettingsPanelController*, creationType>()));
    }
    // public System.Void SetLobbyPlayerDataModel(ILobbyPlayerData lobbyPlayerData)
    // Offset: 0x13E5C18
    void SetLobbyPlayerDataModel(::GlobalNamespace::ILobbyPlayerData* lobbyPlayerData);
    // public System.Void HideConnectionSettings(System.Boolean hide)
    // Offset: 0x13E5D50
    void HideConnectionSettings(bool hide);
    // public System.Void HideSpectateSettings(System.Boolean hide)
    // Offset: 0x13E5D74
    void HideSpectateSettings(bool hide);
    // public System.Void SetLobbyCode(System.String code)
    // Offset: 0x13E5D98
    void SetLobbyCode(::StringW code);
    // protected System.Void Awake()
    // Offset: 0x13E5DB4
    void Awake();
    // private System.Void OnDestroy()
    // Offset: 0x13E5E6C
    void OnDestroy();
    // private System.Void UpdateLocalPlayerIsActiveState(System.Boolean isActive)
    // Offset: 0x13E5E80
    void UpdateLocalPlayerIsActiveState(bool isActive);
    // public System.Void Refresh()
    // Offset: 0x13E5C24
    void Refresh();
    // private System.Void <Awake>b__14_0(System.Boolean on)
    // Offset: 0x13E5F00
    void $Awake$b__14_0(bool on);
  }; // MultiplayerSettingsPanelController
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerSettingsPanelController), 80 + sizeof(::System::Action_1<bool>*)> __GlobalNamespace_MultiplayerSettingsPanelControllerSizeCheck;
  static_assert(sizeof(MultiplayerSettingsPanelController) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerSettingsPanelController::add_playerActiveStateChangedEvent
// Il2CppName: add_playerActiveStateChangedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSettingsPanelController::*)(::System::Action_1<bool>*)>(&GlobalNamespace::MultiplayerSettingsPanelController::add_playerActiveStateChangedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerSettingsPanelController*), "add_playerActiveStateChangedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerSettingsPanelController::remove_playerActiveStateChangedEvent
// Il2CppName: remove_playerActiveStateChangedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSettingsPanelController::*)(::System::Action_1<bool>*)>(&GlobalNamespace::MultiplayerSettingsPanelController::remove_playerActiveStateChangedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerSettingsPanelController*), "remove_playerActiveStateChangedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerSettingsPanelController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerSettingsPanelController::SetLobbyPlayerDataModel
// Il2CppName: SetLobbyPlayerDataModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSettingsPanelController::*)(::GlobalNamespace::ILobbyPlayerData*)>(&GlobalNamespace::MultiplayerSettingsPanelController::SetLobbyPlayerDataModel)> {
  static const MethodInfo* get() {
    static auto* lobbyPlayerData = &::il2cpp_utils::GetClassFromName("", "ILobbyPlayerData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerSettingsPanelController*), "SetLobbyPlayerDataModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lobbyPlayerData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerSettingsPanelController::HideConnectionSettings
// Il2CppName: HideConnectionSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSettingsPanelController::*)(bool)>(&GlobalNamespace::MultiplayerSettingsPanelController::HideConnectionSettings)> {
  static const MethodInfo* get() {
    static auto* hide = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerSettingsPanelController*), "HideConnectionSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hide});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerSettingsPanelController::HideSpectateSettings
// Il2CppName: HideSpectateSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSettingsPanelController::*)(bool)>(&GlobalNamespace::MultiplayerSettingsPanelController::HideSpectateSettings)> {
  static const MethodInfo* get() {
    static auto* hide = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerSettingsPanelController*), "HideSpectateSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hide});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerSettingsPanelController::SetLobbyCode
// Il2CppName: SetLobbyCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSettingsPanelController::*)(::StringW)>(&GlobalNamespace::MultiplayerSettingsPanelController::SetLobbyCode)> {
  static const MethodInfo* get() {
    static auto* code = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerSettingsPanelController*), "SetLobbyCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{code});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerSettingsPanelController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSettingsPanelController::*)()>(&GlobalNamespace::MultiplayerSettingsPanelController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerSettingsPanelController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerSettingsPanelController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSettingsPanelController::*)()>(&GlobalNamespace::MultiplayerSettingsPanelController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerSettingsPanelController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerSettingsPanelController::UpdateLocalPlayerIsActiveState
// Il2CppName: UpdateLocalPlayerIsActiveState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSettingsPanelController::*)(bool)>(&GlobalNamespace::MultiplayerSettingsPanelController::UpdateLocalPlayerIsActiveState)> {
  static const MethodInfo* get() {
    static auto* isActive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerSettingsPanelController*), "UpdateLocalPlayerIsActiveState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isActive});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerSettingsPanelController::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSettingsPanelController::*)()>(&GlobalNamespace::MultiplayerSettingsPanelController::Refresh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerSettingsPanelController*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerSettingsPanelController::$Awake$b__14_0
// Il2CppName: <Awake>b__14_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerSettingsPanelController::*)(bool)>(&GlobalNamespace::MultiplayerSettingsPanelController::$Awake$b__14_0)> {
  static const MethodInfo* get() {
    static auto* on = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerSettingsPanelController*), "<Awake>b__14_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{on});
  }
};
