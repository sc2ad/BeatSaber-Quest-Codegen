// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: IBpmController
#include "GlobalNamespace/IBpmController.hpp"
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
  // Forward declaring type: BPMChangeBeatmapEventData
  class BPMChangeBeatmapEventData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BpmController
  class BpmController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BpmController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BpmController*, "", "BpmController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: BpmController
  // [TokenAttribute] Offset: FFFFFFFF
  class BpmController : public ::Il2CppObject/*, public ::System::IDisposable, public ::GlobalNamespace::IBpmController*/ {
    public:
    // Nested type: ::GlobalNamespace::BpmController::InitData
    class InitData;
    public:
    // private readonly BeatmapCallbacksController _beatmapCallbacksController
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapCallbacksController*) == 0x8);
    // private readonly BeatmapDataCallbackWrapper _beatmapDataCallback
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::BeatmapDataCallbackWrapper* beatmapDataCallback;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapDataCallbackWrapper*) == 0x8);
    // private System.Single _currentBpm
    // Size: 0x4
    // Offset: 0x20
    float currentBpm;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating interface conversion operator: i_IDisposable
    inline ::System::IDisposable* i_IDisposable() noexcept {
      return reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating interface conversion operator: operator ::GlobalNamespace::IBpmController
    operator ::GlobalNamespace::IBpmController() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IBpmController*>(this);
    }
    // Creating interface conversion operator: i_IBpmController
    inline ::GlobalNamespace::IBpmController* i_IBpmController() noexcept {
      return reinterpret_cast<::GlobalNamespace::IBpmController*>(this);
    }
    // Get instance field reference: private readonly BeatmapCallbacksController _beatmapCallbacksController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapCallbacksController*& dyn__beatmapCallbacksController();
    // Get instance field reference: private readonly BeatmapDataCallbackWrapper _beatmapDataCallback
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapDataCallbackWrapper*& dyn__beatmapDataCallback();
    // Get instance field reference: private System.Single _currentBpm
    [[deprecated("Use field access instead!")]] float& dyn__currentBpm();
    // public System.Single get_currentBpm()
    // Offset: 0x13E2A80
    float get_currentBpm();
    // public System.Void .ctor(BpmController/InitData initData, BeatmapCallbacksController beatmapCallbacksController)
    // Offset: 0x13E2A88
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BpmController* New_ctor(::GlobalNamespace::BpmController::InitData* initData, ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BpmController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BpmController*, creationType>(initData, beatmapCallbacksController)));
    }
    // public System.Void Dispose()
    // Offset: 0x13E2B4C
    void Dispose();
    // private System.Void HandleBpmChangeBeatmapEvent(BPMChangeBeatmapEventData bpmChangeBeatmapEventData)
    // Offset: 0x13E2B68
    void HandleBpmChangeBeatmapEvent(::GlobalNamespace::BPMChangeBeatmapEventData* bpmChangeBeatmapEventData);
  }; // BpmController
  #pragma pack(pop)
  static check_size<sizeof(BpmController), 32 + sizeof(float)> __GlobalNamespace_BpmControllerSizeCheck;
  static_assert(sizeof(BpmController) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BpmController::get_currentBpm
// Il2CppName: get_currentBpm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BpmController::*)()>(&GlobalNamespace::BpmController::get_currentBpm)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BpmController*), "get_currentBpm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BpmController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BpmController::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BpmController::*)()>(&GlobalNamespace::BpmController::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BpmController*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BpmController::HandleBpmChangeBeatmapEvent
// Il2CppName: HandleBpmChangeBeatmapEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BpmController::*)(::GlobalNamespace::BPMChangeBeatmapEventData*)>(&GlobalNamespace::BpmController::HandleBpmChangeBeatmapEvent)> {
  static const MethodInfo* get() {
    static auto* bpmChangeBeatmapEventData = &::il2cpp_utils::GetClassFromName("", "BPMChangeBeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BpmController*), "HandleBpmChangeBeatmapEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bpmChangeBeatmapEventData});
  }
};
