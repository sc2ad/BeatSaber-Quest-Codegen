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
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: PanelAnimationSO
  class PanelAnimationSO;
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: DisconnectPromptView
  class DisconnectPromptView;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DisconnectPromptView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DisconnectPromptView*, "", "DisconnectPromptView");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: DisconnectPromptView
  // [TokenAttribute] Offset: FFFFFFFF
  class DisconnectPromptView : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::DisconnectPromptView::$$c__DisplayClass12_0
    class $$c__DisplayClass12_0;
    public:
    // private HMUI.PanelAnimationSO _presentPanelAnimation
    // Size: 0x8
    // Offset: 0x18
    ::HMUI::PanelAnimationSO* presentPanelAnimation;
    // Field size check
    static_assert(sizeof(::HMUI::PanelAnimationSO*) == 0x8);
    // private HMUI.PanelAnimationSO _dismissPanelAnimation
    // Size: 0x8
    // Offset: 0x20
    ::HMUI::PanelAnimationSO* dismissPanelAnimation;
    // Field size check
    static_assert(sizeof(::HMUI::PanelAnimationSO*) == 0x8);
    // [SpaceAttribute] Offset: 0x11249E0
    // private UnityEngine.GameObject _promptGameObject
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::GameObject* promptGameObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.UI.Button _okButton
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::UI::Button* okButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _cancelButton
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::UI::Button* cancelButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private System.Action`1<System.Boolean> didViewFinishEvent
    // Size: 0x8
    // Offset: 0x40
    ::System::Action_1<bool>* didViewFinishEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<bool>*) == 0x8);
    // private readonly HMUI.ButtonBinder _buttonBinder
    // Size: 0x8
    // Offset: 0x48
    ::HMUI::ButtonBinder* buttonBinder;
    // Field size check
    static_assert(sizeof(::HMUI::ButtonBinder*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private HMUI.PanelAnimationSO _presentPanelAnimation
    [[deprecated("Use field access instead!")]] ::HMUI::PanelAnimationSO*& dyn__presentPanelAnimation();
    // Get instance field reference: private HMUI.PanelAnimationSO _dismissPanelAnimation
    [[deprecated("Use field access instead!")]] ::HMUI::PanelAnimationSO*& dyn__dismissPanelAnimation();
    // Get instance field reference: private UnityEngine.GameObject _promptGameObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__promptGameObject();
    // Get instance field reference: private UnityEngine.UI.Button _okButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn__okButton();
    // Get instance field reference: private UnityEngine.UI.Button _cancelButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn__cancelButton();
    // Get instance field reference: private System.Action`1<System.Boolean> didViewFinishEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<bool>*& dyn_didViewFinishEvent();
    // Get instance field reference: private readonly HMUI.ButtonBinder _buttonBinder
    [[deprecated("Use field access instead!")]] ::HMUI::ButtonBinder*& dyn__buttonBinder();
    // public System.Void add_didViewFinishEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x143CA20
    void add_didViewFinishEvent(::System::Action_1<bool>* value);
    // public System.Void remove_didViewFinishEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x143CAC4
    void remove_didViewFinishEvent(::System::Action_1<bool>* value);
    // public System.Void .ctor()
    // Offset: 0x143CD68
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DisconnectPromptView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DisconnectPromptView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DisconnectPromptView*, creationType>()));
    }
    // private System.Void OnEnable()
    // Offset: 0x143CB68
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x143CC48
    void OnDisable();
    // public System.Void Show()
    // Offset: 0x143CC64
    void Show();
    // public System.Void Hide(System.Action finishedCallback)
    // Offset: 0x143CCA8
    void Hide(::System::Action* finishedCallback);
    // private System.Void <OnEnable>b__9_0()
    // Offset: 0x143CDD0
    void $OnEnable$b__9_0();
    // private System.Void <OnEnable>b__9_1()
    // Offset: 0x143CE34
    void $OnEnable$b__9_1();
  }; // DisconnectPromptView
  #pragma pack(pop)
  static check_size<sizeof(DisconnectPromptView), 72 + sizeof(::HMUI::ButtonBinder*)> __GlobalNamespace_DisconnectPromptViewSizeCheck;
  static_assert(sizeof(DisconnectPromptView) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DisconnectPromptView::add_didViewFinishEvent
// Il2CppName: add_didViewFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DisconnectPromptView::*)(::System::Action_1<bool>*)>(&GlobalNamespace::DisconnectPromptView::add_didViewFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DisconnectPromptView*), "add_didViewFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DisconnectPromptView::remove_didViewFinishEvent
// Il2CppName: remove_didViewFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DisconnectPromptView::*)(::System::Action_1<bool>*)>(&GlobalNamespace::DisconnectPromptView::remove_didViewFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DisconnectPromptView*), "remove_didViewFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DisconnectPromptView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::DisconnectPromptView::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DisconnectPromptView::*)()>(&GlobalNamespace::DisconnectPromptView::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DisconnectPromptView*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DisconnectPromptView::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DisconnectPromptView::*)()>(&GlobalNamespace::DisconnectPromptView::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DisconnectPromptView*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DisconnectPromptView::Show
// Il2CppName: Show
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DisconnectPromptView::*)()>(&GlobalNamespace::DisconnectPromptView::Show)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DisconnectPromptView*), "Show", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DisconnectPromptView::Hide
// Il2CppName: Hide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DisconnectPromptView::*)(::System::Action*)>(&GlobalNamespace::DisconnectPromptView::Hide)> {
  static const MethodInfo* get() {
    static auto* finishedCallback = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DisconnectPromptView*), "Hide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{finishedCallback});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DisconnectPromptView::$OnEnable$b__9_0
// Il2CppName: <OnEnable>b__9_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DisconnectPromptView::*)()>(&GlobalNamespace::DisconnectPromptView::$OnEnable$b__9_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DisconnectPromptView*), "<OnEnable>b__9_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DisconnectPromptView::$OnEnable$b__9_1
// Il2CppName: <OnEnable>b__9_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DisconnectPromptView::*)()>(&GlobalNamespace::DisconnectPromptView::$OnEnable$b__9_1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DisconnectPromptView*), "<OnEnable>b__9_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
