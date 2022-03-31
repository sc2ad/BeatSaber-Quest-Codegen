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
  // Forward declaring type: SliderController
  class SliderController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ISliderTailDidMovePastCutMarkEvent
  class ISliderTailDidMovePastCutMarkEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ISliderTailDidMovePastCutMarkEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ISliderTailDidMovePastCutMarkEvent*, "", "ISliderTailDidMovePastCutMarkEvent");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ISliderTailDidMovePastCutMarkEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class ISliderTailDidMovePastCutMarkEvent {
    public:
    // public System.Void HandleSliderTailDidMovePastCutMark(SliderController sliderController)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void HandleSliderTailDidMovePastCutMark(::GlobalNamespace::SliderController* sliderController);
  }; // ISliderTailDidMovePastCutMarkEvent
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ISliderTailDidMovePastCutMarkEvent::HandleSliderTailDidMovePastCutMark
// Il2CppName: HandleSliderTailDidMovePastCutMark
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ISliderTailDidMovePastCutMarkEvent::*)(::GlobalNamespace::SliderController*)>(&GlobalNamespace::ISliderTailDidMovePastCutMarkEvent::HandleSliderTailDidMovePastCutMark)> {
  static const MethodInfo* get() {
    static auto* sliderController = &::il2cpp_utils::GetClassFromName("", "SliderController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ISliderTailDidMovePastCutMarkEvent*), "HandleSliderTailDidMovePastCutMark", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sliderController});
  }
};