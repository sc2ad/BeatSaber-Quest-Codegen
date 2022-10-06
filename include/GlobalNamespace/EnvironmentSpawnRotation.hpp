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
  // Forward declaring type: BeatmapCallbacksController
  class BeatmapCallbacksController;
  // Forward declaring type: BeatmapDataCallbackWrapper
  class BeatmapDataCallbackWrapper;
  // Forward declaring type: SpawnRotationBeatmapEventData
  class SpawnRotationBeatmapEventData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: EnvironmentSpawnRotation
  class EnvironmentSpawnRotation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EnvironmentSpawnRotation);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentSpawnRotation*, "", "EnvironmentSpawnRotation");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: EnvironmentSpawnRotation
  // [TokenAttribute] Offset: FFFFFFFF
  class EnvironmentSpawnRotation : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Single _aheadTime
    // Size: 0x4
    // Offset: 0x18
    float aheadTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _smooth
    // Size: 0x4
    // Offset: 0x1C
    float smooth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [InjectAttribute] Offset: 0x1100460
    // private readonly BeatmapCallbacksController _beatmapCallbacksController
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapCallbacksController*) == 0x8);
    // private BeatmapDataCallbackWrapper _beatmapDataCallbackWrapper
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::BeatmapDataCallbackWrapper* beatmapDataCallbackWrapper;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapDataCallbackWrapper*) == 0x8);
    // private System.Single _currentRotation
    // Size: 0x4
    // Offset: 0x30
    float currentRotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _prevRotation
    // Size: 0x4
    // Offset: 0x34
    float prevRotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _targetRotation
    // Size: 0x4
    // Offset: 0x38
    float targetRotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x1100470
    // Get static field: static private readonly System.Int32 _spawnRotationID
    static int _get__spawnRotationID();
    // Set static field: static private readonly System.Int32 _spawnRotationID
    static void _set__spawnRotationID(int value);
    // Get static field: static private System.Int32 _numberOfActiveEnvironmentSpawnRotationObjects
    static int _get__numberOfActiveEnvironmentSpawnRotationObjects();
    // Set static field: static private System.Int32 _numberOfActiveEnvironmentSpawnRotationObjects
    static void _set__numberOfActiveEnvironmentSpawnRotationObjects(int value);
    // Get instance field reference: private System.Single _aheadTime
    [[deprecated("Use field access instead!")]] float& dyn__aheadTime();
    // Get instance field reference: private System.Single _smooth
    [[deprecated("Use field access instead!")]] float& dyn__smooth();
    // Get instance field reference: private readonly BeatmapCallbacksController _beatmapCallbacksController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapCallbacksController*& dyn__beatmapCallbacksController();
    // Get instance field reference: private BeatmapDataCallbackWrapper _beatmapDataCallbackWrapper
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapDataCallbackWrapper*& dyn__beatmapDataCallbackWrapper();
    // Get instance field reference: private System.Single _currentRotation
    [[deprecated("Use field access instead!")]] float& dyn__currentRotation();
    // Get instance field reference: private System.Single _prevRotation
    [[deprecated("Use field access instead!")]] float& dyn__prevRotation();
    // Get instance field reference: private System.Single _targetRotation
    [[deprecated("Use field access instead!")]] float& dyn__targetRotation();
    // public System.Single get_targetRotation()
    // Offset: 0x13977F8
    float get_targetRotation();
    // public System.Void .ctor()
    // Offset: 0x1397E0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnvironmentSpawnRotation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EnvironmentSpawnRotation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnvironmentSpawnRotation*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1397E14
    static void _cctor();
    // protected System.Void OnEnable()
    // Offset: 0x1397800
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x1397870
    void OnDisable();
    // protected System.Void Start()
    // Offset: 0x13978E0
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1397A34
    void OnDestroy();
    // private System.Void HandleSpawnRotationBeatmapEvent(SpawnRotationBeatmapEventData beatmapEventData)
    // Offset: 0x1397A50
    void HandleSpawnRotationBeatmapEvent(::GlobalNamespace::SpawnRotationBeatmapEventData* beatmapEventData);
    // protected System.Void FixedUpdate()
    // Offset: 0x1397BA0
    void FixedUpdate();
    // protected System.Void LateUpdate()
    // Offset: 0x1397C70
    void LateUpdate();
  }; // EnvironmentSpawnRotation
  #pragma pack(pop)
  static check_size<sizeof(EnvironmentSpawnRotation), 56 + sizeof(float)> __GlobalNamespace_EnvironmentSpawnRotationSizeCheck;
  static_assert(sizeof(EnvironmentSpawnRotation) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentSpawnRotation::get_targetRotation
// Il2CppName: get_targetRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::EnvironmentSpawnRotation::*)()>(&GlobalNamespace::EnvironmentSpawnRotation::get_targetRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentSpawnRotation*), "get_targetRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentSpawnRotation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentSpawnRotation::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::EnvironmentSpawnRotation::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentSpawnRotation*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentSpawnRotation::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnvironmentSpawnRotation::*)()>(&GlobalNamespace::EnvironmentSpawnRotation::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentSpawnRotation*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentSpawnRotation::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnvironmentSpawnRotation::*)()>(&GlobalNamespace::EnvironmentSpawnRotation::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentSpawnRotation*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentSpawnRotation::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnvironmentSpawnRotation::*)()>(&GlobalNamespace::EnvironmentSpawnRotation::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentSpawnRotation*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentSpawnRotation::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnvironmentSpawnRotation::*)()>(&GlobalNamespace::EnvironmentSpawnRotation::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentSpawnRotation*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentSpawnRotation::HandleSpawnRotationBeatmapEvent
// Il2CppName: HandleSpawnRotationBeatmapEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnvironmentSpawnRotation::*)(::GlobalNamespace::SpawnRotationBeatmapEventData*)>(&GlobalNamespace::EnvironmentSpawnRotation::HandleSpawnRotationBeatmapEvent)> {
  static const MethodInfo* get() {
    static auto* beatmapEventData = &::il2cpp_utils::GetClassFromName("", "SpawnRotationBeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentSpawnRotation*), "HandleSpawnRotationBeatmapEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapEventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentSpawnRotation::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnvironmentSpawnRotation::*)()>(&GlobalNamespace::EnvironmentSpawnRotation::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentSpawnRotation*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentSpawnRotation::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnvironmentSpawnRotation::*)()>(&GlobalNamespace::EnvironmentSpawnRotation::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentSpawnRotation*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
