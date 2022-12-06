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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorStepValuePicker
  class ColorStepValuePicker;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: IncDecColorController
  class IncDecColorController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::IncDecColorController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IncDecColorController*, "", "IncDecColorController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: IncDecColorController
  // [TokenAttribute] Offset: FFFFFFFF
  class IncDecColorController : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private ColorStepValuePicker _stepValuePicker
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::ColorStepValuePicker* stepValuePicker;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorStepValuePicker*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private ColorStepValuePicker _stepValuePicker
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ColorStepValuePicker*& dyn__stepValuePicker();
    // protected System.Void set_enableDec(System.Boolean value)
    // Offset: 0x13F5558
    void set_enableDec(bool value);
    // protected System.Void set_enableInc(System.Boolean value)
    // Offset: 0x13F5578
    void set_enableInc(bool value);
    // protected System.Void set_color(UnityEngine.Color value)
    // Offset: 0x13F5598
    void set_color(::UnityEngine::Color value);
    // protected System.Void .ctor()
    // Offset: 0x13F5780
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IncDecColorController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::IncDecColorController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IncDecColorController*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0x13F55B4
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x13F5678
    void OnDestroy();
    // protected System.Void IncButtonPressed()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void IncButtonPressed();
    // protected System.Void DecButtonPressed()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void DecButtonPressed();
  }; // IncDecColorController
  #pragma pack(pop)
  static check_size<sizeof(IncDecColorController), 24 + sizeof(::GlobalNamespace::ColorStepValuePicker*)> __GlobalNamespace_IncDecColorControllerSizeCheck;
  static_assert(sizeof(IncDecColorController) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IncDecColorController::set_enableDec
// Il2CppName: set_enableDec
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IncDecColorController::*)(bool)>(&GlobalNamespace::IncDecColorController::set_enableDec)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IncDecColorController*), "set_enableDec", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IncDecColorController::set_enableInc
// Il2CppName: set_enableInc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IncDecColorController::*)(bool)>(&GlobalNamespace::IncDecColorController::set_enableInc)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IncDecColorController*), "set_enableInc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IncDecColorController::set_color
// Il2CppName: set_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IncDecColorController::*)(::UnityEngine::Color)>(&GlobalNamespace::IncDecColorController::set_color)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IncDecColorController*), "set_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IncDecColorController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::IncDecColorController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IncDecColorController::*)()>(&GlobalNamespace::IncDecColorController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IncDecColorController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IncDecColorController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IncDecColorController::*)()>(&GlobalNamespace::IncDecColorController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IncDecColorController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IncDecColorController::IncButtonPressed
// Il2CppName: IncButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IncDecColorController::*)()>(&GlobalNamespace::IncDecColorController::IncButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IncDecColorController*), "IncButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IncDecColorController::DecButtonPressed
// Il2CppName: DecButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IncDecColorController::*)()>(&GlobalNamespace::IncDecColorController::DecButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IncDecColorController*), "DecButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
