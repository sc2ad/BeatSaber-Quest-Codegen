// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.PointerEventData/UnityEngine.EventSystems.InputButton
#include "UnityEngine/EventSystems/PointerEventData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VRUIControls
namespace VRUIControls {
  // Forward declaring type: MouseButtonEventData
  class MouseButtonEventData;
}
// Completed forward declares
// Type namespace: VRUIControls
namespace VRUIControls {
  // Forward declaring type: ButtonState
  class ButtonState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VRUIControls::ButtonState);
DEFINE_IL2CPP_ARG_TYPE(::VRUIControls::ButtonState*, "VRUIControls", "ButtonState");
// Type namespace: VRUIControls
namespace VRUIControls {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: VRUIControls.ButtonState
  // [TokenAttribute] Offset: FFFFFFFF
  class ButtonState : public ::Il2CppObject {
    public:
    public:
    // private UnityEngine.EventSystems.PointerEventData/UnityEngine.EventSystems.InputButton _button
    // Size: 0x4
    // Offset: 0x10
    ::UnityEngine::EventSystems::PointerEventData::InputButton button;
    // Field size check
    static_assert(sizeof(::UnityEngine::EventSystems::PointerEventData::InputButton) == 0x4);
    // Padding between fields: button and: eventData
    char __padding0[0x4] = {};
    // private VRUIControls.MouseButtonEventData _eventData
    // Size: 0x8
    // Offset: 0x18
    ::VRUIControls::MouseButtonEventData* eventData;
    // Field size check
    static_assert(sizeof(::VRUIControls::MouseButtonEventData*) == 0x8);
    // private System.Single _pressedValue
    // Size: 0x4
    // Offset: 0x20
    float pressedValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private UnityEngine.EventSystems.PointerEventData/UnityEngine.EventSystems.InputButton _button
    [[deprecated("Use field access instead!")]] ::UnityEngine::EventSystems::PointerEventData::InputButton& dyn__button();
    // Get instance field reference: private VRUIControls.MouseButtonEventData _eventData
    [[deprecated("Use field access instead!")]] ::VRUIControls::MouseButtonEventData*& dyn__eventData();
    // Get instance field reference: private System.Single _pressedValue
    [[deprecated("Use field access instead!")]] float& dyn__pressedValue();
    // public VRUIControls.MouseButtonEventData get_eventData()
    // Offset: 0x2AAF490
    ::VRUIControls::MouseButtonEventData* get_eventData();
    // public System.Void set_eventData(VRUIControls.MouseButtonEventData value)
    // Offset: 0x2AAF498
    void set_eventData(::VRUIControls::MouseButtonEventData* value);
    // public UnityEngine.EventSystems.PointerEventData/UnityEngine.EventSystems.InputButton get_button()
    // Offset: 0x2AAF4A0
    ::UnityEngine::EventSystems::PointerEventData::InputButton get_button();
    // public System.Void set_button(UnityEngine.EventSystems.PointerEventData/UnityEngine.EventSystems.InputButton value)
    // Offset: 0x2AAF4A8
    void set_button(::UnityEngine::EventSystems::PointerEventData::InputButton value);
    // public System.Single get_pressedValue()
    // Offset: 0x2AAF4B0
    float get_pressedValue();
    // public System.Void set_pressedValue(System.Single value)
    // Offset: 0x2AAF4B8
    void set_pressedValue(float value);
    // public System.Void .ctor()
    // Offset: 0x2AAF4C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ButtonState* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VRUIControls::ButtonState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ButtonState*, creationType>()));
    }
  }; // VRUIControls.ButtonState
  #pragma pack(pop)
  static check_size<sizeof(ButtonState), 32 + sizeof(float)> __VRUIControls_ButtonStateSizeCheck;
  static_assert(sizeof(ButtonState) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VRUIControls::ButtonState::get_eventData
// Il2CppName: get_eventData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VRUIControls::MouseButtonEventData* (VRUIControls::ButtonState::*)()>(&VRUIControls::ButtonState::get_eventData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::ButtonState*), "get_eventData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VRUIControls::ButtonState::set_eventData
// Il2CppName: set_eventData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRUIControls::ButtonState::*)(::VRUIControls::MouseButtonEventData*)>(&VRUIControls::ButtonState::set_eventData)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VRUIControls", "MouseButtonEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::ButtonState*), "set_eventData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VRUIControls::ButtonState::get_button
// Il2CppName: get_button
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::PointerEventData::InputButton (VRUIControls::ButtonState::*)()>(&VRUIControls::ButtonState::get_button)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::ButtonState*), "get_button", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VRUIControls::ButtonState::set_button
// Il2CppName: set_button
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRUIControls::ButtonState::*)(::UnityEngine::EventSystems::PointerEventData::InputButton)>(&VRUIControls::ButtonState::set_button)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData/InputButton")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::ButtonState*), "set_button", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VRUIControls::ButtonState::get_pressedValue
// Il2CppName: get_pressedValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (VRUIControls::ButtonState::*)()>(&VRUIControls::ButtonState::get_pressedValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::ButtonState*), "get_pressedValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VRUIControls::ButtonState::set_pressedValue
// Il2CppName: set_pressedValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRUIControls::ButtonState::*)(float)>(&VRUIControls::ButtonState::set_pressedValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::ButtonState*), "set_pressedValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VRUIControls::ButtonState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
