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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CanvasGroup
  class CanvasGroup;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Toggle
  class Toggle;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ToggleableCanvasGroup
  class ToggleableCanvasGroup;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ToggleableCanvasGroup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ToggleableCanvasGroup*, "", "ToggleableCanvasGroup");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: ToggleableCanvasGroup
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: 1239B74
  class ToggleableCanvasGroup : public ::UnityEngine::MonoBehaviour {
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
    // private UnityEngine.CanvasGroup _canvasGroup
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::CanvasGroup* canvasGroup;
    // Field size check
    static_assert(sizeof(::UnityEngine::CanvasGroup*) == 0x8);
    // private UnityEngine.UI.Toggle _toggle
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::UI::Toggle* toggle;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Toggle*) == 0x8);
    // [SpaceAttribute] Offset: 0x123A724
    // private System.Boolean _invertToggle
    // Size: 0x1
    // Offset: 0x28
    bool invertToggle;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.CanvasGroup _canvasGroup
    ::UnityEngine::CanvasGroup*& dyn__canvasGroup();
    // Get instance field reference: private UnityEngine.UI.Toggle _toggle
    ::UnityEngine::UI::Toggle*& dyn__toggle();
    // Get instance field reference: private System.Boolean _invertToggle
    bool& dyn__invertToggle();
    // protected System.Void OnEnable()
    // Offset: 0x29E608C
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x29E6178
    void OnDisable();
    // private System.Void HandleToggleValueChanged(System.Boolean isOn)
    // Offset: 0x29E621C
    void HandleToggleValueChanged(bool isOn);
    // private System.Void SetCanvasGroupData(System.Boolean isOn)
    // Offset: 0x29E6144
    void SetCanvasGroupData(bool isOn);
    // public System.Void .ctor()
    // Offset: 0x29E6224
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ToggleableCanvasGroup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ToggleableCanvasGroup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ToggleableCanvasGroup*, creationType>()));
    }
  }; // ToggleableCanvasGroup
  #pragma pack(pop)
  static check_size<sizeof(ToggleableCanvasGroup), 40 + sizeof(bool)> __GlobalNamespace_ToggleableCanvasGroupSizeCheck;
  static_assert(sizeof(ToggleableCanvasGroup) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ToggleableCanvasGroup::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ToggleableCanvasGroup::*)()>(&GlobalNamespace::ToggleableCanvasGroup::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ToggleableCanvasGroup*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ToggleableCanvasGroup::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ToggleableCanvasGroup::*)()>(&GlobalNamespace::ToggleableCanvasGroup::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ToggleableCanvasGroup*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ToggleableCanvasGroup::HandleToggleValueChanged
// Il2CppName: HandleToggleValueChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ToggleableCanvasGroup::*)(bool)>(&GlobalNamespace::ToggleableCanvasGroup::HandleToggleValueChanged)> {
  static const MethodInfo* get() {
    static auto* isOn = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ToggleableCanvasGroup*), "HandleToggleValueChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isOn});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ToggleableCanvasGroup::SetCanvasGroupData
// Il2CppName: SetCanvasGroupData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ToggleableCanvasGroup::*)(bool)>(&GlobalNamespace::ToggleableCanvasGroup::SetCanvasGroupData)> {
  static const MethodInfo* get() {
    static auto* isOn = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ToggleableCanvasGroup*), "SetCanvasGroupData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isOn});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ToggleableCanvasGroup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
