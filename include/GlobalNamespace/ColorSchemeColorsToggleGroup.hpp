// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorSchemeColorToggleController
  class ColorSchemeColorToggleController;
  // Forward declaring type: ColorScheme
  class ColorScheme;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ToggleBinder
  class ToggleBinder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: ColorSchemeColorsToggleGroup
  // [TokenAttribute] Offset: FFFFFFFF
  class ColorSchemeColorsToggleGroup : public UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private ColorSchemeColorToggleController _saberAColorToggleController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::ColorSchemeColorToggleController* saberAColorToggleController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSchemeColorToggleController*) == 0x8);
    // private ColorSchemeColorToggleController _saberBColorToggleController
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::ColorSchemeColorToggleController* saberBColorToggleController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSchemeColorToggleController*) == 0x8);
    // private ColorSchemeColorToggleController _environmentColor0ToggleController
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::ColorSchemeColorToggleController* environmentColor0ToggleController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSchemeColorToggleController*) == 0x8);
    // private ColorSchemeColorToggleController _environmentColor1ToggleController
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::ColorSchemeColorToggleController* environmentColor1ToggleController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSchemeColorToggleController*) == 0x8);
    // private ColorSchemeColorToggleController _obstaclesColorToggleController
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::ColorSchemeColorToggleController* obstaclesColorToggleController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSchemeColorToggleController*) == 0x8);
    // private System.Action`1<UnityEngine.Color> selectedColorDidChangeEvent
    // Size: 0x8
    // Offset: 0x40
    System::Action_1<UnityEngine::Color>* selectedColorDidChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<UnityEngine::Color>*) == 0x8);
    // private HMUI.ToggleBinder _toggleBinder
    // Size: 0x8
    // Offset: 0x48
    HMUI::ToggleBinder* toggleBinder;
    // Field size check
    static_assert(sizeof(HMUI::ToggleBinder*) == 0x8);
    // private ColorSchemeColorToggleController _selectedColorToggleController
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::ColorSchemeColorToggleController* selectedColorToggleController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSchemeColorToggleController*) == 0x8);
    // private ColorScheme _colorScheme
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::ColorScheme* colorScheme;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorScheme*) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private ColorSchemeColorToggleController _saberAColorToggleController
    GlobalNamespace::ColorSchemeColorToggleController*& dyn__saberAColorToggleController();
    // Get instance field reference: private ColorSchemeColorToggleController _saberBColorToggleController
    GlobalNamespace::ColorSchemeColorToggleController*& dyn__saberBColorToggleController();
    // Get instance field reference: private ColorSchemeColorToggleController _environmentColor0ToggleController
    GlobalNamespace::ColorSchemeColorToggleController*& dyn__environmentColor0ToggleController();
    // Get instance field reference: private ColorSchemeColorToggleController _environmentColor1ToggleController
    GlobalNamespace::ColorSchemeColorToggleController*& dyn__environmentColor1ToggleController();
    // Get instance field reference: private ColorSchemeColorToggleController _obstaclesColorToggleController
    GlobalNamespace::ColorSchemeColorToggleController*& dyn__obstaclesColorToggleController();
    // Get instance field reference: private System.Action`1<UnityEngine.Color> selectedColorDidChangeEvent
    System::Action_1<UnityEngine::Color>*& dyn_selectedColorDidChangeEvent();
    // Get instance field reference: private HMUI.ToggleBinder _toggleBinder
    HMUI::ToggleBinder*& dyn__toggleBinder();
    // Get instance field reference: private ColorSchemeColorToggleController _selectedColorToggleController
    GlobalNamespace::ColorSchemeColorToggleController*& dyn__selectedColorToggleController();
    // Get instance field reference: private ColorScheme _colorScheme
    GlobalNamespace::ColorScheme*& dyn__colorScheme();
    // public UnityEngine.Color get_color()
    // Offset: 0x119A2F0
    UnityEngine::Color get_color();
    // public System.Void set_color(UnityEngine.Color value)
    // Offset: 0x119A308
    void set_color(UnityEngine::Color value);
    // public System.Void add_selectedColorDidChangeEvent(System.Action`1<UnityEngine.Color> value)
    // Offset: 0x119A1A8
    void add_selectedColorDidChangeEvent(System::Action_1<UnityEngine::Color>* value);
    // public System.Void remove_selectedColorDidChangeEvent(System.Action`1<UnityEngine.Color> value)
    // Offset: 0x119A24C
    void remove_selectedColorDidChangeEvent(System::Action_1<UnityEngine::Color>* value);
    // public System.Void SetColorScheme(ColorScheme colorScheme)
    // Offset: 0x119A320
    void SetColorScheme(GlobalNamespace::ColorScheme* colorScheme);
    // protected System.Void Awake()
    // Offset: 0x119A410
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x119A628
    void OnDestroy();
    // private System.Void HandleToggleWasSelected(ColorSchemeColorToggleController toggleController, System.Boolean isOn)
    // Offset: 0x119A644
    void HandleToggleWasSelected(GlobalNamespace::ColorSchemeColorToggleController* toggleController, bool isOn);
    // public ColorScheme CreateColorSchemeFromEditedColors()
    // Offset: 0x119A6D4
    GlobalNamespace::ColorScheme* CreateColorSchemeFromEditedColors();
    // private System.Void <Awake>b__15_0(System.Boolean isOn)
    // Offset: 0x119A8BC
    void $Awake$b__15_0(bool isOn);
    // private System.Void <Awake>b__15_1(System.Boolean isOn)
    // Offset: 0x119A8CC
    void $Awake$b__15_1(bool isOn);
    // private System.Void <Awake>b__15_2(System.Boolean isOn)
    // Offset: 0x119A8DC
    void $Awake$b__15_2(bool isOn);
    // private System.Void <Awake>b__15_3(System.Boolean isOn)
    // Offset: 0x119A8EC
    void $Awake$b__15_3(bool isOn);
    // private System.Void <Awake>b__15_4(System.Boolean isOn)
    // Offset: 0x119A8FC
    void $Awake$b__15_4(bool isOn);
    // public System.Void .ctor()
    // Offset: 0x119A8B4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorSchemeColorsToggleGroup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ColorSchemeColorsToggleGroup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorSchemeColorsToggleGroup*, creationType>()));
    }
  }; // ColorSchemeColorsToggleGroup
  #pragma pack(pop)
  static check_size<sizeof(ColorSchemeColorsToggleGroup), 88 + sizeof(GlobalNamespace::ColorScheme*)> __GlobalNamespace_ColorSchemeColorsToggleGroupSizeCheck;
  static_assert(sizeof(ColorSchemeColorsToggleGroup) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorSchemeColorsToggleGroup*, "", "ColorSchemeColorsToggleGroup");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ColorSchemeColorsToggleGroup::get_color
// Il2CppName: get_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::ColorSchemeColorsToggleGroup::*)()>(&GlobalNamespace::ColorSchemeColorsToggleGroup::get_color)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSchemeColorsToggleGroup*), "get_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSchemeColorsToggleGroup::set_color
// Il2CppName: set_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorSchemeColorsToggleGroup::*)(UnityEngine::Color)>(&GlobalNamespace::ColorSchemeColorsToggleGroup::set_color)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSchemeColorsToggleGroup*), "set_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSchemeColorsToggleGroup::add_selectedColorDidChangeEvent
// Il2CppName: add_selectedColorDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorSchemeColorsToggleGroup::*)(System::Action_1<UnityEngine::Color>*)>(&GlobalNamespace::ColorSchemeColorsToggleGroup::add_selectedColorDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Color")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSchemeColorsToggleGroup*), "add_selectedColorDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSchemeColorsToggleGroup::remove_selectedColorDidChangeEvent
// Il2CppName: remove_selectedColorDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorSchemeColorsToggleGroup::*)(System::Action_1<UnityEngine::Color>*)>(&GlobalNamespace::ColorSchemeColorsToggleGroup::remove_selectedColorDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Color")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSchemeColorsToggleGroup*), "remove_selectedColorDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSchemeColorsToggleGroup::SetColorScheme
// Il2CppName: SetColorScheme
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorSchemeColorsToggleGroup::*)(GlobalNamespace::ColorScheme*)>(&GlobalNamespace::ColorSchemeColorsToggleGroup::SetColorScheme)> {
  static const MethodInfo* get() {
    static auto* colorScheme = &::il2cpp_utils::GetClassFromName("", "ColorScheme")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSchemeColorsToggleGroup*), "SetColorScheme", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{colorScheme});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSchemeColorsToggleGroup::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorSchemeColorsToggleGroup::*)()>(&GlobalNamespace::ColorSchemeColorsToggleGroup::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSchemeColorsToggleGroup*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSchemeColorsToggleGroup::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorSchemeColorsToggleGroup::*)()>(&GlobalNamespace::ColorSchemeColorsToggleGroup::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSchemeColorsToggleGroup*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSchemeColorsToggleGroup::HandleToggleWasSelected
// Il2CppName: HandleToggleWasSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorSchemeColorsToggleGroup::*)(GlobalNamespace::ColorSchemeColorToggleController*, bool)>(&GlobalNamespace::ColorSchemeColorsToggleGroup::HandleToggleWasSelected)> {
  static const MethodInfo* get() {
    static auto* toggleController = &::il2cpp_utils::GetClassFromName("", "ColorSchemeColorToggleController")->byval_arg;
    static auto* isOn = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSchemeColorsToggleGroup*), "HandleToggleWasSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toggleController, isOn});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSchemeColorsToggleGroup::CreateColorSchemeFromEditedColors
// Il2CppName: CreateColorSchemeFromEditedColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ColorScheme* (GlobalNamespace::ColorSchemeColorsToggleGroup::*)()>(&GlobalNamespace::ColorSchemeColorsToggleGroup::CreateColorSchemeFromEditedColors)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSchemeColorsToggleGroup*), "CreateColorSchemeFromEditedColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSchemeColorsToggleGroup::$Awake$b__15_0
// Il2CppName: <Awake>b__15_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorSchemeColorsToggleGroup::*)(bool)>(&GlobalNamespace::ColorSchemeColorsToggleGroup::$Awake$b__15_0)> {
  static const MethodInfo* get() {
    static auto* isOn = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSchemeColorsToggleGroup*), "<Awake>b__15_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isOn});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSchemeColorsToggleGroup::$Awake$b__15_1
// Il2CppName: <Awake>b__15_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorSchemeColorsToggleGroup::*)(bool)>(&GlobalNamespace::ColorSchemeColorsToggleGroup::$Awake$b__15_1)> {
  static const MethodInfo* get() {
    static auto* isOn = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSchemeColorsToggleGroup*), "<Awake>b__15_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isOn});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSchemeColorsToggleGroup::$Awake$b__15_2
// Il2CppName: <Awake>b__15_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorSchemeColorsToggleGroup::*)(bool)>(&GlobalNamespace::ColorSchemeColorsToggleGroup::$Awake$b__15_2)> {
  static const MethodInfo* get() {
    static auto* isOn = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSchemeColorsToggleGroup*), "<Awake>b__15_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isOn});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSchemeColorsToggleGroup::$Awake$b__15_3
// Il2CppName: <Awake>b__15_3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorSchemeColorsToggleGroup::*)(bool)>(&GlobalNamespace::ColorSchemeColorsToggleGroup::$Awake$b__15_3)> {
  static const MethodInfo* get() {
    static auto* isOn = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSchemeColorsToggleGroup*), "<Awake>b__15_3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isOn});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSchemeColorsToggleGroup::$Awake$b__15_4
// Il2CppName: <Awake>b__15_4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorSchemeColorsToggleGroup::*)(bool)>(&GlobalNamespace::ColorSchemeColorsToggleGroup::$Awake$b__15_4)> {
  static const MethodInfo* get() {
    static auto* isOn = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorSchemeColorsToggleGroup*), "<Awake>b__15_4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isOn});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorSchemeColorsToggleGroup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
