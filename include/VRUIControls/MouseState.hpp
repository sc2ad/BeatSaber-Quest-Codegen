// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.PointerEventData
#include "UnityEngine/EventSystems/PointerEventData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: VRUIControls
namespace VRUIControls {
  // Forward declaring type: ButtonState
  class ButtonState;
}
// Completed forward declares
// Type namespace: VRUIControls
namespace VRUIControls {
  // Forward declaring type: MouseState
  class MouseState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VRUIControls::MouseState);
DEFINE_IL2CPP_ARG_TYPE(::VRUIControls::MouseState*, "VRUIControls", "MouseState");
// Type namespace: VRUIControls
namespace VRUIControls {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: VRUIControls.MouseState
  // [TokenAttribute] Offset: FFFFFFFF
  class MouseState : public ::Il2CppObject {
    public:
    public:
    // private System.Collections.Generic.List`1<VRUIControls.ButtonState> _trackedButtons
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::VRUIControls::ButtonState*>* trackedButtons;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::VRUIControls::ButtonState*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::List_1<::VRUIControls::ButtonState*>*
    constexpr operator ::System::Collections::Generic::List_1<::VRUIControls::ButtonState*>*() const noexcept {
      return trackedButtons;
    }
    // Get instance field reference: private System.Collections.Generic.List`1<VRUIControls.ButtonState> _trackedButtons
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::VRUIControls::ButtonState*>*& dyn__trackedButtons();
    // public System.Void .ctor()
    // Offset: 0x2AAF7E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MouseState* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VRUIControls::MouseState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MouseState*, creationType>()));
    }
    // public System.Boolean AnyPressesThisFrame()
    // Offset: 0x2AAF4F8
    bool AnyPressesThisFrame();
    // public System.Boolean AnyReleasesThisFrame()
    // Offset: 0x2AAF5AC
    bool AnyReleasesThisFrame();
    // public VRUIControls.ButtonState GetButtonState(UnityEngine.EventSystems.PointerEventData/UnityEngine.EventSystems.InputButton button)
    // Offset: 0x2AAF660
    ::VRUIControls::ButtonState* GetButtonState(::UnityEngine::EventSystems::PointerEventData::InputButton button);
    // public System.Void SetButtonState(UnityEngine.EventSystems.PointerEventData/UnityEngine.EventSystems.InputButton button, UnityEngine.EventSystems.PointerEventData/UnityEngine.EventSystems.FramePressState stateForMouseButton, UnityEngine.EventSystems.PointerEventData data)
    // Offset: 0x2AAF79C
    void SetButtonState(::UnityEngine::EventSystems::PointerEventData::InputButton button, ::UnityEngine::EventSystems::PointerEventData::FramePressState stateForMouseButton, ::UnityEngine::EventSystems::PointerEventData* data);
  }; // VRUIControls.MouseState
  #pragma pack(pop)
  static check_size<sizeof(MouseState), 16 + sizeof(::System::Collections::Generic::List_1<::VRUIControls::ButtonState*>*)> __VRUIControls_MouseStateSizeCheck;
  static_assert(sizeof(MouseState) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VRUIControls::MouseState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VRUIControls::MouseState::AnyPressesThisFrame
// Il2CppName: AnyPressesThisFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VRUIControls::MouseState::*)()>(&VRUIControls::MouseState::AnyPressesThisFrame)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::MouseState*), "AnyPressesThisFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VRUIControls::MouseState::AnyReleasesThisFrame
// Il2CppName: AnyReleasesThisFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VRUIControls::MouseState::*)()>(&VRUIControls::MouseState::AnyReleasesThisFrame)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::MouseState*), "AnyReleasesThisFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VRUIControls::MouseState::GetButtonState
// Il2CppName: GetButtonState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VRUIControls::ButtonState* (VRUIControls::MouseState::*)(::UnityEngine::EventSystems::PointerEventData::InputButton)>(&VRUIControls::MouseState::GetButtonState)> {
  static const MethodInfo* get() {
    static auto* button = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData/InputButton")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::MouseState*), "GetButtonState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{button});
  }
};
// Writing MetadataGetter for method: VRUIControls::MouseState::SetButtonState
// Il2CppName: SetButtonState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRUIControls::MouseState::*)(::UnityEngine::EventSystems::PointerEventData::InputButton, ::UnityEngine::EventSystems::PointerEventData::FramePressState, ::UnityEngine::EventSystems::PointerEventData*)>(&VRUIControls::MouseState::SetButtonState)> {
  static const MethodInfo* get() {
    static auto* button = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData/InputButton")->byval_arg;
    static auto* stateForMouseButton = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData/FramePressState")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VRUIControls::MouseState*), "SetButtonState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{button, stateForMouseButton, data});
  }
};
