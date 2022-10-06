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
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: FlyingTextEffect
#include "GlobalNamespace/FlyingTextEffect.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: FlyingObjectEffect because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: FlyingTextSpawner
  class FlyingTextSpawner;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::FlyingTextSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlyingTextSpawner*, "", "FlyingTextSpawner");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: FlyingTextSpawner
  // [TokenAttribute] Offset: FFFFFFFF
  class FlyingTextSpawner : public ::UnityEngine::MonoBehaviour/*, public ::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*/ {
    public:
    public:
    // private System.Single _duration
    // Size: 0x4
    // Offset: 0x18
    float duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _xSpread
    // Size: 0x4
    // Offset: 0x1C
    float xSpread;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _targetYPos
    // Size: 0x4
    // Offset: 0x20
    float targetYPos;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _targetZPos
    // Size: 0x4
    // Offset: 0x24
    float targetZPos;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x28
    ::UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Single _fontSize
    // Size: 0x4
    // Offset: 0x38
    float fontSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _shake
    // Size: 0x1
    // Offset: 0x3C
    bool shake;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: shake and: flyingTextEffectPool
    char __padding6[0x3] = {};
    // [InjectAttribute] Offset: 0x10FE230
    // private readonly FlyingTextEffect/Pool _flyingTextEffectPool
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::FlyingTextEffect::Pool* flyingTextEffectPool;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::FlyingTextEffect::Pool*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IFlyingObjectEffectDidFinishEvent
    operator ::GlobalNamespace::IFlyingObjectEffectDidFinishEvent() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>(this);
    }
    // Creating interface conversion operator: i_IFlyingObjectEffectDidFinishEvent
    inline ::GlobalNamespace::IFlyingObjectEffectDidFinishEvent* i_IFlyingObjectEffectDidFinishEvent() noexcept {
      return reinterpret_cast<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Single _duration
    [[deprecated("Use field access instead!")]] float& dyn__duration();
    // Get instance field reference: private System.Single _xSpread
    [[deprecated("Use field access instead!")]] float& dyn__xSpread();
    // Get instance field reference: private System.Single _targetYPos
    [[deprecated("Use field access instead!")]] float& dyn__targetYPos();
    // Get instance field reference: private System.Single _targetZPos
    [[deprecated("Use field access instead!")]] float& dyn__targetZPos();
    // Get instance field reference: private UnityEngine.Color _color
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__color();
    // Get instance field reference: private System.Single _fontSize
    [[deprecated("Use field access instead!")]] float& dyn__fontSize();
    // Get instance field reference: private System.Boolean _shake
    [[deprecated("Use field access instead!")]] bool& dyn__shake();
    // Get instance field reference: private readonly FlyingTextEffect/Pool _flyingTextEffectPool
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::FlyingTextEffect::Pool*& dyn__flyingTextEffectPool();
    // public System.Void .ctor()
    // Offset: 0x13A5854
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FlyingTextSpawner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FlyingTextSpawner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FlyingTextSpawner*, creationType>()));
    }
    // public System.Void SpawnText(UnityEngine.Vector3 pos, UnityEngine.Quaternion rotation, UnityEngine.Quaternion inverseRotation, System.String text)
    // Offset: 0x13A5500
    void SpawnText(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rotation, ::UnityEngine::Quaternion inverseRotation, ::StringW text);
    // public System.Void HandleFlyingObjectEffectDidFinish(FlyingObjectEffect flyingObjectEffect)
    // Offset: 0x13A5738
    void HandleFlyingObjectEffectDidFinish(::GlobalNamespace::FlyingObjectEffect* flyingObjectEffect);
  }; // FlyingTextSpawner
  #pragma pack(pop)
  static check_size<sizeof(FlyingTextSpawner), 64 + sizeof(::GlobalNamespace::FlyingTextEffect::Pool*)> __GlobalNamespace_FlyingTextSpawnerSizeCheck;
  static_assert(sizeof(FlyingTextSpawner) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FlyingTextSpawner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::FlyingTextSpawner::SpawnText
// Il2CppName: SpawnText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlyingTextSpawner::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::StringW)>(&GlobalNamespace::FlyingTextSpawner::SpawnText)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* inverseRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlyingTextSpawner*), "SpawnText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos, rotation, inverseRotation, text});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlyingTextSpawner::HandleFlyingObjectEffectDidFinish
// Il2CppName: HandleFlyingObjectEffectDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlyingTextSpawner::*)(::GlobalNamespace::FlyingObjectEffect*)>(&GlobalNamespace::FlyingTextSpawner::HandleFlyingObjectEffectDidFinish)> {
  static const MethodInfo* get() {
    static auto* flyingObjectEffect = &::il2cpp_utils::GetClassFromName("", "FlyingObjectEffect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlyingTextSpawner*), "HandleFlyingObjectEffectDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{flyingObjectEffect});
  }
};
