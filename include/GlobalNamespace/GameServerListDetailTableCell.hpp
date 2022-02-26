// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.TableCell
#include "HMUI/TableCell.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GameServerListDetailTableCell
  class GameServerListDetailTableCell;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GameServerListDetailTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameServerListDetailTableCell*, "", "GameServerListDetailTableCell");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: GameServerListDetailTableCell
  // [TokenAttribute] Offset: FFFFFFFF
  class GameServerListDetailTableCell : public ::HMUI::TableCell {
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
    // private UnityEngine.UI.Button _joinServerButton
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::UI::Button* joinServerButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private System.Action joinServerButtonWasPressedEvent
    // Size: 0x8
    // Offset: 0x58
    ::System::Action* joinServerButtonWasPressedEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private readonly HMUI.ButtonBinder _buttonBinder
    // Size: 0x8
    // Offset: 0x60
    ::HMUI::ButtonBinder* buttonBinder;
    // Field size check
    static_assert(sizeof(::HMUI::ButtonBinder*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.UI.Button _joinServerButton
    ::UnityEngine::UI::Button*& dyn__joinServerButton();
    // Get instance field reference: private System.Action joinServerButtonWasPressedEvent
    ::System::Action*& dyn_joinServerButtonWasPressedEvent();
    // Get instance field reference: private readonly HMUI.ButtonBinder _buttonBinder
    ::HMUI::ButtonBinder*& dyn__buttonBinder();
    // public System.Void add_joinServerButtonWasPressedEvent(System.Action value)
    // Offset: 0x2ACCAC4
    void add_joinServerButtonWasPressedEvent(::System::Action* value);
    // public System.Void remove_joinServerButtonWasPressedEvent(System.Action value)
    // Offset: 0x2ACCB68
    void remove_joinServerButtonWasPressedEvent(::System::Action* value);
    // private System.Void <Start>b__5_0()
    // Offset: 0x2ACCD14
    void $Start$b__5_0();
    // public System.Void .ctor()
    // Offset: 0x2ACCCAC
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
    static GameServerListDetailTableCell* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GameServerListDetailTableCell::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameServerListDetailTableCell*, creationType>()));
    }
    // protected override System.Void Start()
    // Offset: 0x2ACCC0C
    // Implemented from: HMUI.SelectableCell
    // Base method: System.Void SelectableCell::Start()
    void Start();
  }; // GameServerListDetailTableCell
  #pragma pack(pop)
  static check_size<sizeof(GameServerListDetailTableCell), 96 + sizeof(::HMUI::ButtonBinder*)> __GlobalNamespace_GameServerListDetailTableCellSizeCheck;
  static_assert(sizeof(GameServerListDetailTableCell) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameServerListDetailTableCell::add_joinServerButtonWasPressedEvent
// Il2CppName: add_joinServerButtonWasPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServerListDetailTableCell::*)(::System::Action*)>(&GlobalNamespace::GameServerListDetailTableCell::add_joinServerButtonWasPressedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerListDetailTableCell*), "add_joinServerButtonWasPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServerListDetailTableCell::remove_joinServerButtonWasPressedEvent
// Il2CppName: remove_joinServerButtonWasPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServerListDetailTableCell::*)(::System::Action*)>(&GlobalNamespace::GameServerListDetailTableCell::remove_joinServerButtonWasPressedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerListDetailTableCell*), "remove_joinServerButtonWasPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServerListDetailTableCell::$Start$b__5_0
// Il2CppName: <Start>b__5_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServerListDetailTableCell::*)()>(&GlobalNamespace::GameServerListDetailTableCell::$Start$b__5_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerListDetailTableCell*), "<Start>b__5_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameServerListDetailTableCell::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::GameServerListDetailTableCell::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameServerListDetailTableCell::*)()>(&GlobalNamespace::GameServerListDetailTableCell::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameServerListDetailTableCell*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
