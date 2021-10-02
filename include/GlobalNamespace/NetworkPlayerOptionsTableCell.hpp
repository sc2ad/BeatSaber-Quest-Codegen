// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.TableCell
#include "HMUI/TableCell.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: INetworkPlayer
  class INetworkPlayer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: NetworkPlayerOptionsTableCell
  // [TokenAttribute] Offset: FFFFFFFF
  class NetworkPlayerOptionsTableCell : public HMUI::TableCell {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private UnityEngine.UI.Button[] _buttons
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<UnityEngine::UI::Button*> buttons;
    // Field size check
    static_assert(sizeof(::ArrayW<UnityEngine::UI::Button*>) == 0x8);
    // private TMPro.TextMeshProUGUI[] _buttonTexts
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<TMPro::TextMeshProUGUI*> buttonTexts;
    // Field size check
    static_assert(sizeof(::ArrayW<TMPro::TextMeshProUGUI*>) == 0x8);
    // private HMUI.ButtonBinder _buttonBinder
    // Size: 0x8
    // Offset: 0x60
    HMUI::ButtonBinder* buttonBinder;
    // Field size check
    static_assert(sizeof(HMUI::ButtonBinder*) == 0x8);
    // private INetworkPlayer _player
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::INetworkPlayer* player;
    // Field size check
    static_assert(sizeof(GlobalNamespace::INetworkPlayer*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.UI.Button[] _buttons
    ::ArrayW<UnityEngine::UI::Button*>& dyn__buttons();
    // Get instance field reference: private TMPro.TextMeshProUGUI[] _buttonTexts
    ::ArrayW<TMPro::TextMeshProUGUI*>& dyn__buttonTexts();
    // Get instance field reference: private HMUI.ButtonBinder _buttonBinder
    HMUI::ButtonBinder*& dyn__buttonBinder();
    // Get instance field reference: private INetworkPlayer _player
    GlobalNamespace::INetworkPlayer*& dyn__player();
    // public INetworkPlayer get_player()
    // Offset: 0x11393D0
    GlobalNamespace::INetworkPlayer* get_player();
    // public System.Void set_player(INetworkPlayer value)
    // Offset: 0x11393D8
    void set_player(GlobalNamespace::INetworkPlayer* value);
    // private System.Void Refresh()
    // Offset: 0x11393E0
    void Refresh();
    // private System.Void Block()
    // Offset: 0x1139EF0
    void Block();
    // private System.Void Unblock()
    // Offset: 0x1139FAC
    void Unblock();
    // private System.Void Join()
    // Offset: 0x113A068
    void Join();
    // private System.Void Invite()
    // Offset: 0x113A124
    void Invite();
    // private System.Void Kick()
    // Offset: 0x113A1E0
    void Kick();
    // private System.Void Leave()
    // Offset: 0x113A29C
    void Leave();
    // public System.Void .ctor()
    // Offset: 0x113A358
    // Implemented from: HMUI.TableCell
    // Base method: System.Void TableCell::.ctor()
    // Base method: System.Void SelectableCell::.ctor()
    // Base method: System.Void Interactable::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkPlayerOptionsTableCell* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetworkPlayerOptionsTableCell::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkPlayerOptionsTableCell*, creationType>()));
    }
  }; // NetworkPlayerOptionsTableCell
  #pragma pack(pop)
  static check_size<sizeof(NetworkPlayerOptionsTableCell), 104 + sizeof(GlobalNamespace::INetworkPlayer*)> __GlobalNamespace_NetworkPlayerOptionsTableCellSizeCheck;
  static_assert(sizeof(NetworkPlayerOptionsTableCell) == 0x70);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetworkPlayerOptionsTableCell*, "", "NetworkPlayerOptionsTableCell");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayerOptionsTableCell::get_player
// Il2CppName: get_player
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::INetworkPlayer* (GlobalNamespace::NetworkPlayerOptionsTableCell::*)()>(&GlobalNamespace::NetworkPlayerOptionsTableCell::get_player)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkPlayerOptionsTableCell*), "get_player", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayerOptionsTableCell::set_player
// Il2CppName: set_player
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkPlayerOptionsTableCell::*)(GlobalNamespace::INetworkPlayer*)>(&GlobalNamespace::NetworkPlayerOptionsTableCell::set_player)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "INetworkPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkPlayerOptionsTableCell*), "set_player", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayerOptionsTableCell::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkPlayerOptionsTableCell::*)()>(&GlobalNamespace::NetworkPlayerOptionsTableCell::Refresh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkPlayerOptionsTableCell*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayerOptionsTableCell::Block
// Il2CppName: Block
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkPlayerOptionsTableCell::*)()>(&GlobalNamespace::NetworkPlayerOptionsTableCell::Block)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkPlayerOptionsTableCell*), "Block", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayerOptionsTableCell::Unblock
// Il2CppName: Unblock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkPlayerOptionsTableCell::*)()>(&GlobalNamespace::NetworkPlayerOptionsTableCell::Unblock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkPlayerOptionsTableCell*), "Unblock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayerOptionsTableCell::Join
// Il2CppName: Join
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkPlayerOptionsTableCell::*)()>(&GlobalNamespace::NetworkPlayerOptionsTableCell::Join)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkPlayerOptionsTableCell*), "Join", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayerOptionsTableCell::Invite
// Il2CppName: Invite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkPlayerOptionsTableCell::*)()>(&GlobalNamespace::NetworkPlayerOptionsTableCell::Invite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkPlayerOptionsTableCell*), "Invite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayerOptionsTableCell::Kick
// Il2CppName: Kick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkPlayerOptionsTableCell::*)()>(&GlobalNamespace::NetworkPlayerOptionsTableCell::Kick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkPlayerOptionsTableCell*), "Kick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayerOptionsTableCell::Leave
// Il2CppName: Leave
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkPlayerOptionsTableCell::*)()>(&GlobalNamespace::NetworkPlayerOptionsTableCell::Leave)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkPlayerOptionsTableCell*), "Leave", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayerOptionsTableCell::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
