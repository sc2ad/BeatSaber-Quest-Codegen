// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: FlyingObjectEffect
#include "GlobalNamespace/FlyingObjectEffect.hpp"
// Including type: ICutScoreBufferDidChangeReceiver
#include "GlobalNamespace/ICutScoreBufferDidChangeReceiver.hpp"
// Including type: ICutScoreBufferDidFinishReceiver
#include "GlobalNamespace/ICutScoreBufferDidFinishReceiver.hpp"
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
  // Forward declaring type: IReadonlyCutScoreBuffer
  class IReadonlyCutScoreBuffer;
  // Forward declaring type: CutScoreBuffer
  class CutScoreBuffer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: SpriteRenderer
  class SpriteRenderer;
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: FlyingScoreEffect
  class FlyingScoreEffect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::FlyingScoreEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlyingScoreEffect*, "", "FlyingScoreEffect");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xB8
  #pragma pack(push, 1)
  // Autogenerated type: FlyingScoreEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class FlyingScoreEffect : public ::GlobalNamespace::FlyingObjectEffect/*, public ::GlobalNamespace::ICutScoreBufferDidChangeReceiver, public ::GlobalNamespace::ICutScoreBufferDidFinishReceiver*/ {
    public:
    // Nested type: ::GlobalNamespace::FlyingScoreEffect::Pool
    class Pool;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private UnityEngine.AnimationCurve _fadeAnimationCurve
    // Size: 0x8
    // Offset: 0x80
    ::UnityEngine::AnimationCurve* fadeAnimationCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // private UnityEngine.SpriteRenderer _maxCutDistanceScoreIndicator
    // Size: 0x8
    // Offset: 0x88
    ::UnityEngine::SpriteRenderer* maxCutDistanceScoreIndicator;
    // Field size check
    static_assert(sizeof(::UnityEngine::SpriteRenderer*) == 0x8);
    // private TMPro.TextMeshPro _text
    // Size: 0x8
    // Offset: 0x90
    ::TMPro::TextMeshPro* text;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshPro*) == 0x8);
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x98
    ::UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Single _colorAMultiplier
    // Size: 0x4
    // Offset: 0xA8
    float colorAMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _registeredToCallbacks
    // Size: 0x1
    // Offset: 0xAC
    bool registeredToCallbacks;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: registeredToCallbacks and: cutScoreBuffer
    char __padding5[0x3] = {};
    // private IReadonlyCutScoreBuffer _cutScoreBuffer
    // Size: 0x8
    // Offset: 0xB0
    ::GlobalNamespace::IReadonlyCutScoreBuffer* cutScoreBuffer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IReadonlyCutScoreBuffer*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::ICutScoreBufferDidChangeReceiver
    operator ::GlobalNamespace::ICutScoreBufferDidChangeReceiver() noexcept {
      return *reinterpret_cast<::GlobalNamespace::ICutScoreBufferDidChangeReceiver*>(this);
    }
    // Creating interface conversion operator: operator ::GlobalNamespace::ICutScoreBufferDidFinishReceiver
    operator ::GlobalNamespace::ICutScoreBufferDidFinishReceiver() noexcept {
      return *reinterpret_cast<::GlobalNamespace::ICutScoreBufferDidFinishReceiver*>(this);
    }
    // Get instance field reference: private UnityEngine.AnimationCurve _fadeAnimationCurve
    ::UnityEngine::AnimationCurve*& dyn__fadeAnimationCurve();
    // Get instance field reference: private UnityEngine.SpriteRenderer _maxCutDistanceScoreIndicator
    ::UnityEngine::SpriteRenderer*& dyn__maxCutDistanceScoreIndicator();
    // Get instance field reference: private TMPro.TextMeshPro _text
    ::TMPro::TextMeshPro*& dyn__text();
    // Get instance field reference: private UnityEngine.Color _color
    ::UnityEngine::Color& dyn__color();
    // Get instance field reference: private System.Single _colorAMultiplier
    float& dyn__colorAMultiplier();
    // Get instance field reference: private System.Boolean _registeredToCallbacks
    bool& dyn__registeredToCallbacks();
    // Get instance field reference: private IReadonlyCutScoreBuffer _cutScoreBuffer
    ::GlobalNamespace::IReadonlyCutScoreBuffer*& dyn__cutScoreBuffer();
    // public System.Void InitAndPresent(IReadonlyCutScoreBuffer cutScoreBuffer, System.Single duration, UnityEngine.Vector3 targetPos, UnityEngine.Color color)
    // Offset: 0x1390D10
    void InitAndPresent(::GlobalNamespace::IReadonlyCutScoreBuffer* cutScoreBuffer, float duration, ::UnityEngine::Vector3 targetPos, ::UnityEngine::Color color);
    // public System.Void HandleCutScoreBufferDidChange(CutScoreBuffer cutScoreBuffer)
    // Offset: 0x139136C
    void HandleCutScoreBufferDidChange(::GlobalNamespace::CutScoreBuffer* cutScoreBuffer);
    // private System.Void RefreshScore(System.Int32 score, System.Int32 maxPossibleCutScore)
    // Offset: 0x1391254
    void RefreshScore(int score, int maxPossibleCutScore);
    // public System.Void HandleCutScoreBufferDidFinish(CutScoreBuffer cutScoreBuffer)
    // Offset: 0x13913C4
    void HandleCutScoreBufferDidFinish(::GlobalNamespace::CutScoreBuffer* cutScoreBuffer);
    // private System.Void UnregisterCallbacksIfNeeded()
    // Offset: 0x13913C8
    void UnregisterCallbacksIfNeeded();
    // public System.Void .ctor()
    // Offset: 0x1391514
    // Implemented from: FlyingObjectEffect
    // Base method: System.Void FlyingObjectEffect::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FlyingScoreEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FlyingScoreEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FlyingScoreEffect*, creationType>()));
    }
    // protected override System.Void ManualUpdate(System.Single t)
    // Offset: 0x13912D8
    // Implemented from: FlyingObjectEffect
    // Base method: System.Void FlyingObjectEffect::ManualUpdate(System.Single t)
    void ManualUpdate(float t);
  }; // FlyingScoreEffect
  #pragma pack(pop)
  static check_size<sizeof(FlyingScoreEffect), 176 + sizeof(::GlobalNamespace::IReadonlyCutScoreBuffer*)> __GlobalNamespace_FlyingScoreEffectSizeCheck;
  static_assert(sizeof(FlyingScoreEffect) == 0xB8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FlyingScoreEffect::InitAndPresent
// Il2CppName: InitAndPresent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlyingScoreEffect::*)(::GlobalNamespace::IReadonlyCutScoreBuffer*, float, ::UnityEngine::Vector3, ::UnityEngine::Color)>(&GlobalNamespace::FlyingScoreEffect::InitAndPresent)> {
  static const MethodInfo* get() {
    static auto* cutScoreBuffer = &::il2cpp_utils::GetClassFromName("", "IReadonlyCutScoreBuffer")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* targetPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlyingScoreEffect*), "InitAndPresent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cutScoreBuffer, duration, targetPos, color});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlyingScoreEffect::HandleCutScoreBufferDidChange
// Il2CppName: HandleCutScoreBufferDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlyingScoreEffect::*)(::GlobalNamespace::CutScoreBuffer*)>(&GlobalNamespace::FlyingScoreEffect::HandleCutScoreBufferDidChange)> {
  static const MethodInfo* get() {
    static auto* cutScoreBuffer = &::il2cpp_utils::GetClassFromName("", "CutScoreBuffer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlyingScoreEffect*), "HandleCutScoreBufferDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cutScoreBuffer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlyingScoreEffect::RefreshScore
// Il2CppName: RefreshScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlyingScoreEffect::*)(int, int)>(&GlobalNamespace::FlyingScoreEffect::RefreshScore)> {
  static const MethodInfo* get() {
    static auto* score = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* maxPossibleCutScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlyingScoreEffect*), "RefreshScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{score, maxPossibleCutScore});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlyingScoreEffect::HandleCutScoreBufferDidFinish
// Il2CppName: HandleCutScoreBufferDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlyingScoreEffect::*)(::GlobalNamespace::CutScoreBuffer*)>(&GlobalNamespace::FlyingScoreEffect::HandleCutScoreBufferDidFinish)> {
  static const MethodInfo* get() {
    static auto* cutScoreBuffer = &::il2cpp_utils::GetClassFromName("", "CutScoreBuffer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlyingScoreEffect*), "HandleCutScoreBufferDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cutScoreBuffer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlyingScoreEffect::UnregisterCallbacksIfNeeded
// Il2CppName: UnregisterCallbacksIfNeeded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlyingScoreEffect::*)()>(&GlobalNamespace::FlyingScoreEffect::UnregisterCallbacksIfNeeded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlyingScoreEffect*), "UnregisterCallbacksIfNeeded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlyingScoreEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::FlyingScoreEffect::ManualUpdate
// Il2CppName: ManualUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlyingScoreEffect::*)(float)>(&GlobalNamespace::FlyingScoreEffect::ManualUpdate)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlyingScoreEffect*), "ManualUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
