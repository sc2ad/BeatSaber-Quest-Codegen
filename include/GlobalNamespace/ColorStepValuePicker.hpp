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
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ImageView
  class ImageView;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: ColorStepValuePicker
  // [TokenAttribute] Offset: FFFFFFFF
  class ColorStepValuePicker : public UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private UnityEngine.UI.Button _decButton
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::UI::Button* decButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _incButton
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::UI::Button* incButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private HMUI.ImageView _valueImage
    // Size: 0x8
    // Offset: 0x28
    HMUI::ImageView* valueImage;
    // Field size check
    static_assert(sizeof(HMUI::ImageView*) == 0x8);
    // private System.Action decButtonWasPressedEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action* decButtonWasPressedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Action incButtonWasPressedEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action* incButtonWasPressedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.UI.Button _decButton
    UnityEngine::UI::Button*& dyn__decButton();
    // Get instance field reference: private UnityEngine.UI.Button _incButton
    UnityEngine::UI::Button*& dyn__incButton();
    // Get instance field reference: private HMUI.ImageView _valueImage
    HMUI::ImageView*& dyn__valueImage();
    // Get instance field reference: private System.Action decButtonWasPressedEvent
    System::Action*& dyn_decButtonWasPressedEvent();
    // Get instance field reference: private System.Action incButtonWasPressedEvent
    System::Action*& dyn_incButtonWasPressedEvent();
    // public UnityEngine.Color get_color()
    // Offset: 0x119BE30
    UnityEngine::Color get_color();
    // public System.Void set_color(UnityEngine.Color value)
    // Offset: 0x119BE54
    void set_color(UnityEngine::Color value);
    // public System.Void set_decButtonInteractable(System.Boolean value)
    // Offset: 0x119BE78
    void set_decButtonInteractable(bool value);
    // public System.Void set_incButtonInteractable(System.Boolean value)
    // Offset: 0x119BE98
    void set_incButtonInteractable(bool value);
    // public System.Void add_decButtonWasPressedEvent(System.Action value)
    // Offset: 0x119BBA0
    void add_decButtonWasPressedEvent(System::Action* value);
    // public System.Void remove_decButtonWasPressedEvent(System.Action value)
    // Offset: 0x119BC44
    void remove_decButtonWasPressedEvent(System::Action* value);
    // public System.Void add_incButtonWasPressedEvent(System.Action value)
    // Offset: 0x119BCE8
    void add_incButtonWasPressedEvent(System::Action* value);
    // public System.Void remove_incButtonWasPressedEvent(System.Action value)
    // Offset: 0x119BD8C
    void remove_incButtonWasPressedEvent(System::Action* value);
    // protected System.Void OnEnable()
    // Offset: 0x119BEB8
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x119BF90
    void OnDisable();
    // private System.Void IncButtonPressed()
    // Offset: 0x119C068
    void IncButtonPressed();
    // private System.Void DecButtonPressed()
    // Offset: 0x119C07C
    void DecButtonPressed();
    // public System.Void .ctor()
    // Offset: 0x119C090
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorStepValuePicker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ColorStepValuePicker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorStepValuePicker*, creationType>()));
    }
  }; // ColorStepValuePicker
  #pragma pack(pop)
  static check_size<sizeof(ColorStepValuePicker), 56 + sizeof(System::Action*)> __GlobalNamespace_ColorStepValuePickerSizeCheck;
  static_assert(sizeof(ColorStepValuePicker) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorStepValuePicker*, "", "ColorStepValuePicker");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ColorStepValuePicker::get_color
// Il2CppName: get_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::ColorStepValuePicker::*)()>(&GlobalNamespace::ColorStepValuePicker::get_color)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorStepValuePicker*), "get_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorStepValuePicker::set_color
// Il2CppName: set_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorStepValuePicker::*)(UnityEngine::Color)>(&GlobalNamespace::ColorStepValuePicker::set_color)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorStepValuePicker*), "set_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorStepValuePicker::set_decButtonInteractable
// Il2CppName: set_decButtonInteractable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorStepValuePicker::*)(bool)>(&GlobalNamespace::ColorStepValuePicker::set_decButtonInteractable)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorStepValuePicker*), "set_decButtonInteractable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorStepValuePicker::set_incButtonInteractable
// Il2CppName: set_incButtonInteractable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorStepValuePicker::*)(bool)>(&GlobalNamespace::ColorStepValuePicker::set_incButtonInteractable)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorStepValuePicker*), "set_incButtonInteractable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorStepValuePicker::add_decButtonWasPressedEvent
// Il2CppName: add_decButtonWasPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorStepValuePicker::*)(System::Action*)>(&GlobalNamespace::ColorStepValuePicker::add_decButtonWasPressedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorStepValuePicker*), "add_decButtonWasPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorStepValuePicker::remove_decButtonWasPressedEvent
// Il2CppName: remove_decButtonWasPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorStepValuePicker::*)(System::Action*)>(&GlobalNamespace::ColorStepValuePicker::remove_decButtonWasPressedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorStepValuePicker*), "remove_decButtonWasPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorStepValuePicker::add_incButtonWasPressedEvent
// Il2CppName: add_incButtonWasPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorStepValuePicker::*)(System::Action*)>(&GlobalNamespace::ColorStepValuePicker::add_incButtonWasPressedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorStepValuePicker*), "add_incButtonWasPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorStepValuePicker::remove_incButtonWasPressedEvent
// Il2CppName: remove_incButtonWasPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorStepValuePicker::*)(System::Action*)>(&GlobalNamespace::ColorStepValuePicker::remove_incButtonWasPressedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorStepValuePicker*), "remove_incButtonWasPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorStepValuePicker::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorStepValuePicker::*)()>(&GlobalNamespace::ColorStepValuePicker::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorStepValuePicker*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorStepValuePicker::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorStepValuePicker::*)()>(&GlobalNamespace::ColorStepValuePicker::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorStepValuePicker*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorStepValuePicker::IncButtonPressed
// Il2CppName: IncButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorStepValuePicker::*)()>(&GlobalNamespace::ColorStepValuePicker::IncButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorStepValuePicker*), "IncButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorStepValuePicker::DecButtonPressed
// Il2CppName: DecButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorStepValuePicker::*)()>(&GlobalNamespace::ColorStepValuePicker::DecButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorStepValuePicker*), "DecButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorStepValuePicker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
