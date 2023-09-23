#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SpawnRotationChevronManager_def.hpp"
#include "GlobalNamespace/zzzz__SpawnRotationChevron_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectData_def.hpp"
#include "GlobalNamespace/zzzz__SpawnRotationBeatmapEventData_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnController_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__SpawnRotationChevron_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__SpawnRotationChevronManager__DirectionData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__SpawnRotationChevronManager__DirectionData::*)()>(&GlobalNamespace::GlobalNamespace__SpawnRotationChevronManager__DirectionData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x226b8b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SpawnRotationChevronManager__DirectionData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__SpawnRotationChevronManager__DirectionData::__set_chevron(GlobalNamespace::SpawnRotationChevron value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SpawnRotationChevron, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SpawnRotationChevron>(value));
}
constexpr GlobalNamespace::SpawnRotationChevron GlobalNamespace::GlobalNamespace__SpawnRotationChevronManager__DirectionData::__get_chevron() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SpawnRotationChevron, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SpawnRotationChevronManager__DirectionData::__set_fullyLid(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__SpawnRotationChevronManager__DirectionData::__get_fullyLid() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SpawnRotationChevronManager__DirectionData::__set_fadeOutStartTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__SpawnRotationChevronManager__DirectionData::__get_fadeOutStartTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SpawnRotationChevronManager__DirectionData::__set_fadeInEndTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__SpawnRotationChevronManager__DirectionData::__get_fadeInEndTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__SpawnRotationChevronManager__DirectionData::GlobalNamespace__SpawnRotationChevronManager__DirectionData()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__SpawnRotationChevronManager__DirectionData>())) {}
 void GlobalNamespace::GlobalNamespace__SpawnRotationChevronManager__DirectionData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SpawnRotationChevronManager__DirectionData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::SpawnRotationChevronManager.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpawnRotationChevronManager::*)()>(&GlobalNamespace::SpawnRotationChevronManager::Start)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x226a748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpawnRotationChevronManager>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SpawnRotationChevronManager.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpawnRotationChevronManager::*)()>(&GlobalNamespace::SpawnRotationChevronManager::Update)> {
  constexpr static std::size_t size = 0xa64;
  constexpr static std::size_t addrs = 0x226a9fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpawnRotationChevronManager>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SpawnRotationChevronManager.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpawnRotationChevronManager::*)()>(&GlobalNamespace::SpawnRotationChevronManager::OnDestroy)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x226b460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpawnRotationChevronManager>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SpawnRotationChevronManager.HandleBeatmapObjectCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpawnRotationChevronManager::*)(GlobalNamespace::BeatmapObjectData)>(&GlobalNamespace::SpawnRotationChevronManager::HandleBeatmapObjectCallback)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x226b55c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpawnRotationChevronManager>::get(),
                            "HandleBeatmapObjectCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapObjectData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SpawnRotationChevronManager.HandleSpawnRotationBeatmapEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpawnRotationChevronManager::*)(GlobalNamespace::SpawnRotationBeatmapEventData)>(&GlobalNamespace::SpawnRotationChevronManager::HandleSpawnRotationBeatmapEvent)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x226b8c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpawnRotationChevronManager>::get(),
                            "HandleSpawnRotationBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SpawnRotationBeatmapEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SpawnRotationChevronManager.HandleBeatmapObjectSpawnControllerDidInit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpawnRotationChevronManager::*)()>(&GlobalNamespace::SpawnRotationChevronManager::HandleBeatmapObjectSpawnControllerDidInit)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x226a8b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpawnRotationChevronManager>::get(),
                            "HandleBeatmapObjectSpawnControllerDidInit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SpawnRotationChevronManager.ComputeAheadTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::SpawnRotationChevronManager::*)()>(&GlobalNamespace::SpawnRotationChevronManager::ComputeAheadTime)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x226b8dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpawnRotationChevronManager>::get(),
                            "ComputeAheadTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SpawnRotationChevronManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpawnRotationChevronManager::*)()>(&GlobalNamespace::SpawnRotationChevronManager::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x226b938;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpawnRotationChevronManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SpawnRotationChevronManager::__set__fadeInTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::SpawnRotationChevronManager::__get__fadeInTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SpawnRotationChevronManager::__set__fadeOutTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::SpawnRotationChevronManager::__get__fadeOutTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SpawnRotationChevronManager::__set__jumpStartOffsetTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::SpawnRotationChevronManager::__get__jumpStartOffsetTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SpawnRotationChevronManager::__set__cutOffsetTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::SpawnRotationChevronManager::__get__cutOffsetTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SpawnRotationChevronManager::__set__fadeInLightAmountCurve(UnityEngine::AnimationCurve value)  {
::cordl_internals::setInstanceField<UnityEngine::AnimationCurve, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AnimationCurve>(value));
}
constexpr UnityEngine::AnimationCurve GlobalNamespace::SpawnRotationChevronManager::__get__fadeInLightAmountCurve() const {
return ::cordl_internals::getInstanceField<UnityEngine::AnimationCurve, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SpawnRotationChevronManager::__set__fadeOutLightAmountCurve(UnityEngine::AnimationCurve value)  {
::cordl_internals::setInstanceField<UnityEngine::AnimationCurve, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AnimationCurve>(value));
}
constexpr UnityEngine::AnimationCurve GlobalNamespace::SpawnRotationChevronManager::__get__fadeOutLightAmountCurve() const {
return ::cordl_internals::getInstanceField<UnityEngine::AnimationCurve, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SpawnRotationChevronManager::__set__chevronPool(GlobalNamespace::GlobalNamespace__SpawnRotationChevron__Pool value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__SpawnRotationChevron__Pool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__SpawnRotationChevron__Pool>(value));
}
constexpr GlobalNamespace::GlobalNamespace__SpawnRotationChevron__Pool GlobalNamespace::SpawnRotationChevronManager::__get__chevronPool() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__SpawnRotationChevron__Pool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SpawnRotationChevronManager::__set__audioTimeSyncController(GlobalNamespace::IAudioTimeSource value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IAudioTimeSource, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IAudioTimeSource>(value));
}
constexpr GlobalNamespace::IAudioTimeSource GlobalNamespace::SpawnRotationChevronManager::__get__audioTimeSyncController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IAudioTimeSource, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SpawnRotationChevronManager::__set__beatmapObjectSpawnController(GlobalNamespace::BeatmapObjectSpawnController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapObjectSpawnController, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapObjectSpawnController>(value));
}
constexpr GlobalNamespace::BeatmapObjectSpawnController GlobalNamespace::SpawnRotationChevronManager::__get__beatmapObjectSpawnController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapObjectSpawnController, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SpawnRotationChevronManager::__set__beatmapCallbacksController(GlobalNamespace::BeatmapCallbacksController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapCallbacksController, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapCallbacksController>(value));
}
constexpr GlobalNamespace::BeatmapCallbacksController GlobalNamespace::SpawnRotationChevronManager::__get__beatmapCallbacksController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapCallbacksController, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SpawnRotationChevronManager::__set__spawnRotationDataCallbackWrapper(GlobalNamespace::BeatmapDataCallbackWrapper value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapDataCallbackWrapper, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapDataCallbackWrapper>(value));
}
constexpr GlobalNamespace::BeatmapDataCallbackWrapper GlobalNamespace::SpawnRotationChevronManager::__get__spawnRotationDataCallbackWrapper() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapDataCallbackWrapper, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SpawnRotationChevronManager::__set__beatmapObjectDataCallbackWrapper(GlobalNamespace::BeatmapDataCallbackWrapper value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapDataCallbackWrapper, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapDataCallbackWrapper>(value));
}
constexpr GlobalNamespace::BeatmapDataCallbackWrapper GlobalNamespace::SpawnRotationChevronManager::__get__beatmapObjectDataCallbackWrapper() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapDataCallbackWrapper, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SpawnRotationChevronManager::__set__directionToDataDictionary(System::Collections::Generic::Dictionary_2<int32_t,GlobalNamespace::GlobalNamespace__SpawnRotationChevronManager__DirectionData> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<int32_t,GlobalNamespace::GlobalNamespace__SpawnRotationChevronManager__DirectionData>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<int32_t,GlobalNamespace::GlobalNamespace__SpawnRotationChevronManager__DirectionData>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<int32_t,GlobalNamespace::GlobalNamespace__SpawnRotationChevronManager__DirectionData> GlobalNamespace::SpawnRotationChevronManager::__get__directionToDataDictionary() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<int32_t,GlobalNamespace::GlobalNamespace__SpawnRotationChevronManager__DirectionData>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SpawnRotationChevronManager::__set__activeDirections(System::Collections::Generic::HashSet_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::HashSet_1<int32_t>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::HashSet_1<int32_t>>(value));
}
constexpr System::Collections::Generic::HashSet_1<int32_t> GlobalNamespace::SpawnRotationChevronManager::__get__activeDirections() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::HashSet_1<int32_t>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SpawnRotationChevronManager::__set__reusableDirectionsList(System::Collections::Generic::List_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<int32_t>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<int32_t>>(value));
}
constexpr System::Collections::Generic::List_1<int32_t> GlobalNamespace::SpawnRotationChevronManager::__get__reusableDirectionsList() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<int32_t>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SpawnRotationChevronManager::__set__moveDuration(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::SpawnRotationChevronManager::__get__moveDuration() const {
return ::cordl_internals::getInstanceField<float_t, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SpawnRotationChevronManager::__set__halfJumpDuration(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x84>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::SpawnRotationChevronManager::__get__halfJumpDuration() const {
return ::cordl_internals::getInstanceField<float_t, 0x84>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SpawnRotationChevronManager::__set__currentSpawnRotation(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::SpawnRotationChevronManager::__get__currentSpawnRotation() const {
return ::cordl_internals::getInstanceField<float_t, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::SpawnRotationChevronManager::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpawnRotationChevronManager>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::SpawnRotationChevronManager::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpawnRotationChevronManager>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::SpawnRotationChevronManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpawnRotationChevronManager>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::SpawnRotationChevronManager::HandleBeatmapObjectCallback(GlobalNamespace::BeatmapObjectData beatmapObjectData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpawnRotationChevronManager>::get(),
                            "HandleBeatmapObjectCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapObjectData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapObjectData);
}
 void GlobalNamespace::SpawnRotationChevronManager::HandleSpawnRotationBeatmapEvent(GlobalNamespace::SpawnRotationBeatmapEventData beatmapEventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpawnRotationChevronManager>::get(),
                            "HandleSpawnRotationBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SpawnRotationBeatmapEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapEventData);
}
 void GlobalNamespace::SpawnRotationChevronManager::HandleBeatmapObjectSpawnControllerDidInit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpawnRotationChevronManager>::get(),
                            "HandleBeatmapObjectSpawnControllerDidInit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::SpawnRotationChevronManager::ComputeAheadTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpawnRotationChevronManager>::get(),
                            "ComputeAheadTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::SpawnRotationChevronManager::SpawnRotationChevronManager()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<SpawnRotationChevronManager>())) {}
 void GlobalNamespace::SpawnRotationChevronManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpawnRotationChevronManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
