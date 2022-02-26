// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: FlyingObjectEffect
  class FlyingObjectEffect;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: IFlyingObjectEffectDidFinishEvent
  class IFlyingObjectEffectDidFinishEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::IFlyingObjectEffectDidFinishEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*, "", "IFlyingObjectEffectDidFinishEvent");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: IFlyingObjectEffectDidFinishEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class IFlyingObjectEffectDidFinishEvent {
    public:
    // public System.Void HandleFlyingObjectEffectDidFinish(FlyingObjectEffect flyingObjectEffect)
    // Offset: 0xFFFFFFFF
    void HandleFlyingObjectEffectDidFinish(::GlobalNamespace::FlyingObjectEffect* flyingObjectEffect);
  }; // IFlyingObjectEffectDidFinishEvent
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IFlyingObjectEffectDidFinishEvent::HandleFlyingObjectEffectDidFinish
// Il2CppName: HandleFlyingObjectEffectDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IFlyingObjectEffectDidFinishEvent::*)(::GlobalNamespace::FlyingObjectEffect*)>(&GlobalNamespace::IFlyingObjectEffectDidFinishEvent::HandleFlyingObjectEffectDidFinish)> {
  static const MethodInfo* get() {
    static auto* flyingObjectEffect = &::il2cpp_utils::GetClassFromName("", "FlyingObjectEffect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IFlyingObjectEffectDidFinishEvent*), "HandleFlyingObjectEffectDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{flyingObjectEffect});
  }
};
