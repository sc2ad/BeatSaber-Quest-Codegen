// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Playables.PlayableBehaviour
#include "UnityEngine/Playables/PlayableBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorSO
  class ColorSO;
  // Forward declaring type: TubeBloomPrePassLight
  class TubeBloomPrePassLight;
  // Forward declaring type: DirectionalLight
  class DirectionalLight;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: FrameData
  struct FrameData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TubeLightBehaviour
  class TubeLightBehaviour;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TubeLightBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TubeLightBehaviour*, "", "TubeLightBehaviour");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x64
  #pragma pack(push, 1)
  // Autogenerated type: TubeLightBehaviour
  // [TokenAttribute] Offset: FFFFFFFF
  class TubeLightBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
    public:
    // Nested type: ::GlobalNamespace::TubeLightBehaviour::ParameterType
    struct ParameterType;
    public:
    // public System.Boolean _noPredefinedStartValue
    // Size: 0x1
    // Offset: 0x10
    bool noPredefinedStartValue;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: noPredefinedStartValue and: startColor
    char __padding0[0x7] = {};
    // [DrawIfAttribute] Offset: 0x1124618
    // public ColorSO startColor
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::ColorSO* startColor;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorSO*) == 0x8);
    // public ColorSO endColor
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::ColorSO* endColor;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorSO*) == 0x8);
    // public System.Single blend
    // Size: 0x4
    // Offset: 0x28
    float blend;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _initialized
    // Size: 0x1
    // Offset: 0x2C
    bool initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: initialized and: originalColor
    char __padding4[0x3] = {};
    // private UnityEngine.Color _originalColor
    // Size: 0x10
    // Offset: 0x30
    ::UnityEngine::Color originalColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private TubeBloomPrePassLight[] _tubeLights
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*> tubeLights;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*>) == 0x8);
    // private DirectionalLight[] _directionalLights
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<::GlobalNamespace::DirectionalLight*> directionalLights;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::DirectionalLight*>) == 0x8);
    // private System.Boolean started
    // Size: 0x1
    // Offset: 0x50
    bool started;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: started and: firstFrameColor
    char __padding8[0x3] = {};
    // private UnityEngine.Color _firstFrameColor
    // Size: 0x10
    // Offset: 0x54
    ::UnityEngine::Color firstFrameColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // Get instance field reference: public System.Boolean _noPredefinedStartValue
    [[deprecated("Use field access instead!")]] bool& dyn__noPredefinedStartValue();
    // Get instance field reference: public ColorSO startColor
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ColorSO*& dyn_startColor();
    // Get instance field reference: public ColorSO endColor
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ColorSO*& dyn_endColor();
    // Get instance field reference: public System.Single blend
    [[deprecated("Use field access instead!")]] float& dyn_blend();
    // Get instance field reference: private System.Boolean _initialized
    [[deprecated("Use field access instead!")]] bool& dyn__initialized();
    // Get instance field reference: private UnityEngine.Color _originalColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__originalColor();
    // Get instance field reference: private TubeBloomPrePassLight[] _tubeLights
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*>& dyn__tubeLights();
    // Get instance field reference: private DirectionalLight[] _directionalLights
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::DirectionalLight*>& dyn__directionalLights();
    // Get instance field reference: private System.Boolean started
    [[deprecated("Use field access instead!")]] bool& dyn_started();
    // Get instance field reference: private UnityEngine.Color _firstFrameColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__firstFrameColor();
    // public System.Void .ctor()
    // Offset: 0x13BAB30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TubeLightBehaviour* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TubeLightBehaviour::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TubeLightBehaviour*, creationType>()));
    }
    // public override System.Void ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    // Offset: 0x13BA6AC
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::Il2CppObject* playerData);
    // public override System.Void OnPlayableDestroy(UnityEngine.Playables.Playable playable)
    // Offset: 0x13BAA50
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnPlayableDestroy(UnityEngine.Playables.Playable playable)
    void OnPlayableDestroy(::UnityEngine::Playables::Playable playable);
  }; // TubeLightBehaviour
  #pragma pack(pop)
  static check_size<sizeof(TubeLightBehaviour), 84 + sizeof(::UnityEngine::Color)> __GlobalNamespace_TubeLightBehaviourSizeCheck;
  static_assert(sizeof(TubeLightBehaviour) == 0x64);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TubeLightBehaviour::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::TubeLightBehaviour::ProcessFrame
// Il2CppName: ProcessFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TubeLightBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::Il2CppObject*)>(&GlobalNamespace::TubeLightBehaviour::ProcessFrame)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    static auto* playerData = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeLightBehaviour*), "ProcessFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info, playerData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TubeLightBehaviour::OnPlayableDestroy
// Il2CppName: OnPlayableDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TubeLightBehaviour::*)(::UnityEngine::Playables::Playable)>(&GlobalNamespace::TubeLightBehaviour::OnPlayableDestroy)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeLightBehaviour*), "OnPlayableDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable});
  }
};
