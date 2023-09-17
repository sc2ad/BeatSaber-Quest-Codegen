#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__EventsTestGameplayManager_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentColorType_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBoxGroupList_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__IBeatToTimeConvertor_def.hpp"
#include "GlobalNamespace/zzzz__LightGroup_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager__MockBeatToTimeConvertor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager__MockBeatToTimeConvertor::*)(float_t)>(&::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager__MockBeatToTimeConvertor::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x226daf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager__MockBeatToTimeConvertor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager__MockBeatToTimeConvertor.ConvertBeatToTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager__MockBeatToTimeConvertor::*)(float_t)>(&::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager__MockBeatToTimeConvertor::ConvertBeatToTime)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x227078c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager__MockBeatToTimeConvertor>::get(),
                            "ConvertBeatToTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::GlobalNamespace::IBeatToTimeConvertor
constexpr  ::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager__MockBeatToTimeConvertor::operator ::GlobalNamespace::IBeatToTimeConvertor() const noexcept {
return ::GlobalNamespace::IBeatToTimeConvertor(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager__MockBeatToTimeConvertor::__set__bpm(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager__MockBeatToTimeConvertor::__get__bpm() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "bpm", ty: "float_t", modifiers: "", def_value: None }]
 ::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager__MockBeatToTimeConvertor::____GlobalNamespace__EventsTestGameplayManager__MockBeatToTimeConvertor(float_t bpm)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__EventsTestGameplayManager__MockBeatToTimeConvertor>(bpm))) {}
 void ::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager__MockBeatToTimeConvertor::_ctor(float_t bpm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager__MockBeatToTimeConvertor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bpm);
}
 float_t ::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager__MockBeatToTimeConvertor::ConvertBeatToTime(float_t beat)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager__MockBeatToTimeConvertor>::get(),
                            "ConvertBeatToTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, beat);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass18_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass18_0::*)()>(&::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass18_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2270118;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass18_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass18_0._AddEventsForLightGroup_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass18_0::*)(::GlobalNamespace::LightGroup)>(&::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass18_0::_AddEventsForLightGroup_b__0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x22707a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass18_0>::get(),
                            "<AddEventsForLightGroup>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroup>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass18_0::__set_lightGroupId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass18_0::__get_lightGroupId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass18_0::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass18_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass18_0>())) {}
 void ::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass18_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass18_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass18_0::_AddEventsForLightGroup_b__0(::GlobalNamespace::LightGroup x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass18_0>::get(),
                            "<AddEventsForLightGroup>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroup>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, x);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass19_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass19_0::*)()>(&::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass19_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2270120;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass19_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass19_0._AddInstantToggleEventsForLightGroup_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass19_0::*)(::GlobalNamespace::LightGroup)>(&::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass19_0::_AddInstantToggleEventsForLightGroup_b__0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x22707d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass19_0>::get(),
                            "<AddInstantToggleEventsForLightGroup>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroup>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass19_0::__set_lightGroupId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass19_0::__get_lightGroupId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass19_0::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass19_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass19_0>())) {}
 void ::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass19_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass19_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass19_0::_AddInstantToggleEventsForLightGroup_b__0(::GlobalNamespace::LightGroup x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass19_0>::get(),
                            "<AddInstantToggleEventsForLightGroup>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroup>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, x);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass20_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass20_0::*)()>(&::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass20_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2270128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass20_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass20_0._AddToggleEventsForLightGroup_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass20_0::*)(::GlobalNamespace::LightGroup)>(&::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass20_0::_AddToggleEventsForLightGroup_b__0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2270804;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass20_0>::get(),
                            "<AddToggleEventsForLightGroup>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroup>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass20_0::__set_lightGroupId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass20_0::__get_lightGroupId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass20_0::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass20_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass20_0>())) {}
 void ::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass20_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass20_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass20_0::_AddToggleEventsForLightGroup_b__0(::GlobalNamespace::LightGroup x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__EventsTestGameplayManager____c__DisplayClass20_0>::get(),
                            "<AddToggleEventsForLightGroup>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroup>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, x);
}
//  Writing Method size for method: ::GlobalNamespace::EventsTestGameplayManager.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EventsTestGameplayManager::*)()>(&::GlobalNamespace::EventsTestGameplayManager::Start)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x226d9dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EventsTestGameplayManager.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EventsTestGameplayManager::*)()>(&::GlobalNamespace::EventsTestGameplayManager::Update)> {
  constexpr static std::size_t size = 0x87c;
  constexpr static std::size_t addrs = 0x226db1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EventsTestGameplayManager.AddEventsForLightGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EventsTestGameplayManager::*)(int32_t)>(&::GlobalNamespace::EventsTestGameplayManager::AddEventsForLightGroup)> {
  constexpr static std::size_t size = 0x930;
  constexpr static std::size_t addrs = 0x226e398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager>::get(),
                            "AddEventsForLightGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EventsTestGameplayManager.AddInstantToggleEventsForLightGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EventsTestGameplayManager::*)(int32_t)>(&::GlobalNamespace::EventsTestGameplayManager::AddInstantToggleEventsForLightGroup)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x226f264;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager>::get(),
                            "AddInstantToggleEventsForLightGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EventsTestGameplayManager.AddToggleEventsForLightGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EventsTestGameplayManager::*)(int32_t, ::GlobalNamespace::EnvironmentColorType)>(&::GlobalNamespace::EventsTestGameplayManager::AddToggleEventsForLightGroup)> {
  constexpr static std::size_t size = 0x59c;
  constexpr static std::size_t addrs = 0x226ecc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager>::get(),
                            "AddToggleEventsForLightGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentColorType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EventsTestGameplayManager.AddTestBox
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EventsTestGameplayManager::*)()>(&::GlobalNamespace::EventsTestGameplayManager::AddTestBox)> {
  constexpr static std::size_t size = 0xa44;
  constexpr static std::size_t addrs = 0x226f6d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager>::get(),
                            "AddTestBox",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EventsTestGameplayManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EventsTestGameplayManager::*)()>(&::GlobalNamespace::EventsTestGameplayManager::_ctor)> {
  constexpr static std::size_t size = 0x65c;
  constexpr static std::size_t addrs = 0x2270130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::EventsTestGameplayManager::__set__moveTime(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::EventsTestGameplayManager::__get__moveTime() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EventsTestGameplayManager::__set__spawnTestBox(bool value)  {
::cordl_internals::setInstanceField<bool, 0x19>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::EventsTestGameplayManager::__get__spawnTestBox() const {
return ::cordl_internals::getInstanceField<bool, 0x19>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EventsTestGameplayManager::__set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapCallbacksController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BeatmapCallbacksController>(value));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController ::GlobalNamespace::EventsTestGameplayManager::__get__beatmapCallbacksController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCallbacksController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EventsTestGameplayManager::__set__beatmapData(::GlobalNamespace::BeatmapData value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapData, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BeatmapData>(value));
}
constexpr ::GlobalNamespace::BeatmapData ::GlobalNamespace::EventsTestGameplayManager::__get__beatmapData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapData, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EventsTestGameplayManager::__set__audioTimeSource(::GlobalNamespace::IAudioTimeSource value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IAudioTimeSource, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IAudioTimeSource>(value));
}
constexpr ::GlobalNamespace::IAudioTimeSource ::GlobalNamespace::EventsTestGameplayManager::__get__audioTimeSource() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IAudioTimeSource, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EventsTestGameplayManager::__set__basicBeatmapEventType(::GlobalNamespace::BasicBeatmapEventType value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BasicBeatmapEventType>(value));
}
constexpr ::GlobalNamespace::BasicBeatmapEventType ::GlobalNamespace::EventsTestGameplayManager::__get__basicBeatmapEventType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EventsTestGameplayManager::__set__floatValue(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::EventsTestGameplayManager::__get__floatValue() const {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EventsTestGameplayManager::__set__beatmapEventDataBoxGroupLists(::ArrayW<::GlobalNamespace::BeatmapEventDataBoxGroupList> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::BeatmapEventDataBoxGroupList>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::BeatmapEventDataBoxGroupList>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapEventDataBoxGroupList> ::GlobalNamespace::EventsTestGameplayManager::__get__beatmapEventDataBoxGroupLists() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::BeatmapEventDataBoxGroupList>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EventsTestGameplayManager::__set_groupState(::ArrayW<bool> value)  {
::cordl_internals::setInstanceField<::ArrayW<bool>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<bool>>(value));
}
constexpr ::ArrayW<bool> ::GlobalNamespace::EventsTestGameplayManager::__get_groupState() const {
return ::cordl_internals::getInstanceField<::ArrayW<bool>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EventsTestGameplayManager::__set__beatmapEventTypeBindings(::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode,::GlobalNamespace::BasicBeatmapEventType> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode,::GlobalNamespace::BasicBeatmapEventType>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode,::GlobalNamespace::BasicBeatmapEventType>>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode,::GlobalNamespace::BasicBeatmapEventType> ::GlobalNamespace::EventsTestGameplayManager::__get__beatmapEventTypeBindings() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode,::GlobalNamespace::BasicBeatmapEventType>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EventsTestGameplayManager::__set__intBindings(::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode,int32_t> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode,int32_t>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode,int32_t>>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode,int32_t> ::GlobalNamespace::EventsTestGameplayManager::__get__intBindings() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode,int32_t>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EventsTestGameplayManager::__set__beatmapValuesBindings(::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode,int32_t> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode,int32_t>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode,int32_t>>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode,int32_t> ::GlobalNamespace::EventsTestGameplayManager::__get__beatmapValuesBindings() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode,int32_t>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EventsTestGameplayManager::__set__floatValuesBindings(::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode,float_t> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode,float_t>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode,float_t>>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode,float_t> ::GlobalNamespace::EventsTestGameplayManager::__get__floatValuesBindings() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::UnityEngine::KeyCode,float_t>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EventsTestGameplayManager::__set__rotatingLasers(bool value)  {
::cordl_internals::setInstanceField<bool, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::EventsTestGameplayManager::__get__rotatingLasers() const {
return ::cordl_internals::getInstanceField<bool, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::EventsTestGameplayManager::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::EventsTestGameplayManager::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::EventsTestGameplayManager::AddEventsForLightGroup(int32_t lightGroupId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager>::get(),
                            "AddEventsForLightGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, lightGroupId);
}
 void ::GlobalNamespace::EventsTestGameplayManager::AddInstantToggleEventsForLightGroup(int32_t lightGroupId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager>::get(),
                            "AddInstantToggleEventsForLightGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, lightGroupId);
}
 void ::GlobalNamespace::EventsTestGameplayManager::AddToggleEventsForLightGroup(int32_t lightGroupId, ::GlobalNamespace::EnvironmentColorType color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager>::get(),
                            "AddToggleEventsForLightGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentColorType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, lightGroupId, color);
}
 void ::GlobalNamespace::EventsTestGameplayManager::AddTestBox()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager>::get(),
                            "AddTestBox",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::EventsTestGameplayManager::EventsTestGameplayManager()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<EventsTestGameplayManager>())) {}
 void ::GlobalNamespace::EventsTestGameplayManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EventsTestGameplayManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
