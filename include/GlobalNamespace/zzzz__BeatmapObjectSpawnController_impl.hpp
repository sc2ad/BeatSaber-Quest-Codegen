#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapObjectSpawner_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnMovementData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleData_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__IJumpOffsetYProvider_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapObjectSpawnController_def.hpp"
#include "GlobalNamespace/zzzz__SliderData_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "GlobalNamespace/zzzz__SpawnRotationBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnMovementData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnController__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnController__InitData::*)(float_t, int32_t, float_t, ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType, float_t)>(&::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnController__InitData::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2236cdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnController__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnController__InitData::__set_beatsPerMinute(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnController__InitData::__get_beatsPerMinute() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnController__InitData::__set_noteLinesCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnController__InitData::__get_noteLinesCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnController__InitData::__set_noteJumpMovementSpeed(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnController__InitData::__get_noteJumpMovementSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnController__InitData::__set_noteJumpValueType(::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnController__InitData::__get_noteJumpValueType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnController__InitData::__set_noteJumpValue(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnController__InitData::__get_noteJumpValue() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "beatsPerMinute", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "noteLinesCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "noteJumpMovementSpeed", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "noteJumpValueType", ty: "::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType", modifiers: "", def_value: None }, CppParam { name: "noteJumpValue", ty: "float_t", modifiers: "", def_value: None }]
 ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnController__InitData::____GlobalNamespace__BeatmapObjectSpawnController__InitData(float_t beatsPerMinute, int32_t noteLinesCount, float_t noteJumpMovementSpeed, ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType noteJumpValueType, float_t noteJumpValue)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__BeatmapObjectSpawnController__InitData>(beatsPerMinute, noteLinesCount, noteJumpMovementSpeed, noteJumpValueType, noteJumpValue))) {}
 void ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnController__InitData::_ctor(float_t beatsPerMinute, int32_t noteLinesCount, float_t noteJumpMovementSpeed, ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType noteJumpValueType, float_t noteJumpValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnController__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnMovementData__NoteJumpValueType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatsPerMinute, noteLinesCount, noteJumpMovementSpeed, noteJumpValueType, noteJumpValue);
}
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnController.get_noteLinesCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::BeatmapObjectSpawnController::*)()>(&::GlobalNamespace::BeatmapObjectSpawnController::get_noteLinesCount)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2235c04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController>::get(),
                            "get_noteLinesCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnController.get_jumpOffsetY
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnController::*)()>(&::GlobalNamespace::BeatmapObjectSpawnController::get_jumpOffsetY)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2235c20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController>::get(),
                            "get_jumpOffsetY",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnController.get_moveDuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnController::*)()>(&::GlobalNamespace::BeatmapObjectSpawnController::get_moveDuration)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2235cd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController>::get(),
                            "get_moveDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnController.get_jumpDuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnController::*)()>(&::GlobalNamespace::BeatmapObjectSpawnController::get_jumpDuration)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2235cf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController>::get(),
                            "get_jumpDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnController.get_jumpDistance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnController::*)()>(&::GlobalNamespace::BeatmapObjectSpawnController::get_jumpDistance)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2235d10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController>::get(),
                            "get_jumpDistance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnController.get_verticalLayerDistance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnController::*)()>(&::GlobalNamespace::BeatmapObjectSpawnController::get_verticalLayerDistance)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2235d2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController>::get(),
                            "get_verticalLayerDistance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnController.get_noteJumpMovementSpeed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnController::*)()>(&::GlobalNamespace::BeatmapObjectSpawnController::get_noteJumpMovementSpeed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2235d58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController>::get(),
                            "get_noteJumpMovementSpeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnController.get_noteLinesDistance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnController::*)()>(&::GlobalNamespace::BeatmapObjectSpawnController::get_noteLinesDistance)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2235d74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController>::get(),
                            "get_noteLinesDistance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnController.get_beatmapObjectSpawnMovementData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapObjectSpawnMovementData (::GlobalNamespace::BeatmapObjectSpawnController::*)()>(&::GlobalNamespace::BeatmapObjectSpawnController::get_beatmapObjectSpawnMovementData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2235da0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController>::get(),
                            "get_beatmapObjectSpawnMovementData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnController.get_isInitialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::BeatmapObjectSpawnController::*)()>(&::GlobalNamespace::BeatmapObjectSpawnController::get_isInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2235da8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController>::get(),
                            "get_isInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnController.add_didInitEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectSpawnController::*)(::System::Action)>(&::GlobalNamespace::BeatmapObjectSpawnController::add_didInitEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2235db0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController>::get(),
                            "add_didInitEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnController.remove_didInitEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectSpawnController::*)(::System::Action)>(&::GlobalNamespace::BeatmapObjectSpawnController::remove_didInitEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2235e4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController>::get(),
                            "remove_didInitEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnController.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectSpawnController::*)()>(&::GlobalNamespace::BeatmapObjectSpawnController::Start)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x2235ee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnController.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectSpawnController::*)()>(&::GlobalNamespace::BeatmapObjectSpawnController::OnDestroy)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x22363bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnController.HandleObstacleDataCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectSpawnController::*)(::GlobalNamespace::ObstacleData)>(&::GlobalNamespace::BeatmapObjectSpawnController::HandleObstacleDataCallback)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2236414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController>::get(),
                            "HandleObstacleDataCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnController.HandleNoteDataCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectSpawnController::*)(::GlobalNamespace::NoteData)>(&::GlobalNamespace::BeatmapObjectSpawnController::HandleNoteDataCallback)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2236694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController>::get(),
                            "HandleNoteDataCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnController.HandleSliderDataCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectSpawnController::*)(::GlobalNamespace::SliderData)>(&::GlobalNamespace::BeatmapObjectSpawnController::HandleSliderDataCallback)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2236894;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController>::get(),
                            "HandleSliderDataCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnController.HandleSpawnRotationCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectSpawnController::*)(::GlobalNamespace::SpawnRotationBeatmapEventData)>(&::GlobalNamespace::BeatmapObjectSpawnController::HandleSpawnRotationCallback)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2236b34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController>::get(),
                            "HandleSpawnRotationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SpawnRotationBeatmapEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnController.StopSpawning
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectSpawnController::*)()>(&::GlobalNamespace::BeatmapObjectSpawnController::StopSpawning)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2236b50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController>::get(),
                            "StopSpawning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnController.Get2DNoteOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::BeatmapObjectSpawnController::*)(int32_t, ::GlobalNamespace::NoteLineLayer)>(&::GlobalNamespace::BeatmapObjectSpawnController::Get2DNoteOffset)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2236b5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController>::get(),
                            "Get2DNoteOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnController.JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnController::*)(::GlobalNamespace::NoteLineLayer, float_t)>(&::GlobalNamespace::BeatmapObjectSpawnController::JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2236b94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController>::get(),
                            "JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapObjectSpawnController::*)()>(&::GlobalNamespace::BeatmapObjectSpawnController::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2236c1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::GlobalNamespace::IBeatmapObjectSpawnController
constexpr  ::GlobalNamespace::BeatmapObjectSpawnController::operator ::GlobalNamespace::IBeatmapObjectSpawnController() const noexcept {
return ::GlobalNamespace::IBeatmapObjectSpawnController(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectSpawnController::__set__beatmapObjectSpawnMovementData(::GlobalNamespace::BeatmapObjectSpawnMovementData value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapObjectSpawnMovementData, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BeatmapObjectSpawnMovementData>(value));
}
constexpr ::GlobalNamespace::BeatmapObjectSpawnMovementData ::GlobalNamespace::BeatmapObjectSpawnController::__get__beatmapObjectSpawnMovementData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapObjectSpawnMovementData, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectSpawnController::__set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapCallbacksController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BeatmapCallbacksController>(value));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController ::GlobalNamespace::BeatmapObjectSpawnController::__get__beatmapCallbacksController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCallbacksController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectSpawnController::__set__beatmapObjectSpawner(::GlobalNamespace::IBeatmapObjectSpawner value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IBeatmapObjectSpawner, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IBeatmapObjectSpawner>(value));
}
constexpr ::GlobalNamespace::IBeatmapObjectSpawner ::GlobalNamespace::BeatmapObjectSpawnController::__get__beatmapObjectSpawner() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatmapObjectSpawner, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectSpawnController::__set__jumpOffsetYProvider(::GlobalNamespace::IJumpOffsetYProvider value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IJumpOffsetYProvider, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IJumpOffsetYProvider>(value));
}
constexpr ::GlobalNamespace::IJumpOffsetYProvider ::GlobalNamespace::BeatmapObjectSpawnController::__get__jumpOffsetYProvider() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IJumpOffsetYProvider, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectSpawnController::__set__initData(::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnController__InitData value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnController__InitData, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnController__InitData>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnController__InitData ::GlobalNamespace::BeatmapObjectSpawnController::__get__initData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__BeatmapObjectSpawnController__InitData, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectSpawnController::__set_didInitEvent(::System::Action value)  {
::cordl_internals::setInstanceField<::System::Action, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action>(value));
}
constexpr ::System::Action ::GlobalNamespace::BeatmapObjectSpawnController::__get_didInitEvent() const {
return ::cordl_internals::getInstanceField<::System::Action, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectSpawnController::__set__disableSpawning(bool value)  {
::cordl_internals::setInstanceField<bool, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::BeatmapObjectSpawnController::__get__disableSpawning() const {
return ::cordl_internals::getInstanceField<bool, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectSpawnController::__set__isInitialized(bool value)  {
::cordl_internals::setInstanceField<bool, 0x49>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::BeatmapObjectSpawnController::__get__isInitialized() const {
return ::cordl_internals::getInstanceField<bool, 0x49>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectSpawnController::__set__obstacleDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BeatmapDataCallbackWrapper>(value));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper ::GlobalNamespace::BeatmapObjectSpawnController::__get__obstacleDataCallbackWrapper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectSpawnController::__set__noteDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BeatmapDataCallbackWrapper>(value));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper ::GlobalNamespace::BeatmapObjectSpawnController::__get__noteDataCallbackWrapper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectSpawnController::__set__sliderDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BeatmapDataCallbackWrapper>(value));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper ::GlobalNamespace::BeatmapObjectSpawnController::__get__sliderDataCallbackWrapper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectSpawnController::__set__spawnRotationCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BeatmapDataCallbackWrapper>(value));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper ::GlobalNamespace::BeatmapObjectSpawnController::__get__spawnRotationCallbackWrapper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapObjectSpawnController::__set__spawnRotation(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::BeatmapObjectSpawnController::__get__spawnRotation() const {
return ::cordl_internals::getInstanceField<float_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
 int32_t ::GlobalNamespace::BeatmapObjectSpawnController::get_noteLinesCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController>::get(),
                            "get_noteLinesCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::BeatmapObjectSpawnController::get_jumpOffsetY()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController>::get(),
                            "get_jumpOffsetY",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::BeatmapObjectSpawnController::get_moveDuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController>::get(),
                            "get_moveDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::BeatmapObjectSpawnController::get_jumpDuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController>::get(),
                            "get_jumpDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::BeatmapObjectSpawnController::get_jumpDistance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController>::get(),
                            "get_jumpDistance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::BeatmapObjectSpawnController::get_verticalLayerDistance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController>::get(),
                            "get_verticalLayerDistance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::BeatmapObjectSpawnController::get_noteJumpMovementSpeed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController>::get(),
                            "get_noteJumpMovementSpeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::BeatmapObjectSpawnController::get_noteLinesDistance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController>::get(),
                            "get_noteLinesDistance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::GlobalNamespace::BeatmapObjectSpawnMovementData ::GlobalNamespace::BeatmapObjectSpawnController::get_beatmapObjectSpawnMovementData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController>::get(),
                            "get_beatmapObjectSpawnMovementData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapObjectSpawnMovementData, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::BeatmapObjectSpawnController::get_isInitialized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController>::get(),
                            "get_isInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::BeatmapObjectSpawnController::add_didInitEvent(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController>::get(),
                            "add_didInitEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::BeatmapObjectSpawnController::remove_didInitEvent(::System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController>::get(),
                            "remove_didInitEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::BeatmapObjectSpawnController::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::BeatmapObjectSpawnController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::BeatmapObjectSpawnController::HandleObstacleDataCallback(::GlobalNamespace::ObstacleData obstacleData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController>::get(),
                            "HandleObstacleDataCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obstacleData);
}
 void ::GlobalNamespace::BeatmapObjectSpawnController::HandleNoteDataCallback(::GlobalNamespace::NoteData noteData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController>::get(),
                            "HandleNoteDataCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, noteData);
}
 void ::GlobalNamespace::BeatmapObjectSpawnController::HandleSliderDataCallback(::GlobalNamespace::SliderData sliderNoteData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController>::get(),
                            "HandleSliderDataCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sliderNoteData);
}
 void ::GlobalNamespace::BeatmapObjectSpawnController::HandleSpawnRotationCallback(::GlobalNamespace::SpawnRotationBeatmapEventData beatmapEventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController>::get(),
                            "HandleSpawnRotationCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SpawnRotationBeatmapEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatmapEventData);
}
 void ::GlobalNamespace::BeatmapObjectSpawnController::StopSpawning()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController>::get(),
                            "StopSpawning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Vector2 ::GlobalNamespace::BeatmapObjectSpawnController::Get2DNoteOffset(int32_t noteLineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController>::get(),
                            "Get2DNoteOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method, noteLineIndex, noteLineLayer);
}
 float_t ::GlobalNamespace::BeatmapObjectSpawnController::JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset(::GlobalNamespace::NoteLineLayer lineLayer, float_t distanceFromPlayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController>::get(),
                            "JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, lineLayer, distanceFromPlayer);
}
// Ctor Parameters []
 ::GlobalNamespace::BeatmapObjectSpawnController::BeatmapObjectSpawnController()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<BeatmapObjectSpawnController>())) {}
 void ::GlobalNamespace::BeatmapObjectSpawnController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapObjectSpawnController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
