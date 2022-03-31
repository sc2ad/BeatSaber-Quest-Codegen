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
  // Forward declaring type: BeatEffect
  class BeatEffect;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: IBeatEffectDidFinishEvent
  class IBeatEffectDidFinishEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::IBeatEffectDidFinishEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IBeatEffectDidFinishEvent*, "", "IBeatEffectDidFinishEvent");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: IBeatEffectDidFinishEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class IBeatEffectDidFinishEvent {
    public:
    // public System.Void HandleBeatEffectDidFinish(BeatEffect beatEffect)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void HandleBeatEffectDidFinish(::GlobalNamespace::BeatEffect* beatEffect);
  }; // IBeatEffectDidFinishEvent
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IBeatEffectDidFinishEvent::HandleBeatEffectDidFinish
// Il2CppName: HandleBeatEffectDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IBeatEffectDidFinishEvent::*)(::GlobalNamespace::BeatEffect*)>(&GlobalNamespace::IBeatEffectDidFinishEvent::HandleBeatEffectDidFinish)> {
  static const MethodInfo* get() {
    static auto* beatEffect = &::il2cpp_utils::GetClassFromName("", "BeatEffect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IBeatEffectDidFinishEvent*), "HandleBeatEffectDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatEffect});
  }
};
