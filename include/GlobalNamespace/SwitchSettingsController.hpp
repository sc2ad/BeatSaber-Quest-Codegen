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
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Toggle
  class Toggle;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SwitchSettingsController
  class SwitchSettingsController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SwitchSettingsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SwitchSettingsController*, "", "SwitchSettingsController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: SwitchSettingsController
  // [TokenAttribute] Offset: FFFFFFFF
  class SwitchSettingsController : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.UI.Toggle _toggle
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::UI::Toggle* toggle;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Toggle*) == 0x8);
    // private System.Boolean _on
    // Size: 0x1
    // Offset: 0x20
    bool on;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.UI.Toggle _toggle
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Toggle*& dyn__toggle();
    // Get instance field reference: private System.Boolean _on
    [[deprecated("Use field access instead!")]] bool& dyn__on();
    // protected System.Void .ctor()
    // Offset: 0x14D1DF8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SwitchSettingsController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SwitchSettingsController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SwitchSettingsController*, creationType>()));
    }
    // protected System.Boolean GetInitValue()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool GetInitValue();
    // protected System.Void ApplyValue(System.Boolean value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ApplyValue(bool value);
    // protected System.Void Awake()
    // Offset: 0x14D1C34
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x14D1CD8
    void OnDestroy();
    // protected System.Void OnEnable()
    // Offset: 0x14D1D7C
    void OnEnable();
    // private System.Void RefreshUI()
    // Offset: 0x14D1DC4
    void RefreshUI();
    // private System.Void HandleToggleValueDidChange(System.Boolean value)
    // Offset: 0x14D1DE8
    void HandleToggleValueDidChange(bool value);
  }; // SwitchSettingsController
  #pragma pack(pop)
  static check_size<sizeof(SwitchSettingsController), 32 + sizeof(bool)> __GlobalNamespace_SwitchSettingsControllerSizeCheck;
  static_assert(sizeof(SwitchSettingsController) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SwitchSettingsController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SwitchSettingsController::GetInitValue
// Il2CppName: GetInitValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SwitchSettingsController::*)()>(&GlobalNamespace::SwitchSettingsController::GetInitValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SwitchSettingsController*), "GetInitValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SwitchSettingsController::ApplyValue
// Il2CppName: ApplyValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SwitchSettingsController::*)(bool)>(&GlobalNamespace::SwitchSettingsController::ApplyValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SwitchSettingsController*), "ApplyValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SwitchSettingsController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SwitchSettingsController::*)()>(&GlobalNamespace::SwitchSettingsController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SwitchSettingsController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SwitchSettingsController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SwitchSettingsController::*)()>(&GlobalNamespace::SwitchSettingsController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SwitchSettingsController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SwitchSettingsController::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SwitchSettingsController::*)()>(&GlobalNamespace::SwitchSettingsController::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SwitchSettingsController*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SwitchSettingsController::RefreshUI
// Il2CppName: RefreshUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SwitchSettingsController::*)()>(&GlobalNamespace::SwitchSettingsController::RefreshUI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SwitchSettingsController*), "RefreshUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SwitchSettingsController::HandleToggleValueDidChange
// Il2CppName: HandleToggleValueDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SwitchSettingsController::*)(bool)>(&GlobalNamespace::SwitchSettingsController::HandleToggleValueDidChange)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SwitchSettingsController*), "HandleToggleValueDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
