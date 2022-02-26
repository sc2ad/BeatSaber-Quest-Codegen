// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.PointerInputModule
#include "UnityEngine/EventSystems/PointerInputModule.hpp"
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
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::EventSystems::PointerInputModule::MouseState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::PointerInputModule::MouseState*, "UnityEngine.EventSystems", "PointerInputModule/MouseState");
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EventSystems.PointerInputModule/UnityEngine.EventSystems.MouseState
  // [TokenAttribute] Offset: FFFFFFFF
  class PointerInputModule::MouseState : public ::Il2CppObject {
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
    // private System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/UnityEngine.EventSystems.ButtonState> m_TrackedButtons
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::PointerInputModule::ButtonState*>* m_TrackedButtons;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::PointerInputModule::ButtonState*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::PointerInputModule::ButtonState*>*
    constexpr operator ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::PointerInputModule::ButtonState*>*() const noexcept {
      return m_TrackedButtons;
    }
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/UnityEngine.EventSystems.ButtonState> m_TrackedButtons
    ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::PointerInputModule::ButtonState*>*& dyn_m_TrackedButtons();
    // public System.Boolean AnyPressesThisFrame()
    // Offset: 0x186DE0C
    bool AnyPressesThisFrame();
    // public System.Boolean AnyReleasesThisFrame()
    // Offset: 0x186DEC0
    bool AnyReleasesThisFrame();
    // public UnityEngine.EventSystems.PointerInputModule/UnityEngine.EventSystems.ButtonState GetButtonState(UnityEngine.EventSystems.PointerEventData/UnityEngine.EventSystems.InputButton button)
    // Offset: 0x186DF74
    ::UnityEngine::EventSystems::PointerInputModule::ButtonState* GetButtonState(::UnityEngine::EventSystems::PointerEventData::InputButton button);
    // public System.Void SetButtonState(UnityEngine.EventSystems.PointerEventData/UnityEngine.EventSystems.InputButton button, UnityEngine.EventSystems.PointerEventData/UnityEngine.EventSystems.FramePressState stateForMouseButton, UnityEngine.EventSystems.PointerEventData data)
    // Offset: 0x186D39C
    void SetButtonState(::UnityEngine::EventSystems::PointerEventData::InputButton button, ::UnityEngine::EventSystems::PointerEventData::FramePressState stateForMouseButton, ::UnityEngine::EventSystems::PointerEventData* data);
    // public System.Void .ctor()
    // Offset: 0x186DD44
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PointerInputModule::MouseState* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::EventSystems::PointerInputModule::MouseState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PointerInputModule::MouseState*, creationType>()));
    }
  }; // UnityEngine.EventSystems.PointerInputModule/UnityEngine.EventSystems.MouseState
  #pragma pack(pop)
  static check_size<sizeof(PointerInputModule::MouseState), 16 + sizeof(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::PointerInputModule::ButtonState*>*)> __UnityEngine_EventSystems_PointerInputModule_MouseStateSizeCheck;
  static_assert(sizeof(PointerInputModule::MouseState) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::EventSystems::PointerInputModule::MouseState::AnyPressesThisFrame
// Il2CppName: AnyPressesThisFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::PointerInputModule::MouseState::*)()>(&UnityEngine::EventSystems::PointerInputModule::MouseState::AnyPressesThisFrame)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::PointerInputModule::MouseState*), "AnyPressesThisFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::PointerInputModule::MouseState::AnyReleasesThisFrame
// Il2CppName: AnyReleasesThisFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::PointerInputModule::MouseState::*)()>(&UnityEngine::EventSystems::PointerInputModule::MouseState::AnyReleasesThisFrame)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::PointerInputModule::MouseState*), "AnyReleasesThisFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::PointerInputModule::MouseState::GetButtonState
// Il2CppName: GetButtonState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::PointerInputModule::ButtonState* (UnityEngine::EventSystems::PointerInputModule::MouseState::*)(::UnityEngine::EventSystems::PointerEventData::InputButton)>(&UnityEngine::EventSystems::PointerInputModule::MouseState::GetButtonState)> {
  static const MethodInfo* get() {
    static auto* button = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData/InputButton")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::PointerInputModule::MouseState*), "GetButtonState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{button});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::PointerInputModule::MouseState::SetButtonState
// Il2CppName: SetButtonState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::PointerInputModule::MouseState::*)(::UnityEngine::EventSystems::PointerEventData::InputButton, ::UnityEngine::EventSystems::PointerEventData::FramePressState, ::UnityEngine::EventSystems::PointerEventData*)>(&UnityEngine::EventSystems::PointerInputModule::MouseState::SetButtonState)> {
  static const MethodInfo* get() {
    static auto* button = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData/InputButton")->byval_arg;
    static auto* stateForMouseButton = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData/FramePressState")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::PointerInputModule::MouseState*), "SetButtonState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{button, stateForMouseButton, data});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::PointerInputModule::MouseState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
