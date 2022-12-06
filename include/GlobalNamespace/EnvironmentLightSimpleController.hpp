// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LightWithIdManager
  class LightWithIdManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: EnvironmentLightSimpleController
  class EnvironmentLightSimpleController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EnvironmentLightSimpleController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentLightSimpleController*, "", "EnvironmentLightSimpleController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: EnvironmentLightSimpleController
  // [TokenAttribute] Offset: FFFFFFFF
  class EnvironmentLightSimpleController : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x18
    ::UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Int32 _colorId
    // Size: 0x4
    // Offset: 0x28
    int colorId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: colorId and: lightManager
    char __padding1[0x4] = {};
    // [InjectAttribute] Offset: 0x11161DC
    // private LightWithIdManager _lightManager
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::LightWithIdManager* lightManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LightWithIdManager*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Color _color
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__color();
    // Get instance field reference: private System.Int32 _colorId
    [[deprecated("Use field access instead!")]] int& dyn__colorId();
    // Get instance field reference: private LightWithIdManager _lightManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LightWithIdManager*& dyn__lightManager();
    // public System.Void .ctor()
    // Offset: 0x1388C48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnvironmentLightSimpleController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EnvironmentLightSimpleController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnvironmentLightSimpleController*, creationType>()));
    }
    // protected System.Void LateUpdate()
    // Offset: 0x1388C1C
    void LateUpdate();
  }; // EnvironmentLightSimpleController
  #pragma pack(pop)
  static check_size<sizeof(EnvironmentLightSimpleController), 48 + sizeof(::GlobalNamespace::LightWithIdManager*)> __GlobalNamespace_EnvironmentLightSimpleControllerSizeCheck;
  static_assert(sizeof(EnvironmentLightSimpleController) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentLightSimpleController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentLightSimpleController::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnvironmentLightSimpleController::*)()>(&GlobalNamespace::EnvironmentLightSimpleController::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentLightSimpleController*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
