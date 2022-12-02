// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NetworkPlayersViewController
#include "GlobalNamespace/NetworkPlayersViewController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Toggle
  class Toggle;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LocalNetworkPlayerModel
  class LocalNetworkPlayerModel;
  // Forward declaring type: INetworkConfig
  class INetworkConfig;
  // Forward declaring type: INetworkPlayerModel
  class INetworkPlayerModel;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ToggleBinder
  class ToggleBinder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LocalNetworkPlayersViewController
  class LocalNetworkPlayersViewController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LocalNetworkPlayersViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalNetworkPlayersViewController*, "", "LocalNetworkPlayersViewController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xBA
  #pragma pack(push, 1)
  // Autogenerated type: LocalNetworkPlayersViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class LocalNetworkPlayersViewController : public ::GlobalNamespace::NetworkPlayersViewController {
    public:
    public:
    // private UnityEngine.UI.Toggle _enableNetworkingToggle
    // Size: 0x8
    // Offset: 0x90
    ::UnityEngine::UI::Toggle* enableNetworkingToggle;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Toggle*) == 0x8);
    // private UnityEngine.UI.Toggle _enableOpenPartyToggle
    // Size: 0x8
    // Offset: 0x98
    ::UnityEngine::UI::Toggle* enableOpenPartyToggle;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Toggle*) == 0x8);
    // [InjectAttribute] Offset: 0x111FF0C
    // private readonly LocalNetworkPlayerModel _localNetworkPlayerModel
    // Size: 0x8
    // Offset: 0xA0
    ::GlobalNamespace::LocalNetworkPlayerModel* localNetworkPlayerModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LocalNetworkPlayerModel*) == 0x8);
    // [InjectAttribute] Offset: 0x111FF1C
    // private readonly INetworkConfig _networkConfig
    // Size: 0x8
    // Offset: 0xA8
    ::GlobalNamespace::INetworkConfig* networkConfig;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::INetworkConfig*) == 0x8);
    // private HMUI.ToggleBinder _toggleBinder
    // Size: 0x8
    // Offset: 0xB0
    ::HMUI::ToggleBinder* toggleBinder;
    // Field size check
    static_assert(sizeof(::HMUI::ToggleBinder*) == 0x8);
    // private System.Boolean _enableBroadcasting
    // Size: 0x1
    // Offset: 0xB8
    bool enableBroadcasting;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _allowAnyoneToJoin
    // Size: 0x1
    // Offset: 0xB9
    bool allowAnyoneToJoin;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private UnityEngine.UI.Toggle _enableNetworkingToggle
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Toggle*& dyn__enableNetworkingToggle();
    // Get instance field reference: private UnityEngine.UI.Toggle _enableOpenPartyToggle
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Toggle*& dyn__enableOpenPartyToggle();
    // Get instance field reference: private readonly LocalNetworkPlayerModel _localNetworkPlayerModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LocalNetworkPlayerModel*& dyn__localNetworkPlayerModel();
    // Get instance field reference: private readonly INetworkConfig _networkConfig
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::INetworkConfig*& dyn__networkConfig();
    // Get instance field reference: private HMUI.ToggleBinder _toggleBinder
    [[deprecated("Use field access instead!")]] ::HMUI::ToggleBinder*& dyn__toggleBinder();
    // Get instance field reference: private System.Boolean _enableBroadcasting
    [[deprecated("Use field access instead!")]] bool& dyn__enableBroadcasting();
    // Get instance field reference: private System.Boolean _allowAnyoneToJoin
    [[deprecated("Use field access instead!")]] bool& dyn__allowAnyoneToJoin();
    // private System.Void HandleNetworkingToggleChanged(System.Boolean enabled)
    // Offset: 0x15C0604
    void HandleNetworkingToggleChanged(bool enabled);
    // private System.Void HandleOpenPartyToggleChanged(System.Boolean openParty)
    // Offset: 0x15C0614
    void HandleOpenPartyToggleChanged(bool openParty);
    // private System.Void RefreshParty(System.Boolean overrideHide)
    // Offset: 0x15C0420
    void RefreshParty(bool overrideHide);
    // public override System.String get_myPartyTitle()
    // Offset: 0x15C0248
    // Implemented from: NetworkPlayersViewController
    // Base method: System.String NetworkPlayersViewController::get_myPartyTitle()
    ::StringW get_myPartyTitle();
    // public override System.String get_otherPlayersTitle()
    // Offset: 0x15C0290
    // Implemented from: NetworkPlayersViewController
    // Base method: System.String NetworkPlayersViewController::get_otherPlayersTitle()
    ::StringW get_otherPlayersTitle();
    // public override INetworkPlayerModel get_networkPlayerModel()
    // Offset: 0x15C02D8
    // Implemented from: NetworkPlayersViewController
    // Base method: INetworkPlayerModel NetworkPlayersViewController::get_networkPlayerModel()
    ::GlobalNamespace::INetworkPlayerModel* get_networkPlayerModel();
    // public System.Void .ctor()
    // Offset: 0x15C0624
    // Implemented from: NetworkPlayersViewController
    // Base method: System.Void NetworkPlayersViewController::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalNetworkPlayersViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LocalNetworkPlayersViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalNetworkPlayersViewController*, creationType>()));
    }
    // protected override System.Void NetworkPlayersViewControllerDidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy)
    // Offset: 0x15C02E0
    // Implemented from: NetworkPlayersViewController
    // Base method: System.Void NetworkPlayersViewController::NetworkPlayersViewControllerDidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy)
    void NetworkPlayersViewControllerDidActivate(bool firstActivation, bool addedToHierarchy);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x15C05C0
    // Implemented from: NetworkPlayersViewController
    // Base method: System.Void NetworkPlayersViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // protected override System.Void OnDestroy()
    // Offset: 0x15C05D0
    // Implemented from: NetworkPlayersViewController
    // Base method: System.Void NetworkPlayersViewController::OnDestroy()
    void OnDestroy();
  }; // LocalNetworkPlayersViewController
  #pragma pack(pop)
  static check_size<sizeof(LocalNetworkPlayersViewController), 185 + sizeof(bool)> __GlobalNamespace_LocalNetworkPlayersViewControllerSizeCheck;
  static_assert(sizeof(LocalNetworkPlayersViewController) == 0xBA);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LocalNetworkPlayersViewController::HandleNetworkingToggleChanged
// Il2CppName: HandleNetworkingToggleChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkPlayersViewController::*)(bool)>(&GlobalNamespace::LocalNetworkPlayersViewController::HandleNetworkingToggleChanged)> {
  static const MethodInfo* get() {
    static auto* enabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalNetworkPlayersViewController*), "HandleNetworkingToggleChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enabled});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocalNetworkPlayersViewController::HandleOpenPartyToggleChanged
// Il2CppName: HandleOpenPartyToggleChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkPlayersViewController::*)(bool)>(&GlobalNamespace::LocalNetworkPlayersViewController::HandleOpenPartyToggleChanged)> {
  static const MethodInfo* get() {
    static auto* openParty = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalNetworkPlayersViewController*), "HandleOpenPartyToggleChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{openParty});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocalNetworkPlayersViewController::RefreshParty
// Il2CppName: RefreshParty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkPlayersViewController::*)(bool)>(&GlobalNamespace::LocalNetworkPlayersViewController::RefreshParty)> {
  static const MethodInfo* get() {
    static auto* overrideHide = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalNetworkPlayersViewController*), "RefreshParty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{overrideHide});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocalNetworkPlayersViewController::get_myPartyTitle
// Il2CppName: get_myPartyTitle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::LocalNetworkPlayersViewController::*)()>(&GlobalNamespace::LocalNetworkPlayersViewController::get_myPartyTitle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalNetworkPlayersViewController*), "get_myPartyTitle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocalNetworkPlayersViewController::get_otherPlayersTitle
// Il2CppName: get_otherPlayersTitle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::LocalNetworkPlayersViewController::*)()>(&GlobalNamespace::LocalNetworkPlayersViewController::get_otherPlayersTitle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalNetworkPlayersViewController*), "get_otherPlayersTitle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocalNetworkPlayersViewController::get_networkPlayerModel
// Il2CppName: get_networkPlayerModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::INetworkPlayerModel* (GlobalNamespace::LocalNetworkPlayersViewController::*)()>(&GlobalNamespace::LocalNetworkPlayersViewController::get_networkPlayerModel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalNetworkPlayersViewController*), "get_networkPlayerModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocalNetworkPlayersViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LocalNetworkPlayersViewController::NetworkPlayersViewControllerDidActivate
// Il2CppName: NetworkPlayersViewControllerDidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkPlayersViewController::*)(bool, bool)>(&GlobalNamespace::LocalNetworkPlayersViewController::NetworkPlayersViewControllerDidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalNetworkPlayersViewController*), "NetworkPlayersViewControllerDidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocalNetworkPlayersViewController::DidDeactivate
// Il2CppName: DidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkPlayersViewController::*)(bool, bool)>(&GlobalNamespace::LocalNetworkPlayersViewController::DidDeactivate)> {
  static const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemDisabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalNetworkPlayersViewController*), "DidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy, screenSystemDisabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocalNetworkPlayersViewController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalNetworkPlayersViewController::*)()>(&GlobalNamespace::LocalNetworkPlayersViewController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalNetworkPlayersViewController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
