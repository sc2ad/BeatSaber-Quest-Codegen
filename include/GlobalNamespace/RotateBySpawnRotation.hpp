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
  // Forward declaring type: RotateBySpawnRotation
  class RotateBySpawnRotation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::RotateBySpawnRotation);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RotateBySpawnRotation*, "", "RotateBySpawnRotation");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: RotateBySpawnRotation
  // [TokenAttribute] Offset: FFFFFFFF
  class RotateBySpawnRotation : public ::UnityEngine::MonoBehaviour {
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
    // [InjectAttribute] Offset: 0x1100718
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
    // public System.Void .ctor()
    // Offset: 0x1491D24
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RotateBySpawnRotation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::RotateBySpawnRotation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RotateBySpawnRotation*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x14918E4
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1491A10
    void OnDestroy();
    // private System.Void HandleSpawnRotationBeatmapEvent(SpawnRotationBeatmapEventData beatmapEventData)
    // Offset: 0x1491A2C
    void HandleSpawnRotationBeatmapEvent(::GlobalNamespace::SpawnRotationBeatmapEventData* beatmapEventData);
    // protected System.Void FixedUpdate()
    // Offset: 0x1491B24
    void FixedUpdate();
    // protected System.Void LateUpdate()
    // Offset: 0x1491BF4
    void LateUpdate();
  }; // RotateBySpawnRotation
  #pragma pack(pop)
  static check_size<sizeof(RotateBySpawnRotation), 56 + sizeof(float)> __GlobalNamespace_RotateBySpawnRotationSizeCheck;
  static_assert(sizeof(RotateBySpawnRotation) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RotateBySpawnRotation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::RotateBySpawnRotation::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RotateBySpawnRotation::*)()>(&GlobalNamespace::RotateBySpawnRotation::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RotateBySpawnRotation*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RotateBySpawnRotation::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RotateBySpawnRotation::*)()>(&GlobalNamespace::RotateBySpawnRotation::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RotateBySpawnRotation*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RotateBySpawnRotation::HandleSpawnRotationBeatmapEvent
// Il2CppName: HandleSpawnRotationBeatmapEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RotateBySpawnRotation::*)(::GlobalNamespace::SpawnRotationBeatmapEventData*)>(&GlobalNamespace::RotateBySpawnRotation::HandleSpawnRotationBeatmapEvent)> {
  static const MethodInfo* get() {
    static auto* beatmapEventData = &::il2cpp_utils::GetClassFromName("", "SpawnRotationBeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RotateBySpawnRotation*), "HandleSpawnRotationBeatmapEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapEventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RotateBySpawnRotation::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RotateBySpawnRotation::*)()>(&GlobalNamespace::RotateBySpawnRotation::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RotateBySpawnRotation*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RotateBySpawnRotation::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RotateBySpawnRotation::*)()>(&GlobalNamespace::RotateBySpawnRotation::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RotateBySpawnRotation*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
