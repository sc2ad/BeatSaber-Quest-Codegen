#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerEnvironmentResizeController_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLight_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnCenter_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerCenterResizeController_def.hpp"
#include "System/zzzz__Action_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeType::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeType  GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeType::None{0};
constexpr GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeType  GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeType::Position{1};
constexpr GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeType  GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeType::Length{2};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData.get_resizeType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeType (GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData::*)()>(&GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData::get_resizeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f7778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData>::get(),
                            "get_resizeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData.get_offset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData::*)()>(&GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData::get_offset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f7780;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData>::get(),
                            "get_offset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData.get_lights
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<GlobalNamespace::TubeBloomPrePassLight> (GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData::*)()>(&GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData::get_lights)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f7788;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData>::get(),
                            "get_lights",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData.get_otherTransforms
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::Transform> (GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData::*)()>(&GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData::get_otherTransforms)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f7790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData>::get(),
                            "get_otherTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData::*)()>(&GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f7798;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData::__set__resizeType(GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeType GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData::__get__resizeType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData::__set__offset(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData::__get__offset() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData::__set__lights(::ArrayW<GlobalNamespace::TubeBloomPrePassLight> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::TubeBloomPrePassLight>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::TubeBloomPrePassLight>>(value));
}
constexpr ::ArrayW<GlobalNamespace::TubeBloomPrePassLight> GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData::__get__lights() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::TubeBloomPrePassLight>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData::__set__otherTransforms(::ArrayW<UnityEngine::Transform> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::Transform>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::Transform>>(value));
}
constexpr ::ArrayW<UnityEngine::Transform> GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData::__get__otherTransforms() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::Transform>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeType GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData::get_resizeType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData>::get(),
                            "get_resizeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeType, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData::get_offset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData>::get(),
                            "get_offset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<GlobalNamespace::TubeBloomPrePassLight> GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData::get_lights()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData>::get(),
                            "get_lights",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<GlobalNamespace::TubeBloomPrePassLight>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<UnityEngine::Transform> GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData::get_otherTransforms()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData>::get(),
                            "get_otherTransforms",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::Transform>, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData>())) {}
 void GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::MultiplayerEnvironmentResizeController.get_isResizingFinished
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerEnvironmentResizeController::*)()>(&GlobalNamespace::MultiplayerEnvironmentResizeController::get_isResizingFinished)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f7174;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerEnvironmentResizeController>::get(),
                            "get_isResizingFinished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerEnvironmentResizeController.add_resizingDidFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerEnvironmentResizeController::*)(System::Action)>(&GlobalNamespace::MultiplayerEnvironmentResizeController::add_resizingDidFinishEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20f717c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerEnvironmentResizeController>::get(),
                            "add_resizingDidFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerEnvironmentResizeController.remove_resizingDidFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerEnvironmentResizeController::*)(System::Action)>(&GlobalNamespace::MultiplayerEnvironmentResizeController::remove_resizingDidFinishEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x20f7218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerEnvironmentResizeController>::get(),
                            "remove_resizingDidFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerEnvironmentResizeController.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerEnvironmentResizeController::*)()>(&GlobalNamespace::MultiplayerEnvironmentResizeController::Start)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x20f72b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerEnvironmentResizeController>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerEnvironmentResizeController.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerEnvironmentResizeController::*)()>(&GlobalNamespace::MultiplayerEnvironmentResizeController::OnDestroy)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x20f7420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerEnvironmentResizeController>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerEnvironmentResizeController.HandleEdgeDistanceFromCenterWasCalculated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerEnvironmentResizeController::*)(float_t)>(&GlobalNamespace::MultiplayerEnvironmentResizeController::HandleEdgeDistanceFromCenterWasCalculated)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x20f73f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerEnvironmentResizeController>::get(),
                            "HandleEdgeDistanceFromCenterWasCalculated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerEnvironmentResizeController.HandleSpawnCenterDistanceWasFound
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerEnvironmentResizeController::*)(float_t)>(&GlobalNamespace::MultiplayerEnvironmentResizeController::HandleSpawnCenterDistanceWasFound)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x20f7408;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerEnvironmentResizeController>::get(),
                            "HandleSpawnCenterDistanceWasFound",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerEnvironmentResizeController.TryResize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerEnvironmentResizeController::*)()>(&GlobalNamespace::MultiplayerEnvironmentResizeController::TryResize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x20f7570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerEnvironmentResizeController>::get(),
                            "TryResize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerEnvironmentResizeController.Resize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerEnvironmentResizeController::*)()>(&GlobalNamespace::MultiplayerEnvironmentResizeController::Resize)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x20f7588;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerEnvironmentResizeController>::get(),
                            "Resize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerEnvironmentResizeController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerEnvironmentResizeController::*)()>(&GlobalNamespace::MultiplayerEnvironmentResizeController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f7770;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerEnvironmentResizeController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerEnvironmentResizeController::__set__platformEnd(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform GlobalNamespace::MultiplayerEnvironmentResizeController::__get__platformEnd() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerEnvironmentResizeController::__set__resizeData(::ArrayW<GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData>>(value));
}
constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData> GlobalNamespace::MultiplayerEnvironmentResizeController::__get__resizeData() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__MultiplayerEnvironmentResizeController__ResizeData>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerEnvironmentResizeController::__set__centerResizeController(GlobalNamespace::MultiplayerCenterResizeController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerCenterResizeController, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerCenterResizeController>(value));
}
constexpr GlobalNamespace::MultiplayerCenterResizeController GlobalNamespace::MultiplayerEnvironmentResizeController::__get__centerResizeController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerCenterResizeController, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerEnvironmentResizeController::__set__beatmapObjectSpawnCenter(GlobalNamespace::BeatmapObjectSpawnCenter value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapObjectSpawnCenter, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapObjectSpawnCenter>(value));
}
constexpr GlobalNamespace::BeatmapObjectSpawnCenter GlobalNamespace::MultiplayerEnvironmentResizeController::__get__beatmapObjectSpawnCenter() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapObjectSpawnCenter, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerEnvironmentResizeController::__set_resizingDidFinishEvent(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action GlobalNamespace::MultiplayerEnvironmentResizeController::__get_resizingDidFinishEvent() const {
return ::cordl_internals::getInstanceField<System::Action, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerEnvironmentResizeController::__set__isResizingFinished(bool value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::MultiplayerEnvironmentResizeController::__get__isResizingFinished() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerEnvironmentResizeController::__set__edgeDistanceFromCenterFound(bool value)  {
::cordl_internals::setInstanceField<bool, 0x41>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::MultiplayerEnvironmentResizeController::__get__edgeDistanceFromCenterFound() const {
return ::cordl_internals::getInstanceField<bool, 0x41>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerEnvironmentResizeController::__set__spawnCenterDistanceFound(bool value)  {
::cordl_internals::setInstanceField<bool, 0x42>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::MultiplayerEnvironmentResizeController::__get__spawnCenterDistanceFound() const {
return ::cordl_internals::getInstanceField<bool, 0x42>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool GlobalNamespace::MultiplayerEnvironmentResizeController::get_isResizingFinished()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerEnvironmentResizeController>::get(),
                            "get_isResizingFinished",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerEnvironmentResizeController::add_resizingDidFinishEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerEnvironmentResizeController>::get(),
                            "add_resizingDidFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::MultiplayerEnvironmentResizeController::remove_resizingDidFinishEvent(System::Action value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerEnvironmentResizeController>::get(),
                            "remove_resizingDidFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::MultiplayerEnvironmentResizeController::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerEnvironmentResizeController>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerEnvironmentResizeController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerEnvironmentResizeController>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerEnvironmentResizeController::HandleEdgeDistanceFromCenterWasCalculated(float_t edgeDistanceFromCenter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerEnvironmentResizeController>::get(),
                            "HandleEdgeDistanceFromCenterWasCalculated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, edgeDistanceFromCenter);
}
 void GlobalNamespace::MultiplayerEnvironmentResizeController::HandleSpawnCenterDistanceWasFound(float_t distance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerEnvironmentResizeController>::get(),
                            "HandleSpawnCenterDistanceWasFound",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, distance);
}
 void GlobalNamespace::MultiplayerEnvironmentResizeController::TryResize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerEnvironmentResizeController>::get(),
                            "TryResize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerEnvironmentResizeController::Resize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerEnvironmentResizeController>::get(),
                            "Resize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::MultiplayerEnvironmentResizeController::MultiplayerEnvironmentResizeController()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<MultiplayerEnvironmentResizeController>())) {}
 void GlobalNamespace::MultiplayerEnvironmentResizeController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerEnvironmentResizeController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
