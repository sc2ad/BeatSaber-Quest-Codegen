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
  // Forward declaring type: BloomPrePassBackgroundTextureGradient
  class BloomPrePassBackgroundTextureGradient;
  // Forward declaring type: BeatmapCallbacksController
  class BeatmapCallbacksController;
  // Forward declaring type: BeatmapDataCallbackWrapper
  class BeatmapDataCallbackWrapper;
  // Forward declaring type: ColorBoostBeatmapEventData
  class ColorBoostBeatmapEventData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BackgroundTextureGradientSwitchEventEffect
  class BackgroundTextureGradientSwitchEventEffect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect*, "", "BackgroundTextureGradientSwitchEventEffect");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: BackgroundTextureGradientSwitchEventEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class BackgroundTextureGradientSwitchEventEffect : public ::UnityEngine::MonoBehaviour {
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
    // private BloomPrePassBackgroundTextureGradient _defaultTextureGradient
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::BloomPrePassBackgroundTextureGradient* defaultTextureGradient;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BloomPrePassBackgroundTextureGradient*) == 0x8);
    // private BloomPrePassBackgroundTextureGradient _boostTextureGradient
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::BloomPrePassBackgroundTextureGradient* boostTextureGradient;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BloomPrePassBackgroundTextureGradient*) == 0x8);
    // [InjectAttribute] Offset: 0x12510A8
    // private readonly BeatmapCallbacksController _beatmapCallbacksController
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapCallbacksController*) == 0x8);
    // private BeatmapDataCallbackWrapper _beatmapDataCallbackWrapper
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::BeatmapDataCallbackWrapper* beatmapDataCallbackWrapper;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapDataCallbackWrapper*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private BloomPrePassBackgroundTextureGradient _defaultTextureGradient
    ::GlobalNamespace::BloomPrePassBackgroundTextureGradient*& dyn__defaultTextureGradient();
    // Get instance field reference: private BloomPrePassBackgroundTextureGradient _boostTextureGradient
    ::GlobalNamespace::BloomPrePassBackgroundTextureGradient*& dyn__boostTextureGradient();
    // Get instance field reference: private readonly BeatmapCallbacksController _beatmapCallbacksController
    ::GlobalNamespace::BeatmapCallbacksController*& dyn__beatmapCallbacksController();
    // Get instance field reference: private BeatmapDataCallbackWrapper _beatmapDataCallbackWrapper
    ::GlobalNamespace::BeatmapDataCallbackWrapper*& dyn__beatmapDataCallbackWrapper();
    // protected System.Void Start()
    // Offset: 0x135D65C
    void Start();
    // private System.Void OnDestroy()
    // Offset: 0x135D700
    void OnDestroy();
    // private System.Void HandleBeatmapEvent(ColorBoostBeatmapEventData eventData)
    // Offset: 0x135D718
    void HandleBeatmapEvent(::GlobalNamespace::ColorBoostBeatmapEventData* eventData);
    // public System.Void .ctor()
    // Offset: 0x135D76C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BackgroundTextureGradientSwitchEventEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BackgroundTextureGradientSwitchEventEffect*, creationType>()));
    }
  }; // BackgroundTextureGradientSwitchEventEffect
  #pragma pack(pop)
  static check_size<sizeof(BackgroundTextureGradientSwitchEventEffect), 48 + sizeof(::GlobalNamespace::BeatmapDataCallbackWrapper*)> __GlobalNamespace_BackgroundTextureGradientSwitchEventEffectSizeCheck;
  static_assert(sizeof(BackgroundTextureGradientSwitchEventEffect) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::*)()>(&GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BackgroundTextureGradientSwitchEventEffect*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::*)()>(&GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BackgroundTextureGradientSwitchEventEffect*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::HandleBeatmapEvent
// Il2CppName: HandleBeatmapEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::*)(::GlobalNamespace::ColorBoostBeatmapEventData*)>(&GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::HandleBeatmapEvent)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("", "ColorBoostBeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BackgroundTextureGradientSwitchEventEffect*), "HandleBeatmapEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BackgroundTextureGradientSwitchEventEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
