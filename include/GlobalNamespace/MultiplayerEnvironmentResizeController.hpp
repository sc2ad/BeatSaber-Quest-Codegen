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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerCenterResizeController
  class MultiplayerCenterResizeController;
  // Forward declaring type: BeatmapObjectSpawnCenter
  class BeatmapObjectSpawnCenter;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerEnvironmentResizeController
  class MultiplayerEnvironmentResizeController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerEnvironmentResizeController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerEnvironmentResizeController*, "", "MultiplayerEnvironmentResizeController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x43
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerEnvironmentResizeController
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerEnvironmentResizeController : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::MultiplayerEnvironmentResizeController::ResizeType
    struct ResizeType;
    // Nested type: ::GlobalNamespace::MultiplayerEnvironmentResizeController::ResizeData
    class ResizeData;
    public:
    // private UnityEngine.Transform _platformEnd
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Transform* platformEnd;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private MultiplayerEnvironmentResizeController/ResizeData[] _resizeData
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::GlobalNamespace::MultiplayerEnvironmentResizeController::ResizeData*> resizeData;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::MultiplayerEnvironmentResizeController::ResizeData*>) == 0x8);
    // [InjectAttribute] Offset: 0x1102FD4
    // private readonly MultiplayerCenterResizeController _centerResizeController
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::MultiplayerCenterResizeController* centerResizeController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerCenterResizeController*) == 0x8);
    // [InjectAttribute] Offset: 0x1102FE4
    // private readonly BeatmapObjectSpawnCenter _beatmapObjectSpawnCenter
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::BeatmapObjectSpawnCenter* beatmapObjectSpawnCenter;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapObjectSpawnCenter*) == 0x8);
    // private System.Action resizingDidFinishEvent
    // Size: 0x8
    // Offset: 0x38
    ::System::Action* resizingDidFinishEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Boolean _isResizingFinished
    // Size: 0x1
    // Offset: 0x40
    bool isResizingFinished;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _edgeDistanceFromCenterFound
    // Size: 0x1
    // Offset: 0x41
    bool edgeDistanceFromCenterFound;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _spawnCenterDistanceFound
    // Size: 0x1
    // Offset: 0x42
    bool spawnCenterDistanceFound;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Transform _platformEnd
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__platformEnd();
    // Get instance field reference: private MultiplayerEnvironmentResizeController/ResizeData[] _resizeData
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::MultiplayerEnvironmentResizeController::ResizeData*>& dyn__resizeData();
    // Get instance field reference: private readonly MultiplayerCenterResizeController _centerResizeController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerCenterResizeController*& dyn__centerResizeController();
    // Get instance field reference: private readonly BeatmapObjectSpawnCenter _beatmapObjectSpawnCenter
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapObjectSpawnCenter*& dyn__beatmapObjectSpawnCenter();
    // Get instance field reference: private System.Action resizingDidFinishEvent
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_resizingDidFinishEvent();
    // Get instance field reference: private System.Boolean _isResizingFinished
    [[deprecated("Use field access instead!")]] bool& dyn__isResizingFinished();
    // Get instance field reference: private System.Boolean _edgeDistanceFromCenterFound
    [[deprecated("Use field access instead!")]] bool& dyn__edgeDistanceFromCenterFound();
    // Get instance field reference: private System.Boolean _spawnCenterDistanceFound
    [[deprecated("Use field access instead!")]] bool& dyn__spawnCenterDistanceFound();
    // public System.Boolean get_isResizingFinished()
    // Offset: 0x142D6DC
    bool get_isResizingFinished();
    // public System.Void add_resizingDidFinishEvent(System.Action value)
    // Offset: 0x142D6E4
    void add_resizingDidFinishEvent(::System::Action* value);
    // public System.Void remove_resizingDidFinishEvent(System.Action value)
    // Offset: 0x142D788
    void remove_resizingDidFinishEvent(::System::Action* value);
    // public System.Void .ctor()
    // Offset: 0x142DE04
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerEnvironmentResizeController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerEnvironmentResizeController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerEnvironmentResizeController*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x142D82C
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x142D99C
    void OnDestroy();
    // private System.Void HandleEdgeDistanceFromCenterWasCalculated(System.Single edgeDistanceFromCenter)
    // Offset: 0x142D96C
    void HandleEdgeDistanceFromCenterWasCalculated(float edgeDistanceFromCenter);
    // private System.Void HandleSpawnCenterDistanceWasFound(System.Single distance)
    // Offset: 0x142D984
    void HandleSpawnCenterDistanceWasFound(float distance);
    // private System.Void TryResize()
    // Offset: 0x142DAF4
    void TryResize();
    // private System.Void Resize()
    // Offset: 0x142DB0C
    void Resize();
  }; // MultiplayerEnvironmentResizeController
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerEnvironmentResizeController), 66 + sizeof(bool)> __GlobalNamespace_MultiplayerEnvironmentResizeControllerSizeCheck;
  static_assert(sizeof(MultiplayerEnvironmentResizeController) == 0x43);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerEnvironmentResizeController::get_isResizingFinished
// Il2CppName: get_isResizingFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerEnvironmentResizeController::*)()>(&GlobalNamespace::MultiplayerEnvironmentResizeController::get_isResizingFinished)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerEnvironmentResizeController*), "get_isResizingFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerEnvironmentResizeController::add_resizingDidFinishEvent
// Il2CppName: add_resizingDidFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerEnvironmentResizeController::*)(::System::Action*)>(&GlobalNamespace::MultiplayerEnvironmentResizeController::add_resizingDidFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerEnvironmentResizeController*), "add_resizingDidFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerEnvironmentResizeController::remove_resizingDidFinishEvent
// Il2CppName: remove_resizingDidFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerEnvironmentResizeController::*)(::System::Action*)>(&GlobalNamespace::MultiplayerEnvironmentResizeController::remove_resizingDidFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerEnvironmentResizeController*), "remove_resizingDidFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerEnvironmentResizeController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerEnvironmentResizeController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerEnvironmentResizeController::*)()>(&GlobalNamespace::MultiplayerEnvironmentResizeController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerEnvironmentResizeController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerEnvironmentResizeController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerEnvironmentResizeController::*)()>(&GlobalNamespace::MultiplayerEnvironmentResizeController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerEnvironmentResizeController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerEnvironmentResizeController::HandleEdgeDistanceFromCenterWasCalculated
// Il2CppName: HandleEdgeDistanceFromCenterWasCalculated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerEnvironmentResizeController::*)(float)>(&GlobalNamespace::MultiplayerEnvironmentResizeController::HandleEdgeDistanceFromCenterWasCalculated)> {
  static const MethodInfo* get() {
    static auto* edgeDistanceFromCenter = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerEnvironmentResizeController*), "HandleEdgeDistanceFromCenterWasCalculated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{edgeDistanceFromCenter});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerEnvironmentResizeController::HandleSpawnCenterDistanceWasFound
// Il2CppName: HandleSpawnCenterDistanceWasFound
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerEnvironmentResizeController::*)(float)>(&GlobalNamespace::MultiplayerEnvironmentResizeController::HandleSpawnCenterDistanceWasFound)> {
  static const MethodInfo* get() {
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerEnvironmentResizeController*), "HandleSpawnCenterDistanceWasFound", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{distance});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerEnvironmentResizeController::TryResize
// Il2CppName: TryResize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerEnvironmentResizeController::*)()>(&GlobalNamespace::MultiplayerEnvironmentResizeController::TryResize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerEnvironmentResizeController*), "TryResize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerEnvironmentResizeController::Resize
// Il2CppName: Resize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerEnvironmentResizeController::*)()>(&GlobalNamespace::MultiplayerEnvironmentResizeController::Resize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerEnvironmentResizeController*), "Resize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
