// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ListSettingsController
#include "GlobalNamespace/ListSettingsController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IntSO
  class IntSO;
  // Forward declaring type: NamedPresetsSO
  class NamedPresetsSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PresetsSettingsController
  class PresetsSettingsController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PresetsSettingsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PresetsSettingsController*, "", "PresetsSettingsController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: PresetsSettingsController
  // [TokenAttribute] Offset: FFFFFFFF
  class PresetsSettingsController : public ::GlobalNamespace::ListSettingsController {
    public:
    public:
    // private IntSO _settingsValue
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::IntSO* settingsValue;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IntSO*) == 0x8);
    // private NamedPresetsSO _presets
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::NamedPresetsSO* presets;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NamedPresetsSO*) == 0x8);
    // private System.Boolean _limitNumberOfElements
    // Size: 0x1
    // Offset: 0x38
    bool limitNumberOfElements;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: limitNumberOfElements and: numberOfElementsLimit
    char __padding2[0x3] = {};
    // [DrawIfAttribute] Offset: 0x112159C
    // private System.Int32 _numberOfElementsLimit
    // Size: 0x4
    // Offset: 0x3C
    int numberOfElementsLimit;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private IntSO _settingsValue
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IntSO*& dyn__settingsValue();
    // Get instance field reference: private NamedPresetsSO _presets
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NamedPresetsSO*& dyn__presets();
    // Get instance field reference: private System.Boolean _limitNumberOfElements
    [[deprecated("Use field access instead!")]] bool& dyn__limitNumberOfElements();
    // Get instance field reference: private System.Int32 _numberOfElementsLimit
    [[deprecated("Use field access instead!")]] int& dyn__numberOfElementsLimit();
    // public System.Void .ctor()
    // Offset: 0x141C89C
    // Implemented from: ListSettingsController
    // Base method: System.Void ListSettingsController::.ctor()
    // Base method: System.Void IncDecSettingsController::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PresetsSettingsController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PresetsSettingsController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PresetsSettingsController*, creationType>()));
    }
    // protected override System.Boolean GetInitValues(out System.Int32 idx, out System.Int32 numberOfElements)
    // Offset: 0x141C6A4
    // Implemented from: ListSettingsController
    // Base method: System.Boolean ListSettingsController::GetInitValues(out System.Int32 idx, out System.Int32 numberOfElements)
    bool GetInitValues(ByRef<int> idx, ByRef<int> numberOfElements);
    // protected override System.Void ApplyValue(System.Int32 idx)
    // Offset: 0x141C7D0
    // Implemented from: ListSettingsController
    // Base method: System.Void ListSettingsController::ApplyValue(System.Int32 idx)
    void ApplyValue(int idx);
    // protected override System.String TextForValue(System.Int32 idx)
    // Offset: 0x141C838
    // Implemented from: ListSettingsController
    // Base method: System.String ListSettingsController::TextForValue(System.Int32 idx)
    ::StringW TextForValue(int idx);
  }; // PresetsSettingsController
  #pragma pack(pop)
  static check_size<sizeof(PresetsSettingsController), 60 + sizeof(int)> __GlobalNamespace_PresetsSettingsControllerSizeCheck;
  static_assert(sizeof(PresetsSettingsController) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PresetsSettingsController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PresetsSettingsController::GetInitValues
// Il2CppName: GetInitValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PresetsSettingsController::*)(ByRef<int>, ByRef<int>)>(&GlobalNamespace::PresetsSettingsController::GetInitValues)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* numberOfElements = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PresetsSettingsController*), "GetInitValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx, numberOfElements});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PresetsSettingsController::ApplyValue
// Il2CppName: ApplyValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PresetsSettingsController::*)(int)>(&GlobalNamespace::PresetsSettingsController::ApplyValue)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PresetsSettingsController*), "ApplyValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PresetsSettingsController::TextForValue
// Il2CppName: TextForValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::PresetsSettingsController::*)(int)>(&GlobalNamespace::PresetsSettingsController::TextForValue)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PresetsSettingsController*), "TextForValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
