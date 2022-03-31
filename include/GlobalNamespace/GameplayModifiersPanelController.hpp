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
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifiersModelSO
  class GameplayModifiersModelSO;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: GameplayModifierToggle
  class GameplayModifierToggle;
  // Forward declaring type: GameplayModifierParamsSO
  class GameplayModifierParamsSO;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ToggleBinder
  class ToggleBinder;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Toggle
  class Toggle;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifiersPanelController
  class GameplayModifiersPanelController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GameplayModifiersPanelController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayModifiersPanelController*, "", "GameplayModifiersPanelController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: GameplayModifiersPanelController
  // [TokenAttribute] Offset: FFFFFFFF
  class GameplayModifiersPanelController : public ::UnityEngine::MonoBehaviour/*, public ::GlobalNamespace::IRefreshable*/ {
    public:
    // Nested type: ::GlobalNamespace::GameplayModifiersPanelController::$$c__DisplayClass16_0
    class $$c__DisplayClass16_0;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private GameplayModifiersModelSO _gameplayModifiersModel
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplayModifiersModelSO*) == 0x8);
    // private TMPro.TextMeshProUGUI _totalMultiplierValueText
    // Size: 0x8
    // Offset: 0x20
    ::TMPro::TextMeshProUGUI* totalMultiplierValueText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _maxRankValueText
    // Size: 0x8
    // Offset: 0x28
    ::TMPro::TextMeshProUGUI* maxRankValueText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // [SpaceAttribute] Offset: 0x125B044
    // private UnityEngine.Color _positiveColor
    // Size: 0x10
    // Offset: 0x30
    ::UnityEngine::Color positiveColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _negativeColor
    // Size: 0x10
    // Offset: 0x40
    ::UnityEngine::Color negativeColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Action didChangeGameplayModifiersEvent
    // Size: 0x8
    // Offset: 0x50
    ::System::Action* didChangeGameplayModifiersEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private GameplayModifiers _gameplayModifiers
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::GameplayModifiers* gameplayModifiers;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplayModifiers*) == 0x8);
    // private HMUI.ToggleBinder _toggleBinder
    // Size: 0x8
    // Offset: 0x60
    ::HMUI::ToggleBinder* toggleBinder;
    // Field size check
    static_assert(sizeof(::HMUI::ToggleBinder*) == 0x8);
    // private GameplayModifierToggle[] _gameplayModifierToggles
    // Size: 0x8
    // Offset: 0x68
    ::ArrayW<::GlobalNamespace::GameplayModifierToggle*> gameplayModifierToggles;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::GameplayModifierToggle*>) == 0x8);
    // private System.Boolean _changingGameplayModifierToggles
    // Size: 0x1
    // Offset: 0x70
    bool changingGameplayModifierToggles;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: changingGameplayModifierToggles and: toggleForGameplayModifierParam
    char __padding9[0x7] = {};
    // private readonly System.Collections.Generic.Dictionary`2<GameplayModifierParamsSO,UnityEngine.UI.Toggle> _toggleForGameplayModifierParam
    // Size: 0x8
    // Offset: 0x78
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GameplayModifierParamsSO*, ::UnityEngine::UI::Toggle*>* toggleForGameplayModifierParam;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GameplayModifierParamsSO*, ::UnityEngine::UI::Toggle*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IRefreshable
    operator ::GlobalNamespace::IRefreshable() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IRefreshable*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private GameplayModifiersModelSO _gameplayModifiersModel
    ::GlobalNamespace::GameplayModifiersModelSO*& dyn__gameplayModifiersModel();
    // Get instance field reference: private TMPro.TextMeshProUGUI _totalMultiplierValueText
    ::TMPro::TextMeshProUGUI*& dyn__totalMultiplierValueText();
    // Get instance field reference: private TMPro.TextMeshProUGUI _maxRankValueText
    ::TMPro::TextMeshProUGUI*& dyn__maxRankValueText();
    // Get instance field reference: private UnityEngine.Color _positiveColor
    ::UnityEngine::Color& dyn__positiveColor();
    // Get instance field reference: private UnityEngine.Color _negativeColor
    ::UnityEngine::Color& dyn__negativeColor();
    // Get instance field reference: private System.Action didChangeGameplayModifiersEvent
    ::System::Action*& dyn_didChangeGameplayModifiersEvent();
    // Get instance field reference: private GameplayModifiers _gameplayModifiers
    ::GlobalNamespace::GameplayModifiers*& dyn__gameplayModifiers();
    // Get instance field reference: private HMUI.ToggleBinder _toggleBinder
    ::HMUI::ToggleBinder*& dyn__toggleBinder();
    // Get instance field reference: private GameplayModifierToggle[] _gameplayModifierToggles
    ::ArrayW<::GlobalNamespace::GameplayModifierToggle*>& dyn__gameplayModifierToggles();
    // Get instance field reference: private System.Boolean _changingGameplayModifierToggles
    bool& dyn__changingGameplayModifierToggles();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<GameplayModifierParamsSO,UnityEngine.UI.Toggle> _toggleForGameplayModifierParam
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GameplayModifierParamsSO*, ::UnityEngine::UI::Toggle*>*& dyn__toggleForGameplayModifierParam();
    // public GameplayModifiers get_gameplayModifiers()
    // Offset: 0x13E7DA0
    ::GlobalNamespace::GameplayModifiers* get_gameplayModifiers();
    // public System.Void add_didChangeGameplayModifiersEvent(System.Action value)
    // Offset: 0x13E7C58
    void add_didChangeGameplayModifiersEvent(::System::Action* value);
    // public System.Void remove_didChangeGameplayModifiersEvent(System.Action value)
    // Offset: 0x13E7CFC
    void remove_didChangeGameplayModifiersEvent(::System::Action* value);
    // public System.Void SetData(GameplayModifiers newGameplayModifiers)
    // Offset: 0x13E7DA8
    void SetData(::GlobalNamespace::GameplayModifiers* newGameplayModifiers);
    // protected System.Void Awake()
    // Offset: 0x13E7DB0
    void Awake();
    // private System.Void OnDestroy()
    // Offset: 0x13E7F1C
    void OnDestroy();
    // private System.Void SetToggleValueWithGameplayModifierParams(GameplayModifierParamsSO gameplayModifierParams, System.Boolean value)
    // Offset: 0x13E7F30
    void SetToggleValueWithGameplayModifierParams(::GlobalNamespace::GameplayModifierParamsSO* gameplayModifierParams, bool value);
    // private System.Boolean GetToggleValueWithGameplayModifierParams(GameplayModifierParamsSO gameplayModifierParams)
    // Offset: 0x13E7FC8
    bool GetToggleValueWithGameplayModifierParams(::GlobalNamespace::GameplayModifierParamsSO* gameplayModifierParams);
    // private System.Void RefreshTotalMultiplierAndRankUI()
    // Offset: 0x13E805C
    void RefreshTotalMultiplierAndRankUI();
    // private System.Void IRefreshable.Refresh()
    // Offset: 0x13E8214
    void IRefreshable_Refresh();
    // public System.Void .ctor()
    // Offset: 0x13E831C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameplayModifiersPanelController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GameplayModifiersPanelController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameplayModifiersPanelController*, creationType>()));
    }
  }; // GameplayModifiersPanelController
  #pragma pack(pop)
  static check_size<sizeof(GameplayModifiersPanelController), 120 + sizeof(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GameplayModifierParamsSO*, ::UnityEngine::UI::Toggle*>*)> __GlobalNamespace_GameplayModifiersPanelControllerSizeCheck;
  static_assert(sizeof(GameplayModifiersPanelController) == 0x80);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiersPanelController::get_gameplayModifiers
// Il2CppName: get_gameplayModifiers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayModifiers* (GlobalNamespace::GameplayModifiersPanelController::*)()>(&GlobalNamespace::GameplayModifiersPanelController::get_gameplayModifiers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiersPanelController*), "get_gameplayModifiers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiersPanelController::add_didChangeGameplayModifiersEvent
// Il2CppName: add_didChangeGameplayModifiersEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayModifiersPanelController::*)(::System::Action*)>(&GlobalNamespace::GameplayModifiersPanelController::add_didChangeGameplayModifiersEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiersPanelController*), "add_didChangeGameplayModifiersEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiersPanelController::remove_didChangeGameplayModifiersEvent
// Il2CppName: remove_didChangeGameplayModifiersEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayModifiersPanelController::*)(::System::Action*)>(&GlobalNamespace::GameplayModifiersPanelController::remove_didChangeGameplayModifiersEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiersPanelController*), "remove_didChangeGameplayModifiersEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiersPanelController::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayModifiersPanelController::*)(::GlobalNamespace::GameplayModifiers*)>(&GlobalNamespace::GameplayModifiersPanelController::SetData)> {
  static const MethodInfo* get() {
    static auto* newGameplayModifiers = &::il2cpp_utils::GetClassFromName("", "GameplayModifiers")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiersPanelController*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newGameplayModifiers});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiersPanelController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayModifiersPanelController::*)()>(&GlobalNamespace::GameplayModifiersPanelController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiersPanelController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiersPanelController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayModifiersPanelController::*)()>(&GlobalNamespace::GameplayModifiersPanelController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiersPanelController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiersPanelController::SetToggleValueWithGameplayModifierParams
// Il2CppName: SetToggleValueWithGameplayModifierParams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayModifiersPanelController::*)(::GlobalNamespace::GameplayModifierParamsSO*, bool)>(&GlobalNamespace::GameplayModifiersPanelController::SetToggleValueWithGameplayModifierParams)> {
  static const MethodInfo* get() {
    static auto* gameplayModifierParams = &::il2cpp_utils::GetClassFromName("", "GameplayModifierParamsSO")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiersPanelController*), "SetToggleValueWithGameplayModifierParams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gameplayModifierParams, value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiersPanelController::GetToggleValueWithGameplayModifierParams
// Il2CppName: GetToggleValueWithGameplayModifierParams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayModifiersPanelController::*)(::GlobalNamespace::GameplayModifierParamsSO*)>(&GlobalNamespace::GameplayModifiersPanelController::GetToggleValueWithGameplayModifierParams)> {
  static const MethodInfo* get() {
    static auto* gameplayModifierParams = &::il2cpp_utils::GetClassFromName("", "GameplayModifierParamsSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiersPanelController*), "GetToggleValueWithGameplayModifierParams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gameplayModifierParams});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiersPanelController::RefreshTotalMultiplierAndRankUI
// Il2CppName: RefreshTotalMultiplierAndRankUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayModifiersPanelController::*)()>(&GlobalNamespace::GameplayModifiersPanelController::RefreshTotalMultiplierAndRankUI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiersPanelController*), "RefreshTotalMultiplierAndRankUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiersPanelController::IRefreshable_Refresh
// Il2CppName: IRefreshable.Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayModifiersPanelController::*)()>(&GlobalNamespace::GameplayModifiersPanelController::IRefreshable_Refresh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifiersPanelController*), "IRefreshable.Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifiersPanelController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
