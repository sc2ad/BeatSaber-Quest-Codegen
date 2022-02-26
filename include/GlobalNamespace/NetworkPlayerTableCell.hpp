// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.TableCell
#include "HMUI/TableCell.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: NetworkPlayerTableCell
  class NetworkPlayerTableCell;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::NetworkPlayerTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkPlayerTableCell*, "", "NetworkPlayerTableCell");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xB9
  #pragma pack(push, 1)
  // Autogenerated type: NetworkPlayerTableCell
  // [TokenAttribute] Offset: FFFFFFFF
  class NetworkPlayerTableCell : public ::HMUI::TableCell {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private TMPro.TextMeshProUGUI _playerNameText
    // Size: 0x8
    // Offset: 0x50
    ::TMPro::TextMeshProUGUI* playerNameText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.GameObject _separator
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::GameObject* separator;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.UI.Image _privateIcon
    // Size: 0x8
    // Offset: 0x60
    ::UnityEngine::UI::Image* privateIcon;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.UI.Image _spectateIcon
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::UI::Image* spectateIcon;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.UI.Image _partyLeaderIcon
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::UI::Image* partyLeaderIcon;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.UI.Image _bgImage
    // Size: 0x8
    // Offset: 0x78
    ::UnityEngine::UI::Image* bgImage;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.UI.Image _highlightImage
    // Size: 0x8
    // Offset: 0x80
    ::UnityEngine::UI::Image* highlightImage;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.Color _textColorNormal
    // Size: 0x10
    // Offset: 0x88
    ::UnityEngine::Color textColorNormal;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _textColorMe
    // Size: 0x10
    // Offset: 0x98
    ::UnityEngine::Color textColorMe;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _textColorSelected
    // Size: 0x10
    // Offset: 0xA8
    ::UnityEngine::Color textColorSelected;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Boolean _isMe
    // Size: 0x1
    // Offset: 0xB8
    bool isMe;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private TMPro.TextMeshProUGUI _playerNameText
    ::TMPro::TextMeshProUGUI*& dyn__playerNameText();
    // Get instance field reference: private UnityEngine.GameObject _separator
    ::UnityEngine::GameObject*& dyn__separator();
    // Get instance field reference: private UnityEngine.UI.Image _privateIcon
    ::UnityEngine::UI::Image*& dyn__privateIcon();
    // Get instance field reference: private UnityEngine.UI.Image _spectateIcon
    ::UnityEngine::UI::Image*& dyn__spectateIcon();
    // Get instance field reference: private UnityEngine.UI.Image _partyLeaderIcon
    ::UnityEngine::UI::Image*& dyn__partyLeaderIcon();
    // Get instance field reference: private UnityEngine.UI.Image _bgImage
    ::UnityEngine::UI::Image*& dyn__bgImage();
    // Get instance field reference: private UnityEngine.UI.Image _highlightImage
    ::UnityEngine::UI::Image*& dyn__highlightImage();
    // Get instance field reference: private UnityEngine.Color _textColorNormal
    ::UnityEngine::Color& dyn__textColorNormal();
    // Get instance field reference: private UnityEngine.Color _textColorMe
    ::UnityEngine::Color& dyn__textColorMe();
    // Get instance field reference: private UnityEngine.Color _textColorSelected
    ::UnityEngine::Color& dyn__textColorSelected();
    // Get instance field reference: private System.Boolean _isMe
    bool& dyn__isMe();
    // public System.Boolean get_showSeparator()
    // Offset: 0x2B25628
    bool get_showSeparator();
    // public System.Void set_showSeparator(System.Boolean value)
    // Offset: 0x2B25644
    void set_showSeparator(bool value);
    // private UnityEngine.Color get_activeColor()
    // Offset: 0x2B25944
    ::UnityEngine::Color get_activeColor();
    // public System.Void SetData(System.String userName, System.Boolean isOpenParty, System.Boolean wantsToPlayNextLevel, System.Boolean isMyPartyOwner, System.Boolean isMe)
    // Offset: 0x2B2589C
    void SetData(::StringW userName, bool isOpenParty, bool wantsToPlayNextLevel, bool isMyPartyOwner, bool isMe);
    // private System.Void RefreshVisuals()
    // Offset: 0x2B2567C
    void RefreshVisuals();
    // public System.Void .ctor()
    // Offset: 0x2B259A0
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
    static NetworkPlayerTableCell* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NetworkPlayerTableCell::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkPlayerTableCell*, creationType>()));
    }
    // protected override System.Void SelectionDidChange(HMUI.SelectableCell/HMUI.TransitionType transitionType)
    // Offset: 0x2B2593C
    // Implemented from: HMUI.SelectableCell
    // Base method: System.Void SelectableCell::SelectionDidChange(HMUI.SelectableCell/HMUI.TransitionType transitionType)
    void SelectionDidChange(::HMUI::SelectableCell::TransitionType transitionType);
    // protected override System.Void HighlightDidChange(HMUI.SelectableCell/HMUI.TransitionType transitionType)
    // Offset: 0x2B25940
    // Implemented from: HMUI.SelectableCell
    // Base method: System.Void SelectableCell::HighlightDidChange(HMUI.SelectableCell/HMUI.TransitionType transitionType)
    void HighlightDidChange(::HMUI::SelectableCell::TransitionType transitionType);
  }; // NetworkPlayerTableCell
  #pragma pack(pop)
  static check_size<sizeof(NetworkPlayerTableCell), 184 + sizeof(bool)> __GlobalNamespace_NetworkPlayerTableCellSizeCheck;
  static_assert(sizeof(NetworkPlayerTableCell) == 0xB9);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayerTableCell::get_showSeparator
// Il2CppName: get_showSeparator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::NetworkPlayerTableCell::*)()>(&GlobalNamespace::NetworkPlayerTableCell::get_showSeparator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkPlayerTableCell*), "get_showSeparator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayerTableCell::set_showSeparator
// Il2CppName: set_showSeparator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkPlayerTableCell::*)(bool)>(&GlobalNamespace::NetworkPlayerTableCell::set_showSeparator)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkPlayerTableCell*), "set_showSeparator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayerTableCell::get_activeColor
// Il2CppName: get_activeColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (GlobalNamespace::NetworkPlayerTableCell::*)()>(&GlobalNamespace::NetworkPlayerTableCell::get_activeColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkPlayerTableCell*), "get_activeColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayerTableCell::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkPlayerTableCell::*)(::StringW, bool, bool, bool, bool)>(&GlobalNamespace::NetworkPlayerTableCell::SetData)> {
  static const MethodInfo* get() {
    static auto* userName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* isOpenParty = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* wantsToPlayNextLevel = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isMyPartyOwner = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isMe = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkPlayerTableCell*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userName, isOpenParty, wantsToPlayNextLevel, isMyPartyOwner, isMe});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayerTableCell::RefreshVisuals
// Il2CppName: RefreshVisuals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkPlayerTableCell::*)()>(&GlobalNamespace::NetworkPlayerTableCell::RefreshVisuals)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkPlayerTableCell*), "RefreshVisuals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayerTableCell::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayerTableCell::SelectionDidChange
// Il2CppName: SelectionDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkPlayerTableCell::*)(::HMUI::SelectableCell::TransitionType)>(&GlobalNamespace::NetworkPlayerTableCell::SelectionDidChange)> {
  static const MethodInfo* get() {
    static auto* transitionType = &::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell/TransitionType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkPlayerTableCell*), "SelectionDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transitionType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkPlayerTableCell::HighlightDidChange
// Il2CppName: HighlightDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkPlayerTableCell::*)(::HMUI::SelectableCell::TransitionType)>(&GlobalNamespace::NetworkPlayerTableCell::HighlightDidChange)> {
  static const MethodInfo* get() {
    static auto* transitionType = &::il2cpp_utils::GetClassFromName("HMUI", "SelectableCell/TransitionType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkPlayerTableCell*), "HighlightDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transitionType});
  }
};
