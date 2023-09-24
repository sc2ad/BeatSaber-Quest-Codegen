#pragma once
#include "GlobalNamespace/zzzz__SliderControllerBase_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_impl.hpp"
#include "GlobalNamespace/zzzz__SliderController_def.hpp"
#include "GlobalNamespace/zzzz__SliderData_def.hpp"
#include "GlobalNamespace/zzzz__SliderController_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnMovementData_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "GlobalNamespace/zzzz__SliderMeshController_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__ISliderDidStartDissolvingEvent_def.hpp"
#include "GlobalNamespace/zzzz__FixedUpdateVector3SmoothValue_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__ISliderHeadDidMovePastCutMarkEvent_def.hpp"
#include "GlobalNamespace/zzzz__ISliderTailDidMovePastCutMarkEvent_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfo_def.hpp"
#include "GlobalNamespace/zzzz__ISliderDidFinishJumpEvent_def.hpp"
#include "GlobalNamespace/zzzz__ILazyCopyHashSet_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "GlobalNamespace/zzzz__SliderMovement_def.hpp"
#include "GlobalNamespace/zzzz__ISliderDidDissolveEvent_def.hpp"
#include "GlobalNamespace/zzzz__Saber_def.hpp"
#include "GlobalNamespace/zzzz__LazyCopyHashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapObjectController_def.hpp"
#include "GlobalNamespace/zzzz__SaberManager_def.hpp"
#include "GlobalNamespace/zzzz__SliderIntensityEffect_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapObjectSpawnController_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__SliderController__LengthType::GlobalNamespace__SliderController__LengthType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__SliderController__LengthType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__SliderController__LengthType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__SliderController__LengthType  GlobalNamespace::GlobalNamespace__SliderController__LengthType::Short{0};
constexpr GlobalNamespace::GlobalNamespace__SliderController__LengthType  GlobalNamespace::GlobalNamespace__SliderController__LengthType::Medium{1};
constexpr GlobalNamespace::GlobalNamespace__SliderController__LengthType  GlobalNamespace::GlobalNamespace__SliderController__LengthType::Long{2};
//  Writing Method size for method: GlobalNamespace::SliderController.get_sliderDidFinishJumpEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::ISliderDidFinishJumpEvent> (GlobalNamespace::SliderController::*)()>(&GlobalNamespace::SliderController::get_sliderDidFinishJumpEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2247188;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "get_sliderDidFinishJumpEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderController.get_sliderDidStartDissolvingEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::ISliderDidStartDissolvingEvent> (GlobalNamespace::SliderController::*)()>(&GlobalNamespace::SliderController::get_sliderDidStartDissolvingEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2247190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "get_sliderDidStartDissolvingEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderController.get_sliderDidDissolveEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::ISliderDidDissolveEvent> (GlobalNamespace::SliderController::*)()>(&GlobalNamespace::SliderController::get_sliderDidDissolveEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2247198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "get_sliderDidDissolveEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderController.get_sliderHeadDidMovePastCutMark
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent> (GlobalNamespace::SliderController::*)()>(&GlobalNamespace::SliderController::get_sliderHeadDidMovePastCutMark)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22471a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "get_sliderHeadDidMovePastCutMark",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderController.get_sliderTailDidMovePastCutMark
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::ISliderTailDidMovePastCutMarkEvent> (GlobalNamespace::SliderController::*)()>(&GlobalNamespace::SliderController::get_sliderTailDidMovePastCutMark)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22471a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "get_sliderTailDidMovePastCutMark",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderController.get_lengthType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__SliderController__LengthType (GlobalNamespace::SliderController::*)()>(&GlobalNamespace::SliderController::get_lengthType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22471b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "get_lengthType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderController.get_sliderData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::SliderData (GlobalNamespace::SliderController::*)()>(&GlobalNamespace::SliderController::get_sliderData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22471b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "get_sliderData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderController.get_saberInteractionParam
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::SliderController::*)()>(&GlobalNamespace::SliderController::get_saberInteractionParam)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x22471c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "get_saberInteractionParam",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderController.get_sliderMeshController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::SliderMeshController (GlobalNamespace::SliderController::*)()>(&GlobalNamespace::SliderController::get_sliderMeshController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2247228;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "get_sliderMeshController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderController.get_sliderMovement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::SliderMovement (GlobalNamespace::SliderController::*)()>(&GlobalNamespace::SliderController::get_sliderMovement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2247230;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "get_sliderMovement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderController.get_initColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::SliderController::*)()>(&GlobalNamespace::SliderController::get_initColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2247238;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "get_initColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderController.get_randomValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::SliderController::*)()>(&GlobalNamespace::SliderController::get_randomValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2247244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "get_randomValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderController.get_zDistanceBetweenNotes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::SliderController::*)()>(&GlobalNamespace::SliderController::get_zDistanceBetweenNotes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224724c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "get_zDistanceBetweenNotes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderController.get_jumpDistance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::SliderController::*)()>(&GlobalNamespace::SliderController::get_jumpDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2247254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "get_jumpDistance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderController.get_headJumpOffsetY
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::SliderController::*)()>(&GlobalNamespace::SliderController::get_headJumpOffsetY)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224725c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "get_headJumpOffsetY",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderController.get_sliderDuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::SliderController::*)()>(&GlobalNamespace::SliderController::get_sliderDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2247264;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "get_sliderDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderController.get_closeSmoothedSaberInteractionPos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::FixedUpdateVector3SmoothValue (GlobalNamespace::SliderController::*)()>(&GlobalNamespace::SliderController::get_closeSmoothedSaberInteractionPos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224726c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "get_closeSmoothedSaberInteractionPos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderController.get_sliderIntensityEffect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::SliderIntensityEffect (GlobalNamespace::SliderController::*)()>(&GlobalNamespace::SliderController::get_sliderIntensityEffect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2247274;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "get_sliderIntensityEffect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderController.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderController::*)(GlobalNamespace::GlobalNamespace__SliderController__LengthType, GlobalNamespace::SliderData, float_t, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, float_t, float_t, float_t, float_t)>(&GlobalNamespace::SliderController::Init)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x224727c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__SliderController__LengthType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SliderData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderController.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderController::*)()>(&GlobalNamespace::SliderController::Awake)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x22481ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderController.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderController::*)()>(&GlobalNamespace::SliderController::Start)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x22484e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderController.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderController::*)()>(&GlobalNamespace::SliderController::OnDestroy)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x22486cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderController.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderController::*)()>(&GlobalNamespace::SliderController::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2248be4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderController.FixedUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderController::*)()>(&GlobalNamespace::SliderController::FixedUpdate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2248c5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "FixedUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderController.ManualUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderController::*)()>(&GlobalNamespace::SliderController::ManualUpdate)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2248be8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "ManualUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderController.UpdateMaterialPropertyBlock
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderController::*)(float_t)>(&GlobalNamespace::SliderController::UpdateMaterialPropertyBlock)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x224806c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "UpdateMaterialPropertyBlock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderController.DissolveCoroutine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (GlobalNamespace::SliderController::*)(float_t)>(&GlobalNamespace::SliderController::DissolveCoroutine)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2248efc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "DissolveCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderController.Dissolve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderController::*)(float_t)>(&GlobalNamespace::SliderController::Dissolve)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2248f9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "Dissolve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderController.Hide
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderController::*)(bool)>(&GlobalNamespace::SliderController::Hide)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2248ffc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "Hide",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderController.Pause
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderController::*)(bool)>(&GlobalNamespace::SliderController::Pause)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2249028;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "Pause",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderController.IsNoteStartOfThisSlider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SliderController::*)(GlobalNamespace::NoteData)>(&GlobalNamespace::SliderController::IsNoteStartOfThisSlider)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2249038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "IsNoteStartOfThisSlider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderController.HandleMovementDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderController::*)()>(&GlobalNamespace::SliderController::HandleMovementDidFinish)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x2249120;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "HandleMovementDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderController.HandleHeadDidMovePastCutMark
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderController::*)()>(&GlobalNamespace::SliderController::HandleHeadDidMovePastCutMark)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x22492f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "HandleHeadDidMovePastCutMark",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderController.HandleTailDidMovePastCutMark
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderController::*)()>(&GlobalNamespace::SliderController::HandleTailDidMovePastCutMark)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x2249514;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "HandleTailDidMovePastCutMark",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderController.HandleNoteWasMissed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderController::*)(GlobalNamespace::NoteController)>(&GlobalNamespace::SliderController::HandleNoteWasMissed)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x22496f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "HandleNoteWasMissed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteController>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderController.HandleNoteWasCut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderController::*)(GlobalNamespace::NoteController, ByRef<GlobalNamespace::NoteCutInfo>)>(&GlobalNamespace::SliderController::HandleNoteWasCut)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2249770;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "HandleNoteWasCut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::NoteCutInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderController.HandleFadeInDidStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderController::*)()>(&GlobalNamespace::SliderController::HandleFadeInDidStart)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22497f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "HandleFadeInDidStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderController.SetSaberAttraction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderController::*)(bool)>(&GlobalNamespace::SliderController::SetSaberAttraction)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2247f90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "SetSaberAttraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderController.GetSaberInteractionPoint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(GlobalNamespace::Saber)>(&GlobalNamespace::SliderController::GetSaberInteractionPoint)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2248018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "GetSaberInteractionPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::Saber>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderController::*)()>(&GlobalNamespace::SliderController::_ctor)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x22497f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IBeatmapObjectController
constexpr  GlobalNamespace::SliderController::operator GlobalNamespace::IBeatmapObjectController() const noexcept {
return GlobalNamespace::IBeatmapObjectController(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SliderController::__set__sliderIntensityEffect(GlobalNamespace::SliderIntensityEffect value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SliderIntensityEffect, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SliderIntensityEffect>(value));
}
constexpr GlobalNamespace::SliderIntensityEffect GlobalNamespace::SliderController::__get__sliderIntensityEffect() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SliderIntensityEffect, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SliderController::__set__sliderMeshController(GlobalNamespace::SliderMeshController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SliderMeshController, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SliderMeshController>(value));
}
constexpr GlobalNamespace::SliderMeshController GlobalNamespace::SliderController::__get__sliderMeshController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SliderMeshController, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SliderController::__set__sliderMovement(GlobalNamespace::SliderMovement value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SliderMovement, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SliderMovement>(value));
}
constexpr GlobalNamespace::SliderMovement GlobalNamespace::SliderController::__get__sliderMovement() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SliderMovement, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SliderController::__set__closeInteractionSaberPosSmoothParam(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::SliderController::__get__closeInteractionSaberPosSmoothParam() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SliderController::__set__beatmapObjectSpawnController(GlobalNamespace::IBeatmapObjectSpawnController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IBeatmapObjectSpawnController, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IBeatmapObjectSpawnController>(value));
}
constexpr GlobalNamespace::IBeatmapObjectSpawnController GlobalNamespace::SliderController::__get__beatmapObjectSpawnController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IBeatmapObjectSpawnController, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SliderController::__set__colorManager(GlobalNamespace::ColorManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ColorManager, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ColorManager>(value));
}
constexpr GlobalNamespace::ColorManager GlobalNamespace::SliderController::__get__colorManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ColorManager, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SliderController::__set__beatmapObjectManager(GlobalNamespace::BeatmapObjectManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapObjectManager, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapObjectManager>(value));
}
constexpr GlobalNamespace::BeatmapObjectManager GlobalNamespace::SliderController::__get__beatmapObjectManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapObjectManager, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SliderController::__set__saberManager(GlobalNamespace::SaberManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SaberManager, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SaberManager>(value));
}
constexpr GlobalNamespace::SaberManager GlobalNamespace::SliderController::__get__saberManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SaberManager, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SliderController::__set__sliderDidFinishMovement(GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISliderDidFinishJumpEvent> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISliderDidFinishJumpEvent>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISliderDidFinishJumpEvent>>(value));
}
constexpr GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISliderDidFinishJumpEvent> GlobalNamespace::SliderController::__get__sliderDidFinishMovement() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISliderDidFinishJumpEvent>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SliderController::__set__sliderDidStartDissolving(GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISliderDidStartDissolvingEvent> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISliderDidStartDissolvingEvent>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISliderDidStartDissolvingEvent>>(value));
}
constexpr GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISliderDidStartDissolvingEvent> GlobalNamespace::SliderController::__get__sliderDidStartDissolving() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISliderDidStartDissolvingEvent>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SliderController::__set__sliderDidDissolve(GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISliderDidDissolveEvent> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISliderDidDissolveEvent>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISliderDidDissolveEvent>>(value));
}
constexpr GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISliderDidDissolveEvent> GlobalNamespace::SliderController::__get__sliderDidDissolve() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISliderDidDissolveEvent>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SliderController::__set__sliderHeadDidMovePastCutMark(GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent>>(value));
}
constexpr GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent> GlobalNamespace::SliderController::__get__sliderHeadDidMovePastCutMark() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SliderController::__set__sliderTailDidMovePastCutMark(GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISliderTailDidMovePastCutMarkEvent> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISliderTailDidMovePastCutMarkEvent>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISliderTailDidMovePastCutMarkEvent>>(value));
}
constexpr GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISliderTailDidMovePastCutMarkEvent> GlobalNamespace::SliderController::__get__sliderTailDidMovePastCutMark() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ISliderTailDidMovePastCutMarkEvent>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SliderController::__set__lengthType(GlobalNamespace::GlobalNamespace__SliderController__LengthType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__SliderController__LengthType, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__SliderController__LengthType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__SliderController__LengthType GlobalNamespace::SliderController::__get__lengthType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__SliderController__LengthType, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SliderController::__set__sliderData(GlobalNamespace::SliderData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SliderData, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SliderData>(value));
}
constexpr GlobalNamespace::SliderData GlobalNamespace::SliderController::__get__sliderData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SliderData, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SliderController::__set__saber(GlobalNamespace::Saber value)  {
::cordl_internals::setInstanceField<GlobalNamespace::Saber, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::Saber>(value));
}
constexpr GlobalNamespace::Saber GlobalNamespace::SliderController::__get__saber() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::Saber, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SliderController::__set__headJumpOffsetY(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::SliderController::__get__headJumpOffsetY() const {
return ::cordl_internals::getInstanceField<float_t, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SliderController::__set__sliderDuration(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xb4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::SliderController::__get__sliderDuration() const {
return ::cordl_internals::getInstanceField<float_t, 0xb4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SliderController::__set__initColor(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color GlobalNamespace::SliderController::__get__initColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SliderController::__set__attractingSaber(bool value)  {
::cordl_internals::setInstanceField<bool, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::SliderController::__get__attractingSaber() const {
return ::cordl_internals::getInstanceField<bool, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SliderController::__set__randomValue(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xcc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::SliderController::__get__randomValue() const {
return ::cordl_internals::getInstanceField<float_t, 0xcc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SliderController::__set__zDistanceBetweenNotes(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::SliderController::__get__zDistanceBetweenNotes() const {
return ::cordl_internals::getInstanceField<float_t, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SliderController::__set__jumpDistance(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xd4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::SliderController::__get__jumpDistance() const {
return ::cordl_internals::getInstanceField<float_t, 0xd4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SliderController::__set__closeSmoothedSaberInteractionPos(GlobalNamespace::FixedUpdateVector3SmoothValue value)  {
::cordl_internals::setInstanceField<GlobalNamespace::FixedUpdateVector3SmoothValue, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::FixedUpdateVector3SmoothValue>(value));
}
constexpr GlobalNamespace::FixedUpdateVector3SmoothValue GlobalNamespace::SliderController::__get__closeSmoothedSaberInteractionPos() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::FixedUpdateVector3SmoothValue, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::ISliderDidFinishJumpEvent> GlobalNamespace::SliderController::get_sliderDidFinishJumpEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "get_sliderDidFinishJumpEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::ISliderDidFinishJumpEvent>, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::ISliderDidStartDissolvingEvent> GlobalNamespace::SliderController::get_sliderDidStartDissolvingEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "get_sliderDidStartDissolvingEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::ISliderDidStartDissolvingEvent>, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::ISliderDidDissolveEvent> GlobalNamespace::SliderController::get_sliderDidDissolveEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "get_sliderDidDissolveEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::ISliderDidDissolveEvent>, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent> GlobalNamespace::SliderController::get_sliderHeadDidMovePastCutMark()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "get_sliderHeadDidMovePastCutMark",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent>, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::ISliderTailDidMovePastCutMarkEvent> GlobalNamespace::SliderController::get_sliderTailDidMovePastCutMark()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "get_sliderTailDidMovePastCutMark",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::ISliderTailDidMovePastCutMarkEvent>, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__SliderController__LengthType GlobalNamespace::SliderController::get_lengthType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "get_lengthType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__SliderController__LengthType, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::SliderData GlobalNamespace::SliderController::get_sliderData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "get_sliderData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::SliderData, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::SliderController::get_saberInteractionParam()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "get_saberInteractionParam",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::SliderMeshController GlobalNamespace::SliderController::get_sliderMeshController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "get_sliderMeshController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::SliderMeshController, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::SliderMovement GlobalNamespace::SliderController::get_sliderMovement()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "get_sliderMovement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::SliderMovement, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Color GlobalNamespace::SliderController::get_initColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "get_initColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Color, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::SliderController::get_randomValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "get_randomValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::SliderController::get_zDistanceBetweenNotes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "get_zDistanceBetweenNotes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::SliderController::get_jumpDistance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "get_jumpDistance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::SliderController::get_headJumpOffsetY()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "get_headJumpOffsetY",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::SliderController::get_sliderDuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "get_sliderDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::FixedUpdateVector3SmoothValue GlobalNamespace::SliderController::get_closeSmoothedSaberInteractionPos()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "get_closeSmoothedSaberInteractionPos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::FixedUpdateVector3SmoothValue, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::SliderIntensityEffect GlobalNamespace::SliderController::get_sliderIntensityEffect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "get_sliderIntensityEffect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::SliderIntensityEffect, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::SliderController::Init(GlobalNamespace::GlobalNamespace__SliderController__LengthType lengthType, GlobalNamespace::SliderData sliderData, float_t worldRotation, UnityEngine::Vector3 headNoteJumpStartPos, UnityEngine::Vector3 tailNoteJumpStartPos, UnityEngine::Vector3 headNoteJumpEndPos, UnityEngine::Vector3 tailNoteJumpEndPos, float_t jumpDuration, float_t startNoteJumpGravity, float_t endNoteJumpGravity, float_t noteUniformScale)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__SliderController__LengthType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SliderData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, lengthType, sliderData, worldRotation, headNoteJumpStartPos, tailNoteJumpStartPos, headNoteJumpEndPos, tailNoteJumpEndPos, jumpDuration, startNoteJumpGravity, endNoteJumpGravity, noteUniformScale);
}
 void GlobalNamespace::SliderController::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::SliderController::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::SliderController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::SliderController::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::SliderController::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "FixedUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::SliderController::ManualUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "ManualUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::SliderController::UpdateMaterialPropertyBlock(float_t timeSinceHeadNoteJump)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "UpdateMaterialPropertyBlock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, timeSinceHeadNoteJump);
}
 System::Collections::IEnumerator GlobalNamespace::SliderController::DissolveCoroutine(float_t duration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "DissolveCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method, duration);
}
 void GlobalNamespace::SliderController::Dissolve(float_t duration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "Dissolve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, duration);
}
 void GlobalNamespace::SliderController::Hide(bool hide)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "Hide",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, hide);
}
 void GlobalNamespace::SliderController::Pause(bool pause)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "Pause",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pause);
}
 bool GlobalNamespace::SliderController::IsNoteStartOfThisSlider(GlobalNamespace::NoteData noteData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "IsNoteStartOfThisSlider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, noteData);
}
 void GlobalNamespace::SliderController::HandleMovementDidFinish()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "HandleMovementDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::SliderController::HandleHeadDidMovePastCutMark()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "HandleHeadDidMovePastCutMark",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::SliderController::HandleTailDidMovePastCutMark()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "HandleTailDidMovePastCutMark",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::SliderController::HandleNoteWasMissed(GlobalNamespace::NoteController noteController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "HandleNoteWasMissed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, noteController);
}
 void GlobalNamespace::SliderController::HandleNoteWasCut(GlobalNamespace::NoteController noteController, ByRef<GlobalNamespace::NoteCutInfo> noteCutInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "HandleNoteWasCut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::NoteCutInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, noteController, noteCutInfo);
}
 void GlobalNamespace::SliderController::HandleFadeInDidStart()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "HandleFadeInDidStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::SliderController::SetSaberAttraction(bool saberAttraction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "SetSaberAttraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, saberAttraction);
}
 UnityEngine::Vector3 GlobalNamespace::SliderController::GetSaberInteractionPoint(GlobalNamespace::Saber saber)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            "GetSaberInteractionPoint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::Saber>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(nullptr, ___internal_method, saber);
}
 GlobalNamespace::SliderController GlobalNamespace::SliderController::New_ctor()  {
GlobalNamespace::SliderController o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::SliderController>())};
return o;
}
 void GlobalNamespace::SliderController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__SliderController__Pool__Short._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__SliderController__Pool__Short::*)()>(&GlobalNamespace::GlobalNamespace__SliderController__Pool__Short::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2249ac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SliderController__Pool__Short>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 GlobalNamespace::GlobalNamespace__SliderController__Pool__Short GlobalNamespace::GlobalNamespace__SliderController__Pool__Short::New_ctor()  {
GlobalNamespace::GlobalNamespace__SliderController__Pool__Short o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__SliderController__Pool__Short>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__SliderController__Pool__Short::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SliderController__Pool__Short>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__SliderController__Pool__Medium._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__SliderController__Pool__Medium::*)()>(&GlobalNamespace::GlobalNamespace__SliderController__Pool__Medium::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2249b08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SliderController__Pool__Medium>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 GlobalNamespace::GlobalNamespace__SliderController__Pool__Medium GlobalNamespace::GlobalNamespace__SliderController__Pool__Medium::New_ctor()  {
GlobalNamespace::GlobalNamespace__SliderController__Pool__Medium o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__SliderController__Pool__Medium>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__SliderController__Pool__Medium::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SliderController__Pool__Medium>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__SliderController__Pool__Long._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__SliderController__Pool__Long::*)()>(&GlobalNamespace::GlobalNamespace__SliderController__Pool__Long::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2249b50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SliderController__Pool__Long>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 GlobalNamespace::GlobalNamespace__SliderController__Pool__Long GlobalNamespace::GlobalNamespace__SliderController__Pool__Long::New_ctor()  {
GlobalNamespace::GlobalNamespace__SliderController__Pool__Long o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__SliderController__Pool__Long>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__SliderController__Pool__Long::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SliderController__Pool__Long>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__SliderController__Pool._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__SliderController__Pool::*)(GlobalNamespace::GlobalNamespace__SliderController__Pool__Short, GlobalNamespace::GlobalNamespace__SliderController__Pool__Medium, GlobalNamespace::GlobalNamespace__SliderController__Pool__Long)>(&GlobalNamespace::GlobalNamespace__SliderController__Pool::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x224998c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SliderController__Pool>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__SliderController__Pool__Short>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__SliderController__Pool__Medium>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__SliderController__Pool__Long>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__SliderController__Pool.GetPool
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::MonoMemoryPool_1<GlobalNamespace::SliderController> (GlobalNamespace::GlobalNamespace__SliderController__Pool::*)(GlobalNamespace::GlobalNamespace__SliderController__LengthType)>(&GlobalNamespace::GlobalNamespace__SliderController__Pool::GetPool)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x22499c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SliderController__Pool>::get(),
                            "GetPool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__SliderController__LengthType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__SliderController__Pool.GetLengthFromSliderData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__SliderController__LengthType (*)(GlobalNamespace::SliderData, GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData)>(&GlobalNamespace::GlobalNamespace__SliderController__Pool::GetLengthFromSliderData)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2249a68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SliderController__Pool>::get(),
                            "GetLengthFromSliderData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SliderData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__SliderController__Pool::__set__shortPool(GlobalNamespace::GlobalNamespace__SliderController__Pool__Short value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__SliderController__Pool__Short, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__SliderController__Pool__Short>(value));
}
constexpr GlobalNamespace::GlobalNamespace__SliderController__Pool__Short GlobalNamespace::GlobalNamespace__SliderController__Pool::__get__shortPool() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__SliderController__Pool__Short, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SliderController__Pool::__set__mediumPool(GlobalNamespace::GlobalNamespace__SliderController__Pool__Medium value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__SliderController__Pool__Medium, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__SliderController__Pool__Medium>(value));
}
constexpr GlobalNamespace::GlobalNamespace__SliderController__Pool__Medium GlobalNamespace::GlobalNamespace__SliderController__Pool::__get__mediumPool() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__SliderController__Pool__Medium, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SliderController__Pool::__set__longPool(GlobalNamespace::GlobalNamespace__SliderController__Pool__Long value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__SliderController__Pool__Long, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__SliderController__Pool__Long>(value));
}
constexpr GlobalNamespace::GlobalNamespace__SliderController__Pool__Long GlobalNamespace::GlobalNamespace__SliderController__Pool::__get__longPool() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__SliderController__Pool__Long, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__SliderController__Pool GlobalNamespace::GlobalNamespace__SliderController__Pool::New_ctor(GlobalNamespace::GlobalNamespace__SliderController__Pool__Short shortPool, GlobalNamespace::GlobalNamespace__SliderController__Pool__Medium mediumPool, GlobalNamespace::GlobalNamespace__SliderController__Pool__Long longPool)  {
GlobalNamespace::GlobalNamespace__SliderController__Pool o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__SliderController__Pool>(shortPool, mediumPool, longPool))};
return o;
}
 void GlobalNamespace::GlobalNamespace__SliderController__Pool::_ctor(GlobalNamespace::GlobalNamespace__SliderController__Pool__Short shortPool, GlobalNamespace::GlobalNamespace__SliderController__Pool__Medium mediumPool, GlobalNamespace::GlobalNamespace__SliderController__Pool__Long longPool)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SliderController__Pool>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__SliderController__Pool__Short>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__SliderController__Pool__Medium>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__SliderController__Pool__Long>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, shortPool, mediumPool, longPool);
}
 Zenject::MonoMemoryPool_1<GlobalNamespace::SliderController> GlobalNamespace::GlobalNamespace__SliderController__Pool::GetPool(GlobalNamespace::GlobalNamespace__SliderController__LengthType lengthType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SliderController__Pool>::get(),
                            "GetPool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__SliderController__LengthType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::MonoMemoryPool_1<GlobalNamespace::SliderController>, false>(const_cast<void*>(instance), ___internal_method, lengthType);
}
 GlobalNamespace::GlobalNamespace__SliderController__LengthType GlobalNamespace::GlobalNamespace__SliderController__Pool::GetLengthFromSliderData(GlobalNamespace::SliderData sliderNoteData, GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData sliderSpawnData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SliderController__Pool>::get(),
                            "GetLengthFromSliderData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SliderData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__SliderController__LengthType, false>(nullptr, ___internal_method, sliderNoteData, sliderSpawnData);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70::*)(int32_t)>(&GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2248f74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70::*)()>(&GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2249b98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70::*)()>(&GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70::MoveNext)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x2249b9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70::*)()>(&GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2249f88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70::*)()>(&GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2249f90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70::*)()>(&GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2249fd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr  GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70::operator System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept {
return System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70::__set___2__current(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70::__get___2__current() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70::__set___4__this(GlobalNamespace::SliderController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SliderController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SliderController>(value));
}
constexpr GlobalNamespace::SliderController GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SliderController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70::__set_duration(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70::__get_duration() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70 GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70::New_ctor(int32_t __1__state)  {
GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70 o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70>(__1__state))};
return o;
}
 void GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SliderController___DissolveCoroutine_d__70>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
