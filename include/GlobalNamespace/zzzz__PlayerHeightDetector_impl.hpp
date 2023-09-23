#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerHeightDetector_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleData_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "GlobalNamespace/zzzz__PlayerTransforms_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__PlayerHeightDetector__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__PlayerHeightDetector__InitData::*)(float_t, float_t)>(&GlobalNamespace::GlobalNamespace__PlayerHeightDetector__InitData::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x210983c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlayerHeightDetector__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__PlayerHeightDetector__InitData::__set_headPosToPlayerHeightOffset(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__PlayerHeightDetector__InitData::__get_headPosToPlayerHeightOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__PlayerHeightDetector__InitData::__set_startPlayerHeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__PlayerHeightDetector__InitData::__get_startPlayerHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "headPosToPlayerHeightOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "startPlayerHeight", ty: "float_t", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__PlayerHeightDetector__InitData::GlobalNamespace__PlayerHeightDetector__InitData(float_t headPosToPlayerHeightOffset, float_t startPlayerHeight)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__PlayerHeightDetector__InitData>(headPosToPlayerHeightOffset, startPlayerHeight))) {}
 void GlobalNamespace::GlobalNamespace__PlayerHeightDetector__InitData::_ctor(float_t headPosToPlayerHeightOffset, float_t startPlayerHeight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__PlayerHeightDetector__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, headPosToPlayerHeightOffset, startPlayerHeight);
}
//  Writing Method size for method: GlobalNamespace::PlayerHeightDetector.add_playerHeightDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerHeightDetector::*)(System::Action_1<float_t>)>(&GlobalNamespace::PlayerHeightDetector::add_playerHeightDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21093bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerHeightDetector>::get(),
                            "add_playerHeightDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerHeightDetector.remove_playerHeightDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerHeightDetector::*)(System::Action_1<float_t>)>(&GlobalNamespace::PlayerHeightDetector::remove_playerHeightDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x210946c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerHeightDetector>::get(),
                            "remove_playerHeightDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerHeightDetector.get_playerHeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::PlayerHeightDetector::*)()>(&GlobalNamespace::PlayerHeightDetector::get_playerHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x210951c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerHeightDetector>::get(),
                            "get_playerHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerHeightDetector.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerHeightDetector::*)()>(&GlobalNamespace::PlayerHeightDetector::Start)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2109524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerHeightDetector>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerHeightDetector.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerHeightDetector::*)()>(&GlobalNamespace::PlayerHeightDetector::OnDestroy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2109608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerHeightDetector>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerHeightDetector.LateUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerHeightDetector::*)()>(&GlobalNamespace::PlayerHeightDetector::LateUpdate)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x2109624;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerHeightDetector>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerHeightDetector.BeatmapObjectSpawnCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerHeightDetector::*)(GlobalNamespace::ObstacleData)>(&GlobalNamespace::PlayerHeightDetector::BeatmapObjectSpawnCallback)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x21097f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerHeightDetector>::get(),
                            "BeatmapObjectSpawnCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ObstacleData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerHeightDetector._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerHeightDetector::*)()>(&GlobalNamespace::PlayerHeightDetector::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2109834;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerHeightDetector>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::PlayerHeightDetector::__set__playerTransforms(GlobalNamespace::PlayerTransforms value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PlayerTransforms, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PlayerTransforms>(value));
}
constexpr GlobalNamespace::PlayerTransforms GlobalNamespace::PlayerHeightDetector::__get__playerTransforms() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PlayerTransforms, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerHeightDetector::__set__beatmapCallbacksController(GlobalNamespace::BeatmapCallbacksController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapCallbacksController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapCallbacksController>(value));
}
constexpr GlobalNamespace::BeatmapCallbacksController GlobalNamespace::PlayerHeightDetector::__get__beatmapCallbacksController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapCallbacksController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerHeightDetector::__set__audioTimeSyncController(GlobalNamespace::IAudioTimeSource value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IAudioTimeSource, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IAudioTimeSource>(value));
}
constexpr GlobalNamespace::IAudioTimeSource GlobalNamespace::PlayerHeightDetector::__get__audioTimeSyncController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IAudioTimeSource, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerHeightDetector::__set__initData(GlobalNamespace::GlobalNamespace__PlayerHeightDetector__InitData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__PlayerHeightDetector__InitData, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__PlayerHeightDetector__InitData>(value));
}
constexpr GlobalNamespace::GlobalNamespace__PlayerHeightDetector__InitData GlobalNamespace::PlayerHeightDetector::__get__initData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__PlayerHeightDetector__InitData, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerHeightDetector::__set_playerHeightDidChangeEvent(System::Action_1<float_t> value)  {
::cordl_internals::setInstanceField<System::Action_1<float_t>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<float_t>>(value));
}
constexpr System::Action_1<float_t> GlobalNamespace::PlayerHeightDetector::__get_playerHeightDidChangeEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<float_t>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerHeightDetector::__set__beatmapObjectCallbackWrapper(GlobalNamespace::BeatmapDataCallbackWrapper value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapDataCallbackWrapper, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapDataCallbackWrapper>(value));
}
constexpr GlobalNamespace::BeatmapDataCallbackWrapper GlobalNamespace::PlayerHeightDetector::__get__beatmapObjectCallbackWrapper() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapDataCallbackWrapper, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerHeightDetector::__set__noTopObstaclesStartTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::PlayerHeightDetector::__get__noTopObstaclesStartTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerHeightDetector::__set__computedPlayerHeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::PlayerHeightDetector::__get__computedPlayerHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerHeightDetector::__set__changeWeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::PlayerHeightDetector::__get__changeWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerHeightDetector::__set__lastReportedHeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x54>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::PlayerHeightDetector::__get__lastReportedHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x54>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::PlayerHeightDetector::add_playerHeightDidChangeEvent(System::Action_1<float_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerHeightDetector>::get(),
                            "add_playerHeightDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::PlayerHeightDetector::remove_playerHeightDidChangeEvent(System::Action_1<float_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerHeightDetector>::get(),
                            "remove_playerHeightDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t GlobalNamespace::PlayerHeightDetector::get_playerHeight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerHeightDetector>::get(),
                            "get_playerHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PlayerHeightDetector::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerHeightDetector>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PlayerHeightDetector::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerHeightDetector>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PlayerHeightDetector::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerHeightDetector>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PlayerHeightDetector::BeatmapObjectSpawnCallback(GlobalNamespace::ObstacleData obstacleData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerHeightDetector>::get(),
                            "BeatmapObjectSpawnCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ObstacleData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obstacleData);
}
// Ctor Parameters []
 GlobalNamespace::PlayerHeightDetector::PlayerHeightDetector()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<PlayerHeightDetector>())) {}
 void GlobalNamespace::PlayerHeightDetector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerHeightDetector>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
