// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
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
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GuestNameButtonsListItem
  class GuestNameButtonsListItem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GuestNameButtonsListItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GuestNameButtonsListItem*, "", "GuestNameButtonsListItem");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: GuestNameButtonsListItem
  // [TokenAttribute] Offset: FFFFFFFF
  class GuestNameButtonsListItem : public ::UnityEngine::MonoBehaviour {
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
    // private TMPro.TextMeshProUGUI _nameText
    // Size: 0x8
    // Offset: 0x18
    ::TMPro::TextMeshProUGUI* nameText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.UI.Button _button
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::UI::Button* button;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private System.Action _buttonPressed
    // Size: 0x8
    // Offset: 0x28
    ::System::Action* buttonPressed;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private TMPro.TextMeshProUGUI _nameText
    ::TMPro::TextMeshProUGUI*& dyn__nameText();
    // Get instance field reference: private UnityEngine.UI.Button _button
    ::UnityEngine::UI::Button*& dyn__button();
    // Get instance field reference: private System.Action _buttonPressed
    ::System::Action*& dyn__buttonPressed();
    // public System.Void set_nameText(System.String value)
    // Offset: 0x13EC4FC
    void set_nameText(::StringW value);
    // public System.Void set_buttonPressed(System.Action value)
    // Offset: 0x13EC518
    void set_buttonPressed(::System::Action* value);
    // private System.Void Awake()
    // Offset: 0x13EC520
    void Awake();
    // private System.Void <Awake>b__7_0()
    // Offset: 0x13EC5BC
    void $Awake$b__7_0();
    // public System.Void .ctor()
    // Offset: 0x13EC5B4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GuestNameButtonsListItem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GuestNameButtonsListItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GuestNameButtonsListItem*, creationType>()));
    }
  }; // GuestNameButtonsListItem
  #pragma pack(pop)
  static check_size<sizeof(GuestNameButtonsListItem), 40 + sizeof(::System::Action*)> __GlobalNamespace_GuestNameButtonsListItemSizeCheck;
  static_assert(sizeof(GuestNameButtonsListItem) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GuestNameButtonsListItem::set_nameText
// Il2CppName: set_nameText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GuestNameButtonsListItem::*)(::StringW)>(&GlobalNamespace::GuestNameButtonsListItem::set_nameText)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GuestNameButtonsListItem*), "set_nameText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GuestNameButtonsListItem::set_buttonPressed
// Il2CppName: set_buttonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GuestNameButtonsListItem::*)(::System::Action*)>(&GlobalNamespace::GuestNameButtonsListItem::set_buttonPressed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GuestNameButtonsListItem*), "set_buttonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GuestNameButtonsListItem::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GuestNameButtonsListItem::*)()>(&GlobalNamespace::GuestNameButtonsListItem::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GuestNameButtonsListItem*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GuestNameButtonsListItem::$Awake$b__7_0
// Il2CppName: <Awake>b__7_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GuestNameButtonsListItem::*)()>(&GlobalNamespace::GuestNameButtonsListItem::$Awake$b__7_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GuestNameButtonsListItem*), "<Awake>b__7_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GuestNameButtonsListItem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
