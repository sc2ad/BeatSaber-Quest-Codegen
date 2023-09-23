#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PosesPlayback_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberLogger_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__PoseObject_def.hpp"
#include "GlobalNamespace/zzzz__PosesRecordingData_def.hpp"
//  Writing Method size for method: GlobalNamespace::PosesPlayback.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PosesPlayback::*)()>(&GlobalNamespace::PosesPlayback::Update)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x21a64e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PosesPlayback>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PosesPlayback.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PosesPlayback::*)(::ArrayW<GlobalNamespace::PoseObject>, GlobalNamespace::PosesRecordingData, GlobalNamespace::IBeatSaberLogger)>(&GlobalNamespace::PosesPlayback::Init)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x21a46c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PosesPlayback>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<GlobalNamespace::PoseObject>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PosesRecordingData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatSaberLogger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PosesPlayback.StartPlayback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PosesPlayback::*)()>(&GlobalNamespace::PosesPlayback::StartPlayback)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x21a4d68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PosesPlayback>::get(),
                            "StartPlayback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PosesPlayback.PlaybackTick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PosesPlayback::*)(float_t)>(&GlobalNamespace::PosesPlayback::PlaybackTick)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x21a6504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PosesPlayback>::get(),
                            "PlaybackTick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PosesPlayback.StopPlayback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PosesPlayback::*)()>(&GlobalNamespace::PosesPlayback::StopPlayback)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21a4ce0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PosesPlayback>::get(),
                            "StopPlayback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PosesPlayback._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PosesPlayback::*)()>(&GlobalNamespace::PosesPlayback::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21a68a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PosesPlayback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::PosesPlayback::__set__audioTimeSyncController(GlobalNamespace::AudioTimeSyncController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AudioTimeSyncController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AudioTimeSyncController>(value));
}
constexpr GlobalNamespace::AudioTimeSyncController GlobalNamespace::PosesPlayback::__get__audioTimeSyncController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AudioTimeSyncController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PosesPlayback::__set__logger(GlobalNamespace::IBeatSaberLogger value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IBeatSaberLogger, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IBeatSaberLogger>(value));
}
constexpr GlobalNamespace::IBeatSaberLogger GlobalNamespace::PosesPlayback::__get__logger() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IBeatSaberLogger, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PosesPlayback::__set__transforms(::ArrayW<UnityEngine::Transform> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::Transform>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::Transform>>(value));
}
constexpr ::ArrayW<UnityEngine::Transform> GlobalNamespace::PosesPlayback::__get__transforms() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::Transform>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PosesPlayback::__set__data(GlobalNamespace::PosesRecordingData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PosesRecordingData, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PosesRecordingData>(value));
}
constexpr GlobalNamespace::PosesRecordingData GlobalNamespace::PosesPlayback::__get__data() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PosesRecordingData, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PosesPlayback::__set__keyframeIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::PosesPlayback::__get__keyframeIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::PosesPlayback::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PosesPlayback>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PosesPlayback::Init(::ArrayW<GlobalNamespace::PoseObject> poseObjects, GlobalNamespace::PosesRecordingData data, GlobalNamespace::IBeatSaberLogger logger)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PosesPlayback>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<GlobalNamespace::PoseObject>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PosesRecordingData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatSaberLogger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, poseObjects, data, logger);
}
 void GlobalNamespace::PosesPlayback::StartPlayback()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PosesPlayback>::get(),
                            "StartPlayback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::PosesPlayback::PlaybackTick(float_t time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PosesPlayback>::get(),
                            "PlaybackTick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, time);
}
 void GlobalNamespace::PosesPlayback::StopPlayback()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PosesPlayback>::get(),
                            "StopPlayback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::PosesPlayback::PosesPlayback()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<PosesPlayback>())) {}
 void GlobalNamespace::PosesPlayback::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PosesPlayback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
