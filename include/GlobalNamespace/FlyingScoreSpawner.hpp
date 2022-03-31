// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IFlyingObjectEffectDidFinishEvent
#include "GlobalNamespace/IFlyingObjectEffectDidFinishEvent.hpp"
// Including type: FlyingScoreEffect
#include "GlobalNamespace/FlyingScoreEffect.hpp"
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
  // Skipping declaration: FlyingObjectEffect because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Color because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: FlyingScoreSpawner
  class FlyingScoreSpawner;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::FlyingScoreSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlyingScoreSpawner*, "", "FlyingScoreSpawner");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: FlyingScoreSpawner
  // [TokenAttribute] Offset: FFFFFFFF
  class FlyingScoreSpawner : public ::UnityEngine::MonoBehaviour/*, public ::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*/ {
    public:
    // Nested type: ::GlobalNamespace::FlyingScoreSpawner::SpawnPosition
    struct SpawnPosition;
    // Nested type: ::GlobalNamespace::FlyingScoreSpawner::InitData
    class InitData;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [InjectAttribute] Offset: 0x124FF80
    // private readonly FlyingScoreEffect/Pool _flyingScoreEffectPool
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::FlyingScoreEffect::Pool* flyingScoreEffectPool;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::FlyingScoreEffect::Pool*) == 0x8);
    // [InjectAttribute] Offset: 0x124FF90
    // private readonly FlyingScoreSpawner/InitData _initData
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::FlyingScoreSpawner::InitData* initData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::FlyingScoreSpawner::InitData*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IFlyingObjectEffectDidFinishEvent
    operator ::GlobalNamespace::IFlyingObjectEffectDidFinishEvent() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private readonly FlyingScoreEffect/Pool _flyingScoreEffectPool
    ::GlobalNamespace::FlyingScoreEffect::Pool*& dyn__flyingScoreEffectPool();
    // Get instance field reference: private readonly FlyingScoreSpawner/InitData _initData
    ::GlobalNamespace::FlyingScoreSpawner::InitData*& dyn__initData();
    // public System.Void SpawnFlyingScore(IReadonlyCutScoreBuffer cutScoreBuffer, UnityEngine.Color color)
    // Offset: 0x1391610
    void SpawnFlyingScore(::GlobalNamespace::IReadonlyCutScoreBuffer* cutScoreBuffer, ::UnityEngine::Color color);
    // public System.Void HandleFlyingObjectEffectDidFinish(FlyingObjectEffect flyingObjectEffect)
    // Offset: 0x1391950
    void HandleFlyingObjectEffectDidFinish(::GlobalNamespace::FlyingObjectEffect* flyingObjectEffect);
    // public System.Void .ctor()
    // Offset: 0x1391A6C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FlyingScoreSpawner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FlyingScoreSpawner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FlyingScoreSpawner*, creationType>()));
    }
  }; // FlyingScoreSpawner
  #pragma pack(pop)
  static check_size<sizeof(FlyingScoreSpawner), 32 + sizeof(::GlobalNamespace::FlyingScoreSpawner::InitData*)> __GlobalNamespace_FlyingScoreSpawnerSizeCheck;
  static_assert(sizeof(FlyingScoreSpawner) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FlyingScoreSpawner::SpawnFlyingScore
// Il2CppName: SpawnFlyingScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlyingScoreSpawner::*)(::GlobalNamespace::IReadonlyCutScoreBuffer*, ::UnityEngine::Color)>(&GlobalNamespace::FlyingScoreSpawner::SpawnFlyingScore)> {
  static const MethodInfo* get() {
    static auto* cutScoreBuffer = &::il2cpp_utils::GetClassFromName("", "IReadonlyCutScoreBuffer")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlyingScoreSpawner*), "SpawnFlyingScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cutScoreBuffer, color});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlyingScoreSpawner::HandleFlyingObjectEffectDidFinish
// Il2CppName: HandleFlyingObjectEffectDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlyingScoreSpawner::*)(::GlobalNamespace::FlyingObjectEffect*)>(&GlobalNamespace::FlyingScoreSpawner::HandleFlyingObjectEffectDidFinish)> {
  static const MethodInfo* get() {
    static auto* flyingObjectEffect = &::il2cpp_utils::GetClassFromName("", "FlyingObjectEffect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlyingScoreSpawner*), "HandleFlyingObjectEffectDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{flyingObjectEffect});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlyingScoreSpawner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
