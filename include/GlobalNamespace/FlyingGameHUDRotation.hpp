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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatLineManager
  class BeatLineManager;
  // Forward declaring type: EnvironmentSpawnRotation
  class EnvironmentSpawnRotation;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: FlyingGameHUDRotation
  // [TokenAttribute] Offset: FFFFFFFF
  class FlyingGameHUDRotation : public UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.Single _smooth
    // Size: 0x4
    // Offset: 0x18
    float smooth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: smooth and: beatLineManager
    char __padding0[0x4] = {};
    // [InjectOptionalAttribute] Offset: 0xF06AEC
    // private readonly BeatLineManager _beatLineManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BeatLineManager* beatLineManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatLineManager*) == 0x8);
    // [InjectOptionalAttribute] Offset: 0xF06AFC
    // private readonly EnvironmentSpawnRotation _environmentSpawnRotation
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::EnvironmentSpawnRotation* environmentSpawnRotation;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnvironmentSpawnRotation*) == 0x8);
    // private System.Single _prevYAngle
    // Size: 0x4
    // Offset: 0x30
    float prevYAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _yAngle
    // Size: 0x4
    // Offset: 0x34
    float yAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Single _smooth
    float& dyn__smooth();
    // Get instance field reference: private readonly BeatLineManager _beatLineManager
    GlobalNamespace::BeatLineManager*& dyn__beatLineManager();
    // Get instance field reference: private readonly EnvironmentSpawnRotation _environmentSpawnRotation
    GlobalNamespace::EnvironmentSpawnRotation*& dyn__environmentSpawnRotation();
    // Get instance field reference: private System.Single _prevYAngle
    float& dyn__prevYAngle();
    // Get instance field reference: private System.Single _yAngle
    float& dyn__yAngle();
    // protected System.Void Start()
    // Offset: 0x11B9324
    void Start();
    // protected System.Void FixedUpdate()
    // Offset: 0x11B9458
    void FixedUpdate();
    // protected System.Void LateUpdate()
    // Offset: 0x11B9638
    void LateUpdate();
    // public System.Void .ctor()
    // Offset: 0x11B974C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FlyingGameHUDRotation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FlyingGameHUDRotation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FlyingGameHUDRotation*, creationType>()));
    }
  }; // FlyingGameHUDRotation
  #pragma pack(pop)
  static check_size<sizeof(FlyingGameHUDRotation), 52 + sizeof(float)> __GlobalNamespace_FlyingGameHUDRotationSizeCheck;
  static_assert(sizeof(FlyingGameHUDRotation) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FlyingGameHUDRotation*, "", "FlyingGameHUDRotation");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FlyingGameHUDRotation::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlyingGameHUDRotation::*)()>(&GlobalNamespace::FlyingGameHUDRotation::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlyingGameHUDRotation*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlyingGameHUDRotation::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlyingGameHUDRotation::*)()>(&GlobalNamespace::FlyingGameHUDRotation::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlyingGameHUDRotation*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlyingGameHUDRotation::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlyingGameHUDRotation::*)()>(&GlobalNamespace::FlyingGameHUDRotation::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlyingGameHUDRotation*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlyingGameHUDRotation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
