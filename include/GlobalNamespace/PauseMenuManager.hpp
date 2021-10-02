// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PauseAnimationController
  class PauseAnimationController;
  // Forward declaring type: LevelBar
  class LevelBar;
  // Forward declaring type: VRControllersInputManager
  class VRControllersInputManager;
  // Forward declaring type: EnvironmentSpawnRotation
  class EnvironmentSpawnRotation;
}
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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
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
  // Size: 0x94
  #pragma pack(push, 1)
  // Autogenerated type: PauseMenuManager
  // [TokenAttribute] Offset: FFFFFFFF
  class PauseMenuManager : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::PauseMenuManager::InitData
    class InitData;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private PauseAnimationController _pauseAnimationController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::PauseAnimationController* pauseAnimationController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PauseAnimationController*) == 0x8);
    // [NullAllowed] Offset: 0xF07D20
    // private LevelBar _levelBar
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::LevelBar* levelBar;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelBar*) == 0x8);
    // private UnityEngine.UI.Button _continueButton
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::UI::Button* continueButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _restartButton
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::UI::Button* restartButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _backButton
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::UI::Button* backButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private TMPro.TextMeshProUGUI _backButtonText
    // Size: 0x8
    // Offset: 0x40
    TMPro::TextMeshProUGUI* backButtonText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.Transform _pauseContainerTransform
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::Transform* pauseContainerTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [InjectAttribute] Offset: 0xF07DA8
    // private readonly PauseMenuManager/InitData _initData
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::PauseMenuManager::InitData* initData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PauseMenuManager::InitData*) == 0x8);
    // [InjectAttribute] Offset: 0xF07DB8
    // private readonly VRControllersInputManager _vrControllersInputManager
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::VRControllersInputManager* vrControllersInputManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::VRControllersInputManager*) == 0x8);
    // [InjectAttribute] Offset: 0xF07DC8
    // private readonly EnvironmentSpawnRotation _environmentSpawnRotation
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::EnvironmentSpawnRotation* environmentSpawnRotation;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnvironmentSpawnRotation*) == 0x8);
    // private System.Action didPressContinueButtonEvent
    // Size: 0x8
    // Offset: 0x68
    System::Action* didPressContinueButtonEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Action didPressMenuButtonEvent
    // Size: 0x8
    // Offset: 0x70
    System::Action* didPressMenuButtonEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Action didPressRestartButtonEvent
    // Size: 0x8
    // Offset: 0x78
    System::Action* didPressRestartButtonEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Action didFinishResumeAnimationEvent
    // Size: 0x8
    // Offset: 0x80
    System::Action* didFinishResumeAnimationEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private HMUI.ButtonBinder _buttonBinder
    // Size: 0x8
    // Offset: 0x88
    HMUI::ButtonBinder* buttonBinder;
    // Field size check
    static_assert(sizeof(HMUI::ButtonBinder*) == 0x8);
    // private System.Single _disabledInteractionRemainingTime
    // Size: 0x4
    // Offset: 0x90
    float disabledInteractionRemainingTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kDisabledInteractionDuration
    static constexpr const float kDisabledInteractionDuration = 0.2;
    // Get static field: static private System.Single kDisabledInteractionDuration
    static float _get_kDisabledInteractionDuration();
    // Set static field: static private System.Single kDisabledInteractionDuration
    static void _set_kDisabledInteractionDuration(float value);
    // Get instance field reference: private PauseAnimationController _pauseAnimationController
    GlobalNamespace::PauseAnimationController*& dyn__pauseAnimationController();
    // Get instance field reference: private LevelBar _levelBar
    GlobalNamespace::LevelBar*& dyn__levelBar();
    // Get instance field reference: private UnityEngine.UI.Button _continueButton
    UnityEngine::UI::Button*& dyn__continueButton();
    // Get instance field reference: private UnityEngine.UI.Button _restartButton
    UnityEngine::UI::Button*& dyn__restartButton();
    // Get instance field reference: private UnityEngine.UI.Button _backButton
    UnityEngine::UI::Button*& dyn__backButton();
    // Get instance field reference: private TMPro.TextMeshProUGUI _backButtonText
    TMPro::TextMeshProUGUI*& dyn__backButtonText();
    // Get instance field reference: private UnityEngine.Transform _pauseContainerTransform
    UnityEngine::Transform*& dyn__pauseContainerTransform();
    // Get instance field reference: private readonly PauseMenuManager/InitData _initData
    GlobalNamespace::PauseMenuManager::InitData*& dyn__initData();
    // Get instance field reference: private readonly VRControllersInputManager _vrControllersInputManager
    GlobalNamespace::VRControllersInputManager*& dyn__vrControllersInputManager();
    // Get instance field reference: private readonly EnvironmentSpawnRotation _environmentSpawnRotation
    GlobalNamespace::EnvironmentSpawnRotation*& dyn__environmentSpawnRotation();
    // Get instance field reference: private System.Action didPressContinueButtonEvent
    System::Action*& dyn_didPressContinueButtonEvent();
    // Get instance field reference: private System.Action didPressMenuButtonEvent
    System::Action*& dyn_didPressMenuButtonEvent();
    // Get instance field reference: private System.Action didPressRestartButtonEvent
    System::Action*& dyn_didPressRestartButtonEvent();
    // Get instance field reference: private System.Action didFinishResumeAnimationEvent
    System::Action*& dyn_didFinishResumeAnimationEvent();
    // Get instance field reference: private HMUI.ButtonBinder _buttonBinder
    HMUI::ButtonBinder*& dyn__buttonBinder();
    // Get instance field reference: private System.Single _disabledInteractionRemainingTime
    float& dyn__disabledInteractionRemainingTime();
    // public System.Void add_didPressContinueButtonEvent(System.Action value)
    // Offset: 0x12AF4C4
    void add_didPressContinueButtonEvent(System::Action* value);
    // public System.Void remove_didPressContinueButtonEvent(System.Action value)
    // Offset: 0x12AFAB4
    void remove_didPressContinueButtonEvent(System::Action* value);
    // public System.Void add_didPressMenuButtonEvent(System.Action value)
    // Offset: 0x12AF60C
    void add_didPressMenuButtonEvent(System::Action* value);
    // public System.Void remove_didPressMenuButtonEvent(System.Action value)
    // Offset: 0x12AFBFC
    void remove_didPressMenuButtonEvent(System::Action* value);
    // public System.Void add_didPressRestartButtonEvent(System.Action value)
    // Offset: 0x12AF568
    void add_didPressRestartButtonEvent(System::Action* value);
    // public System.Void remove_didPressRestartButtonEvent(System.Action value)
    // Offset: 0x12AFB58
    void remove_didPressRestartButtonEvent(System::Action* value);
    // public System.Void add_didFinishResumeAnimationEvent(System.Action value)
    // Offset: 0x12AF420
    void add_didFinishResumeAnimationEvent(System::Action* value);
    // public System.Void remove_didFinishResumeAnimationEvent(System.Action value)
    // Offset: 0x12AFA10
    void remove_didFinishResumeAnimationEvent(System::Action* value);
    // protected System.Void Awake()
    // Offset: 0x12B021C
    void Awake();
    // protected System.Void Start()
    // Offset: 0x12B03A4
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x12B04E4
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0x12B05C4
    void Update();
    // public System.Void ShowMenu()
    // Offset: 0x12AFDD4
    void ShowMenu();
    // public System.Void StartResumeAnimation()
    // Offset: 0x12B0058
    void StartResumeAnimation();
    // private System.Void HandleResumeFromPauseAnimationDidFinish()
    // Offset: 0x12B0750
    void HandleResumeFromPauseAnimationDidFinish();
    // private System.Void MenuButtonPressed()
    // Offset: 0x12B0710
    void MenuButtonPressed();
    // private System.Void RestartButtonPressed()
    // Offset: 0x12B06BC
    void RestartButtonPressed();
    // private System.Void ContinueButtonPressed()
    // Offset: 0x12B067C
    void ContinueButtonPressed();
    // public System.Void .ctor()
    // Offset: 0x12B0764
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PauseMenuManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PauseMenuManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PauseMenuManager*, creationType>()));
    }
  }; // PauseMenuManager
  #pragma pack(pop)
  static check_size<sizeof(PauseMenuManager), 144 + sizeof(float)> __GlobalNamespace_PauseMenuManagerSizeCheck;
  static_assert(sizeof(PauseMenuManager) == 0x94);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PauseMenuManager*, "", "PauseMenuManager");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PauseMenuManager::add_didPressContinueButtonEvent
// Il2CppName: add_didPressContinueButtonEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseMenuManager::*)(System::Action*)>(&GlobalNamespace::PauseMenuManager::add_didPressContinueButtonEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseMenuManager*), "add_didPressContinueButtonEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseMenuManager::remove_didPressContinueButtonEvent
// Il2CppName: remove_didPressContinueButtonEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseMenuManager::*)(System::Action*)>(&GlobalNamespace::PauseMenuManager::remove_didPressContinueButtonEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseMenuManager*), "remove_didPressContinueButtonEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseMenuManager::add_didPressMenuButtonEvent
// Il2CppName: add_didPressMenuButtonEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseMenuManager::*)(System::Action*)>(&GlobalNamespace::PauseMenuManager::add_didPressMenuButtonEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseMenuManager*), "add_didPressMenuButtonEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseMenuManager::remove_didPressMenuButtonEvent
// Il2CppName: remove_didPressMenuButtonEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseMenuManager::*)(System::Action*)>(&GlobalNamespace::PauseMenuManager::remove_didPressMenuButtonEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseMenuManager*), "remove_didPressMenuButtonEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseMenuManager::add_didPressRestartButtonEvent
// Il2CppName: add_didPressRestartButtonEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseMenuManager::*)(System::Action*)>(&GlobalNamespace::PauseMenuManager::add_didPressRestartButtonEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseMenuManager*), "add_didPressRestartButtonEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseMenuManager::remove_didPressRestartButtonEvent
// Il2CppName: remove_didPressRestartButtonEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseMenuManager::*)(System::Action*)>(&GlobalNamespace::PauseMenuManager::remove_didPressRestartButtonEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseMenuManager*), "remove_didPressRestartButtonEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseMenuManager::add_didFinishResumeAnimationEvent
// Il2CppName: add_didFinishResumeAnimationEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseMenuManager::*)(System::Action*)>(&GlobalNamespace::PauseMenuManager::add_didFinishResumeAnimationEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseMenuManager*), "add_didFinishResumeAnimationEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseMenuManager::remove_didFinishResumeAnimationEvent
// Il2CppName: remove_didFinishResumeAnimationEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseMenuManager::*)(System::Action*)>(&GlobalNamespace::PauseMenuManager::remove_didFinishResumeAnimationEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseMenuManager*), "remove_didFinishResumeAnimationEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseMenuManager::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseMenuManager::*)()>(&GlobalNamespace::PauseMenuManager::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseMenuManager*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseMenuManager::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseMenuManager::*)()>(&GlobalNamespace::PauseMenuManager::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseMenuManager*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseMenuManager::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseMenuManager::*)()>(&GlobalNamespace::PauseMenuManager::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseMenuManager*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseMenuManager::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseMenuManager::*)()>(&GlobalNamespace::PauseMenuManager::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseMenuManager*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseMenuManager::ShowMenu
// Il2CppName: ShowMenu
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseMenuManager::*)()>(&GlobalNamespace::PauseMenuManager::ShowMenu)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseMenuManager*), "ShowMenu", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseMenuManager::StartResumeAnimation
// Il2CppName: StartResumeAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseMenuManager::*)()>(&GlobalNamespace::PauseMenuManager::StartResumeAnimation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseMenuManager*), "StartResumeAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseMenuManager::HandleResumeFromPauseAnimationDidFinish
// Il2CppName: HandleResumeFromPauseAnimationDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseMenuManager::*)()>(&GlobalNamespace::PauseMenuManager::HandleResumeFromPauseAnimationDidFinish)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseMenuManager*), "HandleResumeFromPauseAnimationDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseMenuManager::MenuButtonPressed
// Il2CppName: MenuButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseMenuManager::*)()>(&GlobalNamespace::PauseMenuManager::MenuButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseMenuManager*), "MenuButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseMenuManager::RestartButtonPressed
// Il2CppName: RestartButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseMenuManager::*)()>(&GlobalNamespace::PauseMenuManager::RestartButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseMenuManager*), "RestartButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseMenuManager::ContinueButtonPressed
// Il2CppName: ContinueButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseMenuManager::*)()>(&GlobalNamespace::PauseMenuManager::ContinueButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseMenuManager*), "ContinueButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseMenuManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
